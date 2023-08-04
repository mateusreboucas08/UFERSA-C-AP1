////// Laço While //////

#include <stdio.h>
#include <locale>
int main(){
	int i = 0;
	while(i != 10001){
		printf("%d\n",i);
		i=i+1;
	}
  return 0;
}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,qtdMultiplos, i;
	printf("Digite um número: ");
	scanf("%d", &n);
	printf("Digite a quantidade de múltiplos de %d a serem impressos: ", i);
	scanf("%d", &qtdMultiplos);
	i=1;
	while(i <= qtdMultiplos){
		printf("%d\n",n*i);
		i= i + 1;
	}
	return 0;
}

#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int sup, inf, i;
	printf("Digite o valor do limite inferior: ");
	scanf("%d",&inf);
	printf("Digite o valor do limite superior: ");
	scanf("%d",&sup);
	printf("A sequência que vai de %d a %d é: ", inf, sup);
	i = inf;
	while(i <= sup){
		printf("%d ", i);
		i++;
	}
	return 0;
}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("Os divisores de %d são: ", num);
	i = 1;
	while (i<=num){
		if (num % i == 0){
			printf("%d ", i);
			if (i < num) {
				printf(", ");
			}
		}
		i++;
	}
}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i, qtdDivisores;
	scanf("%d", &num);
	i=1;
	qtdDivisores = 0;
	while(i <= num){
		if (num%i == 0){
			qtdDivisores++;
		}
		i++;
	}
	if (qtdDivisores == 2){
		printf("%d é primo",num);
	}else{
		printf("%d não é primo",num);
	}
	return 0;
}
////// Laço For //////


