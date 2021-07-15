#include<stdio.h>
main()
{
	int i=0;
	int j=0;
	int n=0;
	printf("Enter no. of rows : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf(" ");
	}
	return 0;
}

