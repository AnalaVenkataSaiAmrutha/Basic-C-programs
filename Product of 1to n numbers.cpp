
/*Product of 1to n numbers*/
#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("Product of 1to %d numbers : %d",n,product);
	return 0;
}
