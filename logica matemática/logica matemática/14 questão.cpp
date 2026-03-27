#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que recebe um valor inteiro e mostra se o valor é zero, positivo
ou negativo. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Seu número é positivo!\n");

    } else if (numero < 0) {
        printf("Seu número é negativo!\n");
        
    } else {
        printf ("Seu número é Zero!\n");            
    }

    return 0;
}