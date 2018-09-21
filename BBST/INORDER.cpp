#include<iostream>
#include "BST.hpp"

using namespace std;


void INORDER::InorderTraversal(Node *inorder_traversal_root)
{
    if (inorder_traversal_root== NULL)
        return;

    InorderTraversal(inorder_traversal_root->left);
    count_element++;
    bst_elements[count_element]=inorder_traversal_root->data;


    cout<<count_element<<"-"<<inorder_traversal_root->data<<endl;
    InorderTraversal(inorder_traversal_root->right);


}


int* INORDER::GetElements()
{
bst_elements[0]=count_element;
//int i=1;
//while(i<=bst_elements[0])
//{cout<<" tree element--"<<i<<"-->"<<bst_elements[i]<<endl;
//i++;
//}
return bst_elements;

}
