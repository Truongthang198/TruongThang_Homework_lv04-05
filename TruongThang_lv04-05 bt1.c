#include<stdio.h>

void main (int a[],int n)
{
            int i;
            for(i=0; i<n; i++)
                {
                        printf("Nhap a[%d]: ",i);
                        scanf("%d",&a[i]);
}

            printf("Cac phan tu co trong mang la:\n");
            for(i=0; i<n; i++) {
                        printf("a[%d] = %d\n",i,a[i]);
            }

void main() {
            int n;
            int a[n];
            do {
            printf("Nhap n: ");
            scanf("%d",&n);
            } while(n<2 || n>99);
            printf("Nhap a:");
            scanf ("%d",&a);
}
}
