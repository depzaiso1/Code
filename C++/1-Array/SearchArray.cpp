/*Write a C program to input elements in array and search whether an element exists in array or not. How to search element in array linearly in C programming. Logic to search element in array sequentially in C program.

Example

Input

Input size of array: 10
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Output

Element to search is: 25
Element found at index 3
*/
#include <bits/stdc++.h>

using namespace std;

long long t, n, i, a[10005], check = 0, k; 
int main()
{
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> a[i];
    cin >> k;
    for(i=1;i<=n;i++)
        if (a[i] == k){
            cout << i << "\n";
            check = 1;
            break;
        }
    if (check == 0) cout << "does not exist" << "\n";
}