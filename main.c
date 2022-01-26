#include <stdio.h>

int main() {
  
  double n1, n2, n3, n4, media;
  printf("Digite as notas finais dos Bimestre do Aluno:\n");
  
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  media = (n1+n2+n3+n4)/4;

  if (media >=6.0){
    printf("Aluno Aprovado! sua nota é %.1lf\n", media);
  }
  else {
    printf("Aluno Reprovado! Estude mais! sua nota é %.1lf\n", media);
  }

  return 0;
}