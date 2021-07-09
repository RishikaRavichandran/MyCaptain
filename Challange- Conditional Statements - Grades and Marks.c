#include<stdio.h>
main()
{ 
int x;
printf(" Enter marks : ");
scanf("%d", &x);
if(x>=85 && x<100)
{
	printf(" GRADE A ");
}
else if(x>=70 && x<84)
{
	printf(" GRADE B ");
}
else if(x>=55 && x<69)
{
	printf(" GRADE C ");
}
else if(x>=40 && x<54)
{
	printf(" GRADE D ");
}
else
{
	printf(" GRADE F ");
}
return 0;
}
