#include <iostream>
#include <memory>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using namespace std;

bool continue_game();

int main()
{
    unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>();
    string player1;
    string player2;
    char turn;

    do
    {
        cout << "Enter player 1 name: ";
        cin >> player1;
        cout << "Enter player 2 name: ";
        cin >> player2;

        do
        {
            cout << "Enter starting player (X or O): ";
            cin >> turn;
        } while (turn != 'X' && turn != 'O');

        unique_ptr<TicTacToe> game;

        int choice;
        cout << "Select the board size (3 or 4): ";
        cin >> choice;

        if (choice == 3)
        {
            game = make_unique<TicTacToe3>();
        }
        else if (choice == 4)
        {
            game = make_unique<TicTacToe4>();
        }

        game->start_game(string(1, turn));
        game->set_player_names(player1, player2);

        do
        {
            cout << *game;
            cin >> *game;
            manager->save_game(game);
        } while (!game->game_over());

        cout << *game;
        cout << "Winner: " << game->get_winner() << endl;
    } while (continue_game());

    cout << *manager;

    return 0;
}


bool continue_game()
{
    char choice;
    cout << "Do you want to play again? (Y/N): ";
    cin >> choice;
    return choice == 'Y' || choice == 'y';
}
