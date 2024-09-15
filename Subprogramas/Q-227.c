#include <stdio.h>
#include <conio.h>

/*227. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12 anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos). Esta verificação deve ser realizada através de um subprograma.
*/

void verificacao(int n){
    if(n < 12){
        printf("Crianca");
    }
    else if(n < 17){
        printf("Adolescente");
    }
    else if(n < 59){
        printf("Adulta");
    }
    else{
        printf("Idosa");
    }
}

void main(){
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    verificacao(idade);

    getch();
}