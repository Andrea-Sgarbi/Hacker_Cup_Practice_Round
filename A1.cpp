#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int n_burger;
    int single_C;
    int double_C;
    int K_C;
    int n_meat;
    int n_bread;

    ifstream fin("src/A1/cheeseburger_corollary_1_input.txt");
    ofstream fout("src/A1/cheeseburger_corollary_1_andrea_sgarbi_submission_output.txt", ios::trunc);

    fin >> n_burger;

    for (int i = 0; i < n_burger; i++)
    {
        fin >> single_C;
        fin >> double_C;
        fin >> K_C;

        n_meat = single_C + double_C * 2;
        n_bread = single_C * 2 + double_C * 2;

        fout << "Case #" << i + 1 << ": ";

        if ((n_meat >= K_C) && (n_bread >= K_C + 1))
            fout << "YES" << endl;
        else
            fout << "NO" << endl;
    }

    fin.close();
    fout.close();
}