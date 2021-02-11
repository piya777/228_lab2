#include<stdio.h>

    void main()
    {
        int x,y;
        float n,z=0;
        char a;
        scanf("%c",&a);
        scanf("%f",&n);
        x=n;
        y=n*100;
        y%=100;
        if(a=='A'){
            z+=199;
            if(n>200){
                x-=200;
                z+=x*3;
                z+=y*3/60.0;
            }
        }else if(a=='B'){
            z+=299;
            if(n>400){
                x-=400;
                z+=x*2;
                z+=y*2/60.0;
            }
        }
        printf("%.2f",z);

    }
