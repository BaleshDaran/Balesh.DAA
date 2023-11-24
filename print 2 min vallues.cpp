#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 1;
    }

    int min1, min2;
    printf("Enter the elements:\n");

    scanf("%d", &min1);
    scanf("%d", &min2);

    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    for (int i = 2; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2 && num != min1) {
            min2 = num;
        }
    }

    printf("First minimum value: %d\n", min1);
    printf("Second minimum value: %d\n", min2);

    return 0;
}
