#include<stdio.h>

    void main()
    {
        int day,month,l,result;
        scanf("%d %d",&day ,&month);
        switch(month)
        {
            case 1: l=31;
            case 2: l=28;
            case 3: l=31;
            case 4: l=30;
            case 5: l=31;
            case 6: l=30;
            case 7: l=31;
            case 8: l=31;
            case 9: l=30;
            case 10: l=31;
            case 11: l=30;
            case 12: l=31;
        }
       result=day+l;
       if(result>l)
       {
           result -= l;
       }
       printf("%d",result+2);

    }

