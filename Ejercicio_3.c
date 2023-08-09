#include <stdio.h>
#include <stdlib.h>

void v(int h, int m){
	int totalp=h+m;
	float ph=(h*100)/totalp;
	float pm=(m*100)/totalp;
	
	printf("Porcentaje de hombres: %.2f \n",ph);
	printf("Porcentaje de mujeres: %.2f \n",pm);
}

int main() {
	int h,m;
	printf("Ingrese el numero de hombres: ");
	scanf("%d",&h);
	printf("Ingrese el numero de mujeres: ");
	scanf("%d",&m);
	v(h,m);
	
	system("pause");
	return 0;
}

