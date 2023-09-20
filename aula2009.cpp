#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[5];
	int b[5];
	int pe = 0;
	for (int i = 0; i < 5; i ++){
		printf("Digite o valor de a[%d]: ", i);
		scanf("%d", &a[i]);
		printf("Digite o valor de b[%d]: ", i);
		scanf("%d", &b[i]);
		pe = pe + a[i]*b[i];
	}
	printf("O produto escalar entre os vetores \n{");
	for(int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("} e \n{ ");
	for (int i = 0; i < 5; i++){
		printf("%d ", b[i]);
	}
	printf("}\n é igual a %d", pe);
	
}

#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[10] = {1, 4, 6, -9, 6, 3, 8, 0, 7, 2};
	int b[10];
	printf("O vetor 'a' é igual a { ");
	for (int i = 0; i < 10; i++){
		printf("%d", a[i]);
		if(i<9){
			printf(", ");
		}
	}
	printf(" }");
	printf("\nO vetor 'b' é igual a { ");
	for (int i = 0; i < 10; i++){
		b = a[9-i];
		printf("%d", b[i]);
		if(i<9){
			printf(", ");
		}
	}
	printf(" }")/
}
