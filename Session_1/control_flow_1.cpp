#include <iostream>
#include <ctime>
#include <cstdlib>
/*
Dice Game - Rules

Objective:
The Dice Game is a two-player game where the user 
and the computer take alternating turns to roll dice 
and accumulate points. 
The objective of the game is to be the first player 
to reach or exceed 100 points in the bank.

Gameplay:

1. The game starts with both players having a total score of 0.
2. The user and the computer take alternating turns to play the game.
3. In each turn, the player rolls a six-sided dice and accumulates 
   points based on the roll result.
4. The player can decide to roll the dice multiple times in a turn 
   to accumulate more points, or they can decide to stop rolling and 
   save their current turn total to the bank.
5. If the player rolls a 1 during their turn, their turn total becomes 0, 
   and they lose all the points accumulated in that turn. 
   The turn then switches to the other player.
6. If the player decides to stop rolling and save their turn total to the bank, 
   the turn switches to the other player, and the saved points are added to their overall score.
7. The player who reaches or exceeds 100 points in the bank first wins the game.

Turn Rules:
User's Turn: The user starts the game and takes the first turn. 
             During their turn, the user will be prompted to roll 
             the dice multiple times and decide whether to continue 
             rolling or stop and save their turn total to the bank. 
             The user can enter 'y' to continue rolling or 'n' to stop 
             rolling and save their points.
Computer's Turn: The computer takes its turn automatically. 
                 The computer will keep rolling the dice until it reaches a 
                 turn total of 15 or more or rolls a 1. If the computer 
                 reaches 15 or more, it stops rolling and saves its turn total 
                 to the bank. If it rolls a 1, it loses all the points 
                 accumulated in that turn. 
                 The computer's strategy is to accumulate points and stop when 
                 the turn total is 15 or more.

Winning the Game:
The game continues with alternating turns until one of the players 
reaches or exceeds 100 points in the bank. The player who achieves this 
first wins the game. The game then ends, and the winner is declared.
*/

/*
EXERCISE: Computer's Turn in Dice Game

In this exercise, you will be writing the code for 
the computer's turn in the dice game. The computer will 
take alternating turns with the user. The computer's objective 
is to accumulate points by rolling the dice until it either 
rolls a 1 or reaches a turn total of 15 or more.

Hints:

1. Use a do-while loop to simulate the computer's turn. 
   The loop should continue as long as the computer's 
   turn total is less than 15 and it hasn't rolled a 1.
2. Inside the loop, call the rollDice() function to get 
   a random dice value (an integer between 1 and 6).
3. Check the dice value obtained from the previous step. 
   If it's a 1, set the computer's turn total to 0 and break out of the loop.
4. If the dice value is not 1, add the value to the computer's 
   turn total and display the roll result and current turn total.
5. After the loop ends, add the computer's turn total to the computer's overall score.
6. The computer's turn should end when the loop condition is no longer satisfied 
  (when the turn total is 15 or more or a 1 is rolled).
*/


// DEFINE THE computer_turn() FUNCTION HERE...


// Function to simulate rolling a dice
int rollDice() {
    return rand() % 6 + 1;
}

int user_turn(){
    char choice;
    int roll, userTurnTotal = 0;
    do {
        roll = rollDice();
        std::cout << "You rolled a " << roll << ". ";
        if (roll == 1) {
            userTurnTotal = 0;
            std::cout << "Your turn is over." << std::endl;
            break;
        }
        userTurnTotal += roll;

        std::cout << "Current turn total: " << userTurnTotal << std::endl;
        std::cout << "Do you want to roll again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');

    return userTurnTotal;
}


int main() {
    // Initialize random seed
    srand(time(0));

    const int winningScore = 100;
    int userTotal = 0, computerTotal = 0;

    std::cout << "Welcome to the Dice Game!" << std::endl;

    while (userTotal < winningScore && computerTotal < winningScore) {

        std::cout << "\nYour turn." << std::endl;
        std::cout << "Your current score: " << userTotal << std::endl;
        std::cout << "Computer's current score: " << computerTotal << std::endl;

        userTotal += user_turn();

        if (userTotal >= winningScore) {
            break;
        }

        std::cout << "\nComputer's turn." << std::endl;
        std::cout << "Computer's current score: " << computerTotal << std::endl;
    
        computerTotal += computer_turn();
    }

    // Determine the winner
    if (userTotal >= winningScore) {
        std::cout << "\nCongratulations! You win!" << std::endl;
    } else {
        std::cout << "\nComputer wins! Better luck next time." << std::endl;
    }

    return 0;
}
