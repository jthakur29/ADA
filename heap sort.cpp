#include<iostream>
using namespace std;
int n,heapsize;
void heapify(int a[],int i)
{
	int l,r,max;
	l=2*i+1;
	r=2*i+2;
	max=i;
	if(l<=heapsize && a[l]>a[max])
	{
		max=l;
	}
	if(r<=heapsize && a[r]>a[max])
	{
		max=r;
	}
	if(i!=max)
	{
		swap(a[max],a[i]);
		heapify(a,max);
	}
}
void buildheap(int a[])
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,i);
	}
}
void heapsort(int a[])
{
	buildheap(a);
	while(heapsize>=1)
	{
		swap(a[0],a[heapsize]);
		heapsize--;
		heapify(a,0);
	}

}
int main()
{
	cout<<"enter the no of elemnets";
	cin>>n;
	int a[n];
	cout<<"enter the elemnets";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	heapsize=n-1;
	heapsort(a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
