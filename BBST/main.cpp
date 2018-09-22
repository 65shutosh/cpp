#include <iostream>
#include "BST.hpp"
using namespace std;

int main()
{
    
    Node *r00t;
    BST bst;
    BBST bbst;
    INORDER inorder;
    int* ele;
    Node *root_from_BBST;
    
    cout << "Hello world!" << endl;
    bst.CreateBST(10);
    bst.CreateBST(6);
    bst.CreateBST(5);
    bst.CreateBST(8);
    bst.CreateBST(7);
    bst.traverse();
    r00t=bst.GetRoot();
    inorder.InorderTraversal(r00t);
    ele=inorder.GetElements();
    cout<<"\n\n\n"<<ele[0];
    root_from_BBST=bbst.ArrayToBBST(ele,1,5);
    cout<<"\n\n\n\n\n"<<root_from_BBST->data<<endl;
    bbst.Preorder(root_from_BBST);
    return 0;
}
