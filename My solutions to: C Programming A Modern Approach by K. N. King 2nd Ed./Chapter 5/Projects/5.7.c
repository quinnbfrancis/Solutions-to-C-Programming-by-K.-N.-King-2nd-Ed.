//
//  5.7.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
    int one, two, three, four,largest,smallest,large1,small1,large2,small2;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &one, &two, &three, &four);
    
    if (one>=two){
        large1=one;
        small1=two;
    } else {
        large1=two;
        small1=one;
    }
    if (three>=four){
        large2=three;
        small2=four;
    } else {
        large2=four;
        small2=three;
    }
    if (large1>=large2)
        largest=large1;
    else
        largest=large2;
    if (small1 <= small2)
        smallest=small1;
    else
        smallest=small2;
        
        printf("Largest: %d\nSmallest: %d\n",largest,smallest);
}
