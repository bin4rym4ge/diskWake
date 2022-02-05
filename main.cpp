#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int main(int argc, char* argv[]) {
    ofstream wakeFiles[argc];

    cout << "wake on...\n";

    usleep(5000000);

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

        usleep(5000000);
    }
}
