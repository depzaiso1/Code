#include <iostream>
using namespace std;

void printPrimes(int lower, int upper)
{
    //TODO
    int i, j, a;
    for(i=lower; i<=upper; i++){
        a=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                a++;
            }
        }
        if(a==2){
            cout << i << " ";
        }
    }
}

int main()
{
    int lower, upper;
    cin>>lower;
    cin>>upper;
    // Calling function to print all primes between the given range.
    printPrimes(lower, upper);
    return 0;
}