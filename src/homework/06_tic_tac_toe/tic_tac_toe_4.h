#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe {
public:
    TicTacToe4() : TicTacToe(4) {};
    TicTacToe4(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner) {};

    bool game_over();
    void mark_board(int position);
    void display_board(std::ostream& out) const;
    void set_next_player();

private:
    bool check_column_win() const override;
    bool check_row_win() const override;
    bool check_diagonal_win() const override;
};

#endif