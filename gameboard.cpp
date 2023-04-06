#include <iostream>
#include "gameboard.h"

using namespace std;

GameBoard::GameBoard() {
    // ��l�ƹC���O
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}

void GameBoard::printBoard() {
    // ��ܹC���O
    cout << endl;
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}

bool GameBoard::makeMove(int row, int col, char player) {
    // ���a�i��C���ʧ@
    if (board[row][col] == '-') {
        board[row][col] = player;
        return true;
    }
    else {
        return false;
    }
}

bool GameBoard::isFull() {
    // �P�_�C���O�O�_�w��
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '-') {
                return false;
            }
        }
    }
    return true;
}

bool GameBoard::checkWin() {
    // �P�_�O�_�����aĹ�o�C��
    // �ˬd���
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') {
            return true;
        }
    }
    // �ˬd����
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '-') {
            return true;
        }
    }
    // �ˬd�﨤�u
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        return true;
    }
    // �p�G�S��Ĺ�a�A�^�� false
    return false;
}
