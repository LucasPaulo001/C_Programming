#include <stdio.h>
#include <conio.h>
const int sal_vendedor = 1100;
const int quantidade=3;

/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos empatados).*/

void main(){
    int valor_obj[quantidade], quanti_vendas[quantidade], k, soma_vendas=0, maior_venda=0;
    float valor_total, valor_total_vendas=0.0;
    //recebendo valor de cada objeto
    for(k=0; k<quantidade; k++){
        printf("Informe o preco do produto %d: ", k+1);
        scanf("%d", &valor_obj[k]);
    }
    //recebendo a quantidade de cada objeto
    for(k=0; k<quantidade; k++){
        printf("Informe a quantidade do produto %d: ", k+1);
        scanf("%d", &quanti_vendas[k]);
        //guardando o maior valor na variável maior_venda
        if(quanti_vendas[k] > maior_venda){
            maior_venda = quanti_vendas[k];
        }
        //somando os valores
        soma_vendas=soma_vendas+quanti_vendas[k];
    }
    printf("Quantidade de produtos vendidos: %d\n", soma_vendas);
    for(k=0; k<quantidade; k++){
        //calculando o valor total de cada venda
        valor_total=valor_obj[k]*quanti_vendas[k];
        //calculando o valor total de todas as vendas
        valor_total_vendas=valor_total_vendas+valor_total;
        printf("Valor unitario/total do objeto %d: %dR$/%.2fR$\n", k+1, valor_obj[k], valor_total);
    }
    //informando a comissão do vendedor e o valor total de todas as vendas
    float comissao = sal_vendedor + (valor_total_vendas*0.05);
    printf("Valor total das vendas: %.2fR$\n", valor_total_vendas);
    printf("Valor da comissao paga ao vendedor: %.2fR$\n", comissao);

    //percorrendo o vetor para descobrir o produto mais vendido
    for(k=0; k<quantidade; k++){
        if(quanti_vendas[k] > maior_venda){
            maior_venda=quanti_vendas[k];
        }
    }
    //informando a posição do produto mais vendido e o seu valor
    for(k=0; k<quantidade; k++){
        if(quanti_vendas[k]==maior_venda){
            printf("Posicao: %d\nValor: %dR$", k+1, valor_obj[k]);
        }
    }
    getch();
}