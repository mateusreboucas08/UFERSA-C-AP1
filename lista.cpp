#include <stdio.h>

int main() {
  int x,y,z;
  printf("Digite o valor do primeiro lado: ");
  scanf("%d", &x);
  printf("Digite o valor do segundo lado: ");
  scanf("%d", &y);
  printf("Digite o valor do terceiro lado: ");
  scanf("%d", &z);
  if((x<y+z) && (y<x+z) && (z<x+y)){
    printf("É um triângulo\n");
  }else{
    printf("Não é um triângulo\n");
  }
  if ((x = y) && (x = z) && (y != z) ){
  	printf("É um triângulo isóceles");
  }else if ((x != y) && (x != z) && (y != z)){
  	printf("É um triângulo escaleno");
  }else{
  	printf("É um triângulo equilátero");
  }
  return 0;
}

