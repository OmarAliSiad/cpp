#include <iostream>
#include <ctime>
#define board(choice) board[choice]!='1'&&board[choice]!='2'&&board[choice]!='3'&&board[choice]!='4'&&board[choice]!='5'&&board[choice]!='6'&&board[choice]!='7'&&board[choice]!='8'&&board[choice]!='9'
using namespace std;
//tic tac toe has 9 places only
char board[9]={'1','2','3','4','5','6','7','8','9'};
void show_board();
void get_x_player_choice();
void get_o_player_choice();
void get_computer_choice();
int  count_board(char symbol);
char check_winner();
//2 modes
void computer_vs_player();
void player_vs_player();

int main()
{
    int mode;
    cout<<"1. Computer Vs Player "<<'\n';
    cout<<"2. Player Vs Player "<<'\n';
    cout<<"Select Game Mode Press (1 or 2) : ";
    cin>>mode;
    switch(mode)
    {
        case 1:
        {
            computer_vs_player();
            break;
        }
        case 2:
        {
            player_vs_player();
            break;
        }
        default:
        {
            cout<<"Please Select valid Game mode "<<'\n';
        }
    }
    return 0;
}

void computer_vs_player()
{
    string player_name;
    cout<<"Enter Your Name : ";
    getline(cin>>ws,player_name);
    while(true)
    {
        system("cls");
        show_board();
        if(count_board('X')==count_board('O'))
        {
            cout<<player_name<<" 's Turn."<<'\n';
            get_x_player_choice();
        }
        else
        {
            get_computer_choice();
        }
        char winner=check_winner();
        if(winner=='X')
        {
            system("cls");
            show_board();//show final board
            cout<<player_name<<" Won the Game.";
            break;
        }
        else if(winner=='O')
        {
            system("cls");
            show_board();
            cout<<"Computer Won the Game.";
            break;
        }
        else if(winner=='D')
        {
            system("cls");
            show_board();
            cout<<"Game is Draw.";
            break;
        }
    }
}
void player_vs_player()
{
    string x_player_name,o_player_name;
    cout<<"Enter X Player Name : ";
    getline(cin>>ws,x_player_name);
    cout<<"Enter Y Player Name : ";
    while(true)
    {
        getline(cin>>ws,o_player_name);
        if(o_player_name==x_player_name)
        {
            cout<<"Enter Your Name!! This Name is Enter Before \n";
            cout<<"Enter Y Player Name : ";
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        system("cls");
        show_board();
        if(count_board('X')==count_board('O'))
        {
            cout<<x_player_name<<" 's Turn."<<'\n';
            get_x_player_choice();
        }
        else
        {
            cout<<o_player_name<<" 's Turn."<<'\n';
            get_o_player_choice();
        }
        char winner=check_winner();
        if(winner=='X')
        {
            system("cls");
            show_board();
            cout<<x_player_name<<" Won The Game.";
            break;
        }
        else if(winner=='O')
        {
            system("cls");
            show_board();
            cout<<o_player_name<<" Won The Game.";
            break;
        }
        else if(winner=='D')
        {
            system("cls");
            show_board();
            cout<<"The Game Is Draw."<<'\n';
            break;
        }
    }
}
void get_computer_choice()
{
    srand(time(0));//every time will get random number
    int choice;
    do
    {
        choice=rand()%10;
    }while(board(choice));
    board[choice]='O';
    //computer choice will always be character o
}
void get_x_player_choice()
{
    while(true)
    {
        cout<<"Select Your Position (1-9) : ";
        int choice;
        while(!(cin>>choice))
        {
            //explain error
            cout<<"Erorr: enter a number : ";
            cin.clear();
            cin.ignore(123,'\n');
        }
        choice--;
        if(choice<0||choice>8)
        {
            cout<<"Please select Your Choice from (1-9) ."<<'\n';
        }
        else if((board[choice]>=1&&board[choice]<=9))
        {
            cout<<"Please select An Empty Position ."<<'\n';
        }
        else
        {
            board[choice]='X';
            break;
        }
    }
}
void get_o_player_choice()
{
    while(true)
    {
        cout<<"Select Your Position (1-9) : ";
        int choice;
        //to enter a vaild number
        while(!(cin>>choice))
        {
            //explain error
            cout<<"Erorr: enter a number : ";
            cin.clear();//to make sure the buffer is clear
            cin.ignore(123,'\n');// discards the invalid input. It ignores up to 123 characters or until a newline character ('\n') is encountered.
            //you can make it like this cin.ignore(123);
        }
        choice--;
        if((choice<0||choice>8))
        {
            cout<<"Please select Your Choice from (1-9) ."<<'\n';
        }
        else if(board[choice]>=1&&board[choice]<=9)
        {
            cout<<"Please select An Empty Position ."<<'\n';
        }
        else
        {
            board[choice]='O';
            break;
        }
    }
}
int count_board(char symbol)
{
    int total=0;
    for(int i=0;i<9;i++)
    {
        if(board[i]==symbol)
            total++;
    }
    return total;
}
char check_winner()
{
    //checker winner in horizontal
    if(board[0]==board[1] && board[1]==board[2] && (!(board[0]>=1&&board[0]<=9)))
     return board[0];//you can any character because it is same
    if(board[3]==board[4] && board[4]==board[5] && (!(board[4]>=1&&board[4]<=9)))
     return board[3];
    if(board[6]==board[7] && board[7]==board[8] && (!(board[6]>=1&&board[6]<=9)))
     return board[6];
    //checker winner in vertical
    if(board[0]==board[3] && board[3]==board[6] && (!(board[0]>=1&&board[0]<=9)))
     return board[0];//you can any character because it is same
    if(board[1]==board[4] && board[4]==board[7] && (!(board[1]>=1&&board[1]<=9)))
     return board[1];
    if(board[2]==board[5] && board[5]==board[8] && (!(board[2]>=1&&board[2]<=9)))
     return board[2];
    //checker winner in diagonal and anti_diagonal
    if(board[0]==board[4] && board[4]==board[8] && (!(board[0]>=1&&board[0]<=9)))
     return board[0];//you can any character because it is same
    if(board[2]==board[4] && board[4]==board[6] && (!(board[2]>=1&&board[2]<=9)))
     return board[2];
    if(count_board('X')+count_board('O')<9)
        return 'C';
    else
        return 'D';
}
void show_board()
{
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
    cout<<"   "<<board[0]<<"  |   "<<board[1]<<"   |  "<<board[2]<<'\n';
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
    cout<<"---------------------"<<'\n';
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
    cout<<"   "<<board[3]<<"  |   "<<board[4]<<"   |  "<<board[5]<<'\n';
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
    cout<<"---------------------"<<'\n';
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
    cout<<"   "<<board[6]<<"  |   "<<board[7]<<"   |  "<<board[8]<<'\n';
    cout<<"   "<<"   |   "<<"    |   "<<'\n';
}
