#include <stdio.h>
#include <conio.h>
const tamanho = 5;

/*204. Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos das conversões devem ser realizados através de subprogramas.
    F=C × 9/5 + 32
    K=C + 273,15

*/

float temp_fahrenheit(float temp_celsius){
    float val_fa = temp_celsius * 9/5 + 32;
    return val_fa;
}
float temp_kelvin(float temp_celsius){
   float val_k = temp_celsius + 273.15;
   return val_k;
}

void main(){
    float celsius;
    int k;
    for(k=0; k<tamanho; k++){
        printf("Informe o %d valor em celsius: ", k+1);
        scanf("%f", &celsius);
        float valor_f = temp_fahrenheit(celsius);
        float valor_k = temp_kelvin(celsius);
        printf("Valor %d em fahrenheit: %.2fF\n", k+1, valor_f);
        printf("Valor %d em kelvin: %.2fK\n", k+1, valor_k);
    }

    getch();
}