//
//  2.7.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/22.
//

#include <stdio.h>

int main(void)

{
    int input, twenty, ten, five, one;
    printf("Enter a dollar amount:");
    scanf("%d", &input);
    twenty = input / 20;
    ten = (input - twenty * 20) / 10;
    five = (input - twenty * 20 - ten * 10) / 5;
    one = (input - twenty * 20 - ten * 10 - five * 5);
    
    printf ("$20 bills: %d\n", twenty);
    printf ("$10 bills: %d\n", ten);
    printf ("$5 bills: %d\n", five);
    printf ("$1 bills: %d\n", one);

    return 0;
}
