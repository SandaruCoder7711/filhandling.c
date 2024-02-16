#include<stdio.h>
#include <assert.h>
float calcpayment(int age, float size);
float calcsubsidy(float payment);
void displayDetails(float payment, float subsidy);
int main (void)

{
		
	return 0;
}

float calcpayment(int age, float size)
{
	
	if(age == 0)
	{
	return 	size *35*68;
		
	}
     	
	else if(age == 1)
	{
	return 	size *30*68;
		
	}
		
	else if(age == 2)
	{
	return 	size *65*68 + size *25*75;
		
	}
		
	else if(age == 3)
	{
	return 	size *50*68 + size *25*75;
		
	}
		
	else if(age == 4)
	{
	return 	(size *30*68);
		
	}
}
