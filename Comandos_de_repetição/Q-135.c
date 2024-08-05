#include <stdio.h>
#include <conio.h>
const int quantidade = 5;
/*135. Escreva um programa que simule uma votação. O programa deve computar o voto de 
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos 
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções 
de voto são:
[1] João Borracheiro
[2] Zé do caminhão
[3] Maria da bodega
[4] Ana
*/

void main(){
    int k, voto, quant_votos_joao=0, quant_votos_ze=0, quant_votos_maria=0, quant_votos_ana=0, quant_votos_nulos=0;
    printf("[1] Joao Borracheiro\n[2] Ze do caminhao\n[3] Maria da bodega\n[4] Ana\n");
    for(k=1; k<=quantidade; k++){
        printf("informe o voto: ");
        scanf("%d", &voto);
        if(voto==1){
            quant_votos_joao++;
        }
        if(voto==2){
            quant_votos_ze++;
        }
        if(voto==3){
            quant_votos_maria++;
        }
        if(voto==4){
            quant_votos_ana++;
        }
        if(voto==0){
            quant_votos_nulos++;
        }
    }

    float percentual_joao = (quant_votos_joao / (float)quantidade) * 100; 
    float percentual_ze = (quant_votos_ze / (float)quantidade) * 100;
    float percentual_maria = (quant_votos_maria / (float)quantidade) * 100;
    float percentual_ana = (quant_votos_ana / (float)quantidade) * 100;
    float percentual_nulos = (quant_votos_nulos / (float)quantidade) * 100;
    printf("A quantidade e o percentual de votos de Joao Borracheiro: %d votos, %.2f%%\n", quant_votos_joao, percentual_joao);
    printf("A quantidade e o percentual de votos de Ze do caminhao: %d votos, %.2f%%\n", quant_votos_ze, percentual_ze);
    printf("A quantidade e o percentual de votos de Maria da Bodega: %d votos, %.2f%%\n", quant_votos_maria, percentual_maria);
    printf("A quantidade e o percentual de votos de Ana: %d votos, %.2f%%\n", quant_votos_ana, percentual_ana);
    printf("A quantidade e o percentual de votos Nulos: %d votos, %.2f%%\n", quant_votos_nulos, percentual_nulos);

    getch();

}