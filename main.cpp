#include <iostream>
#include "Gameboard.h"
#include "Player.h"
#include"Computer.h"
#include<iomanip>
using namespace std;
void rule() {
    cout << "�w��Ө줫�r�C��" << endl;
    cout << "�C���W�h:�b�C����������ݪ��u���v�r�Ÿ��A�@���E��C";
    cout << "��쪱�a�A�@�ӵe�u���v�A�t�@�H�e�u��v�A���y�b�E�c��W���W�ۤv���Ÿ��A�̥��s���@���u�]�����B��B�ת����i�^�̬�Ĺ�a�C";
    cout << "�Y�E��e���A���觡�L�k�s���@�u�A�Y���M���C" << endl;
    cout << "���a1��: O | ���a2��: X" << endl;
    cout << endl;
    cout << "[0,0]|[0,1]|[0,2]" << endl;
    cout << "-----------------" << endl;
    cout << "[1,0]|[1,1]|[1,2]" << endl;
    cout << "-----------------" << endl;
    cout << "[2,0]|[2,1]|[2,2]" << endl;
    cout << "�H�W���C�ӭӤl���Ʀr!!";
}
void printGameStartPage(){
    cout <<setw(70)  << "=============================" << endl;
    cout << setw(70) << "|       Game Start          |" << endl;
    cout << setw(70) << "=============================" << endl;
    cout << setw(70) << "|                           |" << endl;
    cout << setw(70) << "|        �w��Ө�           |" << endl;
    cout << setw(70) << "|        ���r�C��           |" << endl;
    cout << setw(70) << "|                           |" << endl;
    cout << setw(70) << "=============================" << endl;
    cout << setw(64) << "���U��������~��";
    cin.get();
    cout << setw(60) << "�C���}�l" << endl;
}
void twoplayer() {
GameBoard gameBoard; // �Ыؤ@�ӹC���O����
    Player player1("���a1", 'O'); // �ЫزĤ@�쪱�a�A��X���
    Player player2("���a2", 'X'); // �ЫزĤG�쪱�a�A��O���
    int currentPlayer = 1; // �O���ثe�O���쪱�a���^�X
    gameBoard.printBoard(); // ��l�e��
    while (!gameBoard.isFull() && !gameBoard.checkWin()) {
        int row, col;
        if (currentPlayer == 1) { // ���a1���^�X
            system("cls");
            rule();
            cout << "���U�Ӭ����a1" << endl;
            gameBoard.printBoard();
            cin >> row >> col;
            gameBoard.makeMove(row, col, 'O'); // ���a1�i��C���ʧ@
            system("cls");
            gameBoard.printBoard(); // ��ܥثe���C���O
            currentPlayer = 2; // ���쪱�a2���^�X
        }
        else { // ���a2���^�X
            system("cls");
            rule();
            cout << "���U�Ӭ����a2" << endl;
            gameBoard.printBoard();
            cin >> row >> col;
            gameBoard.makeMove(row, col, 'X'); // ���a2�i��C���ʧ@
            system("cls");
            gameBoard.printBoard(); // ��ܥثe���C���O
            currentPlayer = 1; // ���쪱�a1���^�X
        }
    }
    // �����C��
    if (gameBoard.checkWin()) {
        if (currentPlayer == 1)
            currentPlayer = 2;
        else currentPlayer = 1;
        system("cls");
        cout << setw(70) << "=============================" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(61) << "|         Ĺ�a�����a"<< currentPlayer <<"       | " << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "=============================" << endl;
    }
    else {
        system("cls");
        cout << setw(70) << "=============================" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|           �M��            |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "|                           |" << endl;
        cout << setw(70) << "=============================" << endl;
    }
}
void oneplayer(){
    Computer game;
    game.Play();
}
void chosemod() {
    int mod;
    cout << setw(63) << "�п�J�C���Ҧ�" << endl;
    cout << setw(62) << "1.���aVS�q��" << endl;
    cout << setw(62) << "2.���aVS���a" << endl;
    cin >> mod;
    if (mod == 1)
        oneplayer();
    else if (mod == 2)
        twoplayer();
    else {
        system("cls");
        cout << "��J���~�A�Э���" << endl;
        chosemod();
    }
}
int main() {
    printGameStartPage();
    system("cls");
    chosemod();
    
}
