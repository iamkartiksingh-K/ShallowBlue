#include "../include/board.h"
#include <iostream>
#include <string>

Board::Board(){
    std::string startFen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = '.';  // Default value
        }
    }
    loadPositionFromFen(startFen);
}
void Board::loadPositionFromFen(std::string fen) {
    int len = fen.find(' ');
    std::string position = fen.substr(0, len);
    int file = 0, rank = 7;
    for (char ch : position) {
        if (isalpha(ch)) {
            Board::board[rank][file] = ch;
            file++;
        } else if (ch == '/') {
            file = 0;
            rank--;
        } else {
            int space = ch - '0';
            file += space;
        }
    }
}
void Board::printBoard(){
    for (int rank = 7; rank >= 0; rank--) {
        for (int file = 0; file <= 7; file++) {
            std::cout<<Board::board[rank][file]<<" ";
        }
        std::cout<<"\n";
    }
}
void Board::makeMove(int startX, int startY, int endX, int endY){
    return;
}
