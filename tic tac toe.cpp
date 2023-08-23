
#include <iostream>

using namespace std;

class Game
{
public:
    char myArray[9]= {'1','2','3','4','5','6','7','8','9'};
    int choice;
    int turn='X';

    void board()
    {
        system ("CLS");
cout<<".------------------------------."<<endl;
cout<<"|   WELCOME TO TIC TAC TOE     |"<<endl;
cout<<" ------------------------------ "<<endl<<endl;
cout<<" _________________"<<endl;
cout<<"|     |     |     |"<<endl;
cout<<"   "<<myArray[0]<<"   "<<"  "<<myArray[1]<<"   "<<"  "<<myArray[2]<<"   "<<endl;
cout<<"|_____|_____|_____|"<<endl<<endl;
cout<<"|     |     |     |"<<endl;
cout<<"   "<<myArray[3]<<"   "<<"  "<<myArray[4]<<"   "<<"  "<<myArray[5]<<"   "<<endl;
cout<<"|_____|_____|_____|"<<endl<<endl;
cout<<"|     |     |     |"<<endl;
cout<<"   "<<myArray[6]<<"   "<<"  "<<myArray[7]<<"   "<<"  "<<myArray[8]<<"   "<<endl;
cout<<"|_____|_____|_____|"<<endl<<endl;}
    void playerTurn()
    {
        if(turn=='X'){
            cout<<"\nPlayer 1[X], Enter number : ";
            cin>>choice;
            if(choice>0&&choice<10 && myArray[choice -1]=='X'|| myArray[choice -1]=='O')
            {
                cout<<"Number is already selected";
                }
                else
                {
                    myArray[choice-1]='X';
                    turn='O';
                }

        }
        else
        {
            cout<<"\nPlayer 2[O], Enter number : ";
            cin>>choice;
            if(choice>0&&choice<10)
            {
                if(myArray[choice-1]=='X'|| myArray[choice-1]=='O')
                {
                    cout<<"Number is already selected";
                }
                else
                {
                    myArray[choice-1]='O';
                    turn='X';
                }
            }
            else
            {
                cout<<"Choice is invalid";
            }
        }



    }
    bool gameOver(){
              if(myArray[0]=='X'&& myArray[1]=='X'&& myArray[2]=='X'
              ||myArray[3]=='X'&& myArray[4]=='X'&& myArray[5]=='X'
              ||myArray[6]=='X'&& myArray[7]=='X'&& myArray[8]=='X'
              ||myArray[0]=='X'&& myArray[4]=='X'&& myArray[8]=='X'
              ||myArray[2]=='X'&& myArray[4]=='X'&& myArray[6]=='X'
              ||myArray[0]=='X'&& myArray[3]=='X'&& myArray[6]=='X'
              ||myArray[1]=='X'&& myArray[4]=='X'&& myArray[7]=='X'
              ||myArray[2]=='X'&& myArray[5]=='X'&& myArray[8]=='X'
           ){
              cout<<"Congrats! Player1 Wins"<<endl;
              return false;
        }
               else if(myArray[0]=='O'&& myArray[1]=='O'&& myArray[2]=='O'

                ||myArray[3]=='O'&& myArray[4]=='O'&& myArray[5]=='O'
                ||myArray[6]=='O'&& myArray[7]=='O'&& myArray[8]=='O'
                ||myArray[0]=='O'&& myArray[4]=='O'&& myArray[8]=='O'
                ||myArray[2]=='O'&& myArray[4]=='O'&& myArray[6]=='O'
                ||myArray[0]=='O'&& myArray[3]=='O'&& myArray[6]=='O'
                ||myArray[1]=='O'&& myArray[4]=='O'&& myArray[7]=='O'
                ||myArray[2]=='O'&& myArray[5]=='O'&& myArray[8]=='O'
                ){
                cout<<"Congrats! Player2 Wins"<<endl;
                return false;
        }
                else if(myArray[0]!='1'&& myArray[1]!='2'&&myArray[2]!='3'
                &&myArray[3]!='4'&&myArray[4]!='5'&&myArray[5]!='6'
                &&myArray[6]!='7'&&myArray[7]!='8'&&myArray[8]!='9'
                 ){
            cout<<"Game Draw";
            return false;
        }

        return true;
        }
};
int main()
{
    Game obj;
    while(obj.gameOver())
    {
        obj.board();
        obj.playerTurn();
        obj.board();
     }

}



