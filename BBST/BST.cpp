#include<iostream>
#include"BST.hpp"

using namespace std;

BST::BST():root(NULL)
{}

Node *BST::GetRoot()
{
    return root;
}

Node *BST::CreateNode(int value_in_CreateNode)
{
    Node *temp_in_CreateNode=new Node();
    temp_in_CreateNode->data=value_in_CreateNode;
    temp_in_CreateNode->left=NULL;
    temp_in_CreateNode->right=NULL;
    return temp_in_CreateNode;
    
}

void BST::CreateBST(int value_in_CreateBST)
{
    Node *temp_in_CreateBST=CreateNode(value_in_CreateBST);
    Node *traverse=root;
    int check=1;
    if(IfEmpty())
    {
        root=temp_in_CreateBST;
    }
    else
    {
        while(check!=0)
        {
            if(traverse->data > value_in_CreateBST)
            {
                if(traverse->left!=NULL)
                    traverse=traverse->left;
                else
                {
                    traverse->left=temp_in_CreateBST;
                    check=0;
                }
            }
            else if(value_in_CreateBST > traverse->data)
            {
                if(traverse->right!=NULL)
                    traverse=traverse->right;
                else
                {
                    traverse->right=temp_in_CreateBST;
                    check=0;
                }
            }
            
        }
    }
    
}

void BST::traverse()
{
    Node *traverse=root;
    Node *traverse2=root;
    int check=1;
    int check2=1;
    
    
    while(check!=0)
    {
        if(traverse->left==NULL)
        {
            cout<<"Smallest Element in BST "<<traverse->data<<endl;
            check=0;
        }
        traverse=traverse->left;
    }
    
    while(check2!=0)
    {
        
        
        
        if(traverse2->right==NULL)
        {
            cout<<"Largest Element in BST "<<traverse2->data<<endl;
            check2=0;
        }
        traverse2=traverse2->right;
    }
    
}


bool BST::IfEmpty()
{
    return root==NULL;
}
