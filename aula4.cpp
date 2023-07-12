#include<stdio.h>

int main(){
	int x, y;
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	printf("Os valores iniciais são x = %d e y = %d\n", x,y);
	x = y;
	y = x;
	printf("Os valores finais são x = %d e y = %d", x,y);
	return 0;

}

QUOCIENTE MEDIO

#include<stdio.h>

int main(){
  int x, y, quociente, resto;
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);

  quociente = x/y;
  resto = x % y;

  printf("O quociente da divisão de %d por %d é igual a %d\n", x, y, quociente);
  printf("O resto da divisão inteira de %d por %d é igual a %d", x,y,resto);
  return 0;
}



IMPAR OU PAR


#include <stdio.h>
int main() {
  int a,resto;
  printf("Digite um número inteiro: ");
  scanf("%d", &a);
  resto = a % 2;  
  if(resto == 0){  
    printf("O número %d é par", a);
  } else{
    printf("O número %d é ímpar", a);  
  return 0;
}



ESSES NÚMEROS SÃO MÚLTIPLOS


  #include<stdio.h>

int main(){
  int x,y,resto;
  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  
