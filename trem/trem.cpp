#include "trem.h"
#include <QtCore>
#define ANDANDO 0
#define PARADO 1
#define REGIAO_CRITICA 2

static QSemaphore mutex1(0); //iniciando com 0 -  trem2 inciara com um UP no mutex
static QSemaphore mutex2(0); //iniciando com 0 -  trem3 inciara com um UP no mutex
static QSemaphore mutex3(1);
static QSemaphore mutex4(1);
static QSemaphore mutex5(1);
static QSemaphore mutex6(1);
static QSemaphore mutex7(1);

static QSemaphore sem_T1_RC13(1); //2
static QSemaphore sem_T2_RC2541(4); //4
static QSemaphore sem_T3_RC62(2); // 2
static QSemaphore sem_T4_RC347(3);
static QSemaphore sem_T5_RC756(2);

//monitorar estado do trem
static int trem_estado[5];
//delete nos semaforos
void Trem::deleteSemaphore(){
    mutex1.~QSemaphore();
    mutex2.~QSemaphore();
    mutex3.~QSemaphore();
    mutex4.~QSemaphore();
    mutex5.~QSemaphore();
    mutex6.~QSemaphore();
    mutex7.~QSemaphore();
    sem_T1_RC13.~QSemaphore();
    sem_T2_RC2541.~QSemaphore();
    sem_T3_RC62.~QSemaphore();
    sem_T4_RC347.~QSemaphore();
    sem_T5_RC756.~QSemaphore();
}
//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    trem_estado[0] = ANDANDO;
    trem_estado[1] = ANDANDO;
    trem_estado[2] = ANDANDO;
    trem_estado[3] = REGIAO_CRITICA;
    trem_estado[4] = REGIAO_CRITICA;


    while(true){
        switch(ID){
        case 1:     //Trem 1
            if(y == 30 && x <330){

                //verificando regiao critica 1
                if(x == 310){
                    trem_estado[0] = PARADO;
                    //rc 1
                    mutex1.acquire(1);
                    //rc 3
                    mutex3.acquire(1);
                    //sem trem1 - solicitando entrada rc 1 3
                    sem_T1_RC13.acquire(2);
                    //sem trem2 - travando rc 1
                    sem_T2_RC2541.acquire(1);
                    //sem trem4 - travando rc 3
                    sem_T4_RC347.acquire(1);
                    trem_estado[0] = REGIAO_CRITICA;
                }
                x+=10;
            }
            else if (x == 330 && y < 150){

                y+=10;
            }
            else if (x > 60 && y == 150){
                //sem trem2 - liberando rc 1
                if(x == 310){
                   mutex1.release(1);
                   //sem trem2 - liberando entrada rc 1
                   sem_T2_RC2541.release(1);
                   //sem trem1 - liberando entrada rc 1
                   sem_T1_RC13.release(1);
                }
                //liberando regiao critica 1
                if(x == 170){

                    //sem trem1 - liberando entrada rc 3
                    sem_T1_RC13.release(1);
                    //sem trem4 - liberando rc 3
                    sem_T4_RC347.release(1);
                    //rc 3
                    mutex3.release(1);
                    trem_estado[0] = ANDANDO; 
                }
                x-=10;
            }
            else{
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 30 && x <600){
                //liberado regiao critica 1
                if(x == 340){

                    //sem trem1 - liberado entrada rc 1
                    sem_T1_RC13.release(1);
                    //rc 1
                    mutex1.release(1);
                    //sem trem2 - liberado entrada rc 2
                    if(trem_estado[1] == REGIAO_CRITICA){
                        sem_T2_RC2541.release(1);
                    }
                    trem_estado[1] = ANDANDO;
                }
                //verificando regiao critica 2 4 1
                else if(x == 580){
                    //std::cout << "X = " << x << " \n";
                    trem_estado[1] = PARADO;
                    //rc 2
                    mutex2.acquire(1);
                    //rc 5
                    mutex5.acquire(1);
                    //rc 4
                    mutex4.acquire(1);
                    //rc 1
                    mutex1.acquire(1);
                    //sem trem2 - travando rc 2 5 4 1
                    sem_T2_RC2541.acquire(4);
                    //sem trem3 - travando rc 2
                    sem_T3_RC62.acquire(1);
                    //sem trem5 - travando rc 5
                    sem_T5_RC756.acquire(1);
                    //sem trem4 - travando rc 4
                    sem_T4_RC347.acquire(1);
                    //sem trem1 - travando rc 1
                    sem_T1_RC13.acquire(1);

                    trem_estado[1] = REGIAO_CRITICA;

                }
                x+=10;
            }
            else if (x == 600 && y < 150){

                y+=10;
            }
            else if (x > 330 && y == 150){
                if(x == 590){
                    //sem trem2 - liberando rc 2
                    sem_T2_RC2541.release(1);
                    //sem trem3 - liberando rc 2
                    sem_T3_RC62.release(1);
                    mutex2.release(1);
                }
                if(x == 450){
                    //sem trem2 - liberando rc 5
                    sem_T2_RC2541.release(1);
                    //sem trem5 - liberando rc 5
                    sem_T5_RC756.release(1);
                    mutex5.release(1);
                }
                x-=10;
            }
            else{
                if(y == 140){
                    //sem trem2 - liberando rc 4
                    sem_T2_RC2541.release(1);
                    //sem trem4 - liberando rc 4
                    sem_T4_RC347.release(1);
                    mutex4.release(1);
                }
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 3: //Trem 3
            if (y == 30 && x < 870){
                //liberando regiao critica 2
                if(x == 610){

                    //sem trem3 - liberando entrada rc 2
                    if(trem_estado[2] == REGIAO_CRITICA){
                        //std::cout << "Liberando " << sem_T3_RC62.available() << " \n";
                        sem_T3_RC62.release(1);
                        //std::cout << "Liberei " << sem_T3_RC62.available() << " \n";
                    }
                    //sem trem2 - liberando entrada rc 2
                    if(trem_estado[2] == REGIAO_CRITICA){
                        sem_T2_RC2541.release(1);
                    }
                    mutex2.release(1);
                    trem_estado[2] = ANDANDO;
                }
                x+=10;
            }
            else if (x == 870 && y < 150){
                y+=10;
            }
            else if (x > 600 && y == 150){
                //verificando regiao critica 2
                if(x == 750){
                    trem_estado[2] = PARADO;
                    //rc 2
                    mutex2.acquire(1);
                    //rc 6
                    mutex6.acquire(1);
                    //sem trem3 - solicitando entrada rc 6 2
                    sem_T3_RC62.acquire(2);
                    //sem trem6 - solicitando entrada rc 6
                    sem_T5_RC756.acquire(1);
                    //sem trem2 - solicitando entrada rc 2
                    sem_T2_RC2541.acquire(1);
                    trem_estado[2] = REGIAO_CRITICA;
                }
                x-=10;
            }
            else{
                //sem trem3 - liberando entrada rc 6
                if(y == 140){
                    //sem trem3 - liberando entrada rc 6
                    sem_T3_RC62.release(1);
                    //sem trem5 - liberando entrada rc 6
                    sem_T5_RC756.release(1);
                    //rc 6
                    mutex6.release(1);
                }
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 4:     //Trem 4
            if (y == 150 && x <460){
                //trem incia em uma regiao critica 3 4 - realiza lock na primeira exec por segurança
                if(x == 190 && trem_estado[3] != PARADO){
                    //rc 3
                    mutex3.acquire(1);
                    //rc 4
                    mutex4.acquire(1);
                    //rc 7
                    mutex7.acquire(1);
                    //sem trem 4 - verificando entrada rc 3 4
                    sem_T4_RC347.acquire(3);
                    //sem trem 1 - travando entrada rc 3
                    sem_T1_RC13.acquire(1);
                    //sem trem 2 - travando entrada rc 4
                    sem_T2_RC2541.acquire(1);
                    //sem trem 5 - travando entrada rc 7
                    sem_T5_RC756.acquire(1);
                    trem_estado[3] = REGIAO_CRITICA;

                }
                if(x == 200){
                    //atualizar status - para que o if anterior nao execute entra na primeira posicao com
                    //status = parado
                    trem_estado[3] = REGIAO_CRITICA;
                }

                if(x == 350){
                    //sem trem4 - liberando entrada rc 3
                    sem_T4_RC347.release(1);
                    //sem trem1 - liberando entrada rc 3
                    sem_T1_RC13.release(1);
                    mutex3.release(1);
                    mutex1.release(1);
                }
                x+=10;
            }
            else if (x == 460 && y < 290){
                if(y == 160){
                    //sem trem4 - liberando entrada rc 4
                    sem_T4_RC347.release(1);
                    //sem trem2 - liberando entrada rc 4
                    sem_T2_RC2541.release(1);
                    mutex4.release(1);
                }
                y+=10;
            }
            else if (x > 190 && y == 290){
                if(x == 450){
                    //sem trem4 - liberando entrada rc 7
                    sem_T4_RC347.release(1);
                    //sem trem5 - liberando entrada rc 7
                    sem_T5_RC756.release(1);
                    //rc 7
                    mutex7.release(1);
                }
                x-=10;
            }
            else{
                if(y == 170){
                    trem_estado[3] = PARADO;
                    mutex3.acquire(1);
                    mutex4.acquire(1);
                    mutex7.acquire(1);
                    //sem trem 4 - verificando entrada rc 3 4
                    sem_T4_RC347.acquire(3);
                    //sem trem 1 - travando entrada rc 3
                    sem_T1_RC13.acquire(1);
                    //sem trem 2 - travando entrada rc 4
                    sem_T2_RC2541.acquire(1);
                    //sem trem 5 - travando entrada rc 7
                    sem_T5_RC756.acquire(1);
                }
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        case 5:     //Trem 5
            if (y == 150 && x <730){
                //trem incia em uma regiao critica 5 6 - realiza lock na primeira exec por segurança
                if(x == 490 && trem_estado[4] != PARADO){
                    //rc 5
                    mutex5.acquire(1);
                    //rc 6
                    mutex6.acquire(1);
                    //mutex7.acquire(1);
                    //sem trem 5 - verificando entrada rc 5
                    sem_T5_RC756.acquire(2);
                    //sem trem 2 - verificando entrada rc 5
                    sem_T2_RC2541.acquire(1);
                    //sem trem 3 - verificando entrada rc 6
                    sem_T3_RC62.acquire(1);
                    trem_estado[4] = REGIAO_CRITICA;
                }
                if(x == 470){
                    //sem trem 4 - liberando entrada rc 7
                    sem_T4_RC347.release(1);
                    //rc
                    mutex7.release(1);
                }

                if(x == 500){
                  trem_estado[4] = REGIAO_CRITICA;
                }
                if(x == 610){
                    //sem trem5 - liberando entrada rc 5
                    sem_T5_RC756.release(1);
                    //sem trem2 - liberando entrada rc 5
                    sem_T2_RC2541.release(1);
                    //rc 5
                    mutex5.release(1);
                }
                x+=10;
            }
            else if (x == 730 && y < 290){
                if(y == 160){
                    //sem trem5 - liberando entrada rc 5
                    sem_T5_RC756.release(1);
                    //sem trem 3 - liberando entrada rc 6
                    sem_T3_RC62.release(1);
                    //rc 6
                    mutex6.release(1);
                }
                y+=10;
            }
            else if (x > 460 && y == 290){
                if(x == 480){
                    trem_estado[4] = PARADO;
                    //rc 5
                    mutex5.acquire(1);
                    //rc 6
                    mutex6.acquire(1);
                    //rc 7
                    mutex7.acquire(1);
                    //sem trem 5 - verificando entrada rc 7 5 6
                    sem_T5_RC756.acquire(2);
                    //sem trem 4 - travando entrada rc 7
                    sem_T4_RC347.acquire(1);
                    //sem trem 2 - travando entrada rc 5
                    sem_T2_RC2541.acquire(1);
                    //sem trem 3 - travando entrada rc 6
                    sem_T3_RC62.acquire(1);
                }
                x-=10;
            }
            else{
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(velocidade);
    }
}

void Trem::setVelocidade(int velocidade){
    this->velocidade = velocidade;
}

