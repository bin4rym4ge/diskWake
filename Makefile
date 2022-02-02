default:
	g++ -o ./bin/main.o -c ./main.cpp
	g++ -o ./bin/diskWake ./bin/main.o

install:
	cp ./bin/diskWake ~/bin/
	chmod +x ~/bin/wakeAll
