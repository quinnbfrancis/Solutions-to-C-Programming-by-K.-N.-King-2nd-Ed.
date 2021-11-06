//
//  5.9.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>

int main(void)
{
    int m1,d1,y1,m2,d2,y2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/ %d/ %d",&m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/ %d/ %d",&m2, &d2, &y2);
    
    if (y1<y2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1,d1,y1,m2,d2,y2);
    else if (y2<y1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2,d2,y2,m1,d1,y1);
    else if (m1<m2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1,d1,y1,m2,d2,y2);
    else if (m2<y1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2,d2,y2,m1,d1,y1);
    else if (d1<d2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1,d1,y1,m2,d2,y2);
    else if (d2<d1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2,d2,y2,m1,d1,y1);
    else
        printf("INVALID INPUT");
    
    
}
