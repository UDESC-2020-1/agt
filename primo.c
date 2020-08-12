#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Exercício: leia um número inteiro e informe se ele é primo ou não.
int main() {
  // Primeiro, solicitamos um número do usuário.
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Precisamos, após nossa verificação, nos lembrar se o numero era primo ou
  // não. Como a verificação irá tentar provar que o número NÃO é primo, por
  // padrão vamos assumir que ele é sim um número primo.
  bool primo = true;

  // Para todos os números de 2 até o nosso número...
  for(int i = 2; i < numero; i++) {
    // Verificamos se o resto da divisão do nosso número pelo contador é igual
    // a zero, isto é, se ele é divisível. Se for, o número não pode ser primo!
    if(numero % i == 0) {
      // Então vamos alterar nossa memória: o número não é primo
      primo = false;
    }
  }

  // Ao chegarmos aqui, a variável "primo" continuará contendo true caso nunca
  // tenha achado um número divisível pelo valor digitado.
  if(primo) {
    // Se for o caso, então sabemos que o número é primo.
    printf("O número é primo!\n");
  } else {
    // Do contrário, caso um valor tenha sido encontrado, o valor de "primo" foi
    // alterado para false, e sabemos que nosso número não pode ser primo.
    printf("O número não é primo!\n");
  }

  // Terminamos. :)
  return EXIT_SUCCESS;
}
