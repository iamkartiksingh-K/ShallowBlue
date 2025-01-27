#include <iostream>
#include "../include/board.h"

int main() {
    std::cout << "ShallowBlue Chess Engine" << std::endl;
    Board b = Board();
    b.printBoard();
    return 0;
}
