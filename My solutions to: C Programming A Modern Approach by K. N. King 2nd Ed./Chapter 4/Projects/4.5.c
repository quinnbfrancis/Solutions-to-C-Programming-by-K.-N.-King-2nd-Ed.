//
//  4.5.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum, second_sum, total;
    
    printf("Enter the First 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
    
    first_sum=d+i2+i4+j1+j3+j5;
    second_sum=i1+i3+i5+j2+j4;
    total=3*first_sum+second_sum;
    
    printf("Check digit: %d\n", 9-((total-1)%10));
}
