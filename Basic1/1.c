#include <stdio.h>

int main() {
    int calls;
    float bill = 0;

    printf("Enter number of calls: ");
    scanf("%d", &calls);

    if (calls <= 150) {
        bill = 0;
    }
    else if (calls <= 250) {
        bill = (calls - 150) * 0.9;
    }
    else if (calls <= 400) {
        bill = (100 * 0.9) + (calls - 250) * 1.2;
    }
    else {
        bill = (100 * 0.9) + (150 * 1.2) + (calls - 400) * 1.5;
    }

    printf("Total amount of bill is: %.2f\n", bill);
    return 0;
}
