#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "tic_tac_toe.h"
#include "catch.hpp"
#include <iostream>
#include <cassert>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

void test_start_game() {
    TicTacToe game;
    game.start_game("X");
    assert(game.get_player() == "X");
    game.start_game("O");
    assert(game.get_player() == "O");
}

void test_mark_board() {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    assert(game.get_player() == "O");
    game.mark_board(5);
    assert(game.get_player() == "X");
}

void test_game_over() {
    TicTacToe game;
    game.start_game("X");
    assert(!game.game_over());
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(3);
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(6);
    game.mark_board(7);
    game.mark_board(8);
    game.mark_board(9);
    assert(game.game_over());
}

int main() {
    test_start_game();
    test_mark_board();
    test_game_over();
    std::cout << "All tests passed!\n";
    return 0;
}
