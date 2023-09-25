#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
    string player_name;
    cout<<"Enter Your Name: ";
    cin>>player_name;
    system("cls");
    int rounds;
    cout<<"How many rounds you want to play ? : " ;
    cin>>rounds;
    int player_score=0,computer_score=0;
    for(int round=1;round<=rounds;round++)//you can make it from 0 to rounds
    {
        system("cls");
        int player_choice,computer_choice;
        cout<<"Round Number : "<<round<<"/"<<rounds<<'\n';
        cout<<player_name<<" 's Score = "<<player_score<<'\n';
        cout<<"Computer Score = "<<computer_score<<'\n';
        cout<<"1. Rock "<<'\n';
        cout<<"2. Paper"<<'\n';
        cout<<"3. Scissor"<<'\n';
        do
        {
            cout<<"Select vaild choice: ";
            cin>>player_choice;
        }while(player_choice!=1&&player_choice!=2&&player_choice!=3);
        srand(time(0));
        computer_choice=(rand()%3)+1;
        if(player_choice==1&&computer_choice==3)
        {
            cout<<player_name<<" Player Win "<<'\n';
            player_score++;
        }
        else if(player_choice==2 && computer_choice==1)
        {
            cout<<player_name<<" Player Win "<<'\n';
            player_score++;
        }
        else if(player_choice==3&&player_choice==2)
        {
            cout<<player_name<<" Player Win "<<'\n';
            player_score++;
        }
        else if(player_choice==computer_choice)
        {
             cout<<"Draw"<<'\n';
        }
        else
        {
            cout<<"computer Win."<<'\n';
            computer_score++;
        }
        cout<<"Press any key to continue... "<<'\n';
        getch();
    }
    if(player_score==computer_score)
    {
        cout<<"Game is Drawn "<<'\n';
    }
    else if(player_score>computer_score)
    {
        cout<<player_name<<" You won the game."<<'\n';
    }
    else
    {
        cout<<"Computer Won the game.";
    }
    return 0;
}
