#include <stdio.h>

int main(){
    
 // declaration of vars section 

    char operator; 
    double num1;
    double num2;
    double result;
 // bgin
    printf("enter on of those operators (+ ,-,/,*)");
    scanf("%c", &operator);
    printf("enter the first number");
    scanf("%lf",&num1);
    printf("enter the second number");
    scanf("%lf",&num2);
    switch (operator)
    {
    case '+':
        result =num1 + num2 ;
        break;
    case '/':
        result =num1 / num2 ;
        break;
    case '-':
        result =num1 - num2 ;
        break;
    case '*':
        result =num1 * num2 ;
        break;
    default:
    printf("wrong operator  \n");
        break;
    }

    printf("the result is %lf", result);
    return 0;
}