//
//  2.5.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/22.
//

#include <stdio.h>

int main(void)
{
    int input, answer;
    printf("Enter a value for x: ");
    scanf("%d", &input);
    answer = 3 * input * input * input * input * input + 2 * input * input * input * input - 5 * input * input * input - input * input + 7 * input -6;
    printf("If x=%d then 3x^5 +2x^4 -5x^3 -x^2 +7x -6= %d\n", input, answer);
    
    return 0;
    
}
