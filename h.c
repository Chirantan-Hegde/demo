#include<stdio.h>
int main()
{
    double num1, num2, result;
    char operator;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second numbere:");
    scanf("%d",&num2);
switch (operator)
{
case '+': result= num1+num2;break;
case '-': result= num1-num2;break;
case '*': result= num1*num2;break;
case '/': 
if (num2!=0)
{
    result= num1/num2;
}
else
{
printf("Division by zero is not possible.");
return 1;
break;
}

default:
printf("Invalid Operator!");
return 1;
    break;
}
printf("Result:%d%c%d=%d", num1, operator, num2,result );
return 0;
}