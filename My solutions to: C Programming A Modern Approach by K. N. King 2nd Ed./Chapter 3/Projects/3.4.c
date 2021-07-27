//
//  3.4.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/27.
//

#include <stdio.h>

int main(void)
{
    int one, two, three;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d )%3d -%4d", &one, &two, &three);
    printf("You entered: %.3d.%.3d.%.4d\n", one, two, three);
}
