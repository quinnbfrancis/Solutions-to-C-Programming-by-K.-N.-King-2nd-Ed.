//
//  2.4.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/22.
//

#include <stdio.h>

int main(void)
{
    float input, answer;
    
    printf("Enter an amount: ");
    scanf("%f", &input);
    answer = input * 105 / 100;
    printf("With tax added: $%.2f\n", answer);
    
    return 0;
    
}
