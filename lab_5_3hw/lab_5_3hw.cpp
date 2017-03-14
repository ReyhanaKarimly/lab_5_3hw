#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n;
	printf("Enter the number of stars: ");
	scanf_s("%d", &n);
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= k; i++)
			printf("*");
		printf("\n");
	}

	for (int k = n; k >= 1; k--)
	{
		for(int i=k;i>=1;i--)
			printf("*");
		    printf("\n");
	}
	printf("\n");
	system("Pause");
}