#include <stdio.h>
#include <conio.h>

/*123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros números primos maiores ou iguais a M.*/

void main(){
    int m, n, k;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &m, &n);//m=2 n=10
    while(n>0){
        for(k=m; k<=n; k++){//percorrendo de m até n
            int cont=0;//contador responsável por contar os divisores com resto zero
            for(int i=1; i<=k; i++){//verificando se m é divisível por i
                if(k%i==0){
                    cont++;
                }
            }
            if(cont==2){
                printf("%d", k);
                n--;
            }
        }
    }
}