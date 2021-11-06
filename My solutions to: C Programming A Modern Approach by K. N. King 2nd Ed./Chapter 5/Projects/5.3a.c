//
//  5.3a.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    float commission, price, number, value;
    
    printf("Enter number of shares and price per share: ");
    scanf("%f $%f",&number, &price);
    
    value=number * price;
    
    if (value <2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;
    
    if (commission <39.00f)
        commission = 39.00f;
    
    printf("Commission: $%.2f\n", commission);
    
    return 0;
}

