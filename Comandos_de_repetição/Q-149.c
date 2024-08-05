#include <stdio.h>
#include <conio.h>

/*149. Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja adicionar um novo item ou fechar a conta. O programa deve considerar que o 
usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve 
mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo 
corresponde à soma do valor total de cada item digitado pelo usuário. O valor da 
conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.*/

void main(){
    char resp, nome_item[20];
    float valor_item, valor_aprazo, valor_avista;
    int quant_item;
    do{
        printf("Informe o nome do item: ");
        scanf(" %s", nome_item);
        printf("Informe o valor unitario do item: ");
        scanf("%f", &valor_item);
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quant_item);
        if(quant_item<=0){
            do{
                printf("Quantidade invalida! informe pelo menos um item: ");
                scanf("%d", &quant_item);
            }while(quant_item<=0);
        }
        valor_aprazo = quant_item*valor_item;
        printf("Adicionar novo item?[s=sim/n=nao]: ");
        scanf(" %c", &resp);

    }while(resp != 'n');
    valor_avista = valor_aprazo - (valor_aprazo*0.15);
    printf("O valor da compra a prazo: R$%.2f\n", valor_aprazo);
    printf("O valor da compra a vista: R$%.2f", valor_avista);
}