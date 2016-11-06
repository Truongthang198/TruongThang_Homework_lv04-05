#include <conio.h>
#include <stdio.h>

int main ()
{
    int a[10],n;
   printf("Nhap n = ");
   scanf("%d",&n);
 for(i =0; i<n ; i++)
   {
      printf("Phan tu %d =",i);
      scanf("%d", &a[i]);
   }
}

void (int a[10], int n)
{
   printf("\n");
   for(int i = 0; i<n ; i++)
   {
      printf("%d\t",a[i]);
   }

}

int void (a[10], int n, int b[10], int m, int C[10], int &h)
{
   h = m +n;
   for(int i = 0; i<h; i++)
   if(i<n)
      C[i] = a[i];
   else
      C[i] = b[i-n];

}
void main()
{
   clrscr();
   int a[100],b[100],c[100], n, m,h;
   printf("Nhap mang A");
   printf("Nhap mang B\n");
   printf("\nMang C\n");
   getch();
}
