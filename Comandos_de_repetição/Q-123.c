#include <stdio.h>
#include <conio.h>

/*123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros números primos maiores ou iguais a M.*/

void main(){
    int m, n, k, num=2;//Variável responsável por armazenar os números primos
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &m, &n);
    while (n>0){
       //contador responsável por armazenar os números de "num" divisíveis por "k"
       int cont=0;

       //bloco de repetição responsável por verificar os números menores ou igual a "num"
       for(k=1; k<=num; k++){

            //condição que verifica se os números menores ou iguais a num são divisiveis por ele
            if(num%k==0){
                cont++;
            }
        }
        //quando existirem apenas dois números divisiveis por num, passarão por essa condição
        if(cont==2){
            if(num>=m){
                printf("%d ", num);
                n--;
            }
        }
        num++;
    }
    
    getch();
}