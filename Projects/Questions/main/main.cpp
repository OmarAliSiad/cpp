#include <iostream>
#define el '\n'
using namespace std;
void end_game(int score);
void start_game()
{
    char answer;
    int score=0;
    cout<<"1- How mush is 3+3 : "<<el;
    cout<<"a) 4"<<el;
    cout<<"b) 6"<<el;
    cout<<"c) 10"<<el;
    cout<<"d) 7"<<el;
    cout<<"Please enter 'a' 'b' 'c' or 'd' and press enter: ";
    cin>>answer;
    if(answer=='b')
    {
        cout<<"you enter correct Answer :) "<<el;
        score++;
    }
    else
        cout<<"you enter wrong Answer :( "<<el;

    cout<<"====================================="<<el;

    cout<<"2- How is the richest one in the world : "<<el;
    cout<<"a) Sergey Brin"<<el;
    cout<<"b) Larry Ellison"<<el;
    cout<<"c) Elon Musk"<<el;
    cout<<"d) Amancio Ortega"<<el;
    cout<<"Please enter 'a' 'b' 'c' or 'd' and press enter: ";
    cin>>answer;
    if(answer=='c'){cout<<"you enter correct Answer :) "<<el; score++;}else cout<<"you enter wrong Answer :( "<<el;

    end_game(score);
}
int main()
{
    string user_input;
    cout<<"==============Welcome================"<<el;
    cout<<"if you want to play game then enter 'play' to start : ";
    cin>>user_input;
    if(user_input=="play")
    {
        cout<<"User want to play";
        start_game();
    }
    else
    {
        cout<<"User did not want to play :( "<<el;
        end_game(0);
    }
    return 0;
}
void end_game(int score)
{
    cout<<"Your score is "<<score;
}
