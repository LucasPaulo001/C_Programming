#include <stdio.h>
#include <conio.h>

/*147. Escreva um programa que imprima todos os palíndromos existentes no intervalo 
[1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a 
direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002, 
1221, 8888.*/

void main(){
    
    int k, unidade, dezena, centena, u_milhar;
    for(k=1000; k<=9999; k++){ 
        u_milhar = k/1000;
        centena = k%1000/100;
        dezena = k%1000%100/10;
        unidade = k%10;
        if(u_milhar == unidade && centena == dezena){
            printf("%3d ", k);
        }
    }
    geth();
}