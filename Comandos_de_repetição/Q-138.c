#include <stdio.h>
#include <conio.h>

/*138. Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos.
*/

void main(){
    int num, aux, resto, soma=0;
    printf("Informe um numero: ");
    scanf("%d", &num);//15,6 => 6  1,5 => 5  0,1 => 1
    aux = num;
    resto = aux;
    while(aux>0){
        aux=aux/10;
        resto=resto%10;
        soma=soma+resto;
        printf("%d ", resto);
    }
    //printf("Soma dos algarismos: %d", soma);
    
    
    
}