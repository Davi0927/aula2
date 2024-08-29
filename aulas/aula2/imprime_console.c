cd#include <stdio.h> //biblioteca de entrada e saida no console
int main() {
  //imprime um numero inteiro na tela
printf("Um texto qualquer\n");
  printf("%i\n",510);
  printf("%i %i\n",5,10);
  printf("%05i\n",21);
  
  // imprime um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n",2556.86);
  printf("%8.2f\n",110.5);

  //imprime um caractere
  printf("%c\n",'a');

    //imprime uma string
    printf("%s\n", "Boa noie");
  printf("%30s!\n", "Quero cafe");
  printf("%-30s!\n", "Quero cafe");


return 0;
}