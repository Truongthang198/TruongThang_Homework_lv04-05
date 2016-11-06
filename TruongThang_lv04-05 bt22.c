#include<stdio.h>
#include<conio.h>
#include<math.h>

int ucln(int a,int b)
{
	if(b=0)
    return a;
    return ucln(b,a%b);
}
main()
{
  int a[10],i,n,uc,bc;
	printf("n= ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	uc=ucln(a[0],a[1]);

	for(i=2;i<n;i++) uc=ucln(uc,a[i]);
	printf("UCLN = %d",uc);
getch ();
}
