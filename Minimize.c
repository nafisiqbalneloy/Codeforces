#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        // Calculate and print the minimum value
        printf("%d\n", b - a);
    }

    return 0;
}
