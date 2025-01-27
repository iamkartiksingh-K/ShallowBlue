#ifndef BOARD_H
#define BOARD_H
#include <string>

class Board {
private:
    char board[8][8];
    void loadPositionFromFen(std::string fen);
public:
    Board();
    void printBoard();
    void makeMove(int startX, int startY, int endX, int endY);
};

#endif
