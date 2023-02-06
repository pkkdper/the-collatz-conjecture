#include <stdio.h>
#include <cs50.h>
#include <math.h>

int collatz(int n);

int main(void) 
{

}

int collatz(int n) 
{
    if (n === 1) 
    {
        return;
    }
    else if ((n % 2) === 0)
    {
        return 1 + (collatz(n/2));

    }
    else 
    {
        return 1 + (collatz(n*3+1))
    }
}