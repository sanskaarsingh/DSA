#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;
int thegame (int betamt)
{
    int prediction;
    cout << "Enter Your Prediction of dice: (1 to 6) " << endl;
    cin >> prediction;
    int randomnumber = (rand()%6) + 1;
    cout << "The Dice Gave..." << endl;
    cout << randomnumber << endl;
    if (randomnumber == prediction)
    {
        betamt = betamt * 2;
        return betamt;
    }
    else
    {
        betamt = -(betamt * 2);
        return betamt ;
    }
}

int main()
{
  cout << "WELCOME TO THE GAME OF DICE BY SANSKAAR" << endl;
  cout << "The rules are simple, deposit some money, then keep predicting the outcome of dice" << endl;
  cout << "Get a 2x on being right!!!" << endl;
    srand(time(0));
    int deposit, betamt, multiplier;
    while (true)
    {
      cout << "Enter your Deposit Amount: " << endl;
      cin >> deposit;
      int balance = deposit;
      do
        {
          cout << "Enter your bet Amount: " << endl;
          cin >> betamt;
          while (betamt>balance)
           {
            cout << "You Do Not enough balance to make that bet..." << endl;
            cout << "Enter a bet amount in your limit: " << endl;
            cin >> betamt;
           }
          int win = thegame(betamt);
          if (win>0)
           {
             cout << "You Won: " << win <<endl;
           }
          else
           {
             cout << "You Lost: " << -1 * win << endl;
           }
          balance = balance + (win);
          if (balance > 0)
          {
          cout << "Your Remaining Balance: " << balance << endl;
          }
          else
          {
            cout << "Your Account is Empty: 0 " << endl;
          }
        }
      while (balance > 0);
          cout << "You have no balance left in your account..." << endl;
          cout << "Do you want to deposit again and continue playing? (y/n): ";
          char choice;
          cin >> choice;
          if (choice == 'n' || choice == 'N')
           {
              cout << "Thanks for playing! Exiting...\n";
              break;
           }
    }
      cout << "Press ENTER to Exit";
      cin.ignore();
      cin.get();

      return 0;

}