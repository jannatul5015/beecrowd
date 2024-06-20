// 1149 - Summing Consecutive Integers

#include <stdio.h>
 
int main() {
 
    int a, n;
    scanf("%d", &a);
    do 
    {
        scanf("%d", &n);
    }while (n <= 0);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + a;
        a++;
    }
    printf("%d\n", sum);
    return 0;
}
