#include <iostream>
#include <string>

void CreateBoard(std::string Board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            Board[i][j] = "⬜";
        }
    }
}

int main(){
    std::string tttBoard[3][3];
    CreateBoard(tttBoard);
    std::cout << tttBoard[0][0] << "  " << tttBoard[0][1] << "  " << tttBoard[0][2] << "  " << std::endl;
    std::cout << tttBoard[1][0] << "  " << tttBoard[1][1] << "  " << tttBoard[1][2] << " " << std::endl;
    std::cout << tttBoard[2][0] << "  " << tttBoard[2][1] << "  " << tttBoard[2][2] << " " << std::endl;
}