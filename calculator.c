#include <stdio.h>

int main()
{
	float num1,num2;
	char operator;
	
	printf("Enter first number :");
	scanf("%f",&num1);
	
	printf("\n Enter operator(+,-,*,/): ");
	scanf(" %c",&operator);
	
	printf("\nEnter second number :");
	scanf("%f",&num2);
	
	if(operator=='+')
	{
		printf("Result=%.2f",num1+num2);
	}
	else if (operator=='-')
	{
		printf("Result=%.2f",num1-num2);
	}
	else if (operator=='*')
	{
		printf("Result=%.2f",num1*num2);
	}
	else if (operator=='/')
	{
		if(num2!=0)
		printf("Result=%.2f",num1/num2);
		else 
		printf("Error! Division by zero. ");
	}
	else{
		printf("Invaild operator");
	}
	return 0;
}
