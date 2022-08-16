#include<stdio.h>
void print_divisors(int n)
{
    int t_n = sqrt(n);
    if(t_n*t_n == n)
    {
        printf(" %d-%d\n",t_n,t_n);
    }
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            printf(" %d-%d\n", i, n/i);
        }
    }
}
int main(){
    puts(" Divisors of 150: ");
    print_divisors(150);
}
