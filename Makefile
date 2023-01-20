default:
	g++ -o ./bin/main.o -c ./main.cpp
	g++ -o ./bin/diskwake ./bin/main.o

install:
	cp ./bin/diskwake /usr/bin/
	chmod +x /usr/bin/diskwake
