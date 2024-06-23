#include <iostream>
using namespace std;


int main() {
    string name;
    std::cout << "Hello! What's your name?" << endl;
    cin >> name; 
    std::cout << "Hello, "<<name<<"!\n This is a game of rock, paper and scissors. You get three turns. Best of luck!"<<endl;

    string options[] = {"rock","paper","scissors"};
    string user_choice, comp_choice; 
    int user_wins = 0, comp_wins = 0;

    string playAgain;
    do {
    for (int i=0; i<3; ++i){
        std::cout << "Please choose between rock, paper, and scissors"<<endl;
        cin >> user_choice;
        comp_choice = options[rand() % 3];

        std::cout <<"Your opponent chose "<<comp_choice<<endl;
        
        //cases where comp wins
        if ((comp_choice == "rock" && user_choice == "scissors") || (comp_choice == "scissors" && user_choice == "paper") || (comp_choice == "paper" && user_choice == "rock")){
            std::cout<<"Oops! Your opponent won this round!"<<endl;
            comp_wins++;
            std::cout<<"Your score is "<<user_wins<< ", your opponent's score is "<<comp_wins<<endl; 
        }
        // cases where user wins 
        else if ((user_choice == "rock" && comp_choice == "scissors") || (user_choice == "scissors" && comp_choice == "paper") || (user_choice == "paper" && comp_choice == "rock")){
            std::cout<<"YAY! You won this round!"<<endl;
            user_wins++;
            std::cout<<"Your score is "<<user_wins<< ", your opponent's score is "<<comp_wins<<endl; 
        }
        else{
            std::cout<<"It's a tie!"<<endl;
            std::cout<<"Your score is "<<user_wins<< ", your opponent's score is "<<comp_wins<<endl;
        }
        std::cout<<endl;
    };

    std::cout<<"Final results are in! You won "<<user_wins<<" rounds, while your opponent won "<<
    comp_wins<<" rounds!"<<endl;
    if (comp_wins>user_wins){
        std::cout<<":( You lost the game. To play again, type yes."<<endl;
        cin>> playAgain;
    }
    else if (user_wins>comp_wins){
        std::cout<<"YOU WON! Congratulations! To play again, type yes."<<endl;
        cin>> playAgain;
    }
    else{
        std::cout<<"It's a tie! To play again, type yes."<<endl;
        cin>> playAgain;
    };
    user_wins= 0;
    comp_wins=0;
    } while (playAgain == "yes" || playAgain =="Yes" || playAgain =="YES");
    return 0;
};