#include<stdio.h>
int main()
{
	long int n,count=0,temp;
	printf("Enter the number:");
	scanf("%ld",&n);
	temp=n;
	while(n!=1)
	{
		if(n%2!=0)
		{
			count=1;
			break;
		}
		n=n/2;
	}
	
	if(count==0)
	
		printf("%ld can be expressed as power of 2",temp);
	
	else
	     printf("%ld cannot be expressed as power of 2",temp);
	     
    return 0;
}
