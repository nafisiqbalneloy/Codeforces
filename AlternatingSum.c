#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int r[t];

    for (int test = 0; test < t; test++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
        }
        r[test] = sum;
    }

    for (int test = 0; test < t; test++)
    {
        printf("%d\n", r[test]);
    }

    return 0;
}
