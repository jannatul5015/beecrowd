// 1142 - PUM
#include <stdio.h>
 
int main() {
 
    int n; 
    scanf("%d", &n);
    
    for (int i = 1, j = 1; j <= n; i += 4, j++)
    {
        printf("%d %d %d PUM\n", i, i+1, i+2);
    }
 
    return 0;
}
