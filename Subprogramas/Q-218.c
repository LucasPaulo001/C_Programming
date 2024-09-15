#include <stdio.h>
#include <conio.h>

/*218. Escreva um programa que leia um valor em segundos e converta para a forma X 
horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
e 10 segundos. O programa deve ter: um subprograma para calcular o valor das 
horas, um subprograma para calcular o valor dos , um subprograma para calcular o 
valor dos segundos e um subprograma para imprimir o resultado final.
*/

int horas(int segundos){
    int valor_hr = segundos/3600;
    return valor_hr;
}
int minutos(int segundos){
    int valor_min = horas(segundos)%60;
    return valor_min;
}
int segundos(int segundos){
    int valor_seg = minutos(segundos)%60;
    return valor_seg;
}
void main(){
    int seg;
    printf("Informe o valor de segundos: ");
    scanf("%d", &seg);
    int valor_horas = horas(seg);
    int valor_minutos = minutos(seg);
    int valor_segundos = segundos(seg);
    printf("%dh:%dm:%ds", valor_horas, valor_minutos, valor_segundos);

    getch();
}