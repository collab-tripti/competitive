#include<stdio.h>
int main()
{
	int X ; //withdraw ammount
	float Y; //amount in bank
	scanf("%d \t %f", &X,&Y);
	if(X>=0 && X<=2000 && Y>=0 && Y<=2000)
	{
	if(Y>=X + 0.5)
	{  
		if( X%5 == 0 )
		{
			printf("%.2f",Y-X-.5);
		}
		else
		{
		printf("%.2f ", Y);	
		}
	}
	else
	{
	printf("%.2f ", Y);	
	}
	return 0;
}
