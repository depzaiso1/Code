#include <iostream>
using namespace std;
int main() {
    long long eye,leg;
    cin >> eye >> leg;
    long long sum = eye/2;
    long long res1 = 0, res2 = 0;


    for (long long tiger=1;tiger<sum;tiger++){
        for (long long os=1;os<sum;os++){
            if ((os+tiger==sum) && (os*2+tiger*4==leg) )
                {
                    res1 = os;
                    res2 = tiger;
                    break;
                }}
    }

    if((eye % 2 != 0) || (res1 == 0 && res2 == 0)){
        cout << "IMPOSSIBLE";
    }
    else{
        cout << res2 << " " << res1;
    }
    return 0;
}   