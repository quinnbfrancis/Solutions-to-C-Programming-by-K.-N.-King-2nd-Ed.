//
//  5.1.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
if ((x>=0 && x<=9) || (x<=0 && x>=-9))
    printf("The number %d has 1 digit\n", x);
else if ((x>=10 && x<=99)||(x<=-10 && x>=-99))
    printf("The number %d has 2 digits\n", x);
else if ((x>=100 && x<=999)||(x<=-100 && x>=-999))
    printf("The number %d has 3 digits\n", x);
else if ((x>=1000 && x<=9999)||(x<=-1000 && x>=-9999))
    printf("The number %d has 4 digits\n", x);
else printf("Invalid number\n");
}
