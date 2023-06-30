#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int b;
	int h;
	
	printf("Digite o valor da base do retângulo: ");
	scanf("%d", &b);
	printf("Digite o valor da altura do retângulo: ");
	scanf("%d", &h);
	
	int a = b * h;
	printf("A área do retângulo é igual a %d", a);
	
	return 0;
}
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float b, h, a;
	
	printf("Digite o valor da base do retângulo: ");
	scanf("%f", &b);
	printf("Digite o valor da altura do retângulo: ");
	scanf("%f", &h);
	
	a = b * h;
	printf("A área do retângulo é igual a %f", a);
	
	return 0;
}
