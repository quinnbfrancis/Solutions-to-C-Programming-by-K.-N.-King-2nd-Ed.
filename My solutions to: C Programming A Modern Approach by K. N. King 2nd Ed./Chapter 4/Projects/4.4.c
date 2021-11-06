//
//  4.4.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/03.
//

#include <stdio.h>
int main(void)
{
    int a,x1,x2,x3,x4,x5;
    printf("Enter a number between 1 and 32767: ");
    scanf("%d",&a);
    
    x1=a%8;
    a/=8;
    x2=a%8;
    a/=8;
    x3=a%8;
    a/=8;
    x4=a%8;
    a/=8;
    x5=a%8;

    printf("In octal, your number is: %d%d%d%d%d\n", x5,x4,x3,x2,x1);
    
}

/*
 
 Second version that uses a macro
 
 #include <stdio.h>
 #define Z a/=8
 int main(void)
 {
     int a,x1,x2,x3,x4,x5;
     printf("Enter a number between 1 and 32767: ");
     scanf("%d",&a);
     
     x1=a%8;
     Z;
     x2=a%8;
     Z;
     x3=a%8;
     Z;
     x4=a%8;
     Z;
     x5=a%8;

     printf("In octal, your number is: %d%d%d%d%d\n", x5,x4,x3,x2,x1);
     
 */
