#include <iostream>
using namespace std;
int getMaxElement(int arr[], int n)
{
    //TODO
    int max=0;
    for(int i = 0; i < n;i++){
        if (max < arr[i]) max = arr[i];
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<<getMaxElement(ar,n);
    return 0;
}