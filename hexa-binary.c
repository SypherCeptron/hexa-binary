#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int bin_hexa(int);
unsigned int bin_octal(unsigned int);
unsigned int hexa_bin(unsigned int);
unsigned int octal_bin(unsigned int);

int main()
{
    unsigned int a,x,c;

    printf("Enter the type of conversion\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:printf("Enter the Number to be converted\n");
               scanf("%x",&a);
               x=bin_hexa(a);
               printf("\n%x\n",x);
               break;
        case 2:printf("Enter the Number to be converted\n");
               scanf("%x",&a);
               x=hexa_bin(a);
               printf("\n%x\n",x);
               break;
        case 3:printf("Enter the Number to be converted\n");
               scanf("%o",&a);
               x=octal_bin(a);
               printf("\n%o\n",x);
               break;
        case 4:printf("Enter the Number to be converted\n");
               scanf("%o",&a);
               x=bin_octal(a);
               printf("\n%o\n",x);
               break;

    }
    return 0;
}

unsigned int hexa_bin(unsigned int z)
{
    unsigned int s=0x0,x,d,i=0,fi=0x0;
    x=z;

    do
    {
        d=x%0x10;
        x=x/0x10;
        do
        {
            i++;
            s=s*0x10+d%0x2;

            d=d/0x2;

        }while(d!=0x0);

     }while(x!=0x0);
     printf("%x",s);
     while(i!=0)
     {
        i--;
        d=s%0x10;
        fi=fi*0x10+d;
        s=s/0x10;
     }
    return fi;
}
int bin_hexa(int z)
{
    int i=0x0,s=0x0,x=z;
    while(x!=0x0)
    {
    s=s+(x%0x10)*pow(0x2,i);
    x=x/0x10;
    i++;
    }
    return s;
}
unsigned int octal_bin(unsigned int z)
{
    unsigned int s=00,x,d,i=0,fi=00;
    x=z;

    do
    {
        d=x%010;
        x=x/010;
        do
        {
            i++;
            s=s*010+d%02;

            d=d/02;

        }while(d!=00);

     }while(x!=00);
     printf("%o",s);
     while(i!=0)
     {
        i--;
        d=s%010;
        fi=fi*010+d;
        s=s/010;
     }
    return fi;
}


unsigned int bin_octal(unsigned int z)
{
    int i=00,s=00,x=z;
    while(x!=00)
    {
    s=s+(x%010)*pow(02,i);
    x=x/010;
    i++;
    }
    return s;
}




