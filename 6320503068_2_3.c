#include<stdio.h>

    void main()
    {
        int num[3],i,token,j;
        char eng[3];
        scanf("%d %d %d",&num[0],&num[1],&num[2]);
        fflush(stdin);
        scanf("%c %c %c",&eng[0],&eng[1],&eng[2]);
        for( i=0 ; i<2 ; i++ )
        {
            for( j=1 ; j<3 ; j++ )
            {
                if(num[i]>num[j])
                {
                    token=num[j];
                    num[j]=num[i];
                    num[i]=token;
                }
            }
        }
        for( i=0 ; i<3 ; i++ )
        {
            if(eng[i]=='A')
            {
                printf("%d",num[0]);
            }
            else if(eng[i]=='B')
            {
                printf("%d",num[1]);
            }
            else if(eng[i]=='C')
            {
                printf("%d",num[2]);
            }
            if(i<2)
            {
                printf(" ");
            }
        }

    }
