#include <stdio.h>
#include <conio.h>

/*88. Escreva um programa que leia um único número entre 10000 e 99999 referente ao 
número de um deputado estadual e identifique o partido pelo qual ele está 
concorrendo. O número do partido pode ser identificado pelos dois primeiros 
algarismos do número do candidato. Por exemplo, um candidato com número 13457 
concorre pelo PT, que é o partido de número 13, enquanto que um candidato com 
número 45879 concorre pelo PSDB, que é o partido de número 45. Neste programa, 
considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45 
(PSDB) e 65(PCdoB). */

void main(){
    int num, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0;
    printf("Informe um numero entre 10.000 e 99.999: ");
    scanf("%d", &num);
    if(num/1000==13){
        printf("Concorrendo ao partido do PT");
    }else if(num/1000==14){
        printf("Concorrendo ao partido PTB");
    }else if(num/1000==15){
        printf("Concorrendo ao partido PMDB");
    }else if(num/1000==25){
        printf("Concorrendo ao partido DEM");
    }else if(num/1000==45){
        printf("Concorrendo ao partido PSDB");
    }else if(num/1000==65){
        printf("Concorrendo ao partido PCdoB");
    }

    getch();
}