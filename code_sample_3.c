//find the sum of digits 
//debug the code

#include <stdio.h>

int sumOfDigits(int n) {
    while (n != 0) {
        n += n % 10;  
        n /= 10;
    }
    return n;  
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));

    return 0;
}

// Hint : take an example value and try to trace the code 
