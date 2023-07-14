#include <stdio.h>

int main() {
  int x,y,z;
  printf("Digite o valor do primeiro lado: ");
  scanf("%f", &x);
  printf("Digite o valor do segundo lado: ");
  scanf("%f", &y);
  printf("Digite o valor do terceiro lado: ");
  scanf("%f", &z);
  if (x<y+z) && (y<x+z) && (z<x+y){
    printf("É um triângulo");
  }else{
    printf("Não é um triângulo");
  }
  return 0;
}
