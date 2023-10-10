#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    int cases;

    ifstream fin("src/C/sample_input.txt");
    ofstream fout("src/C/sample_output.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {

        int N;
        fin >> N;

        int n_apples = 2 * N - 1;
        vector<long long int> A(n_apples);

        for (int i = 0; i < A.size() - 1; i++)
        {
            fin >> A[i];
        }

        sort(A.begin(), A.end());

        long long left = 0, right = A.size() - 1, sum = 0, predict = -1, count = 0;

        fout << "Case #" << i + 1 << ": ";

        if (A.size() == 1)
        {
            fout << A[left] << '\n';
            break;
        }

        sum = A[left] + A[right];

        while (left < right)
        {
            if (count > 1)
            {
                fout << -1 << '\n';
                break;
            }
            left++;
            right--;
            if (left > right)
                break;

            if (sum != (A[left] + A[right]))
            {
                predict = A[left - 1];
                right++;
                count++;
                sum = A[left] + A[right];
            }
        }
        int res = sum - (predict == -1 ? A[left] : predict);
        fout << res << '\n';
    }

    fin.close();
    fout.close();
}