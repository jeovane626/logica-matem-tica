#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  float raio, area;
  printf("Digite o valor do raio do círculo: ");
  scanf("%f", &raio);
  area = 3.14 * raio * raio;
  printf("A área do círculo é: %.2f\n", area);
  return 0;
}