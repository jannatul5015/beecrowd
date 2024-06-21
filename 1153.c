// 1153 - Simple Fibonacci

#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto*i;    
    }
    printf("%d\n", facto);
 
    return 0;
}
