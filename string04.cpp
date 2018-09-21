#include<iostream>
using namespace std;



class Stack
{

    char data[10];
    int top;

public:

    Stack():top(-1) {}

    void push(char val)
    {
        if(!isfull())
            data[++top]=val;
        else  cout<<"Stack Overflow!"<<endl;
    }

    char pop()
    {
        if(!isEmpty())
            return data[top--];
        else cout<< "Stack Underflow!"<<endl;
    }


    char peek()
    {
        if(!isEmpty())
            return data[top];
        else cout<< "Stack Underflow!"<<endl;
    }


    void printStack()
    {
        if(!isEmpty())
        {
            while(top>=0)
            {
                cout<<data[top]<<endl;
                top--;
            }
        }
        else cout<<"Stack Underflow!"<<endl;
    }


    bool isEmpty()
    {
        return top==-1;
    }

    bool isfull()
    {
        return top==9;
    }

};

void menu()
{
    cout<<"\n1.Operations available for stack:\nPush\nPop\nPeek\nList\nExit\n\n"<<endl;

}

int precedence(char ch)
{
    int pre;
    switch(ch)
    {
    case '+':
    case '-':
        pre= 1;
        break;
    case '*':
    case '/':
        pre= 2;
        break;
    default:
        cout<<"precedence not set"<<endl;
    };
    return pre;

}

int main()
{
    string infix="a+B*c-d";
    Stack Operator;
//    Stack Operator;


    for(int i=0; infix[i]!='\0'; i++)
    {

        if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' )
        {
            if(Operator.isEmpty())
            {
                Operator.push(infix[i]);
            }
            else
            {
                if(precedence(infix[i]) > precedence(Operator.peek()))
                {
                    Operator.push(infix[i]);
                }
                else
                {
                while(!Operator.isEmpty())
                {
                if(precedence(Operator.peek()) >= precedence(infix[i]))
                cout<<Operator.pop()<<endl;
                }
                }
            }
        }
//
//        if(infix[i]>96 && infix[i]<123)
//        {
//            cout<<infix[i];
//        }
    }
    ///Operator.printStack();
    return 0;
}
