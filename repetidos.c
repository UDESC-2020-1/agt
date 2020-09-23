#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
  Escrever um programa que solicite ao usuário dez números,que devem ser salvos em um vetor na ordem que são lidos; se um número que já foi lido é fornecido novamente, o programa deve avisar o usuário e pedir outro número.


  Por exemplo, com 5 números já aceitos...
    +----------+----------+--------+
    | Endereço | Nome     | Valor  |
    +----------+----------+--------+
    |    0x100 | vetor[0] |     10 |
    |    0x104 | vetor[1] |     20 |
    |    0x108 | vetor[2] |     30 |
    |    0x10C | vetor[3] |     40 |
    |    0x110 | vetor[4] |     50 |
    |    0x114 | vetor[5] |   xxxx |
    |    0x118 | vetor[6] |   xxxx |
    |    0x11C | vetor[7] |   xxxx |
    |    0x120 | vetor[8] |   xxxx |
    |    0x124 | vetor[9] |   xxxx |
    |    0x128 |        i |      5 |
    |    0x12C |        j |      0 |
    +----------+----------+--------+
*/

int main() {
  int vetor[10];

  int i = 0;
  while(i < 10) {
    printf("Digite um número: ");

    // Lemos um novo número...
    int numero;
    scanf("%d", &numero);

    bool repetido = false;
    // Olhamos todos os números já aceitos...
    // Note que os números aceitos ficam entre 0 e i!
    for(int j = 0; j < i; j++) {
      // Já vimos esse número antes?
      if(numero == vetor[j]) {
        repetido = true;
      }
    }

    // Ele apareceu repetido?
    if(repetido == true) {
      printf("Desculpe, esse número já foi usado!\n");
    } else {
      // Opa, ele é novo! Podemos continuar!
      vetor[i] = numero;
      i++;
    }
  }

  return EXIT_SUCCESS;
}
