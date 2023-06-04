#include <iostream>
#include "gameboard.h"

using namespace std;

GameBoard::GameBoard() {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            board[i][j] = '-';            
}

void GameBoard::printBoard() {
    cout << endl;
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}

bool GameBoard::makeMove(int row, int col, char player) {
    if (board[row][col] == '-') {
        board[row][col] = player;
        return true;
    }
    else 
        return false;   
}

bool GameBoard::isFull() {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (board[i][j] == '-') 
                return false;   
    return true;
}

bool GameBoard::checkWin() {
    for (int i = 0; i < 3; i++) {         // �ˬd���
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') {
            return true;
        }
    }  
    for (int j = 0; j < 3; j++) {       // �ˬd����
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '-') {
            return true;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {   // �ˬd�﨤�u
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        return true;
    }
    // �p�G�S��Ĺ�a�A�^�� false
    return false;
}
