#include<iostream>
using namespace std;
struct Time
{
int hour;
int minute;
int second;
};
void printmilitary(const Time &);
// printstandard();
int main()
{
Time dinnertime;
dinnertime.hour=18;
dinnertime.minute=30;
dinnertime.second=0;
cout<<"dinner will be at";
printmilitary(dinnertime);
cout<<"military time\n which";
//printstandard(dinnertime);
cout<<"standard time";
dinnertime.hour=29;
dinnertime.minute=73;
cout<<"invalid time";
printmilitary(dinnertime);
cout<<endl;
}

void printmilitary(const Time &t)
{
cout<<(t.hour <10?"0":"")<<t.hour<<":"<<(t.minute<10?"0":"");
}

