//Q104: Program to find the pivot integer x such that the sum of all elements between 1 and x equals the sum of all elements between x and n.
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - (x * (x - 1) / 2);
        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
