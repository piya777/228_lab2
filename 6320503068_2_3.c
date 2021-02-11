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
            scanf("%s%s%s",&e[0],&e[1],&e[2]);
            if(e[0]='A'&&e[1]='C'&&e[2]='B')
            {
                printf("%d %d %d",&a ,&c ,&b);
            }
            else if(e[0]="B"&&e[1]="A"&&e[2]="C")
            {
                printf("%d %d %d",&b ,&a ,&c);
            }
            else if(e[0]="B"&&e[1]="C"&&e[2]="A")
            {
                printf("%d %d %d",&b ,&c ,&a);
            }
            else if(e[0]="C"&&e[1]="A"&&e[2]="B")
            {
                printf("%d %d %d",&c ,&a ,&b);
            }
            else if(e[0]="C"&&e[1]="B"&&e[2]="A")
            {
                printf("%d %d %d",&c ,&b ,&a);
            }
        }
    }
