#include <stdio.h>
 
int main() {
 
   int hinicial,hfinal, duracao;
   
   scanf("%d %d", &hinicial,&hfinal);
   
   if(hfinal>hinicial)
   {
       duracao=hfinal-hinicial;
   }
   else if(hinicial>hfinal)
   {
       duracao=(24-hinicial)+hfinal;
   }
   else
   {
       duracao=24;
   }
   
   printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}