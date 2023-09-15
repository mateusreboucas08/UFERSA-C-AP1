\\ descobrir quem é o maior número dentro de um vetor

#include <iostream>
#include <locale>

int main(){
  setlocale(LC_ALL,"Portuguese");
  int a[10] = {18,-2,10,8,5,-4,21,3,1,11};
  int maior = a[0];
  int menor = a[0];
  printf("Os números a serem comparados são: ");
  for(int i = 0; i < 10; i++){
    if(a[i] > maior){ 
      maior = a[i];
    }
  for (int i = 0; i < 10; i++){
    if(a[i] < menor){
      menor = a[i];
    }
  }
  printf("O maior número do vetor é: %d", maior);
  printf("O menor número do vetor é: &d", menor);
}

\\ 
int main(){
  int x[5];
  for (int i = 0; i < 5; i++) {
    printf("Digite o valor de x[%d]: ", i);
    scanf("%d", &x[i]);
  }
  printf("Os valores inseridos no vetor x são: ");
  for (int i = 0; i < 5; i++){
    printf("%d ", x[i]);
  }

  \\
int main(){
  float altura[10];
  float menor, maior, media, soma;
  for (int i = 0; i < 10; i++){
    printf("%d ", altura[i];
    scanf("%d", &altura[i];
  }
  for(int i = 0; i < 10; i++){
    if(a[i] > maior){ 
      maior = altura[i];
    }
    if(a[i] < menor){
      menor = altura[i];
    }
  for (int m = 0; i<10; m=altura[10]/10){
    printf("A média dessas altura é 
}
