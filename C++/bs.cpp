#include<iostream>
using namespace std;

int  b_search(int *arr1,  int a , int n)
{
    int mid = 0;
    int l = 0;
    while (n>0)
    {
        mid = (l + n)/2;
      
        if (arr1[mid]==a)
            return  1;
        else if(arr1[mid]<a)
            l = mid+1 ;
        else 
            n = mid-1;  
    }
    return -1;
}
int main()
{
    int n;
    int a;
    //cout << "Size of array : ";
    cin>>n;
    int arr[n];
    //cout<< "Enter the array :"<< endl;
    for (int i = 0 ; i<n ; i++)
    {
         cin>> arr[i];
    }
    //cout<< "Enter the key to search :" << endl;
    cin >> a;
    cout << b_search(arr, a , n);
}