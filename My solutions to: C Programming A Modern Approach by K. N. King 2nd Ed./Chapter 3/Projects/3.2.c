//
//  3.2.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/27.
//

#include <stdio.h>

int main(void)
{
    int item, d, m, y;
    float price;
    
    printf("Enter item number: ");
    scanf("%d", &item);
    
    printf("Enter unit price: ");
    scanf("%f", &price);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &m, &d, &y);
    
    
    printf("\nItem\t\t\tUnit\t\t\t\tPurchase\n");
    printf("\t\t\t\tPrice\t\t\t\tDate\n");
    printf("%d\t\t\t$%8.2f\t\t\t%.2d/%.2d/%.4d\n", item, price, m, d, y);

}
