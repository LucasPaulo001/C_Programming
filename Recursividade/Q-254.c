#include <stdio.h>
#include <conio.h>

/*254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x e y e calcule o valor do produto de x por y. */

int produto(int x, int y){
    if(x == 0 || y == 0){
        return 0;
    }
    return x + produto(x, y-1);
}

void main(){
    int x, y;
    printf("Informe os valores de x e y respectivamente: ");
    scanf("%d%d", &x, &y);
    int mult = produto(x, y);
    printf("O produto de x por y: %d", mult);

    getch();
}