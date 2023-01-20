default:
	g++ -o ./bin/main.o -c ./main.cpp
	g++ -o ./bin/diskWake ./bin/main.o

install:
	cp ./bin/diskWake /usr/bin/
	chmod +x /user/bin/diskWake
