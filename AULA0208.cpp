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
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	float preco, total;
	printf("Digite uma opção:\n");
	printf("1 - Digitar valores;\n");
	printf("0 - sair.\n")/
	scanf("%d", &opcao);
	total = 0.0
	while(opcao == 1){
		printf("Digire o preço do produto\n");
		scanf("%f",preco)
		total = total + preco;
		printf("Digite uma opção:\n");
		printf("1 - Digitar valores;\n");
		printf("0 - sair.\n")/
		scanf("%d", &opcao);
	}
	printf("O total da compra é de R$ %.2f", total);
	
	return 0;

}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,r,i,valor;
	printf("Digite o valor do primeiro índice: ");
	scanf("%d", &a);
	printf("Digite o valor da razão da progressão: ");
	scanf("%d", &r);
	printf("Digite qual o valor da posição: ");
	scanf("%d", &i);
	int PA;
	valor=1;
	while(valor<=i){
		PA = a + ((valor-1)*r);
		printf("O %dº termo da PA é igual a %d\n",valor,PA);
		valor++;
	}
	return 0;
}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int l, i,j;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%d",&l);
	i=1;
	while(i<=l){
		j = 1;
		while(j<=l){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i, fat;
	printf("Digite um número: ");
	scanf("%d",&num);
	i=1;
	fat = 1;
	while(i<=num){
		printf("O primeiro termo a ser multiplicado é %d\n",i);
		fat = fat*i;
		i++;
	}
	printf("O valor do fatorial do número %d é igual a %ld.",num,fat);
	return 0;
}
////// Laço For //////


