#include <iostream>
#include <string>

void CreateBoard(std::string Board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            Board[i][j] = "⬜";
        }
    }
}

void DisplayBoard(std::string Board[3][3]){
    std::cout << Board[0][0] << " | " << Board[0][1] << " | " << Board[0][2] << " | " << std::endl;
    std::cout << Board[1][0] << " | " << Board[1][1] << " | " << Board[1][2] << " | " << std::endl;
    std::cout << Board[2][0] << " | " << Board[2][1] << " | " << Board[2][2] << " | " << std::endl;
}

int GetPlayerChoice(){
    int choice;
    std::cout << "Pick a square to mark. (Numbered 1-9 s.t. row 1 = sqaures [1][2][3] etc.)" << std::endl;
    std::cin >> choice;
    while (choice < 1 || choice > 9){
        std::cout << "Invalid choice, pick an unpicked square (numbered 1-9 respectively)" << std::endl;
        std::cin >> choice;
    }
    return choice;
}

int main(){
    std::string tttBoard[3][3];
    CreateBoard(tttBoard);
    DisplayBoard(tttBoard);
}