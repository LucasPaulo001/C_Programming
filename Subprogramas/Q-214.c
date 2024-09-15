#include <stdio.h>
#include <conio.h>

/*214. Em um determinado concurso público, para cada questão que um candidato acerta 
ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada 
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um 
programa que leia o número de questões que um candidato acertou, o número de 
questões que ele errou e o número de questões que ele deixou em branco e 
determine a sua pontuação final. A pontuação deve ser calculada através de um 
subprograma, que deve receber como entrada o número de questões certas, o 
número de questões erradas e o número de questões em branco. */

int pontuacao(int acertos, int erros, int em_branco){
	int val_acertos = acertos*5;
	int val_erros = val_acertos - (erros*3);
	int val_pontuacao = val_acertos+val_erros;
	return(val_pontuacao);
}

void main(){
	int acertos, erros, em_branco;
	printf("Informe o numero de acertos, erros e em branco: ");
	scanf("%d%d%d", &acertos, &erros, &em_branco);
	int valor_pontuacao = pontuacao(acertos, erros, em_branco);
	printf("Pontuacao: %d", valor_pontuacao);

    getch();
}