#include<stdio.h>

   void main() {

        int a,b,c,sum;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        sum=a+b+c;
        if( (a>=0 && a<=30)&&(b>=0 && b<=30)&&(c>=0 && c<=40) ) {
            if(sum>=0 && sum<50)
            {
                printf("F");
            }
            else if(sum<55)
            {
                printf("D");
            }
            else if(sum<60)
            {
                printf("D+");
            }
            else if(sum<65)
            {
                printf("C");
            }
            else if(sum<70)
            {
                printf("C+");
            }
            else if(sum<75)
            {
                printf("B");
            }
            else if(sum<80)
            {
                printf("B+");
            }
            else if(sum<=100)
            {
                printf("A");
            }

        }

    }
