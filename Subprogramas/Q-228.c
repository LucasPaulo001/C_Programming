#include <stdio.h>
#include <conio.h>

/*228. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a 
quantidade de quadrantes a que este ponto pertence. Esta verificação deve ser 
realizada através de um subprograma.*/

void quadrante(int x, int y){
    if(x>0 && y>0){
        printf("Quadrante 1");
    }
    else if(x<0 && y>0){
        printf("Quadrante 2");
    }
    else if(x<0 && y<0){
        printf("Quadrante 3");
    }
    else{
        printf("Quadrante 4");
    }
}

void main(){
    int x, y;
    printf("Informe as coordenadas x e y: ");
    scanf("%d%d", &x, &y);
    quadrante(x, y);

    getch();
}