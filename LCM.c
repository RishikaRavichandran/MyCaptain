#include<stdio.h>
int find_lcm(int, int);   
int main()
{
    int a, b, lcm, i;
    printf(" Enter first number : ");
    scanf("%d", &a);
    printf(" Enter second number : ");
    scanf("%d", &b);
    lcm = find_lcm(a,b);    
    printf(" LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
int find_lcm(int a, int b)  
{
    static int i = 1;    
    if(i%a == 0 && i%b == 0)
    {
        return i;
    }
    else
    {
        i++;
        find_lcm(a,b);
        return i;
    }
}
