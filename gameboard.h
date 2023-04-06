#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class GameBoard {
public:
    GameBoard(); // 建構子
    void printBoard(); // 顯示遊戲板
    bool makeMove(int row, int col, char player); // 玩家進行遊戲動作
    bool isFull(); // 判斷遊戲板是否已滿
    bool checkWin(); // 判斷是否有玩家贏得遊戲

private:
    char board[3][3]; // 遊戲板
};

#endif 
