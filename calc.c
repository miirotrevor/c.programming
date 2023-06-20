#include <stdio.h>

int main(){
    int num1, num2;
    int sum;
    int product;
    int division;
    int minus;
    printf("please enter first number:\n");
    scanf("%d",&num1);
    printf("please enter second number:\n");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("the sum is %d\n",sum);
    // mult
    product = num1 * num2;
     printf("the product is %d\n",product);
     // division
    division = num1 / num2;
    printf("the division is %d\n",division);
    // subtraction
    minus = num1 - num2;
    printf("the minus is %d\n",minus);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}