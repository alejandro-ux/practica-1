/*calculadora, ALEJANDRO RODRIGUEZ HERNANDEZ*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int opt,a,b,c;
    printf("\n 1.-SUMA");
    printf("\n 2.-RESTA");
     printf("\n ingrese el numero de la accion a realizar:");
     scanf("%d",&opt);
     switch(opt){
     case 1:
        printf("\n diguite el primer numero:");
         scanf("%d",&a);
          printf("\n diguite el segundo numero:");
          scanf("%d",&b);
           c=a+b;
            printf("\nLA SUMA ES:%d",c);break;
     case 2:         printf("\n diguite el primer numero:");
         scanf("%d",&a);
          printf("\n diguite el segundo numero:");
          scanf("%d",&b);
           c=a-b;
            printf("\nLA RESTA ES:%d",c);break;
            }
            return 0;}
