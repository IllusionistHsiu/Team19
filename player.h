#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    Player(string name, char symbol); // 建構子
    string getName(); // 取得玩家名稱
    char getSymbol(); // 取得玩家符號
    void setName(string name); // 設定玩家名稱
    void setSymbol(char symbol); // 設定玩家符號

private:
    string name; // 玩家名稱
    char symbol; // 玩家符號
};

#endif // PLAYER_H
