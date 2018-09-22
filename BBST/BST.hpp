struct Node
{
    int data;
    Node *left;
    Node *right;
};

class BST
{
    Node *root;

public:
    BST();
    Node *CreateNode(int);
    void CreateBST(int);
    bool IfEmpty();
    void traverse();
    Node* GetRoot();
};


class INORDER
{
int bst_elements[10];
int count_element=0;
public:


    void InorderTraversal(Node*);
    int* GetElements();
};


class BBST
{
public:
Node* CreateNodeBBST(int);
Node *ArrayToBBST(int *,int,int);
void Preorder(Node*);
};
