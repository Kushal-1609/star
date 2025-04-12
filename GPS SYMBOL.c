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

    for(i=50;i<60;i++)
    {
        for(j=v3;j<=v4;j++)
        {
            a[i][j]=' ';
        }
        v3=v3-2;
        v4=v4+2;
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
