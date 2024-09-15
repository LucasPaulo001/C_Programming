#include <stdio.h>
#include <conio.h>

/*255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a 
razão de uma progressão aritmética e um número inteiro positivo N e calcule o 
enésimo termo da progressão. 
2 2 5
2 + 2 = 4
4 + 2 = 6
6 + 2 = 8
8 + 2 = 10
10 + 2 = 12
*/

int progressao(int termo_inicial, int razao, int n){
    if(n == 1){
        return termo_inicial + razao;
    }
    else{
        return termo_inicial + progressao(termo_inicial, razao, n-1);
    }
}

void main(){
    int termo_ini, razao, n;
    printf("Informe o termo inicial, a razao e um numero inteiro: ");
    scanf("%d%d%d", &termo_ini, &razao, &n);
    int n_esimo = progressao(termo_ini, razao, n);
    printf("O %do termo da progressao eh: %d", n, n_esimo);

    getch();
}