#include <stdio.h>
#include <conio.h>

/*252. Escreva um subprograma recursivo que receba como parâmetros de entrada dois 
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].
*/

int soma(int n1, int n2){//1 3 = 6 
    if(n1 > n2){
        return 0;
    }
    return n1 + soma(n1+1, n2);
}


void main(){
    int n1, n2;
    printf("Informe dois numeros interios: ");
    scanf("%d%d", &n1, &n2);
    int res = soma(n1, n2);
    printf("Soma do intervalo [%d, %d]: %d ", n1, n2, res);

    getch();
}