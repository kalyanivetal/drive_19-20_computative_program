#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void PrimeAlt(int[],int);

void PrimeAlt(int arr[],int size)
{
int i=0,j=0,cnt=0,cnt2=0;
for(i=0;i<size;i++)
{
	cnt=0;
  for(j=2;j<=(arr[i]/2);j++)
  {
  	if(arr[i]%j==0)
	{
		cnt=1;
	}
  }
   if(cnt==0) 
         {
                // printf("Prime:%d\t",arr[i]);
		 cnt2++;
		 if(cnt2%2!=0)
		 {
		 	printf("%d\t" ,arr[i]);
		 }
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
PrimeAlt(p1,iLength1);
return 0;
}
