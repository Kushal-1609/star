#include<stdio.h>
#include<windows.h>
#include<unistd.h>
int n=50,n1=50,i,j,x=25,y=5,l=10,b=10,xs=1,ys=1;
char a[50][50];
int main()
{
    updating:
    while(1)
    {
        system("cls");
        space(n);
        hash(n);
        if(i==n-1)
        {
           goto updating1;
        }
        update0(n);
        print(n);
        sleep(.500);
    }
        updating1:
        while(1)
        {
            system("cls");
            space(n);
            hash(n);
            if(j==n1-1)
            {
                goto updating2;
            }
            update1(n);
            print(n);
            sleep(.500);
        }

        updating2:
            while(1)
            {
                system("cls");
                space(n);
                hash(n);
                if(i==l)
                {
                    goto updating3;
                }
                update2(n);
                print(n);
                sleep(.500);
            }

        updating3:
            while(1)
            {
                system("cls");
                space(n);
                hash(n);
                if(j==b)
                {
                    goto updating4;
                }
                update3(n);
                print(n);
                sleep(.500);
            }

        updating4:
            while(1)
            {
                system("cls");
                space(n);
                hash(n);
                if(i==n-1)
                {
                    goto updating1;
                }
                update4(n);
                print(n);
                sleep(.500);
            }





}

update0(int n)
{
    x=x+xs;
    y=y+ys;
}
update1(int n)
{
    x=x-xs;
    y=y+ys;
}
update2(int n)
{
    x=x-xs;
    y=y-ys;
}
update3(int n)
{
    x=x+xs;
    y=y-ys;
}
update4(int n)
{
    x=x+xs;
    y=y+ys;
}
space(int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            a[i][j]=' ';
            if(i==0||j==0||i==n-1||j==n1-1)
            {
                a[i][j]='#';
            }
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
print(int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
