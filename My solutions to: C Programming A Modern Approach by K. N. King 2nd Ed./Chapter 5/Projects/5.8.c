//
//  5.8.c
//  My solutions to: C Programming A Modern Approach by K. N. King 2nd Ed.
//
//  Created by Quinn Francis on 2021/08/04.
//

#include <stdio.h>
int main(void)
{
int hours, minutes, msm;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours,&minutes);
    msm=hours*60+minutes;
    
 if (msm>144 && msm<531.5)
     printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
else if (msm>144 && msm<531.5)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
else if (msm>531.5 && msm<631)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
else if (msm>631 && msm<695)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
else if (msm>695 && msm<747.5)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
else if (msm>747.5 && msm<836.5)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
else if (msm>836.5 && msm<986.5)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
else if (msm>986.5 || msm<144)
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

}

/*
 480  335.5  <144.5> 51.5 <531.5>
 583 51.5 <531.5> 48 <631>
 679 48 <631> 16 <695>
 711 16 <695> 36.5 <747.5>
 784 36.5 <747.5> 52.5 <836.5>
 889 52.5 <836.5> 97.5 <986.5>
 1084 97.5 <986.5> 82.5 <1166.5>
 1249(191) 82.5 <1166.5> 335.5 <144.5>
 
 1440
 */
