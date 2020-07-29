# Lista de exercícios 1

Lembramos a estrutura básica de um programa em C:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
  // Algoritmo
  return EXIT_SUCCESS;
}
```

De forma similar a feito em sala, você pode considerar as funções `print()` e `scan()` para escrever e ler dados do terminal, ou, se preferir, usar `printf()` e `scanf()` diretamente.

Faça os seguintes exercícios:

1. Considere o seguinte algoritmo:
    ```c
    int a = 0;
    int b = 0;

    print("Digite o valor de a:");
    scan(a);
    print("Digite o valor de b:");
    scan(b);

    int x = b;
    b = a;
    a = x;

    print("Novo valor de a: ", a);
    print("Novo valor de b: ", b);
    ```

    Conforme visto em sala, faça o teste de mesa, mostrando o estado final da memória e o que foi escrito na tela durante a execução. Considere que os seguintes valores foram informados no terminal: `42` e `51`.

2. Considere o seguinte algoritmo:
    ```c
    int a = 0;
    int b = 0;

    print("Informe dois números:");
    scan(a);
    scan(b);

    int c = b - a;

    if(c < 0) {
      b = b * 2;
      c = -c;
    }

    print("O resultado é: ", c);
    ```

    Conforme visto em sala, faça o teste de mesa, mostrando o estado final da memória e o que foi escrito na tela durante a execução. Considere que os seguintes valores foram informados no terminal: `20` e `15`.

3. Considere o seguinte algoritmo:
    ```c
    int a = 0;
    int b = 0;

    print("Informe dois números:");
    scan(a);
    scan(b);

    while(b != 0) {
      if(a > b) {
        a = a - b;
      } else {
        b = b - a;
      }
    }

    print("Máximo divisor comum: ", a);
    ```

    Conforme visto em sala, faça o teste de mesa, mostrando o estado final da memória e o que foi escrito na tela durante a execução. Considere que os seguintes valores foram informados no terminal: `15` e `10`.

4. Escreva um programa que solicite uma distância em metros, e em seguida a imprima em decímetros, centímetros e milímetros.

5. Faça um programa que solicite uma temperatura em graus celsius, e os converta para graus fahrenheit. A fórmula para a conversão é: F = (C * 9.0 / 5.0) + 32.0.

6. Faça um programa que solicite uma temperatura em graus fahrenheit, e os converta para graus celsius. A fórmula para a conversão é: C = (F − 32.0) * 5.0 / 9.0.

7. Faça um programa que solicite dois números, e imprima as seguintes informações:
    - A soma dos números.
    - O produto dos números.
    - Qual dos dois é maior.

8. Faça um programa que solicite o peso (P) e altura (A) de uma pessoa, e calcule seu IMC, lembrando que o IMC = P / (A * A), e informe:
    - Se abaixo de 17, que a pessoa está muito abaixo do peso.
    - Se entre 17 e 30, a pessoa está na média.
    - Se acima de 30, a pessoa está muito acima do peso.
