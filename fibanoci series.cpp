#include <stdio.h>
int main()
{

int i,n,first=0,second=1,sum=0;
printf("enter the number :");
scanf("%d",&n);
printf("the fibonacciseries is:");
for(i=0;i<n;i++)

{
	if(i<=1)
	{
		sum=i;
	}
	else
	{
	
		sum=first+second;
	first=second;
	second=sum;
	}
	
	
	printf("%d",sum);
}
	return 0;

}