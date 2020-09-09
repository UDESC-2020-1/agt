#include <stdlib.h>
#include <stdio.h>

/**
  Registro de ativação 1:
    +----------+----------+-------+
    | Endereço | Nome     | Valor |
    +----------+----------+-------+
    |    0x100 | vetor[0] |    10 |
    |    0x104 | vetor[1] |    20 |
    |    0x108 | vetor[2] |    30 |
    |    0x10C | vetor[3] |    40 |
    |    0x110 | vetor[4] |    50 |
    |    ----- |    vetor | 0x100 |
    +----------+----------+-------+
*/

// Ler dez números e armazenar num vetor
void ler(int v[5]) {
  for(int i = 0; i < 5; i++) {
    printf("Digite um número: ");
    scanf("%d", &v[i]);
  }
}

// Retornar o maior item de um vetor
int maior(int v[5]) {
  int m = 0;

  // Percorre todos os itens procurando o maior
  for(int i = 0; i < 5; i++) {
    if(i == 0 || v[i] > m) {
      m = v[i];
    }
  }

  return m;
}

// Retornar o menor item de um vetor
int menor(int v[5]) {
  int m = 0;

  // Percorre todos os itens procurando o menor
  for(int i = 0; i < 5; i++) {
    if(i == 0 || v[i] < m) {
      m = v[i];
    }
  }

  return m;
}

int main(void) {
  int vetor[5];

  // Ler os dados do usuário
  ler(vetor);

  // Procurar maior valor
  int a = maior(vetor);

  // Procurar menor valor
  int b = menor(vetor);

  printf("Maior valor: %d\n", a);
  printf("Menor valor: %d\n", b);

  return EXIT_SUCCESS;
}
