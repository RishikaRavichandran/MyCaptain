#include<stdio.h>
main()
{
	int x;
	printf("              MENU \n 1. Pizza          -    Rs 239/- \n 2. Burger         -    Rs 129/- \n 3. Pasta          -    Rs 179/-  \n 4. French Fries   -    Rs 99/- \n 5. Sandwich       -    Rs 149/-\n \n \n Enter the  Serial Number of the Food you need to Buy : ");
	scanf("%d", &x);
	switch(x)
	{
		case 1 :
			printf(" YOUR ORDER : \n               Food Item   -    Pizza \n                   Price   -     Rs 239/- ");
			break;
			case 2 :
				printf(" YOUR ORDER : \n               Food Item   -    Burger \n                   Price   -     Rs 129/-");
				break;
				case 3 :
					printf(" YOUR ORDER : \n               Food Item   -    Pasta \n                   Price   -     Rs 179/-");
					break;
					case 4 :
						printf(" YOUR ORDER : \n               Food Item   -    French Fries \n                   Price   -     Rs 99/-");
						break;
						case 5 :
							printf(" YOUR ORDER : \n               Food Item   -    Sandwich \n                  Price    -     Rs 179/-");
							break;
							default : 
							printf(" Invalid  choice ");
	}
	return 0;
}
