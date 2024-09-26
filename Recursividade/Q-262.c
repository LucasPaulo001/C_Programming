#include <stdio.h>
#include <conio.h>

/*262. Escreva um subprograma recursivo que receba como entrada dois números inteiros x e y e calcule o quociente (a parte inteira) da divisão de x por y. Para isso, não deve ser usada a função div. */

int quociente(int x, int y){
    if(x < y){
        return 0;
    }
    if(x == y){
        return 1;
    }
    else{
        return 1 + quociente(x-y, y);
    }
}

void main(){
    int x, y;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    int res = quociente(x, y);
    printf("%d", res);

    getch();
}



