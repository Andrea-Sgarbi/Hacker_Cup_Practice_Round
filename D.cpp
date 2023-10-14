#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int cases;

    ifstream fin("src/D/sample_input.txt");
    ofstream fout("src/D/sample_output.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
    }

    fin.close();
    fout.close();
}