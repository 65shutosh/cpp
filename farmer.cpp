#include<iostream>
using namespace std;

// chnaged by abhisheknith
bool distribute( int fruits, int daughters) {
	for (int index = 1; index <= daughters; index++ ) {
		if(fruits > 0 && (fruits - 1) % 3 != 0 ) return false;
		fruits = ((fruits - 1) * 2) / 3;
	}
	if( fruits > 0 && fruits % 3 == 0) 
		return true;
	return false;
}

int main()
{
   int fruit,i;
   for(fruit=1;fruit<=1000;fruit+=1)
   {
	//cout<<"\n\nchecking for "<<fruit<<"fruits";
	if(distribute(fruit, 3)) {
		cout << fruit << " is minimum number of fruits necessary\n"; 
	//	break;
	}
   }

   return 0;
}
