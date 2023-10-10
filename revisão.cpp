//QUESTÃO 25
#include <iostream>
#include <locale>

int main() {
	float notas[10] = {8.5, 6.0, 7.2, 3.9, 9.7, 2.8, 5.5, 6.8, 7.8, 2.0};
    int aprovados = 0;
    int quartaAvaliacao = 0;
    int reprovados = 0;
    
    for (int i = 0; i < 10; i++) {
        if (notas[i] >= 7.0) {
            aprovados++;
        } else if (notas[i] >= 3.5) {
            quartaAvaliacao++;
        } else {
            reprovados++;
        }
    }
    
	printf("Alunos aprovados: %d\n", aprovados);
    printf("Alunos para a quarta avaliação: %d\n", quartaAvaliacao);
    printf("Alunos reprovados: %d\n", reprovados);
    
    return 0;
}

//QUESTÃO 26
#include <iostream>

int main() {
    float alturas[10] = {1.72, 1.65, 1.80, 1.60, 1.75, 1.68, 1.70, 1.78, 1.62, 1.85};
    float menorAltura = alturas[0];
    float maiorAltura = alturas[0];
    float somaAlturas = alturas[0];
  
    for (int i = 1; i < 10; i++) {
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
        somaAlturas += alturas[i];
    }
    float mediaAlturas = somaAlturas / 10;

    printf("Menor altura: %d m\n", menorAltura);
    printf("Maior altura: %d m\n",maiorAltura);
    printf("Média aritmética das alturas: %d m\n",mediaAlturas);

    return 0;
}

//QUESTÃO 27
#include <iostream>
int main() {
    const int tamanhoVetor = 10;
    double vetor[tamanhoVetor];
    double numero;
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << "Digite o valor do elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Pedindo o número pelo qual multiplicar
    std::cout << "Digite o número pelo qual você deseja multiplicar os elementos do vetor: ";
    std::cin >> numero;

    // Multiplicando os elementos do vetor pelo número fornecido
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] *= numero;
    }

    // Exibindo o vetor resultante
    std::cout << "Vetor resultante após multiplicação:" << std::endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

