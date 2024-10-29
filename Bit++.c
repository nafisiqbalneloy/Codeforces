#include <stdio.h>
int main()
{
    int n;
    int X = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char op[4];
        scanf("%s", op);

        if (op[1] == '+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    printf("%d", X);
    return 0;
}