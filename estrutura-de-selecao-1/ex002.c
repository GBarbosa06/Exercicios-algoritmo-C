#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, y1, y2, d;
	printf("Digite as coordernadas do ponto A(x, y): ");
	scanf("%f, %f", &x1, &y1);
	
	printf("Agora as coodernadas do ponto B(x, y): ");
	scanf("%f, %f", &x2, &y2);
	
	d = sqrt((x1-x2)*(x1-x2) + (y1-y2) * (y1-y2));

	printf("A distancia dos pontos, na sua grandeza, eh %.2f", d);

	return 0;

}