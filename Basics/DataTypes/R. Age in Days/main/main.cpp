#include <iostream>
using namespace std;

int main()
{
    int days;
    cin>>days;
    cout<<days/365<<" years"<<endl;
    days%=365;
    cout<<days/30<<" months"<<endl;
    cout<<days%30<<" days";
    return 0;
}
