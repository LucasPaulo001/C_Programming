#include <stdio.h>
#include <conio.h>

/*138. Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos.
*/

void main(){
    int num, soma=0, cont=0, aux, res=10;
    printf("Informe um numero: ");
    scanf("%d", &num);
    aux = num;
    while(aux>0){
        //num = num/10;
        aux = aux%res;
        //soma = soma + aux;
        res=res*10;
        printf("%d ", res);
    }
    
    
    
}