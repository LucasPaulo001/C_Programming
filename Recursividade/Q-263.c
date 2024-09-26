#include <stdio.h>
#include <conio.h>

/*263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função 
mod. */

int resto(int x, int y){
    if(x == 0 || x == y){
        return 0;
    }
    else{
        if(x > y){
            return resto(x-y, y);
        }
        else{
            return 1 + resto(x-1, y);
        }
    }
        
}
void main(){
    int x, y;
    printf("Informe dois numeros interios: ");
    scanf("%d%d", &x, &y);
    int res = resto(x, y);
    printf("%d", res);

    getch();
}