#include<stdio.h>
int n=110,n1=700,i,j,x=5,y=5,l=10,b=10,x1=5,y1=100,x2=5,y2=50,x3=5,y3=60;
char a[700][110];

int main()
{
    space(n);
    while(1)
    {
    hash(n);
    x=x+l;
    y=y+b;

    reverse(n);
    x1=x1+l;
    y1=y1-b;
    print(n);
    }

}
space(int n)
{
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=' ';
        }
    }
}
hash(int n)
{
    for(i=x;i<x+l;i++)
    {
        for(j=y;j<y+b;j++)
        {
            a[i][j]='#';
        }
    }
}
middleLeft(int n)
{
    for(i=x2;i<x2+l;i++)
    {
        for(j=y2;j<y2+b;j++)
        {
            a[i][j]='#';
        }
    }

}
middleRight(int n)
{
    for(i=x3;i<x3+l;i++)
    {
        for(j=y3;j<y3+b;j++)
        {
            a[i][j]='#';
        }
    }

}
reverse(int n)
{
    for(i=x1;i<x1+l;i++)
    {
        for(j=y1;j<y1+l;j++)
        {
            a[i][j]='#';
        }
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
