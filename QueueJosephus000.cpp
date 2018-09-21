#include<iostream>
#include<string>
using namespace std;

struct MyStruct
{
	string data;
	MyStruct *next;
};

class Queue
{
	MyStruct *head,*tail;
	MyStruct *CreateNode(string name)
	{
		MyStruct *temp=new MyStruct();
		temp->data=name;
		temp->next=NULL;
		return temp;
	}
public:
	Queue():head(NULL),tail(NULL)
	{
	}
	void Enque(string name)
	{
		MyStruct *temp=CreateNode(name);

		if(IsEmpty())
			head=temp;
		else
			tail->next=temp;
		tail=temp;
		tail->next=head;         ///1st change
	}
	///int
	void Deque()
	{
		int val=-1;
		if(!IsEmpty())
		{
			MyStruct *temp=head;
			head=head->next;
			tail->next=head;         ///2nd change
			cout<<"Releasing the node with "<<temp->data<<endl;
			//val=temp->data;
			delete temp;          ///change
		}
		//return val;
	}
	bool IsEmpty()
	{
		return head==NULL;
	}
	void List()
	{

		MyStruct *trav=head;                ///--------------4b
		cout<<"_________________________________"<<endl;
	for(int i=1;i<=8;i++)	///for(MyStruct *trav=head ;trav!=NULL ;trav=trav->next )         --4thchange
		{

			cout<<trav->data<<"\t";
			trav=trav->next;
		}
		cout<<endl<<"_________________________________"<<endl;
	}
                                       ///3rd change

//string Fighter(string names, int val)
//{}
/*void Set_head(int random_name)//MyStruct *names,int random_name,int random_jump)
{
///////////////////////////
MyStruct *trav=head;
for(int i=1;i<random_name;i++)
{
trav=trav->next;
}
tail=trav;
head=trav->next;
///new head and tail is been assigned
//////////////////////////
}*/
//
//
//
//
//MyStruct Reporter(int random_jump)
//{
/////////////////////////////
//while(head->next!=NULL)
//{
//MyStruct *fight=head;
//for(int j=1;j<random_jump-1;j++)
//{
//fight=fight->next;
//}
//
//
//}
//}
//
//
//
//
//
/////////////////////////////
//}


//	~Queue()
//	{
//		while(!IsEmpty())
//		{
//			Deque();
//		}
//	}
};

int main()
{
string str[5];///={"Sachin","Yuvraj","Rohit","Kohli","Dhoni"};
	Queue q;
	q.Enque("MasterBlaster");
	q.Enque("Yuvraj");
	q.Enque("Hitman");
	q.Enque("Chiku");
	q.Enque("Mahi");

//	q.Enque(20);
//	q.Enque(30);
//	q.Enque(40);
//

//	q.Deque();
//    q.Deque();
//    q.Deque();
//q.Set_head(2);
      q.List();

	return 0;
}
