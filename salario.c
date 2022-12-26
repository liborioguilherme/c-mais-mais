#include<stdio.h>

int main()
{
int num,horas,ganhos, salario;
    printf("digite seu numero\n");
    scanf("%d",&num);
    printf("digite suas horas trabalhadas \n");    
       scanf("%d",&horas);
    printf("digite quantos você ganha por hora \n");            
    scanf("%d",&ganhos);    
       salario = horas*ganhos;
    if(salario<2000){
    printf("trabalhe mais vagabundo \n");
    }else{
    printf("Você é trabalhador parabéns \n");
    }
    
    
    printf("Seu número é %d \n", num); 
    printf("suas horas trabalhadas foram %d \n",horas); 
    printf("seu salario e %d  ",salario); 
               
                 return 0;
}