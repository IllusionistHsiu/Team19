#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class GameBoard {
public:
    GameBoard(); 
    void printBoard(); // �C���O
    bool makeMove(int row, int col, char player); // ���a�i��C���ʧ@
    bool isFull(); 
    bool checkWin(); 

private:
    char board[3][3]; 
};

#endif 
