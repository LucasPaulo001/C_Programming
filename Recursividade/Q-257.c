#include <stdio.h>
#include <conio.h>

/*257. Escreva um subprograma recursivo que receba como entrada dois números inteiros 
correspondentes aos valores da base e do expoente e calcule o valor da potenciação. 
Você pode supor que o expoente é um valor não negativo e que o caso 00 é tratado 
no programa principal (ou seja, não precisa ser tratado dentro do subprograma).
*/

int potencia(int base, int expoente){
    if(expoente == 1){
        return base;
    }
    else{
        return base * potencia(base, expoente-1);
    }
}

void main(){
    int base, expoente;
    printf("Informe o valor da base e do expoente: ");
    scanf("%d%d", &base, &expoente);
    if(expoente == 0){
        printf("1");
    }
    int res = potencia(base, expoente);
    printf("%d elevado a %d: %d", base, expoente, res);

    getch();
}