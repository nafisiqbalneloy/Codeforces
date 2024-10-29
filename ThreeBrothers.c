#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int missingBro = 6 - (a + b);

    printf("%d\n", missingBro);

    return 0;
}
