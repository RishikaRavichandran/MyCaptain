#include<stdio.h>
#include<malloc.h>
struct employee
{
	char name[20];
	int empId;
	int salary;
};
 int main()
{
	struct employee emp;
	int x;
	printf("----Employees List----\n");
	printf("---------------------------\n");
	printf("  Id  Name of the employee \n");
	printf("  1.   Antony George  \n");
	printf("  2.   Arunima P.R \n");
	printf("  3.   Catherine\n");
	printf("  4.   Daniel\n");
	printf("  5.   Deepthi\n");
	printf("  6.   Eten\n");
	printf("  7.   Eva\n");
	printf("  8.   Facila\n");
	printf("  9.   Febin\n");
	printf(" 10.   Girija\n");
	printf(" 11.   Hari\n");
	printf(" 12.   Kishan\n");
	printf(" 13.   Krishna\n");
	printf(" 14.   Lakshmi\n");
	printf(" 15.   Lingtha\n");
	printf(" 16.   Manu\n");
	printf(" 17.   Manohar\n");
	printf(" 18.   Vishal\n");
	printf(" 19.   Indira\n");
	printf(" 20.   Janaki\n");
	printf(" \n \n \n Enter the employment Id to see details : \n (any no. from 1 to 20)  ");
	scanf("%d", &x);
	printf("\n\n---------------------------------------------------------\n");
	printf("Name             Age    Phone Number    Salary\n");
	switch(x)
	{
	case 1 :
	printf("Antony George     30     9876543210      20000 ");
	break;
	case 2 :
	printf("Arunima           29     9876543211      20000");
	break;
	case 3 :
	printf("Catherine         28     9876543212      20000 ");
	break;
	case 4 :
	printf("Daniel            27     9876543213      20000 ");
	break;
	case 5 :
	printf("Deepthi           26     9876543214      22000 ");
	break;
	case 6 :
	printf("Eten              25     9876543215      23000 ");
	break;
	case 7 :
	printf("Eva               24     9876543216      24000 ");
	break;
    case 8 :
	printf("Facila            25     9876543217      25000");
	break;
	case 9 :
	printf("Febin             26     9876543218      24500");
	break;	
	case 10 :
	printf("Girija            27     9876543219      19000");
	break;
	case 11 :
	printf("Hari              25     9876543220      19000");
	break;
    case 12 :
	printf("Kishan            28     9876543221      19000");
	break;
	case 13 :
	printf("Krishna           28     9876645321      20000");
	break;
	case 14 :
	printf("Lakshmi           28     9874563250      21000");
	break;
	case 15 :
	printf("Lingtha           27     9876543258      28000");
	break;
    case 16 :
	printf("Manu              26     9865321470      18550");
	break;
	case 17 :
	printf("Manohar           28     9652147890      20000");
	break;
	case 18 :
	printf("Vishal            28     9856471230      20000");
	break;
    case 19 :
	printf("Indira            25     9856321472      20000");
	break;
	case 20 :
	printf("Janaki            24     9764318520      22000");
	break;
	default : 
	printf(" Invalid  choice ");
	}
	printf("\n Department :- Technical \n\n -------------------------------------------------------------------");
	return 0;
}



