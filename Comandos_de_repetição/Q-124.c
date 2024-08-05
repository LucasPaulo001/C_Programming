#include <stdio.h>
#include <conio.h>

/*124. Escreva um programa que imprima os seis primeiros pares de números primos 
gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a 
diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).*/

void main(){
    int k, i, num=2, n=1;
    while(n<6){
        for(k=1; k<=2; k++){
            int cont=0;
            for(i=1; i<=num; k++){
                if(num%i==0){
                    cont++;//1 2 1 3
                }
            }
            if(num==2){
                printf("%d", num);
                n--;
            }
        }
        num++;
    }

}