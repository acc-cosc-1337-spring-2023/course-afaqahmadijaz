#include "tic_tac_toe_3.h"

bool TicTacToe3::check_column_win() const {
    for (int i = 1; i <= 3; i++)    {
        if (pegs[i - 1] != " " && pegs[i - 1] == pegs[i + 2] && pegs[i - 1] == pegs[i + 5]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_row_win() const  {
    for (int i = 1; i <= 7; i += 3) {
        if (pegs[i - 1] != " " && pegs[i - 1] == pegs[i] && pegs[i - 1] == pegs[i + 1]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_diagonal_win() const {
    return (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8]) || (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]);
}

void TicTacToe3::display_board(std::ostream& out) const{
    out << "\n";
    out << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
    out << "-----\n";
    out << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << "\n";
    out << "-----\n";
    out << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n";
    out << "\n";
}

bool TicTacToe3::game_over()    {
    return check_column_win() || check_row_win() || check_diagonal_win() || check_board_full();

}

void TicTacToe3::set_next_player()  {
    if (player == "X")  {
        player = "O";
        }
    else    {
        player = "X";
        }
}