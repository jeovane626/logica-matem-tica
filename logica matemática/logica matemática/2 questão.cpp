#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  int a;
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Antecessor: %d\n", a - 1);
  printf("Sucessor: %d\n", a + 1);
  return 0;
}