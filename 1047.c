#include <stdio.h>
 
int main() {
 
    int horaI,minI,horaF,minF, duracaoh, duracaom;
    
    scanf("%d %d %d %d",&horaI,&minI,&horaF,&minF);
    
    if(horaI==horaF && minI==minF)
    {
        duracaoh=24;
        duracaom=0;
    }
    else 
    {
        duracaoh=horaF-horaI;
        duracaom=minF-minI;
        
        if(duracaom<0)
        {
            duracaom+=60;
            duracaoh-=1;
        }
        
        if(duracaoh<0)
        {
            duracaoh +=24;
        }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoh,duracaom);
    
 
    return 0;
}
 
 