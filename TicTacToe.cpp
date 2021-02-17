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

void PlaceMarker(int square, std::string marker, std::string Board[3][3]){
    switch (square) {
        case 1:
            Board[0][0] = marker;
            break;
        case 2:
            Board[0][1] = marker;
            break;
        case 3:
            Board[0][2] = marker;
            break;
        case 4:
            Board[1][0] = marker;
            break;
        case 5:
            Board[1][1] = marker;
            break;
        case 6:
            Board[1][2] = marker;
            break;
        case 7:
            Board[2][0] = marker;
            break;
        case 8:
            Board[2][1] = marker;
            break;
        case 9:
            Board[2][2] = marker;
            break; 
    }
}

int main(){
    std::string tttBoard[3][3], marker;
    int counter = 0, choice;
    CreateBoard(tttBoard);
    DisplayBoard(tttBoard);
    while (counter < 9){
        choice = GetPlayerChoice();
        if (counter % 2 == 0){
            marker = "X";
        }
        else {
            marker = "O";
        }
        PlaceMarker(choice, marker, tttBoard);
        DisplayBoard(tttBoard);
        counter += 1;
    }
}