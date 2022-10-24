#include <stdio.h>
int main(){
float A1,A2,A3,MP;
printf("digite a sua nota da primeira prova:");
scanf("%f",&A1);
 printf("digite a sua nota da segunda prova:");
 scanf("%f",&A2);
printf("digite a sua nota da terceira prova:");
 scanf("%f", &A3);
  MF=(A1+A2+A3)/3;
  if (MP>=7){
      printf("aluno aprovado!");
  }
  else if (MP<7){
      printf("aluno recuperação %.2f");
  }
  else{
      (MP==3.5);
      printf("aluno reprovado");
  }
  return 0;
}