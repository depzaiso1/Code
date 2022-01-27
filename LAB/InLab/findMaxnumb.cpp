#include <bits/stdc++.h>
using namespace std;

void process(string filename)
{
    ifstream myfile(filename);
    if (myfile.is_open())
    {
        int M,N;
        int a[M][N];
        myfile >> M >> N;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                myfile >> a[i][j];
            }
        }
    }
    else
        return 0;
}
int main()
{
    return 0;
}