#include <stdio.h>

int main() {
    int a1, a2, a3;
    int tempo1, tempo2, tempo3;
    int menortempo;
    
    scanf("%d %d %d", &a1, &a2, &a3);

    tempo1 = (a2 * 2) + (a3 * 4);
    tempo2 = (a1 * 2) + (a3 * 2);
    tempo3 = (a1 * 4) + (a2 * 2);

    menortempo = tempo1;
    
    if (tempo2 < menortempo) 
    {
        menortempo = tempo2;
    }

    if (tempo3 < menortempo) 
    {
        menortempo = tempo3;
    }

    printf("%d\n", menortempo);

    return 0;
}
