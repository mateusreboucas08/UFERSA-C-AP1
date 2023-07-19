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
