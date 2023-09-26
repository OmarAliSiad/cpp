#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void show()
{
    cout<<"\t ATM "<<'\n';
    cout<<"Choose a Transaction \n\n";
    cout<<"MAIN SCREEN"<<'\n';
    cout<<"[1] Inquire Balance "<<'\n';
    cout<<"[2] Withdraw"<<'\n';
    cout<<"[3] Deposite"<<'\n';
    cout<<"[4] Quit"<<'\n';
    cout<<'\n';
}
int main()
{
    cout<<"\t\t     || Bank ATM Machine ||"<<'\n';
    cout<<"\t\t =============================="<<'\n';
    cout<<"\t\t ==============================\n\n"<<'\n';
    int password,Pincode;
    //The Pin code is 1234
    cout<<"Please Enter The Pincode : ";
    cin>>Pincode;
    int co=1;
    if(Pincode!=1234)
    {
        while(true)
        {
            cout<<"Invalid Pin code "<<'\n';
            cout<<"Please Enter Pin code again : ";
            cin>>Pincode;
            co++;
            if(co==5)//if he try to enter the pin code and it is not valid will take from him card
              break;
            else
            {
                if(Pincode==1234)
                    break;
            }
        }
    }
    if(Pincode==1234)
    {
        int t=1;
        cout<<"\nWelcome \n";
        cout<<"Enter Your password : ";
        cin>>password;
        //password is 7777
        while(password!=7777)
        {
            t++;
            cout<<"Enter Your password : ";
            cin>>password;
            if(t==5)
            {
                cout<<"\nThe card is withdrawn";
                return 0;
            }
        }
        double balance=1000;//the current balance is 1000
        double balance1=balance;
        int c=1,go=1;
        if(password==7777)
        {
            while(true)
            {
                double withdraw,deposit;
                int choice;
                if(c==1)
                {
                    system("cls");
                    c=0;
                }
                show();
                cout<<"Enter Option :";
                cin>>choice;
                switch(choice)
                {
                case 1:
                {
                    cout<<"\nBalance Inquiry "<<'\n';
                    cout<<"Your current Balance is "<<balance1<<'\n'<<'\n';
                    break;
                }
                case 2:
                {
                    cout<<"\nWithdraw "<<'\n';
                    cout<<"Enter Amount is  : ";
                    cin>>withdraw;
                    while(true)
                    {
                        if(withdraw>=0&&withdraw<=balance1)
                        {

                            balance1=balance1-withdraw;
                            cout<<"Valid operation"<<'\n';
                            break;
                        }
                        else
                        {
                            cout<<"Your Current Balance :"<<balance1<<'\n';
                            cout<<"Enter valid number : ";
                            cin>>withdraw;
                        }
                    }
                    cout<<"You withdraw : "<<withdraw<<'\n';
                    cout<<"Your remaining balance is : "<<balance1<<'\n'<<'\n';
                    break;
                }
                case 3:
                {
                    cout<<"\nDeposit"<<'\n';
                    cout<<"Enter amount is :";
                    cin>>deposit;
                    balance1=balance1+deposit;
                    cout<<"You deposited : "<<deposit<<'\n';
                    cout<<"Your new Balance is :"<<balance1<<'\n'<<'\n';
                    break;
                }
                case 4:
                {
                    if(go=true)
                    {
                        go=false;
                    }
                    system("cls");
                    break;
                }
                default:
                {
                    cout<<"\nInvalid Option Please Try again "<<'\n'<<'\n';
                    break;
                }
                }
                if(go==false)
                {
                    cout<<"EXIT MODE"<<'\n';
                    cout<<"Thanks for Your coming :) "<<'\n';
                    break;
                }
            }
        }
    }
    if(co==5)
    {
        cout<<"\nThe card is withdrawn";
    }
    return 0;
}
