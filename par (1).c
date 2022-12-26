#include<stdio.h>

int main()
{
int num;

  printf("digite um número para saber se é par ou nao");
 scanf("%d",&num);
  if(num % 2 == 0){
 printf("o número é par");
}else{
 printf("e impar");
}
     return 0;
}