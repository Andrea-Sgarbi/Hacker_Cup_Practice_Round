#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <set>

using namespace std;

typedef struct
{
    int e1, e2;
} edges_struct;

// # template: https://github.com/kamyu104/GoogleCodeJam-Farewell-Rounds/blob/main/Round%20B/railroad_maintenance.py3
// # reference: https://en.wikipedia.org/wiki/Biconnected_component

int iter_biconnected(vector<int> v)
{
    return 0;
}

int iter_biconnected_components(vector<int> graph[])
{
    // int index_counter = 0;
    vector<int> index, lowlinks, stack;
    set<int> stack_set;

    int j = 0;

    for (auto it = graph[j].begin();
         it != graph[j].end(); it++)
    {
    }

    return 0;
}

int main()
{

    int cases;

    ifstream fin("src/D/sample_input.txt");
    ofstream fout("src/D/sample_output.txt", ios::trunc);

    fin >> cases;

    cout << "cases: " << cases << endl;

    for (int i = 0; i < cases; i++)
    {
        int N, M;
        fin >> N >> M;

        edges_struct E[M];

        for (int j = 0; j < M; j++)
        {
            fin >> E[j].e1 >> E[j].e2;
        }

        int Q;

        fin >> Q;

        int a[Q], b[Q];

        for (int j = 0; j < Q; j++)
        {
            fin >> a[j] >> b[j];
        }

        vector<int> graph[N];

        if (i == 0)
        {
            cout << "N: " << N << endl;
            cout << "M: " << M << endl;
        }

        for (int j = 0; j < M; j++)
        {
            if (i == 0)
            {
                cout << "iter: " << j << endl;
                cout << "E[j].e1: " << E[j].e1 << endl;
                cout << "E[j].e2: " << E[j].e2 << endl;
                cout << endl;
            }
            graph[E[j].e1 - 1].push_back(E[j].e2 - 1);
            graph[E[j].e2 - 1].push_back(E[j].e1 - 1);
        }

        if (i == 0)
        {
            cout << "graph" << endl;
            // for (int j = 0; j < M; j++)
            // {
            //     // for (int k = 0; k < graph[j].size(); k++)
            //     //     cout << graph[j].at(k) << " ";
            //     cout << "size: " << graph[j].size() << endl;

            //     cout << endl;
            // }

            for (int j = 0; j < N; j++)
            {
                cout << "size: " << graph[j].size() << endl;
                cout << "Elements at index "
                     << j << ": ";

                // Displaying element at each column,
                // begin() is the starting iterator,
                // end() is the ending iterator
                for (auto it = graph[j].begin();
                     it != graph[j].end(); it++)
                {

                    // (*it) is used to get the
                    // value at iterator is
                    // pointing
                    cout << *it << ' ';
                }
                cout << endl;
            }
        }

        // int bccs = 0;

        // bccs = iter_biconnected_components(graph);
    }

    fin.close();
    fout.close();
}