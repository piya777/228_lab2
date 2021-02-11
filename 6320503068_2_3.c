#include<stdio.h>

    void main()
    {
        int a,b,c,token,i;
        char e[4] ,tmp;
        scanf("%d %d %d",&a,&b,&c);
        if( (a>0 && a<=100)&&(b>0 && b<=100)&&(b>0 && b<=100) )
        {
            for(i=0;i<6;i++)
            {
                if(a>b)
                {
                    token=b;
                    b=a;
                    a=token;
                }
                else if(b>c)
                {
                    token=c;
                    c=b;
                    b=token;
                }
            }
            gets(e);
            if(e[4]="ACB")
            {
                printf("%d %d %d",&a ,&c ,&b);
            }
            else if(e[4]="BAC")
            {
                printf("%d %d %d",&b ,&a ,&c);
            }
            else if(e[4]="BAC")
            {
                printf("%d %d %d",&b ,&c ,&a);
            }
            else if(e[4]="BAC")
            {
                printf("%d %d %d",&c ,&a ,&b);
            }
            else if(e[4]="BAC")
            {
                printf("%d %d %d",&c ,&b ,&a);
            }
        }
    }
