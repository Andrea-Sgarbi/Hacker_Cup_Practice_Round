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
    // long mcm = 0;

    double unit_cost_1, unit_cost_2;

    ifstream fin("src/A2/cheeseburger_corollary_2_input.txt");
    ofstream fout("src/A2/cheeseburger_corollary_2_ouput.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
        fin >> cost_1 >> cost_2 >> budget_k_decker;

        unit_cost_1 = (double)cost_1 / 3;
        unit_cost_2 = (double)cost_2 / 4;

        /* 4 possible solutions */
        long k_decker_1 = 0, k_decker_2 = 0, k_decker_3 = 0, k_decker_4 = 0;
        long budget_aux = 0;

        // First possible solution: 0 singles
        k_decker_1 = (budget_k_decker / cost_2) * 2 - 1;

        // Second possible solution: 1 singles
        hamburger = 0;
        bread = 0;

        budget_aux = budget_k_decker - cost_1;
        hamburger += 1;
        bread += 2;
        if (budget_aux >= 0)
        {
            bread += (budget_aux / cost_2) * 2;
            hamburger += (budget_aux / cost_2) * 2;
            k_decker_2 = bread - 1;
        }
        else
        {
            k_decker_2 = 0;
        }

        // Third possible solution: 1 singles
        hamburger = 0;
        bread = 0;

        budget_aux = budget_k_decker - 2 * cost_1;
        hamburger += 2;
        bread += 4;
        if (budget_aux >= 0)
        {
            bread += (budget_aux / cost_2) * 2;
            hamburger += (budget_aux / cost_2) * 2;
            if (bread - 1 > hamburger)
                k_decker_3 = hamburger;
            else
                k_decker_3 = bread - 1;
        }
        else
        {
            k_decker_3 = 0;
        }

        // Fourth possible solution: 1 singles
        hamburger = 0;
        bread = 0;

        budget_aux = budget_k_decker % cost_1;
        hamburger += (budget_k_decker / cost_1);
        bread += (budget_k_decker / cost_1) * 2;

        bread += (budget_aux / cost_2) * 2;
        hamburger += (budget_aux / cost_2) * 2;
        if (bread - 1 > hamburger)
            k_decker_4 = hamburger;
        else
            k_decker_4 = bread - 1;

        k_decker = 0;

        if (k_decker < k_decker_1)
            k_decker = k_decker_1;

        if (k_decker < k_decker_2)
            k_decker = k_decker_2;

        if (k_decker < k_decker_3)
            k_decker = k_decker_3;

        if (k_decker < k_decker_4)
            k_decker = k_decker_4;

        fout << "Case #" << i + 1 << ": "
             << k_decker << endl;
    }

    fin.close();
    fout.close();
}