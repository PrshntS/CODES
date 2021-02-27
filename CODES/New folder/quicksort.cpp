
#include <bits/stdc++.h> 
using namespace std; 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition(int arr[], int l, int h) 
{ 
	int x = arr[h]; 
	int i = (l - 1); 

	for (int j = l; j <= h - 1; j++) { 
		if (arr[j] <= x) { 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[h]); 
	return (i + 1); 
} 

void quicksort(int arr[], int l, int h) 
{ 

	if (l<h)  
    {  
        
        int pi = partition(arr,l,h);  
        quicksort(arr,l,pi-1);  
        quicksort(arr,pi+1,h);  
    }  
} 

 
void printArr(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
} 


int main() 
{ 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(arr,0,-1); 
	printArr(arr,n); 
	return 0; 
} 

