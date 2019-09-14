#include<iostream>
using namespace std;

int min(int,int,int);
int main()
{
int x,y,z;

cout<<"enter the numbers\n";
cin>>x>>y>>z;
cout<< " minimum is:" << min(x,y,z);
return 0;

}


int min(int x,int y,int z)
{

return((x<=y&&x<=z)?x:(y<=z&&y<=x)?y:z);
}

