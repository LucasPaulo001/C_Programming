#include <stdio.h>
#include <math.h>

 int main(void){
	float lado;
	printf("Informe um lado do quadrado:");
	scanf("%f", &lado);
	float area = pow (lado, 2);
	float perimetro = 4 * lado;
	printf("A area do quadrado eh: %.2f.\n", area);
	printf("O perimetro do quadrado eh: %.2f.\n", perimetro);

    return 0;
}