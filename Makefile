CXX = g++
CXXFLAGS	= -std=c++17

all: tictactoe

clean:
	rm tictactoe

tictactoe: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o tictactoe

