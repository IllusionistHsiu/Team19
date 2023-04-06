#include <iostream>
#include "gameboard.h"
#include "player.h"
using namespace std;

int main() {
    GameBoard gameBoard; // 創建一個遊戲板物件
    Player player1("玩家1", 'X'); // 創建第一位玩家，用X表示
    Player player2("玩家2", 'O'); // 創建第二位玩家，用O表示
    int currentPlayer = 1; // 記錄目前是哪位玩家的回合

    cout << "歡迎來到井字遊戲" << endl;
    cout << "遊戲規則:在遊戲版有兩橫兩豎的「井」字符號，共有九格。";
    cout << "兩位玩家，一個畫「○」，另一人畫「Ｘ」，輪流在九宮格上劃上自己的符號，最先連成一條線（直的、橫的、斜的都可）者為贏家。";
    cout << "若九格畫完，雙方均無法連成一線，即為和局。"<< endl;
    cout << "玩家1為: X | 玩家2為: O" << endl;
    cout << endl;
    cout << "[0,0]|[0,1]|[0,2]"<<endl;
    cout << "-----------------"<<endl;
    cout << "[1,0]|[1,1]|[1,2]" << endl;
    cout << "-----------------" << endl;
    cout << "[2,0]|[2,1]|[2,2]" << endl;
    cout << "以上為每個個子的數字，請記住!!";
    gameBoard.printBoard(); // 初始畫面
    while (!gameBoard.isFull() && !gameBoard.checkWin()) { // 如果遊戲板還未滿或還沒有玩家贏得遊戲，繼續執行下去
        int row, col;
        
        if (currentPlayer == 1) { // 玩家1的回合
            cout << "接下來為玩家1" << endl;
            cin >> row >> col;
           gameBoard.makeMove(row, col, 'X'); // 玩家1進行遊戲動作
           system("cls");
            gameBoard.printBoard(); // 顯示目前的遊戲板
            currentPlayer = 2; // 換到玩家2的回合
        }
        else { // 玩家2的回合
            cout << "接下來為玩家2" << endl;
            cin >> row >> col;
            gameBoard.makeMove(row, col, 'O'); // 玩家2進行遊戲動作
            system("cls");
            gameBoard.printBoard(); // 顯示目前的遊戲板
            currentPlayer = 1; // 換到玩家1的回合
        }
    }

    // 結束遊戲，顯示最終結果
    if (gameBoard.checkWin()) {
        cout << "輸家為" << currentPlayer <<  endl;
    }
    else {
        cout << "平手!" << endl;
    }

    return 0;
}
