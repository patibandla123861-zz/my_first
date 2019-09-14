#include<iostream>
using namespace std;
/*int boxVolume(int length=1,int width=1,int height=1);
int main()
{
cout<<"Default: "<<boxVolume()<<endl
<<"Length 10: Width 1 Height 1 "<<boxVolume(10)<<endl
<<"Length 10: Width 5 Height 1 "<<boxVolume(10,5)<<endl
<<"Length 10: Width 5 Height 2 "<<boxVolume(10,5,2)<<endl;
}
int boxVolume(int length,int width,int height)
{
return length*width*height;
}*/

int square(int x) {return x*x;}
double square(double y) {return y*y;}

int main()
{

cout<< "the square of integer 7 is:"<<square(7);
cout<< "the square of  double 7 is:"<<square(7.5);
cout<<endl;
return 0;
}

