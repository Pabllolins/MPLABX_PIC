
//CONFIGURA��O PARA PIC18F4550
//ULTILIZANDO UM CRISTAL OSCILADOR EXTERNO DE 4MHz

#ifndef SFR_PIC18F_H
#define SFR_PIC18F_H

#define _XTAL_FREQ 4000000 //DETERMINAA FREQUENCIA nesse caso para cristal de 4Mhz

#pragma config FOSC=HSPLL_HS //FREQUENCIA DE OSCILA��O EXTERNO
#pragma config PLLDIV=1 //OSCILARDOR DE ENTRADA 4MHZ SEM PRESCALE
#pragma config CPUDIV=OSC1_PLL2 //SEM PLL-OSC1 /OSC2 DIVIDIDO POR 1
#pragma config IESO=OFF // MUDAN�A OFF DE OSC. EXTERNO/ INTERNO
#pragma config FCMEN=OFF //OFF MONITORAMENTO DO SINAL DE CLOCK
#pragma config PWRT=ON //Aguarda um tempo depois de ligar para iniciar o programa
#pragma config BOR=OFF // BROWN OUT RESET
#pragma config BORV=3 // VOLTAGEM BOR 2,05V
#pragma config VREGEN=ON //ON REG DE TENSAO USB
#pragma config WDT=OFF // WATCH DOG TIMER desligado
#pragma config MCLRE=ON //MASTER CLEAR RESET ON PINO RE3
#pragma config XINST=OFF //INSTRU�OES EXTENDIDAS
#pragma config LVP=OFF //SINGLE-SUPLY ICSP
#pragma config PBADEN=OFF //CONVERSORES A/D DA PORTA B
        
#endif