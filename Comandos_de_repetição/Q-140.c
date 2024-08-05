#include <stdio.h>
#include <conio.h>

/*140. Escreva um programa que leia vários números inteiros e calcule a média dos 
números pares e a média dos números ímpares. O processamento deverá ser 
encerrado quando for lido o valor 0, que não deverá ser processado.*/

void main(){
    int num, cont_par=0, cont_impar=0, media_par, media_impar, soma_par=0, soma_impar=0; 
    printf("Informe varios numeros inteiros: ");
    while(num!=0){
        scanf("%d", &num);
        if(num%2==0){
            cont_par++;
            soma_par = soma_par + num;
        }
        else{
            cont_impar++;
            soma_impar = soma_impar + num;
        }
    }
    media_par = soma_par/cont_par;
    media_impar = soma_impar/cont_impar;
    printf("Media aritmetica dos numeros pares: %d\n", media_par);
    printf("Media aritmetica dos numeros impares: %d", media_impar);

    getch();
}