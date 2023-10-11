#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

long long find_missing(vector<long long int> A, long long target, int i)
{

    long long left = 0, right = A.size() - 1, result = 0;

    while (left <= right)
    {

        if (A[left] + A[right] == target)
        {
            if (left == right)
            {
                result = target / 2;
            }

            left += 1;
            right -= 1;

            continue;
        }

        if (result)
            return -1;

        if (A[left] + A[right] < target)
        {
            result = target - A[left];
            left += 1;
        }
        else
        {
            result = target - A[right];
            right -= 1;
        }

        if (result <= 0)
            return -1;
    }

    return result;
}

int main()
{

    int cases;

    ifstream fin("src/C/two_apples_a_day_input.txt");
    ofstream fout("src/C/two_apples_a_day_output.txt", ios::trunc);

    fin >> cases;

    for (int i = 0; i < cases; i++)
    {

        int N;
        fin >> N;

        int n_apples = 2 * N - 1;
        vector<long long int> A(n_apples);

        for (int j = 0; j < A.size(); j++)
        {
            fin >> A[j];
        }

        sort(A.begin(), A.end());

        long long K_1 = 0, K_2 = 0, K_3 = 0;

        fout << "Case #" << i + 1 << ": ";

        if (A.size() != 1)
        {

            K_1 = find_missing(A, A[0] + A[A.size() - 1], i);
            K_2 = find_missing(A, A[0] + A[A.size() - 2], i);
            K_3 = find_missing(A, A[1] + A[A.size() - 1], i);

            long long min_K = K_1;

            if ((K_1 == -1) && (K_2 == -1) && (K_3 == -1))
                fout << -1 << endl;
            else
            {
                for (int i = 1; i < 2; i++)
                {
                    if (((K_2 < min_K) && (K_2 > -1)) || (min_K == -1))
                        min_K = K_2;
                    if (((K_3 < min_K) && (K_3 > -1)) || (min_K == -1))
                        min_K = K_3;
                }
                fout << min_K << endl;
            }
        }
        else
            fout << 1 << endl;
    }

    fin.close();
    fout.close();
}