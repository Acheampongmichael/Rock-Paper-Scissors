#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
void RunRockPaperScissors();
int main() {

    RunRockPaperScissors();

}

void RunRockPaperScissors() {
    //Defining variables
    const int Rock = 1;
    const int Paper = 2;
    const int Scissors = 3;
    int user;
    char tryagain;
    srand(time(0));

    cout << "ROCK PAPER SCISSORS GAME" << endl;

    do {
        //Repeat program
        cout << "Choose your option\n1=Rock\n2=Paper\n3=Scissors\n" << endl;
        cin >> user;



        while (user < 0 || user > 3) {
            cout << "Enter a number between 1 and 3" << endl;
            cin >> user;
        }


        //Random numbers
        int computer_choice = (rand() % (Scissors - Rock + 1) + Rock);
        cout << computer_choice << endl;

        //Result from output
        if (computer_choice == user)
            cout << "It is tie" << endl;

        else if ((user == 1 && computer_choice == 3) || (user == 3 && computer_choice == 2) || (user == 2 && computer_choice == 2))
            cout << "You won" << endl;

        else
            cout << "You lost" << endl;
        cout << "---------------GAME IS OVER-------------" << endl;
        cout << "---------------GAME  IS OVER------------" << endl;
        cout << endl;
        cout << "Press 'Y' to play again" << endl;
        cin >> tryagain;

    } while (tryagain == 'y' || tryagain == 'Y');
}