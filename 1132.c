// 1132 - Multiples of 13

#include <stdio.h>
 
int main() {
 
    int x, y, s, b;
    int sum = 0;
    scanf("%d%d", &x, &y);
    
    if (x < y)
    {
        s = x;
        b = y;
    }
    
    else
    {
        s=y;
        b=x;
    }
    for (int i = s; i <= b; i++)
    {
        if (i % 13 != 0)
        sum += i;
    }
    printf("%d\n", sum);
 
    return 0;
}
