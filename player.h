#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    Player(string name, char symbol); // �غc�l
    string getName(); // ���o���a�W��
    char getSymbol(); // ���o���a�Ÿ�
    void setName(string name); // �]�w���a�W��
    void setSymbol(char symbol); // �]�w���a�Ÿ�

private:
    string name; // ���a�W��
    char symbol; // ���a�Ÿ�
};

#endif // PLAYER_H
