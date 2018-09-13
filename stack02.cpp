#include<iostream>
using namespace std;


class Stack
{

int data[5];
int top;
//int elment_count;
public:

Stack():top(-1)//,element_count(0)
{}

void push(int val)
{
if(!isfull())
data[++top]=val;
//else  throw "Stack Overflow!";
}

int pop()
{
if(!isEmpty())
return data[top--];
//else throw "Stack Underflow!";
}


int peek()
{
if(!isEmpty())
return data[top];
//else throw "Stack Underflow!";
}


void printStack()
{
if(!isEmpty())
{
while(top>=0)
{cout<<data[top]<<endl;
top--;
}
}
//else throw "Stack Underflow!";
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

//	fflush(stdin);
//try
//{
switch(ch)
{

case 'p':
case 'P': cout<<"\nEnter the value to push in Stack : ";
          cin>> valu;
  //        fflush(stdin);
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

default :;// throw "Invalid key";

};
//}catch (const char* msg)
//{
//cout<<"\n"<<msg<<endl;
//}
cout<<"Please enter your choice : ";
}
return 0;
}
