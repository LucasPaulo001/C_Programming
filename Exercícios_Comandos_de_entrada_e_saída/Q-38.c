#include <stdio.h>
#include <conio.h>
const int horas_seg = 3600;
const int horas_min = 60;
const int minutos_seg = 60;

    /*38. Escreva um programa que leia um valor em segundos e converta para a forma X horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10 segundos.*/

void main(){
    int segundos;
    printf("Informe o valor em segundos: ");
    scanf("%d", &segundos); 
    int horas = segundos / horas_seg; 
    int minutos = (segundos % horas_seg) / horas_min;
    int temp_segundos = minutos % minutos_seg;
    printf("%dh: %dmin: %dseg ", horas, minutos, temp_segundos);
    
    getch();
}