// 1151 - Easy Fibonacci
#include <stdio.h>
 
int main() {
 
    int a = 0, b = 1, c;
    int n;
    do
    {
    scanf("%d", &n);
    }while (n < 0 || n >= 46);
    printf("%d %d", a, b);
    for (int i = 1; i <= n-2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
        
    }
    printf("\n");
 
    return 0;
}
