#include <iostream>
using namespace std;
int main() {
    cout << "Would you like to continue game punjab?" << endl;
  char input; // free fire or pub g
    cin >> input;//pub g

    switch (input) { // he wants to play pubg
        case 'Y': //case y for yes he want to battle in game 
      case 'y'://he just start game by downloading from playstore
            break; // complete the battle
        case   'N': // if he has another important work then he will quit
             cout<< "quit"<< endl;
               //he will prefer another thing
            break;
        default: //default case
            cout<< "he has no time" << endl ;//he wants to play pubg but he has appointment at doctor clinic this is reason of quit the game
      }        
    
    return 0;
  }
