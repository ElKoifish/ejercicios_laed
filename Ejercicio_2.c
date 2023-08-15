#include <stdio.h>
#include <stdlib.h>

void perimetro (int a, int b);
void area (int a, int b);
int main()
{
	int a=0, b=0;
	printf("Ingrese el valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese el valor de b: \n");
	scanf("%d",&b);
	perimetro(a,b);
	area(a,b);
	system("pause");
	return 0;
}
void perimetro(int a, int b)
{
	int p=0;
	p=2*a+2*b;
	printf("El valor del perimetro es: %d\n",p);
	return;
}
void area(int a, int b)
{
	int ar=0;
	ar=a*b;
	printf("El valor del area es: %d\n",a);
	return;
}
