files = Model/Board.cpp Model/Computer.cpp Model/Player.cpp View/View.cpp Controller/Controller.cpp

default:
	g++ -O3 $(files) -o TicTacToe

run: default
	./TicTacToe