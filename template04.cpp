#include<iostream>

template<int size>
class StackBase
{
public:
	int top;
	StackBase(int hey) :top(-1)
	{
std::cout<<"Its Working"<<size<<hey<<std::endl;
	}
	bool IsEmpty()
	{
		return top == -1;
	}
	bool IsFull()
	{
		return top == size - 1;
	}
};


int main()
{

StackBase<10> obj(15);

return 0;

}
