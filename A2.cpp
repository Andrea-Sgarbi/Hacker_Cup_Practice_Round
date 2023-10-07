#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int cases;
    long cost_1;
    long cost_2;
    long budget_k_decker;
    long k_decker;
    long bread = 0;
    long hamburger = 0;

    double unit_cost_1, unit_cost_2;

    ifstream fin("src/A2/cheeseburger_corollary_2_input.txt");
    ofstream fout("src/A2/cheeseburger_corollary_2_ouput.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
        fin >> cost_1 >> cost_2 >> budget_k_decker;

        unit_cost_1 = (double)cost_1 / 3;
        unit_cost_2 = (double)cost_2 / 4;

        cout << "case: " << i << endl;
        cout << "unit_cost_1: " << unit_cost_1 << endl;
        cout << "unit_cost_2: " << unit_cost_2 << endl;

        if (unit_cost_2 <= unit_cost_1)
        {
            hamburger = (budget_k_decker / cost_2) * 2;
            bread = (budget_k_decker / cost_2) * 2;

            budget_k_decker = budget_k_decker % cost_2;

            hamburger += budget_k_decker / cost_1;
            bread += (budget_k_decker / cost_1) * 2;

            k_decker = bread - 1;
        }
        else
        {

            hamburger = budget_k_decker / cost_1;
            bread = (budget_k_decker / cost_1) * 2;

            budget_k_decker = budget_k_decker % cost_1;

            hamburger += (budget_k_decker / cost_2) * 2;
            bread += (budget_k_decker / cost_2) * 2;

            k_decker = hamburger;
        }

        if (k_decker < 0)
            k_decker = 0;

        fout << "Case #" << i + 1 << ": "
             << k_decker << endl;
    }

    fin.close();
    fout.close();
}