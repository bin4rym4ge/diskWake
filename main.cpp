#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

string path[] = {"/mnt/Seagate/disk.wake", "/mnt/Toshiba/disk.wake", "/mnt/Extreme500/disk.wake"};
const int paths = sizeof(path)/sizeof(path[0]);

ofstream file0;
ofstream file1;
ofstream file2;

int main(int argc, char* argv[]) {

    cout << "wake on...\n";

    usleep(5000000);

    while(true){
        
        file0.open(path[0]);
        file1.open(path[1]);
        file2.open(path[2]);

        file0 << "wake";
        file1 << "wake";
        file2 << "wake";

        file0.close();
        file1.close();
        file2.close();

        usleep(5000000);
    }
}
