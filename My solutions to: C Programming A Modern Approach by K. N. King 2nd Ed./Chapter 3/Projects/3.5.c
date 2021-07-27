//
//  3.5.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/07/27.
//

#include <stdio.h>

int main(void)
{
    int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen, row1, row2, row3, row4, col1, col2, col3, col4, dia1, dia2;
    
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
    
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);
    
    row1 = one + two + three + four;
    row2 = five + six + seven + eight;
    row3 = nine + ten + eleven + twelve;
    row4 = thirteen + fourteen + fifteen + sixteen;
    printf("Row sums:\t%d\t%d\t%d\t%d\n", row1, row2, row3, row4);
    
    col1 = one + five + nine + thirteen;
    col2 = two + six + ten + fourteen;
    col3 = three + seven + eleven + fifteen;
    col4 = four + eight + twelve + sixteen;
    printf("Column sums:\t%d\t%d\t%d\t%d\n", col1, col2, col3, col4);
    
    dia1 = one + six + eleven + sixteen;
    dia2 = thirteen + ten + seven + four;
    printf("Diagonal sums:\t%d\t%d\n", dia1, dia2);
}
