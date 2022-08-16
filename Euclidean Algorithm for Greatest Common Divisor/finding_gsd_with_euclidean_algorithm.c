#include <stdio.h>
int euclidean_argorithm(int num1, int num2)
{
    int temp;
    if(num2>num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while(1)
    {
        if(num1%num2 == 0)
        {
            return num2;
        }
        else
        {
            temp = num2;
            num2 = num1%num2;
            num1 = temp;
        }
    }
    return 0;
}
int main(){
    printf(" GCD(351,260): %d \n",euclidean_argorithm(351,260));
    printf(" GCD(100,10): %d \n",euclidean_argorithm(100,10));
    return 0;
}
