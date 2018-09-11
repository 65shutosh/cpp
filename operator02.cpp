#include<iostream>
using namespace std;


class multiplyToSum
{
int number,total;


public:


void Number(int num)
{
number=num;
}
void getresult(void)
{
cout<<number<<endl;
}


multiplyToSum operator*(const multiplyToSum& multi)
{
multiplyToSum multiply;
multiply.number=this->number+multi.number;
return multiply;
}

};

int main()
{
multiplyToSum obj1;
multiplyToSum obj2;
multiplyToSum obj3;

obj1.Number(3);
obj2.Number(5);

obj3=obj1*obj2;

obj3.getresult();
return 0;
}
