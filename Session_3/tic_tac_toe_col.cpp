#include <iostream>
#include <vector>

/*
Exercise: Tic-Tac-Toe Game

Create a simple Tic-Tac-Toe game using C++. The program should allow 
two players to play against each other.

Task:

- Implement a function to display the Tic-Tac-Toe board on the screen.
- Create a function to get input from the players for their moves (row and column).
- Implement a function to check if a player has won the game or if it's a draw.
- In the main function, initialize the Tic-Tac-Toe board and display it to the players.
- Prompt each player to enter their move alternatively until one of them wins 
    or the game ends in a draw.
- After each move, display the updated board and check for a win or draw condition.
- Display the result (win, draw, or continue) after each move.
- When the game ends, ask the players if they want to play again.
*/


// Function to display the Tic-Tac-Toe board
void displayBoard(const std::vector<std::vector<char>>& board) {
    std::cout << "\n  1 2 3\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

// Function to get player input for their move
bool getPlayerMove(std::vector<std::vector<char>>& board, char player) {
    int row, col;
    std::cout << "\nPlayer " << player << ", enter your move (row column): ";
    std::cin >> row >> col;

    // Check if the input is valid
    if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != '-') {
        std::cout << "Invalid move! Try again.\n";
        return false;
    }

    board[row - 1][col - 1] = player;
    return true;
}

// Function to check for a win condition
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Function to check for a draw condition
bool checkDraw(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == '-')
                return false;
        }
    }
    return true;
}

int main() {
    char player1 = 'X';
    char player2 = 'O';
    std::vector<std::vector<char>> board(3, std::vector<char>(3, '-'));

    std::cout << "Welcome to Tic-Tac-Toe!\n";
    bool playAgain = true;

    while (playAgain) {
        char currentPlayer = player1;
        bool win = false;
        bool draw = false;

        displayBoard(board);

        while (!win && !draw) {
            if (currentPlayer == player1) {
                while (!getPlayerMove(board, currentPlayer))
                    ;
            } else {
                while (!getPlayerMove(board, currentPlayer))
                    ;
            }

            displayBoard(board);

            // Check for a win
            win = checkWin(board, currentPlayer);

            // Check for a draw
            if (!win)
                draw = checkDraw(board);

            // Switch players
            currentPlayer = (currentPlayer == player1) ? player2 : player1;
        }

        if (win) {
            std::cout << "Player " << currentPlayer << " wins!\n";
        } else {
            std::cout << "It's a draw!\n";
        }

        char playAgainChoice;
        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> playAgainChoice;
        playAgain = (playAgainChoice == 'y' || playAgainChoice == 'Y');
        board = std::vector<std::vector<char>>(3, std::vector<char>(3, '-')); // Reset the board
    }

    std::cout << "Thank you for playing Tic-Tac-Toe. Goodbye!\n";

    return 0;
}
