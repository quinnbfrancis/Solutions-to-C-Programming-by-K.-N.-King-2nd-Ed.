//
//  5.2.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d",&hour, &minute);
    
if (hour >= 0 && hour<=11)
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    
else if (hour >= 12 && hour<=23)
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
else
    printf("Invalid time\n");
}
