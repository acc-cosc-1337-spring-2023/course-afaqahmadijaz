#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <vector>
#include <string>

class TicTacToe
{
public:
    TicTacToe() = default;
    TicTacToe(int size) : pegs(size*size, " ") {};
    TicTacToe(std::vector<std::string> p, std::string win) : pegs{p}, winner{win} {};

    std::string get_player() const { return player; }
    std::string get_winner() const { return winner; }
    std::vector<std::string> get_pegs() const { return pegs; }

    bool check_board_full() const;
    void set_winner();
    void set_player_names(std::string player_1, std::string player_2);
    bool game_over();
    void start_game(std::string first_player);
    bool mark_board(int position) {
    if (pegs[position - 1] != " ") {
        return false;
    } else {
        pegs[position - 1] = player;
        set_next_player();
        return true;
    }
}
    std::string get_winner_2();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
    friend std::istream& operator>>(std::istream& in, TicTacToe& t);

protected:
    std::vector<std::string> pegs{};
    virtual bool check_column_win() const;
    virtual bool check_row_win() const;
    virtual bool check_diagonal_win() const;
    std::string winner{};
    std::string player{};

private:
    void set_next_player();
    void clear_board();
};

#endif
