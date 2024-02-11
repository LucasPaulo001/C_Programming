#include <stdio.h>
const int quantidade_nums = 5;//Quantidade de números dos candidatos.

    /*108) Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
    números dos deputados estaduais eleitos e identifique a quantidade de candidatos 
    que cada partido elegeu. O número do partido do deputado pode ser identificado 
    pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato 
    com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um 
    candidato com número 45879 concorre pelo PSDB, que é o partido de número 45. 
    Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 
    (PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).*/

void main(){
    int num, k, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0; //Todos os partidos começam em "0", pois a quantidade será contada dentro do comando de repetição.
    
    for(k=1; k<=quantidade_nums; k++){
        printf("Informe um numero inteiro entre 10.000 e 99.999: ");
        scanf("%d", &num);
        int num_candidato = num/1000;//Nessa parte acontece a simplificação do número do candidato, se dividirmos 14526 por 1000 chegaremos ao resultado 14, que é o número dos candidatos do PTB, sendo assim, aplicando a divisão para simplificar todos os números informados.

        //Quando as condições forem verdadeiras as variaveis serão incrementadas em um.
        if(num_candidato==13){
            pt++;
        }else if(num_candidato==14){
            ptb++;
        }else if(num_candidato==15){
            pmdb++;
        }else if(num_candidato==25){
            dem++;
        }else if(num_candidato==45){
            psdb++;
        }else if(num_candidato==65){
            pcdob++;
        }
    }

    //Imprimindo o resultados das variáveis contadoras.

    printf("Candidatos PT: %d\n", pt);
    printf("Candidatos PTB: %d\n", ptb);
    printf("Candidatos PMDB: %d\n", pmdb);
    printf("Candidatos DEM: %d\n", dem);
    printf("Candidatos PSDB: %d\n", psdb);
    printf("Candidatos PCdoB: %d\n", pcdob);
}
