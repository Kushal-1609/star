#include<stdio.h>
int v=50,v1=50,v2=50,v3=50,v4=50,v5=50,v6=80,v7=80,v8=80,v9=80,v10=80,v11=80,i,j,n=100;
char a[100][100];
int main()
{
    space(n);
    hash(n);
    print(n);
}
space(int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=' ';
            if((j==50&&(i>=20&&i<=50))||(j==49&&(i>=21&&i<=50))||(j==51&&(i>=21&&i<=50)))
            {
                a[i][j]='#';
            }
        }
    }
}
hash(int n)
{
    for(i=20;i<=25;i++)
    {
        for(j=v;j<=v1;j++)
        {
            a[i][j]='#';
        }
        v=v-2;
        v1=v1+2;
    }

    for(i=27;i<=32;i++)
    {
        for(j=v2;j<=v3;j++)
        {
            a[i][j]='#';
        }
        v2=v2-4;
        v3=v3+4;
    }

    for(i=34;i<=39;i++)
    {
        for(j=v4;j<=v5;j++)
        {
            a[i][j]='#';
        }
        v4=v4-6;
        v5=v5+6;
    }

    //STAR
    for(i=10;i<=20;i++)
    {
        for(j=v6;j<=v7;j++)
        {
            a[i][j]='#';
        }
        v6=v6-2;
        v7=v7+2;
    }
    for(i=15;i>=12;i--)
    {
        for(j=v11;j>=v10;j--)
        {
            a[i][j]='#';
        }
        v10=v10-6;
        v11=v11+6;
    }
    for(i=15;i<=20;i++)
    {
        for(j=v8;j<=v9;j++)
        {
            a[i][j]=' ';
        }
        v8=v8-5;
        v9=v9+5;
    }
}
print(int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
