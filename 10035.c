#include <stdio.h>

int main() {
    unsigned int num1, num2;

    while (scanf("%u %u", &num1, &num2) != EOF && (num1 || num2)) {
        int carry = 0;
        int count = 0;

        while (num1 > 0 && num2 > 0) {
            int digit1 = num1 % 10;
            int digit2 = num2 % 10;

            int sum = digit1 + digit2 + carry;
            if (sum >= 10) {
                carry = 1;
                count++;
            } else {
                carry = 0;
            }

            num1 /= 10;
            num2 /= 10;
        }

        while (num1 > 0) {
            int sum = num1 % 10 + carry;
            if (sum >= 10) {
                carry = 1;
                count++;
            } else {
                carry = 0;
            }

            num1 /= 10;
        }

        while (num2 > 0) {
            int sum = num2 % 10 + carry;
            if (sum >= 10) {
                carry = 1;
                count++;
            } else {
                carry = 0;
            }

            num2 /= 10;
        }

        if (count == 0) {
            printf("No carry operation.\n");
        } else if (count == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", count);
        }
    }

    return 0;
}