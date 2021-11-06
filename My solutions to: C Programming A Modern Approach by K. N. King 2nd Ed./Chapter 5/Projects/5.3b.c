//
//  5.3b.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    float commission1, commission2, price, number=0, value;
    
    printf("Enter number of shares and price per share: ");
    scanf("%f $%f",&number, &price);
    
    value=number * price;
    
    if (value <2500.00f)
        commission1 = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission1 = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission1 = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission1 = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission1 = 155.00f + 0.0011f * value;
    else
        commission1 = 255.00f + 0.0009f * value;
    
    if (commission1 <39.00f)
        commission1 = 39.00f;
    
    printf("Commission for original broker is: $%.2f\n", commission1);
    
    if (number < 2000)
        commission2 = 33.00f + 0.03f * number;
    else commission2 = 33.00f + 0.02f * number;
    
    printf("Commission for rival broker is: $%.2f\n", commission2);
    return 0;
}

