#include <stdio.h>
main ()
{
    float a[5],s;
    int i;
    for (i=0;i<5;i++)
    {
        printf ("\n a[%d] =",i);
        scanf("%f",&a[i]);
    }
    s=0;
    for (i=0;i<5;i++)
    s+= a[i];
    printf ("\n tong = %8.2f",s);
}
