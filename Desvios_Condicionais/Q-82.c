#include <stdio.h>
#include <conio.h>


/*82. Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está aprovado por média, se fará prova final ou se está reprovado por média. Caso o aluno tenha que fazer a prova final, o programa deve informar quanto ele terá que tirar na prova. Você pode considerar que a média mínima para a aprovação por média é 7 e que a média mínima para fazer a prova final é 4. O cálculo da prova final é calculado através da fórmula abaixo.

ProvaFinal = 25 - (3 * MediaParcial)/2  */

void main(){
    float nota1, nota2, nota3;
    printf("Informe as tres notas do aluno: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    float media = (nota1 + nota2 + nota3)/3;
    if(media >= 7){
        printf("Aluno aprovado por media");
    }else if(media >= 4){
        printf("O aluno vai fazer prova final\n");
        float prova_final = (25 - (3 * media)) / 2;
        printf("O aluno precisara de %.2f para ser aprovado", prova_final);
    }else{
        printf("Aluno reprovado! ");
    }

    getch();
}