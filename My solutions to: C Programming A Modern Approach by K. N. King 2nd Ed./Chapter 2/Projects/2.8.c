//
//  2.8.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/22.
//

#include <stdio.h>

int main(void)
{
    float input, interestpa, interestpm, payment, x1, x2, x3;
    printf("Enter amount of loan: ");
    scanf("%f", &input);
    printf("Enter interest rate: ");
    scanf("%f", &interestpa);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    
    interestpm = interestpa / 12;
    
    
    x1 = (input - payment) + (input * interestpm / 100);
    x2 = (x1 - payment) + (x1 * interestpm / 100);
    x3 = (x2 - payment) + (x2 * interestpm / 100);

    printf("Balance remaining after first payment: %.2f\n", x1);
    printf("Balance remaining after second payment: %.2f\n", x2);
    printf("Balance remaining after third payment: %.2f\n", x3);

}
