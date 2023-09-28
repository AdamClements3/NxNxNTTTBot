default:
	g++ -O3 TicTacToe.cpp Board.cpp Player.cpp Computer.cpp -o TicTacToe

run: default
	./TicTacToe 3

4: default
	./TicTacToe 4

5: default
	./TicTacToe 5