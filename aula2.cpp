///// Calcular a área de uma circuferência /////
#include <stdio.h>

int main() {
	
	float r, area;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	area = 3.14 * r * r;
	printf("A área da circuferência é igual a %f", area);
  return 0;
}

///// Transformar graus celsius em farenheint /////
#include <stdio.h>

int main() {
	
	float tc, tf;
	
	printf("Digute o valor da temperatura, em Celsius: ");
	scanf("%f", &tc);
	tf = tc * 1.8 + 32;
	printf("O valor correspondente em Fahrenheint é igual a %f", tf);
	
	
	return 0;
}

////// Média de notas //////
#include <stdio.h>

int main() {
  float n1, n2, n3, mp;
  printf("Digite o valor da primeira nota: ";
  scanf(%f, &n1);
  printf("Digite o valor da segunda nota: ";
  scanf(%f, &n2);
  printf("Digite o valor da terceira nota: ";
  scanf(%f, &n3);
  mp = (n1 + n2 + n3)/3
  printf("A sua média foi %f", mp;
  if (mp >= 7.0){
  	printf("Você foi aprovado!");
  } else{
  	printF("Você foi reprovado!");
  }
  return 0;
}
