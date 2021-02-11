#include<stdio.h>

    void main()
    {
        char name;
        int day;
        scanf("%c",&name);
        scanf("%d",&day);
        if(day>0 && day<=31 && name>='A' && name<='Z')
        {
            if(day%2!=0)
            {
                if(day%10==5)
                {
                    printf("%c",92);
                }
                if(name>='A' && name<='I')
                {
                    printf("(^_^)");
                }
                else if(name>='J' && name<='R')
                {
                    printf("(*o*)");
                }
                else if(name>='S' && name<='Z')
                {
                    printf("(T_T)");
                }
                if(day%10==5)
                {
                    printf("/");
                }
            }
            else if(day%2==0)
            {
                if(day%10==5)
                {
                    printf("%c",92);
                }
                if(name>='A' && name<='I')
                {
                    printf("{@_@}");
                }
                else if(name>='J' && name<='R')
                {
                    printf("{*v*}");
                }
                else if(name>='S' && name<='Z')
                {
                    printf("{x_x}");
                }
                if(day%10==5)
                {
                    printf("/");
                }
            }
        }

    }
