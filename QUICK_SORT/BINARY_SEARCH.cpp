#include "BINARY_SEARCH.hpp"
#include<iostream>

using namespace std;



int SEARCH_BINARY::searchElement(int *array_to_search,int element)
{
    int index;
    for(index = 0; array_to_search[index] != '\0'; index++){
       // cout << array_to_search[index] << '\t';
    }
    //cout << endl;
    return SearchElement(array_to_search, 0, index, element);
}



int SEARCH_BINARY::SearchElement(int *array_to_search,int first,int last,int element)
{
  //  cout << "/t"<<first << "\t" << last << "\t" << element << "\n";
    if(first==last && array_to_search[first]!=element)
    {
        return -1;
    }
    int mid=(first+last)/2;
    if(array_to_search[mid]==element)
    {
        return mid;
    }
    else
    {
        if(array_to_search[mid]>element)
            return SearchElement(array_to_search,first,mid-1,element);
        else
            return SearchElement(array_to_search,mid+1,last,element);

    }
}
