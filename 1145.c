// 1145 - Logical Sequence

#include <stdio.h>
 
int main() {
 
    int a, b;
    scanf("%d%d", &a, &b);
    int init = 1;
    int rem = b % a;
    for (int i = 1; i <= (b/a)+rem; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            
            if (init <= b)
            {
            printf("%d", init);
            init += 1;
            if (j >= 1 && j < a)
            printf(" ");
            }
            else
            break;
                
            }
        printf("\n");
    }
 
    return 0;
}
