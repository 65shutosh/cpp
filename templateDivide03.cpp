#include<iostream>
using namespace std;

template<typename T>
class Divide
{
T fnum;
T snum;
T result;
public:
Divide(T r,T t)
{
fnum=r;
snum=t;

}
T getresult()
{
result=fnum/snum;
return result;
}

};




int main()
{
Divide<int> obj(9,4);
Divide<double> obj1(9,4);
cout<<obj.getresult()<<endl;
cout<<obj1.getresult()<<endl;
return 0;
}
