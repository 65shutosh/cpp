
///1.char * can not accept string
///2.But String can accept char[]
///2point is not voice versa
#include<iostream>
#include<string>
using namespace std;

void String_taker(char  msg[])
{
cout<<msg<<endl;
};

int main()
{

///2-------------------------------
//char name[20];
//cin.get(name,20);
//String_taker(name);
///--------------------------------

string name;
cin.get(name,20);
String_taker(name);


return 0;



}
