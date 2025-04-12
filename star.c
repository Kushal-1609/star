#include<stdio.h>
int main()
{
    int i,j,v1=50,v2=50,v3=50,v4=50;
    char a[100][100];
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            a[i][j]=' ';
        }
    }

    for(i=40;i<60;i++)
    {
        for(j=v1;j<=v2;j++)
        {
            a[i][j]='#';
        }
        v1--;
        v2++;
    }

    for(i=53;i<60;i++)
    {
        for(j=v3;j<=v4;j++)
        {
            a[i][j]=' ';
        }
        v3=v3-4;
        v4=v4+4;
    }

    for(i=46;i<53;i++)
    {
        for(j=v1;j<=v2;j++)
        {
            a[i][j]='#';
        }
        v1=v1+4;
        v2=v2-4;
    }

    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
