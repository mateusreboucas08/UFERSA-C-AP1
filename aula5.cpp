#include <stdio.h>
int main(){
	
	int a, r, i;
	
	printf("Digite o valor do primeiro índice: ");
	scanf("%d", &a);
	printf("Digite o valor da razão da progressão: ");
	scanf("%d", &r);
	printf("Digite qual o valor da posição: ");
	scanf("%d", &i);
	int PA;
	PA = a + ((i-1) * r);
	printf("O %dº elemento da PA  é igual a %d.", i, PA);
		
	return 0;
}

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int s, so, v, t;
	printf("Digite a posição inicial do objeto: ");
	scanf("%d", &so);
	printf("Digite o valor da velocidade do objeto: ");
	scanf("%d", &v);
	printf("Digite o valor do tempo: ");
	scanf("%d", &t);
	
	s = so + (v*t);
	
	printf("O objeto está na posição %d", s);
	
	return 0;
} 
