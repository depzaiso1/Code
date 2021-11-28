#include <iostream>

using namespace std;
char a[64][64];
int main(){
    int T; cin >> T;
    
    for(int tc = 1; tc <= T; tc++){
        int row, col;
        cin >> row >> col;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> a[i][j];
            }
        }
        bool flag = true;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(a[i][j] == '#'){
                    if(a[i][j+1] == '#' && a[i+1][j] == '#' && a[i+1][j+1] == '#' ){
                        flag = true;
                        a[i][j] = '/';
                        a[i+1][j] ='\\';
                        a[i][j+1] = '\\';
                        a[i+1][j+1] = '/';
                    }
                    else flag = false;
                }
            }
        }
        cout << "Case #" << tc << ":" << endl;
        if(flag){
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++)
                    cout << a[i][j];
                cout << "\n";
            }
        }
        else cout << "Impossible" << endl;
    }
    return 0;
}