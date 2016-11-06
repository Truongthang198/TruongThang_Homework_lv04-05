#include <stdio.h>
 main ()
{
    float a,b,c,max,min;

    printf("\n Nhap vao 3 so :");
    scanf("%f%f%f",&a,&b,&c);
    if (a<b)
       {
        min=a;
        max =b;
       }
    else
        min=b;
        max=a;
    if (max <c)
        max=c;
    else
        min=c;
    printf("\n Gia tri lon nhat = %.1f", max);
    printf("\n Gia tri nho nhat = %.1f", min);
    getch();
    return 0;
}
