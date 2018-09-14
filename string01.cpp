#include <algorithm>
#include<iostream>
using namespace std;

// Ye hoga conflict
int main()
{

std::string s = "a_b_c";
size_t n = std::count(s.begin(), s.end(), '_');

cout<<n<<endl;

}
