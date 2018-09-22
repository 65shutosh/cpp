
#include "QUICK_SORT.hpp"
#include<iostream>
using namespace std;

int *QUICK_SORT::GetQuickSort(int *elements_to_sort,int first_element_position,int last_element_as_pivot)
{

    if(first_element_position<last_element_as_pivot)
    {


        int position_of_small_element=first_element_position-1;
        int index_of_loop_variable=first_element_position;



        while(index_of_loop_variable!=last_element_as_pivot)
        {
            if(elements_to_sort[index_of_loop_variable]<=elements_to_sort[last_element_as_pivot])
            {
               // cout<<"index_of_loop_variable"<<index_of_loop_variable<<"-> element ->"<<elements_to_sort[index_of_loop_variable]<<"\t last element as pivot-"<<elements_to_sort[last_element_as_pivot]<<endl;
                position_of_small_element++;

                swap_elements(&elements_to_sort[position_of_small_element],&elements_to_sort[index_of_loop_variable]);
            }

            index_of_loop_variable++;
        }
        position_of_small_element++;
        swap_elements(&elements_to_sort[position_of_small_element],&elements_to_sort[last_element_as_pivot]);



        GetQuickSort(elements_to_sort,first_element_position,position_of_small_element-1);
        GetQuickSort(elements_to_sort,position_of_small_element+1,last_element_as_pivot);




    }
    return elements_to_sort;
}



void QUICK_SORT::swap_elements(int *ele1,int *ele2)
{
    int temp;
    temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
