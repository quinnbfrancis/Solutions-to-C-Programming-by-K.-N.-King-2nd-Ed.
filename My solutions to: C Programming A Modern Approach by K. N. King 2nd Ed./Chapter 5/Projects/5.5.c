//
//  5.5.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    float income, tax;
    printf("Enter your taxable income: ");
    scanf("%f", &income);
    
    if (income < 750.00f)
        tax=income/100;
    else if (income >=750.00f && income <=2250.00f)
        tax=7.5f+(income-750)/50;
    else if (income >2250.00f && income <=3750.00f)
        tax=37.5f+(income-2250)/100*3;
    else if (income >3750.00f && income <=5250.00f)
        tax=82.5f+(income-3750)/25;
    else if (income >5250.00f && income <=7000.00f)
        tax=142.5f+(income-5250)/20;
    else
        tax=217.5f+(income-7000)/100*6;
    
    printf("Tax owed is: $%.2f\n", tax);
}
