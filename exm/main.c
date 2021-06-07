#include <stdio.h>

int Nusrat(int);
int i;

int main()
{
    int num, check;

    printf("Input any positive integer: ");
    scanf("%d", &num);

    i = num / 2;

    check = Nusrat(num);

    if (check == 1)
        printf(" The number %d is a prime number. \n\n",num);
    else
        printf(" The number %d is not a prime number. \nn",num);
    return 0;
}

int Nusrat(int num)
{
    if (i == 1)
    {
        return 1;
    }
    else if (num % i == 0)
    {
        return 0;
    }
    else
    {
        i = i - 1;
        Nusrat(num);
    }
}
