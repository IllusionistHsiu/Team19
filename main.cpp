#include <iostream>
#include "gameboard.h"
#include "player.h"
using namespace std;

int main() {
    GameBoard gameBoard; // �Ыؤ@�ӹC���O����
    Player player1("���a1", 'X'); // �ЫزĤ@�쪱�a�A��X���
    Player player2("���a2", 'O'); // �ЫزĤG�쪱�a�A��O���
    int currentPlayer = 1; // �O���ثe�O���쪱�a���^�X

    cout << "�w��Ө줫�r�C��" << endl;
    cout << "�C���W�h:�b�C����������ݪ��u���v�r�Ÿ��A�@���E��C";
    cout << "��쪱�a�A�@�ӵe�u���v�A�t�@�H�e�u��v�A���y�b�E�c��W���W�ۤv���Ÿ��A�̥��s���@���u�]�����B��B�ת����i�^�̬�Ĺ�a�C";
    cout << "�Y�E��e���A���觡�L�k�s���@�u�A�Y���M���C"<< endl;
    cout << "���a1��: X | ���a2��: O" << endl;
    cout << endl;
    cout << "[0,0]|[0,1]|[0,2]"<<endl;
    cout << "-----------------"<<endl;
    cout << "[1,0]|[1,1]|[1,2]" << endl;
    cout << "-----------------" << endl;
    cout << "[2,0]|[2,1]|[2,2]" << endl;
    cout << "�H�W���C�ӭӤl���Ʀr�A�аO��!!";
    gameBoard.printBoard(); // ��l�e��
    while (!gameBoard.isFull() && !gameBoard.checkWin()) { // �p�G�C���O�٥������٨S�����aĹ�o�C���A�~�����U�h
        int row, col;
        
        if (currentPlayer == 1) { // ���a1���^�X
            cout << "���U�Ӭ����a1" << endl;
            cin >> row >> col;
           gameBoard.makeMove(row, col, 'X'); // ���a1�i��C���ʧ@
           system("cls");
            gameBoard.printBoard(); // ��ܥثe���C���O
            currentPlayer = 2; // ���쪱�a2���^�X
        }
        else { // ���a2���^�X
            cout << "���U�Ӭ����a2" << endl;
            cin >> row >> col;
            gameBoard.makeMove(row, col, 'O'); // ���a2�i��C���ʧ@
            system("cls");
            gameBoard.printBoard(); // ��ܥثe���C���O
            currentPlayer = 1; // ���쪱�a1���^�X
        }
    }

    // �����C���A��̲ܳ׵��G
    if (gameBoard.checkWin()) {
        cout << "��a��" << currentPlayer <<  endl;
    }
    else {
        cout << "����!" << endl;
    }

    return 0;
}
