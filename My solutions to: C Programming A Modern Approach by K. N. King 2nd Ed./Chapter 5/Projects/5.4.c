//
//  5.4.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    float wind;
    printf("Enter a wind speed(in knots): ");
    scanf("%f",&wind);
    
    if (wind>=0 && wind <1)
        printf("The wind is Calm\n");
    else if (wind>=1 && wind<=3)
        printf("There is a Light Air\n");
    else if (wind>=4 && wind<=27)
        printf("There is a Breeze\n");
    else if (wind>=28 && wind<=47)
        printf("There is a Gale\n");
    else if (wind>=48 && wind<=63)
        printf("There is a Storm\n");
    else if (wind>=63)
        printf("There is a Hurricane\n");
    else
        printf("Invalid wind speed entered\n");
    
    
}
