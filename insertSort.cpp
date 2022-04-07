#include<stdio.h>
#define MAX 100
void nhapMang(int A[], int n);
void xuatMang(int A[], int n);
void insertSort(int A[], int n);
int main ()
{
	int a[MAX];
	int n ;
	
	printf("Nhap n : ");
	scanf("%d",&n);
	printf("Nhap phan tu : \n");
	nhapMang(a,n);
	xuatMang(a,n);
	insertSort(a,n);
	printf("\nsau khi sap xep : ");
	xuatMang(a,n);
}
void nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
	
}
void xuatMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	printf("%d  ",A[i]);
}
void hoanvi(int &a , int &b)
{
	int hoanvi;
	hoanvi=a;
	a=b;
	b=hoanvi;
}
void insertSort(int A[], int n)
{
	int pos,x;
	for(int i = 0 ; i < n ; i ++)
	{
		x=A[i]; pos=i-1;
		while(x > A[pos] && pos>=0)
		{
			A[pos+1]=A[pos];
			pos--;
		}
		A[pos+1]=x;
	}
	
}


