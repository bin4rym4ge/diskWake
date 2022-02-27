#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int main(int argc, char* argv[]) {
	int stimer = 5000000;
    ofstream wakeFiles[argc];

    cout << "wake on...\n";

    while(true){
        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i].open(argv[i]);
        }
        
        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i] << "wake";
        }

        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i].close();
        }

        usleep(stimer);
    }
}
