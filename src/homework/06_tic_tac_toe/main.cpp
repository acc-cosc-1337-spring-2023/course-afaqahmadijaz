#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::make_unique;
using std::string;
using std::unique_ptr;
using std::vector;

void display_game(unique_ptr<TicTacToe>& game) {
    cout << *game << "\n";
}

int main() {
    string player1;
    string player2;
    string first_player;
    int choice = 0;
    bool play = true;
    unique_ptr<TicTacToe> game;
    TicTacToeData data;
    TicTacToeManager manager{ data };
    int x_win{ 0 };
    int o_win{ 0 };
    int ties{ 0 };

    cout << "Welcome to TicTacToe!\n";

    while (play) {
        cout << "Enter '3' to play Tic Tac Toe 3 or '4' to play Tic Tac Toe 4: ";
        cin >> choice;
        while (choice != 3 && choice != 4) {
            cout << "Invalid choice. Enter '3' to play Tic Tac Toe 3 or '4' to play Tic Tac Toe 4: ";
            cin >> choice;
        }

        cout << "Enter player 1 name: ";
        cin >> player1;
        cout << "Enter player 2 name: ";
        cin >> player2;

        if (choice == 3) {
            game = make_unique<TicTacToe3>();
        }
        else if (choice == 4) {
            game = make_unique<TicTacToe4>();
        }

        cout << "Enter who goes first | X or O: ";
        cin >> first_player;

        while (first_player != "X" && first_player != "O") {
            cout << "Invalid choice. Enter who goes first - X or O: ";
            cin >> first_player;
        }

        game->start_game(first_player == "X" ? "O" : "X");
        display_game(game);

        while (!game->game_over()) {
            int position;

            cout << "Enter position (1-" << game->get_pegs().size() << ") for " << game->get_player() << ": ";
            cin >> position;

            while (!game->mark_board(position)) {
                cout << "Invalid move. Enter position (1-" << game->get_pegs().size() << ") for " << game->get_player() << ": ";
                cin >> position;
            }
        }
        display_game(game);
        cout << "Game over!\n";
        cout << *game << "\n";
        if (game->get_winner() == "X")  {
            cout << "Congratulations " << player1 << "! You won!\n";
            x_win++;
        }
        else if (game->get_winner() == "O") {
            cout << "Congratulations " << player2 << "! You won!\n";
            o_win++;
        }
        else    {
            cout << "It's a tie!\n";
            ties++;
        }
    manager.save_game(game);
    cout << "Scoreboard - X wins: " << x_win << " O wins: " << o_win << " Ties: " << ties << "\n";
    cout << "Enter 'y' to play again or any other key to quit: ";
    string play_again;
    cin >> play_again;

    if (play_again != "y") {
        play = false;
    }
}

cout << "Thanks for playing!\n";

return 0;

}
