//COMPLEXITY
//Time Complexity: O(n^2)
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void insertion_sort(int *a, int n)
{
	for (int i = 1; i < n; i++) 
    {
    	int j = i; 

    	while (j > 0 && a[j-1] > a[j]) 
    	{
        	swap(a[j], a[j-1]); 
        	j--;
    	}
	}
}

int main()
{
	int num;
	
	cin>>num;
	int *a = new int[n];
	for (int i = 0; i < num; ++i)
		cin>>a[i];

	insertion_sort(a, num);

	// printing the sorted list
	for (int i = 0; i < num; ++i)
		cout<<a[i]<<' ';	
	cout<<endl;

	return 0;
}