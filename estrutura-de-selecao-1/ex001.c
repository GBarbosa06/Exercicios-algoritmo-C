#include <stdio.h>

int main()
{
	float n1, n2, n3, p1, p2, p3, media;
	
	printf("Insira a primeira nota e seu peso (N P)");
	scanf("%f %f", &n1, &p1);

	printf("Insira a segunda nota e seu peso (N P)");
	scanf("%f %f", &n2, &p2);

	printf("Insira a terceira nota e seu peso (N P)");
	scanf("%f %f", &n3, &p3);

	media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	printf("A media eh %.2f", media);

	return 0;

}