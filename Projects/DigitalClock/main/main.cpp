#include <iostream>
#include <windows.h>
#define el '\n'
using namespace std;

int main()
{
    int hrs,mins,sec;
    cout<<"Hours : ";
    cin>>hrs;
    cout<<"Minutes : ";
    cin>>mins;
    cout<<"Secs : ";
    cin>>sec;
    while(true)
    {
        system("cls");
        if(sec>59)
        {
            mins++;
            sec=0;
        }
        if(mins>59)
        {
            hrs++;
            mins=0;
        }
        if(hrs>23)
        {
            hrs=0;
        }
        cout<<"----Clock----"<<el<<el;
        cout<<" "<<hrs<<" : "<<mins<<" : "<<sec<<el<<el;
        cout<<"-------------"<<el;
        sec++;
        Sleep(900);//control the speed of print on the screen
        //between brackets the value in mill seconds
    }
    return 0;
}
