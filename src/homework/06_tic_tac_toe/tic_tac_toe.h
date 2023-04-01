#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

class TicTacToe {
public:
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    bool game_over() const;
    void clear_board(); // move this function to public section

private:
    void set_next_player();
    bool check_board_full() const;
    std::string player;
    std::vector<std::string> pegs{9, " "};
};


#endif
