// 1146 - Growing Sequences

#include <stdio.h>
 
int main() {
 
    int a; 
    do 
    {
        scanf("%d", &a);
        if (a > 0)
        {
        for (int i = 1; i <= a; i++)
        {
            printf("%d", i);
            if (i >= 1 && i < a)
            printf(" ");
        }
        printf("\n");
        }


    }while (a != 0);
 
    return 0;
}
