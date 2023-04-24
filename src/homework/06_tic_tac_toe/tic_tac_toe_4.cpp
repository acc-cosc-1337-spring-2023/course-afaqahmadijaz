#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win() const {
    for(int i = 0; i < 4; i++){
        if(pegs[i] == pegs[i+4] && pegs[i+4] == pegs[i+8] && pegs[i+8] == pegs[i+12] && pegs[i] != " "){
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_row_win() const {
    for(int i = 0; i < 13; i += 4){
        if(pegs[i] == pegs[i+1] && pegs[i+1] == pegs[i+2] && pegs[i+2] == pegs[i+3] && pegs[i] != " "){
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win() const {
    if((pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15] && pegs[0] != " ")
    || (pegs[3] == pegs[6] && pegs[6] == pegs[9] && pegs[9] == pegs[12] && pegs[3] != " ")){
        return true;
    }
    return false;
}

void TicTacToe4::display_board(std::ostream& out) const {
    out << "\n";
    for(int i = 0; i < 13; i += 4){
        out << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "|" << pegs[i+3] << "\n";
    }
    out << "\n";
}

bool TicTacToe4::game_over() {
    if(check_column_win() || check_row_win() || check_diagonal_win()){
        set_winner();
        return true;
    }
    else if(check_board_full()){
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe4::set_next_player() {
    if(player == "X"){
        player = "O";
    }
    else{
        player = "X";
    }
}
