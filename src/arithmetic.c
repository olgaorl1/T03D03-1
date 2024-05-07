#include <stdio.h>

int sum(int a, int b);

int main() {
    int num1, num2;
    
    if(scanf("%d %d", &num1, &num2) == 2) {
        printf("%d %d %d ", num1 + num2, num1 - num2, num1 * num2);
        
        if(num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("n/a\n");
        }
    } else {
        printf("n/a\n");
    }
    
    return 0;
}






