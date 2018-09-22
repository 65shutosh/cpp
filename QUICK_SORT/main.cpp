#include "QUICK_SORT.hpp"
#include "BINARY_SEARCH.hpp"
#include <iostream>

using namespace std;

int main()
{
    int arr[100]= {77,4,5,1,8,6,2,32,54,65,12,32,3,9};

    int j=0;
    while(arr[j]!='\0')
        j++;
cout<<" Size of array ="<<j<<" elements"<<endl;

    int *sorted;
    int val;
    QUICK_SORT quick_sort;

   SEARCH_BINARY searchB;

    sorted=quick_sort.GetQuickSort(arr,0,j-1);
    cout << "Sorted Array : ";

    for(int i=0; i<j; i++)
        cout << sorted[i] << " ";

   cout<<endl;
   cout<<"Please Enter the element to search"<<endl;
   cin>>val;
   cout <<"Element exists , Position of element - "<< searchB.searchElement(sorted,val)<<endl;
    return 0;
}
