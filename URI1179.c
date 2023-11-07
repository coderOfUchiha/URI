#include<stdio.h>
int main()
{
    int a[15],i,j,k=0,l,m,n=0,even=0,odd=0,o=0,p=0,q=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<15;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
   if(even<5)
   {
      for(j=0;j<even;j++)
   {
     for(i=k;i<15;i++)
      {
        if(a[i]%2==0)
        {
            printf("par[%d] = %d\n",j,a[i]);
            k=i+1;
            break;
        }

    }

   }
   }
   else
   {
       for(j=0;j<5;j++)
   {
     for(i=k;i<15;i++)
      {
        if(a[i]%2==0)
        {
            printf("par[%d] = %d\n",j,a[i]);
            k=i+1;

            break;
        }
    }

   }
   }


   for(l=0;l<3;l++)
   {
       if(o==odd)
       {
           break;
       }
       for(m=0;m<5;m++)
       {
          for(i=n;i<15;i++)
          {
           if(a[i]%2==1 || a[i]%2==-1)
          {
            printf("impar[%d] = %d\n",m,a[i]);
            o++;
            n=i+1;
            break;
          }
         }

       }

   }
if(even>5)
{
   for(p=0;p<2;p++)
   {
    for(j=0;j<5;j++)
     {
      for(i=k;i<15;i++)
      {
        if(a[i]%2==0)
        {
            printf("par[%d] = %d\n",j,a[i]);
            q++;
            k=i+1;
            break;
        }
     }

   }
   if(q==(even-5))
   {
       break;
   }
   }
}

  }

