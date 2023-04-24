#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <memory>
#include <vector>

class TicTacToeManager {
public:
    TicTacToeManager();
    TicTacToeManager(TicTacToeData& data);
    void save_game(std::unique_ptr<TicTacToe>& b);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);
    ~TicTacToeManager();

private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_win{ 0 };
    int o_win{ 0 };
    int ties{ 0 };
    void update_winner_count(std::string winner);
    void set_scores();
};
