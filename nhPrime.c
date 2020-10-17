# include <stdio.h>
# include <conio.h>
# include <math.h>

int isPrime(int a);

void main()
{
    int i;

    for(i=0; i<=100; i++)
    {
        if(isPrime(i) == 1)
        {
            int n = i+1;
            if(n%3 == 0)
            {
                printf("%d,", n);
            }

        }
    }
}

int isPrime(int a)
{
    int i, j=0;
    for(i=1; i<a; i++)
    {
        if(a%i == 0)
        j++;
    }
    if(j==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}