#include<iostream>
using namespace std;

/*template <typename T>

T myMax (T x,T y)
{
return (x>y)?x:y;
}

int main()

{

cout<< myMax<int>(3,7)<<endl;
cout<< myMax<double>(3.0,7.0)<<endl;
cout<< myMax<char>('g','e')<<endl;

return 0;

}*/

int main()
{

auto sum =[] (auto a,auto b)
{
return a+b;
};

cout<< sum (1,6) << endl;
cout<< sum (1.0,5.6)<<endl;
cout<< sum(string("geeks"),string("for geeks"))<<endl;

}

