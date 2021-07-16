#include<stdio.h>
int sum_of_digits (int a);
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum = sum_of_digits(num);
    printf("Sum of digits in %d is %d\n", num, sum);
    return 0;
}
int sum_of_digits (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum_of_digits (num / 10));
    }
    else
    {
       return 0;
    }
}
