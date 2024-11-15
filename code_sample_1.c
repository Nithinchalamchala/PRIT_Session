//find the factorial of a number 
//debug the code(check for symantic error)


#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

        printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
#iiiii

// Hint : test run the code for every integer
