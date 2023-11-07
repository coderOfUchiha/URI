#include<stdio.h>
int main()
{
    char a[15],b[15],c[15];
    gets(a);
    gets(b);
    gets(c);
    if(strcmp(a,"vertebrado")==0)
    {
     if(strcmp(b,"ave")==0)
      {
        if(strcmp(c,"carnivoro")==0)
        {
            printf("aguia");
        }
        else
        {
          if(strcmp(c,"onivoro")==0)
            {
               printf("pomba");
            }
        }
      }
      else
      {
          if(strcmp(b,"mamifero")==0)
          {
              if(strcmp(c,"onivoro")==0)
              {
                  printf("homem");
              }
          }
          else
          {
              if(strcmp(c,"herbivoro")==0)
              {
                  printf("vaca");
              }
          }
      }


    }


}
