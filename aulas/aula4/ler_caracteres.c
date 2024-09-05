#include <stdio.h>
int main() {
 char tecla = '\0'; //caracter nulo
 printf("Digite uma tecla:");
  int deu_certo = scanf("%c", &tecla);
  
  getchar(); //limpa o \n do buffer
  printf("Você digitou: %c\n", tecla);
  printf("Você digitou outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar(); //limpa o \n do buffer
  printf("Você digitou: %c\n", tecla);
  
  char nome[100];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Olá %s\n", nome);
  
  
  return 0;
}