//code for nth fibonacci number
//debug the code 

#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = c;  
        b = a;  
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d terms: ", num);
    fibonacci(num);

    return 0;
}
