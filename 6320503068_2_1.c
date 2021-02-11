#include<stdio.h>

   void main() {

        int a,b,c,sum;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if( (a>=0 && a<=30)&&(b>=0 && b<=30)&&(c>=0 && c<=39) ) {
            sum=a+b+c;
            if(sum>=0 && sum<50)
            {
                printf("F");
            }
            if(sum>=50 && sum<55)
            {
                printf("D");
            }
            if(sum>=55 && sum<60)
            {
                printf("D+");
            }
            if(sum>=60 && sum<65)
            {
                printf("C");
            }
            if(sum>=65 && sum<70)
            {
                printf("C+");
            }
            if(sum>=70 && sum<75)
            {
                printf("B");
            }
            if(sum>=75 && sum<80)
            {
                printf("B+");
            }
            if(sum>=80 && sum<=100)
            {
                printf("A");
            }

        }

    }
