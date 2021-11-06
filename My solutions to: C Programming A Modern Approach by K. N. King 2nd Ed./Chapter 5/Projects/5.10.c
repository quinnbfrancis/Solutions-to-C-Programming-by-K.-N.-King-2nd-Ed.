//
//  5.10.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int grade,letter;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    if (grade<0 || grade>100)
        letter=0;
    else if (grade>=90 && grade<=100)
        letter=1;
    else if (grade>=80 && grade<89)
        letter=2;
    else if (grade>=70 && grade<79)
        letter=3;
    else if (grade>=60 && grade<69)
        letter=4;
    else
        letter=5;
    
    switch(letter){
     case 0:
        printf("ERROR\n");
            break;
     case 1:
        printf("Letter Grade: A\n");
            break;
     case 2:
        printf("Letter Grade: B\n");
            break;
     case 3:
        printf("Letter Grade: C\n");
            break;
     case 4:
        printf("Letter Grade: D\n");
            break;
     case 5:
        printf("Letter Grade: F\n");
            break;
    }
        
}
