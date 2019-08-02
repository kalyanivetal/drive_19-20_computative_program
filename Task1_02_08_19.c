#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Display(int[],int);

void Display(int arr[],int size)
{
	int i=0,iMax1=0,iMax2=0;
//	iMax1=arr[0];
//	iMax2=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>iMax1)
		{
		iMax1=arr[i];
		}
	}
	for(i=0;i<size;i++)
         {
                 if(arr[i]>iMax2 && arr[i]!=iMax1)
                 {
                         iMax2=arr[i];
                 }
	}
	for(i=0;i<size;i++)
         {	
		if(arr[i]!=iMax1 && arr[i]!=iMax2)
		{
			printf("%d\t",arr[i]);
		}
	 }

}
int main()
{	int i=0,iLength1=0,iLength2=0;
	int Ret=0;
    int *p2=NULL;
	int *p1=NULL;
printf("Enter No. of Elements in ARRAY-1: \n");
scanf("%d",&iLength1);

p1=(int *)malloc(iLength1*sizeof(int));
if(p1==NULL)
{
    return -1;    
}

printf("Enter Elements of ARRAY-1: \n");
for(i=0;i<iLength1;i++)
{
    scanf("%d",&p1[i]);
}
Display(p1,iLength1);
return 0;
}
