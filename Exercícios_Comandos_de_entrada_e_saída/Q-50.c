#include <stdio.h>
#include <conio.h>
const int temp_consulta = 25;

/*50. Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório, o médico atende os seus pacientes de acordo com a ordem em que eles chegaram (cada paciente recebe uma senha com o número da sua ordem de chegada) e cada 
consulta demora exatamente 25 minutos. Com base nestas informações, escreva um 
programa que leia um número inteiro correspondendo à hora e outro correspondendo 
aos minutos em que Ana chegou ao consultório e o número da senha que ela recebeu 
e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao 
consultório no exato momento em que o médico ia atender o paciente que recebeu a 
senha 1.*/

void main(){
    int hora, minuto, senha_num;
    printf("Informe a(s) hora(s) e o(s) minuto(s) em que Ana chegou: ");
    scanf("%d%d", &hora, &minuto);
    printf("Informe o numero da senha recebida por Ana: ");
    scanf("%d", &senha_num);
    int tempo_minutos = senha_num * temp_consulta;
    int durac_hora = tempo_minutos/60;
    int durac_minutos = tempo_minutos%60;
    int hora_atendimento = hora + durac_hora;
    int minuto_atendimento = minuto + durac_minutos;
    printf("Hora do atendimento: %d:%d", hora_atendimento, minuto_atendimento); 

    getch();
}