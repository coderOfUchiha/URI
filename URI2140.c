#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    while(a!=0 && b!=0)
    {
        scanf("%d %d",&a,&b);
        c=b-a;
        if(c>=100)
        {
            d=c-100;
            if(d==0)
            {
                printf("possible\n");

            }
            e=d-50;
            if(e==0)
            {
                printf("possible\n");

            }
            f=e%20;
            if(f==0)
            {
                printf("possible\n");

            }

            g=f-10;
            if(g==0)
            {
                printf("possible\n");

            }
            h=g-5;
            if(h==0)
            {
                printf("possible\n");

            }
            i=h%2;
            if(i==0)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if(c>=50 && c<100)
        {
            e=c-50;
            if(e==0)
            {
                printf("possible\n");

            }
            f=e-20;
            if(f==0)
            {
                printf("possible\n");

            }
            g=f-10;
            if(g==0)
            {
                printf("possible\n");

            }
            h=g-5;
            if(h==0)
            {
                printf("possible\n");

            }
            i=h-2;
            if(i==0)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if(c>=20 && c<50)
        {
            f=c-20;
            if(f==0)
            {
                printf("possible\n");

            }
            g=f-10;
            if(g==0)
            {
                printf("possible\n");

            }
            h=g-5;
            if(h==0)
            {
                printf("possible\n");

            }
            i=h-2;
            if(i==0)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if(c>=10 && c<20)
        {
            g=c-10;
            if(g==0)
            {
                printf("possible\n");

            }
            h=g-5;
            if(h==0)
            {
                printf("possible\n");

            }
            i=h-2;
            if(i==0)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if(c>=5 && c<10)
        {

            h=c-5;
            if(h==0)
            {
                printf("possible\n");

            }
            i=h-2;
            if(i==0)
            {
                printf("possible\n");
            }
           else
            {
                printf("impossible\n");
            }
        }
        else if(c>=2 && c<5)
        {
            i=c-2;
            if(i==0)
            {
                printf("possible\n");
            }
           else
            {
                printf("impossible\n");
            }
        }


    }
    return 0;
}
