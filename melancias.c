#include <stdlib.h>
#include <stdio.h>

// Fazer um programa para um comprador de melancias.
// A cada melancia que é entrada é medido o seu peso.
// Inicialmente não se sabe a quantidade de melancias que serão pesadas.
// Para terminar, fornecemos um valor negativo para o peso.
// Ao final, informar a quantidade de melancias, o peso total, a média de peso,
// o maior e o menor peso.

// Declara o estado como variáveis globais
int quantidade = 0;
float peso_total = 0;
float menor_peso = 0;
float maior_peso = 0;

float comprar(void) {
  float peso;
  printf("Digite o peso da melancia #%d, em kg: ", quantidade + 1);
  scanf("%f", &peso);

  // Devemos atualizar o estado?
  if(peso > 0) {
    // Atualiza os pesos!
    if(quantidade == 0) {
      menor_peso = peso;
      maior_peso = peso;
    }

    // É a menos pesada?
    if(peso < menor_peso) {
      menor_peso = peso;
    }

    // É a mais pesada?
    if(peso > maior_peso) {
      maior_peso = peso;
    }

    // Aumenta a contagem!
    quantidade += 1;
    peso_total += peso;
  }

  // Retorna o valor lido
  return peso;
}

int main(void) {

  // Roda enquanto o peso não for negativo :)
  int peso = 0;
  while(peso >= 0) {
    peso = comprar();
  }

  // Imprime os valores totais
  printf("Quantidade: %d\n", quantidade);
  printf("Peso total: %.2f\n", peso_total);

  // Calcula e imprime a média
  float media = peso_total / quantidade;
  printf("Peso médio: %.2f\n", media);

  // Imprime os menores e maiores pesos
  printf("Menor peso: %.2f\n", menor_peso);
  printf("Maior peso: %.2f\n", maior_peso);

  return 0;
}
