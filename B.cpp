
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int cases;

    ifstream fin("src/B/dim_sum_delivery_input.txt");
    ofstream fout("src/B/dim_sum_delivery_output.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
        int A, B, R, C;

        fin >> R >> C >> A >> B;

        fout << "Case #" << i + 1 << ": ";

        if (R > C)
            fout << "YES" << endl;
        else
            fout << "NO" << endl;
    }

    fin.close();
    fout.close();
}