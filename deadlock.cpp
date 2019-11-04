#include <iostream>
#include <fstream>
#include <string>
#include <ArgumentManager.h>
using namespace std;

void readInput(ifstream& f){

    string n; //number of rsrc
    string m; //number of processes

    getline(f, n);
    getline(f, m);

    string avail[m];

    for(int i=0;i<(m-1);i++){
        getline(f, avail[i]);
    }

    string max[n][m];

    for(i=0;i<(n-1);i++){
        for(int j=0;j<(m-1);j++){
            getline(f, max[i][j]);
        }
    }

    string need[n][m]; //fill with request vectors
    int deadlines[n];
    int comptime[n];

    return;
}



int main(int argc, char* argv){

    string fname = string(argv[0]);
    ifstream f(fname);

    readInput(f);


    return 0;
}
