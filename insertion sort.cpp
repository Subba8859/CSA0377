#include<stdio.h>
void insertion_sort(int A[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		j=i;
		while(A[j]<A[j-1]&&j>0);
		{
			t=A[j];
			A[j]=A[j-1];
			A[j-1]=t;
			j--;
		
		}
	}
}
int main()
 {
 	int i,n,A[100];
 	printf("Enter the n value");
 	scanf("%d",&n);
 	printf("Enter the elements in an array:");
 	for(i=0;i<n;i++)
 	    scanf("%d",&A[i]);
    insertion_sort(A,n);
    printf("The sorted element in array\n");
 	for(i=0;i<n;i++)
 	   printf("%d\t",A[i]);
 	
	 return 0;
 }
