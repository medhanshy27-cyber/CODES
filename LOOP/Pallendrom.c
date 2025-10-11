#include <stdio.h>

int main() {
    int n, rev = 0, temp, r;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }

    if (rev == n)
        printf("%d is a Palindrome.\n", n);
    else
        printf("%d is not a Palindrome.\n", n);

    return 0;
}
