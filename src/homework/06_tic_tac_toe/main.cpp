#include <iostream>
#include <string>
#include "tic_tac_toe.cpp"

using namespace std;

int main()
{
    TicTacToe game;
    string first_player;
    char play_again = 'y';

    cout << "Welcome to Tic Tac Toe!\n\n";

    do {
        cout << "Enter the first player (X or O): ";
        cin >> first_player;

        game.start_game(first_player);

        while (!game.game_over()) {
            int position;

            cout << game.get_player() << ", enter a position (1-9): ";
            cin >> position;

            game.mark_board(position);

            cout << endl;
            game.display_board();
        }

        cout << "Game over!\n";
        char choice;
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        if (choice == 'n') {
            play_again = 'n';
        }
        else {
            game.clear_board();
        }

    } while (play_again == 'y');

    cout << "\nThank you for playing Tic Tac Toe!\n";

    return 0;
}
