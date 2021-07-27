//
//  3.3.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/27.
//

#include <stdio.h>

int main(void)
{
    int gsi, grp, pub, item, chk;
    
    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gsi, &grp, &pub, &item, &chk);
    
    printf("GSI Prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem Number: %d\nCheck digit: %d\n", gsi, grp, pub, item, chk);
}
