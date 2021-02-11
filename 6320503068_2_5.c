#include<stdio.h>

    void main()
    {
        int day,month,l,result;
        scanf("%d %d",&day ,&month);
        if(day>7)
        {
            day=day%7;
        }
        switch(month)
        {
            case 1: l=31;break;
            case 2: l=28;break;
            case 3: l=31;break;
            case 4: l=30;break;
            case 5: l=31;break;
            case 6: l=30;break;
            case 7: l=31;break;
            case 8: l=31;break;
            case 9: l=30;break;
            case 10: l=31;break;
            case 11: l=30;break;
            case 12: l=31;break;
        }
        if((l+day)%7==0)
        {
            printf("%d",7);
        }
        else
        {
            printf("%d",(l+day)%7);;
        }

    }

