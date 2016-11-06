#include<stdio.h>
#include<conio.h>
void main(void)
{
    float a,b,c,d;
    printf("Nhap vao so a:");
    scanf("%f", &a);
    printf("Nhap vao so b:");
    scanf("%f", &b);
    printf("Nhap vao so c:");
    scanf("%f", &c);
    printf("Nhap vao so d:");
    scanf("%f", &d);
    float min,max;
    max=min=a;

    if (b>max) max=b;
    if (c>max) max=c;
    if (d>max) max =d;

    if (b<min) min=b;
    if (c<min) min=c;
    if (d<min) min=d;

    printf("Max : %f \nMin : %f",max,min);

    getch ();
}
