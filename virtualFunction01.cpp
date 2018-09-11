#include <iostream>
using namespace std;
class Animal {
    public:
    Animal(){cout<<"Animal::ctor"<<endl;}
virtual void eat(){
cout<<"Eating...";
    }
};
class Dog: public Animal
{
 public:
Dog(){cout<<"Dog::ctor"<<endl;}
 void eat()
    {
       cout<<"Eating bread...";
    }
};
int main(void) {
   Animal* d=new Dog;
   d->eat();
   return 0;
}
