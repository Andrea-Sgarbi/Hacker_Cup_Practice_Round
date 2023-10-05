#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int cases;

    ifstream fin("src/A1/sample_input.txt");
    ofstream fout("src/A1/sample_output.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
    }

    fin.close();
    fout.close();
}