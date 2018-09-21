#include<iostream>
#include "BST.hpp"
using namespace std;
Node* BBST::ArrayToBBST(int *Elements,int start,int last)
{



if(start>last)
return NULL;

int mid =(start+last)/2;


Node *root_in_BBST=CreateNodeBBST(Elements[mid]);

root_in_BBST->left = ArrayToBBST(Elements,start,mid-1);
root_in_BBST->right = ArrayToBBST(Elements,mid+1,last);

return root_in_BBST;

}

Node* BBST::CreateNodeBBST(int val)
{
Node* temp=new Node();
temp->data=val;
temp->left=NULL;
temp->right=NULL;
return temp;
}


void BBST::Preorder(Node* root_for_preorder)
{
if(root_for_preorder==NULL)
return;

cout<<"Preorder of BBST -"<<root_for_preorder->data<<endl;
Preorder(root_for_preorder->left);
Preorder(root_for_preorder->right);

}
