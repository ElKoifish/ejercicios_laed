#include <stdio.h>
#include <stdlib.h>

void octavaparte (float numero);
int main()
{
	float numero;
	printf("Ingrese un numero: \n");
	scanf("%f",&numero);
	octavaparte(numero);
	system("pause");
	return 0;
}
void octavaparte(float numero)
{
	float n;
	n=numero/8;
	printf("La octava parte de tu numero es: %f\n",n);
	return;
}
