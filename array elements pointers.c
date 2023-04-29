#include<stdio.h>
void main()
{
    int a[10],*p,i,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter the a[%d] element\n",i);
    	scanf("%d",&a[i]);
	}
	printf("the elements in an array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	p=a;
	for(i=0;i<n;i++)
	{
		printf("value of a[%d]=%d\n",i,a[i]);
		printf("value of a[%d]=%d\n",i,*p);
		printf("address of a[%d]=%d\n",i,&a[i]);
		printf("address of a[%d]=%d\n",i,p);
        p++;
	}
}
