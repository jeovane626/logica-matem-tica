#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
float centimetros;
float polegadas;
printf("Digite o valor em centímetros: ");
scanf("%d", &centimetros);
polegadas = centimetros / 2.54;
printf("%d centímetros equivalem a %.2f polegadas.\n", centimetros, polegadas);
  return 0;
}