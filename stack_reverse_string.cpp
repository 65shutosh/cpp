
#include<iostream>
using namespace std;


class Stack
{

int data[5];
int top;

public:

Stack():top(-1)
{}

void push(int val)
{
if(!isfull())
data[++top]=val;
else  cout<< "Stack Overflow!"<<endl;
}

int pop()
{
if(!isEmpty())
return data[top--];
else cout<<"Stack Underflow!"<<endl;
}


int peek()
{
if(!isEmpty())
return data[top];
else cout<<"Stack Underflow!"<<endl;
}


void printStack()
{
if(!isEmpty())
{
while(top>=0)

cout<<data[top--]<<endl;
}
else cout<< "Stack Underflow!"<<endl;
}


bool isEmpty()
{
return top==-1;
}

bool isfull()
{
return top==4;
}

};



void menu()
{
cout<<"\nP->Push\nO->Pop\nE->Peek\nL->List\nX->Exit\nPlz enter your choice :  ";

}




int main()
{
menu();

char ch;
int valu;
Stack stk;
int i;

while((ch=getchar())!='x')
	{

                                                          ///	fflush(stdin);

switch(ch)
{

case 'p':
case 'P': cout<<"\nEnter the value to push in Stack : ";
          cin>> valu;
                                                         ///        fflush(stdin);
          stk.push(valu);
        break;


case 'o':
case 'O': valu=stk.pop();
        cout<<"\nPoped Element : "<<valu;
        break;


case 'l':
case 'L':stk.printStack();
        break;


case 'E':
case 'e': valu=stk.peek();
          cout<<"\nElement on the top of Stack : "<<valu;
        break;

default : cout<<"Its default switch"<<endl;

};

cout<<"Please enter your choice : ";
}
return 0;
}
