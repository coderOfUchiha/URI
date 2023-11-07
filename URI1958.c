#include<stdio.h>
int main()
{
    double a;
    int c=0;
    scanf("%lf",&a);
    if(a>=1 && a<10)
    {
        printf("+%.4lfE+00\n",a);
    }
    else if(a>0 && a<1)
    {
        while(a<1)
        {
            a=a*10;
            c++;
            if(c==99)
            {
                break;
            }
        }
        if(c<10)
        {
            printf("+%.4lfE+0%d\n",a,c);
        }
        else if(c>=10)
        {
            printf("+%.4lfE+%d\n",a,c);
        }
    }
    else if(a>=10)
    {
        while(a>=10)
        {
            a=a/10;
            c++;
            if(c==99)
            {
                break;
            }
        }
        if(c<10)
        {
            printf("+%.4lfE+0%d\n",a,c);
        }
        else if(c>=10)
        {
            printf("+%.4lfE+%d\n",a,c);
        }
    }
    else if(a<0 && a> -1)
    {
        while(a>-1)
        {
            a=a*10;
            c++;
            if(c==9)
            {
                break;
            }
        }
        if(c<10)
        {
            printf("-%.4lfE-0%d\n",a,c);
        }
        else if(c>=10)
        {
            printf("-%.4lfE-%d\n",a,c);
        }
    }
    else if(a<=-1 && a>-10)
    {
        printf("-%.4lfE-00\n",a);
    }
    else if(a<=-10)
    {
        while(a<=-10)
        {
            a= a/10;
            c++;
            if(c==99)
            {
                break;
            }
        }
        if(c<10)
        {
            printf("-%.4lfE-0%d\n",a,c);
        }
        else if(c>=10)
        {
            printf("-%.4lfE-%d\n",a,c);
        }
    }
}
