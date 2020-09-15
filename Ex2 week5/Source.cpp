#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char x[1001];
    int n, loop, i = 0, j = 1, c = 0;
    scanf("%[^\n]s", &x);
    n = strlen(x);
    if (n % 2 == 1)
    {
        n = (n / 2);
        while (i <= n)
        {
            if (x[n - i] != x[n + i])
            {
                c = 1;
            }
            i++;
        }

    }
    else
    {
        n = (n / 2) - 1;
        while (i <= n)
        {
            if (x[n - i] != x[n + j])
            {
                c = 1;
            }
            i++;
            j++;
        }
    }

    if (c == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
