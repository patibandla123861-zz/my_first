#include<iostream>
using namespace std;
class Time
{
private :
int hour;
int minute;
int second;
public :
Time();
void settime(int ,int,int);
void printmilitary();
void printstandard();
};
Time::Time(){hour=minute=second=0;}
void Time::settime(int h, int m, int s)
{
hour =(h>=0 && h<24)?h:0;
minute = (m>=0 && m<60)?m:0;
second = (s>=0&& s<60)?s:0;
}
void Time::printmilitary()
{
cout<<(hour<10?"0":"")<<hour<<":"<<(minute<10?"0":"")<<minute;
}
void Time::printstandard()
{
cout<<((hour==0||hour==12)?12:hour%12)<<":"<<(minute<10?"0":"")<<minute<<":"<<(second<10?"0":"")<<second<<(hour<12?"am":"pm");
}
int main()
{
Time t;
cout<<"\nthe initial military time is:\n";
t.printmilitary();
cout<<"\nThe initial standard time is:\n";
t.printstandard();
t.settime(13,27,6);
cout<<"\nmilitary time after settime is:\n";
t.printmilitary();
cout<<"\nstandard time after settime is:\n";
t.printstandard();
t.settime(99,99,99);
cout<<"\nafter attempting invalid settings\n";
cout<<"\nmilitary time:\n";
t.printmilitary();
cout<<"\nstandard time:\n";
t.printstandard();




return 0;
}
