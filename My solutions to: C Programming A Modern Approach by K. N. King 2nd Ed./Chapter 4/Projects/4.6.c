//
//  4.6.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,first_sum, second_sum, total;
    
    printf("Enter the First 12 digits of an EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);
    
    first_sum=i2+i4+i6+i8+i10+i12;
    second_sum=i1+i3+i5+i7+i9+i11;
    total=3*first_sum+second_sum;
    
    printf("Check digit: %d\n", 9-((total-1)%10));

}
