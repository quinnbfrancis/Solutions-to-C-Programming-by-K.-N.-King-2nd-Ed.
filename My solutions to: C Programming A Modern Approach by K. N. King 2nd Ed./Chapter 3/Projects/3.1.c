//
//  3.1.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/27.
//

#include <stdio.h>

int main(void)
{
    int d, m, y;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &m, &d, &y);
    printf("You entered the date %.4d%.2d%.2d\n", y, m, d);
    
}
