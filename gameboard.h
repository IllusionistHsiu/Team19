#ifndef GAMEBOARD_H
#define GAMEBOARD_H

class GameBoard {
public:
    GameBoard(); // �غc�l
    void printBoard(); // ��ܹC���O
    bool makeMove(int row, int col, char player); // ���a�i��C���ʧ@
    bool isFull(); // �P�_�C���O�O�_�w��
    bool checkWin(); // �P�_�O�_�����aĹ�o�C��

private:
    char board[3][3]; // �C���O
};

#endif 
