#include <iostream>
using namespace std;
const int SIZE = 5;
void drawGrid(int playerX, int playerY) {   
    system("cls");
    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < SIZE; j++) {

            if (i == playerX && j == playerY) {
                cout << " P ";
            }
            else {
                cout << " . ";
            }
        }
        cout << endl;
    }
}
int main() {
    int playerX = 0;
    int playerY = 0;
    char move;
    while (true) {   
        drawGrid(playerX, playerY);
        cout << "\nW = Up";
        cout << "\nS = Down";
        cout << "\nA = Left";
        cout << "\nD = Right";
        cout << "\nQ = Quit";
        cout << "\nEnter your move: ";
        cin >> move;
        // Update player position
        if (move == 'w' || move == 'W') {
            if (playerX > 0)
                playerX--;
        }

        else if (move == 's' || move == 'S') {
            if (playerX < SIZE - 1)
                playerX++;
        }

        else if (move == 'a' || move == 'A') {
            if (playerY > 0)
                playerY--;
        }

        else if (move == 'd' || move == 'D') {
            if (playerY < SIZE - 1)
                playerY++;
        }

        else if (move == 'q' || move == 'Q') {
            break;
        }
    }
    cout << "\nGame Over!";
    return 0;
}
