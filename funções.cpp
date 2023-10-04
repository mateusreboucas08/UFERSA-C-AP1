#include <iostream>
#include <locale>
int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite um número: ");
	scanf("%d", &num1);
	
	printf("Digite mais um número: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("O menor número digitado foi: %d", num2);
	}else{
		printf("O menor número digitado foi: %d", num1);
	}
	return 0;
}

#include <iostream>
#include <locale>
int main() {
	setlocale(LC_ALL, "Portuguese");
	float x1, y1, x2, y2;
	printf("Digite a coordenada do ponto A: ");
	scanf("%f", &x1);
	scanf("%f", &y1);
	printf("Digite a coordenada do ponto B: ");
	scanf("%f", &x2);
	scanf("%f", &y2);
	float distancia1 = (x2 - x1);
	float distancia2 = (y2 - y1);
	printf("A distância entre os dois pontos é: %f, %f", distancia1, distancia2);
	
	
	
	return 0;
}
