#include<stdio.h>
    void main()
    {
        int num[3],i,token,j,tokens[3];
        char eng[3];
        scanf("%d %d %d",&num[0],&num[1],&num[2]);
        scanf("%s",eng);
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
                tokens[i]=num[0];
            }
            else if(eng[i]=='B')
            {
                tokens[i]=num[1];
            }
            else if(eng[i]=='C')
            {
                tokens[i]=num[2];
            }
        }
        printf("%d %d %d",tokens[0],tokens[1],tokens[2]);

    }
