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
    std::cout << Board[0][0] << "  " << Board[0][1] << "  " << Board[0][2] << "  " << std::endl;
    std::cout << Board[1][0] << "  " << Board[1][1] << "  " << Board[1][2] << "  " << std::endl;
    std::cout << Board[2][0] << "  " << Board[2][1] << "  " << Board[2][2] << "  " << std::endl;
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
            Board[1][2] = marker;
            break; 
    }
}

int main(){
    std::string tttBoard[3][3];
    CreateBoard(tttBoard);
    DisplayBoard(tttBoard);
}