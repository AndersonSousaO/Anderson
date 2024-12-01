#include<stdio.h>

int main()
{
    for (int i = 1; i < 41; i++)
    {
        if(i*i > 1600){
              break;
        }
        else{
            printf("%d ao quadrado: %d\n",i,(i*i));
        }
    }
}        