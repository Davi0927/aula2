#include <stdio.h>

int main(){
float nota = 0.0f;
  
printf("Digite a nota do aluno entre 0 e 10: ");
int deu_certo = scanf("%f", &nota);
printf("Você digitou: %.1f\n", nota);

  double pi = 0.0;
  printf("Digite o valor de pi: ");
  deu_certo = scanf("%lf", &pi);
  printf("Você digitou: %.10f\n", pi);
return 0;
}