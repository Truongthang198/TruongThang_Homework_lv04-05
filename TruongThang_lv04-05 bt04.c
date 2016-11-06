#include<stdio.h>
#include<conio.h>
#include<math.h>
long Fibonaci(long n);
void main()
{
   long n;
   printf("Nhap vao mot so nguyen duong: ");
   scanf ("%d",&n);
   printf("Vay so Fibonaci dau tien la: ");
   Fibonaci(n);
   getch();
}
long Fibonaci(long n)
{
   int f1=0,f2=1,fi;
   fi=f2;
for(i=0;i<n;i++)
   {
    printf ("Fibonaci : ");
        fi=f1+f2;
        f1=f2;
        f2=fi;
   }
   return fi;
}
