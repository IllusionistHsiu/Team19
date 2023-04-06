#include <iostream>
#include "gameboard.h"

using namespace std;

GameBoard::GameBoard() {
    // 初始化遊戲板
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}

void GameBoard::printBoard() {
    // 顯示遊戲板
    cout << endl;
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}

bool GameBoard::makeMove(int row, int col, char player) {
    // 玩家進行遊戲動作
    if (board[row][col] == '-') {
        board[row][col] = player;
        return true;
    }
    else {
        return false;
    }
}

bool GameBoard::isFull() {
    // 判斷遊戲板是否已滿
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
    // 判斷是否有玩家贏得遊戲
    // 檢查橫排
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') {
            return true;
        }
    }
    // 檢查直排
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '-') {
            return true;
        }
    }
    // 檢查對角線
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        return true;
    }
    // 如果沒有贏家，回傳 false
    return false;
}
