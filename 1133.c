// 1133 - Rest of a division
#include <stdio.h>
 
int main() {
 
    int x, y, s, b;
    scanf("%d%d", &x, &y);
    
    if (x < y)
    {
        s = x;
        b = y;
    }
    else
    {
        s = y;
        b = x;
    }
    
    for (int i = s+1; i < b; i++)
    {
        
        if (i % 5 == 2 || i % 5 == 3)
        printf("%d\n", i);
     
    }
 
    return 0;
}
