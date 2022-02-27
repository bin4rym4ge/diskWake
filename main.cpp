#include <iostream>
#include <fstream>								// ofstream
#include <unistd.h>								// usleep
using namespace std;

#define USEC 1000000							// micro second to second multiplier
#define WAKEOUT "wake"							// default wake output; will be changeable in the future

int main(int argc, char* argv[]) {
	int stimer = 5*USEC;						// set default timer to 5 seconds
    ofstream wakeFiles[argc];

    cout << "wake on...\n";

    while(true){
        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i].open(argv[i]);			// open wake file
        }

        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i] << WAKEOUT;			// write default wake out to wake file
        }

        for (int i = 1; i < argc; i++)
        {
            wakeFiles[i].close();				// close wake file
        }

        usleep(stimer);							// wait stimer seconds
    }
}
