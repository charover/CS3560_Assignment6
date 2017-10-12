all: build doc

build: main.o game.o othello.o
	g++ main.o game.o othello.o -o game

main.o: main.cc game.h othello.h
	g++ -c main.cc

game.o: game.cc game.h
	g++ -c game.cc

othello.o: othello.cc othello.h
	g++ -c othello.cc

doc: *.cc *.h
	doxygen docfile

clean:
	rm -rf latex html
	rm othello.o game.o main.o game
