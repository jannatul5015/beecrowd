// 1134 Type of fuel
#include <stdio.h>
 
int main() {
 
    int a;
    int alco = 0, gaso = 0, di = 0;
    
    do 
    {
        scanf("%d", &a);
        if (a == 1)
        alco += 1;
        else if (a == 2)
        gaso += 1;
        else if (a == 3)
        di += 1;
        
    }while (a != 4);
    
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alco, gaso, di);
    
    return 0;
}
