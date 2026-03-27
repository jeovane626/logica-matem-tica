#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

 int num1, num2;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  int soma = num1 + num2;
  int produto = num1 * num2;
  float quociente = (float)num1 / num2;
  printf("A soma entre os números é: %d\n", soma);
  printf("O produto entre os números é: %d\n", produto);
  printf("O quociente entre os números é: %.2f\n", quociente);
  return 0;
}