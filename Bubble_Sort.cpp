#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    //cout << "swap called" <<endl;
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void bubble_sort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        //cout << "i is : "<<i << endl;
        for(j=0;j<n-i-1;j++)
        {
            //cout << "j is : "<<j << endl;
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
          }      
    }
}
int main()
{
    int Arr[]={5,4,3,2,1};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    bubble_sort(Arr,n);
    int i=0;
    for (i=0;i<n;++i)
    {
        cout << Arr[i];
    }
    return 0;
}
