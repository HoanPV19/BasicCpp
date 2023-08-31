#include <iostream>
#include <math.h>
using namespace std;
void swap(int *a, int *b)
{
	int c;
	if (a < b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}
void bubble(int a[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 8; j++)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
	}
}
void insertion1(int a[])
{
	for (int i = 1; i < 9; i++)
	{
		int j = i;
		while (j > 0 && a[i] < a[j - 1])
			--j;
		int tmp = a[i];
		for (int k = i; k > j; k--)
			a[k] = a[k - 1];
		a[j] = tmp;
	}
}
void insertion2(int a[])
{
	for (int i = 1; i < 9; i++)
	{
		int tmp = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > a[j])
		{
			swap(a[j], a[j - 1]);
			--j;
		}
	}
}
int tmp[10000];
void mergesort(int a[], int left, int right)
{
	if(left>=right) return;
	int mid = (left + right)/2;
	mergesort(a,left, mid);
	mergesort(a,mid+1,right);
	int i = left, j = mid+1, x=0;
	while(i<=mid||j<=right)
	{
		if(i>mid) 
			tmp[x++]=a[j++];
		else if(j>right)
			tmp[x++]=a[i++];
		else if(a[i]<a[j]) 
			tmp[x++]=a[i++];
		else 
			tmp[x++]=a[j++];
	}
	for(int i=0;i<x;i++)
	a[left + i] = tmp[i];
}
void quick(int a[], int left, int right)
{
	int i=left, j=right;
	int pivot = a[left + rand()%(right-left)];
	while(i<=j)
	{
		while(a[i]<pivot) ++i;
		while(a[j]>pivot) --j;
		if(i<=j) 
		{
			swap(a[i], a[j]);
			++i, --j;
		}
	}
	if(left<j) quick(a,left,j);
	if(i<right) quick(a,i,right);
}
int main()
{
	int a[] = {1, 7, 3, 1, 3, 8, 7, 2, 3};
	// for (auto x : a)
	// 	cout << x << " ";
	// cout << "\n";
	// bubble(a);
	// for (auto x : a)
	// 	cout << x << " ";
	// insertion2(a);
	// cout << "\n";
	// for (auto x : a)
	// 	cout << x << " ";
	quick(a,0,8);
	cout << "\n";
	for (auto x : a)
		cout << x << " ";
	
}
