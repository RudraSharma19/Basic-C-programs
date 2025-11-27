//Q103: Program to find the pivot index of an array where left sum equals right sum.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int total = 0;
    for(int i = 0; i < n; i++)
        total += nums[i];

    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        if(leftSum == total - leftSum - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}
