#include<stdio.h>

    void main()
    {
        unsigned long long int N;
        int i;
        scanf("%llu",&N);
        if(N>=0 && N<=pow(10,1000000))
        {
            while((N/10)>0)
            {
                switch(N[i])
                {
                    case 0:printf("Zero");
                    case 1:printf("One");
                    case 2:printf("Two");
                    case 3:printf("Three");
                    case 4:printf("Four");
                    case 5:printf("Five");
                    case 6:printf("Six");
                    case 7:printf("Seven");
                    case 8:printf("Eight");
                    case 9:printf("Nine");
                }
                N/=10;
            }
        }

    }

