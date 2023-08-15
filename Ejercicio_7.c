#include <stdio.h>
#include <stdlib.h>

void suma(int a, int b);
void mayor(int a, int b);

int main() {
	
	int a=0, b=0;
	printf("Ingrese el valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese el valor de b: \n");
	scanf("%d",&b);
	
	suma(a,b);
	mayor(a,b);
	
	system("pause");
	return 0;
}

void suma(int a, int b) {
	int sum=0;
	sum=a+b;
	printf("El valor de la suma es: %d\n\n",sum);
	
}
	
	void mayor(int a, int b) {
		if (a==b)
			printf("Son iguales \n\n");
		else
			{
			if (a>b)
				printf("%d es mayor \n",a);
			else
				printf("%d es mayor \n",b);
		}
}
