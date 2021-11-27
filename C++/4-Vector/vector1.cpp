#include <bits/stdc++.h>
using namespace std;

void vect_iterator(){
    vector<int> v;

    for(int i = 1; i <= 5; i++)
        v.push_back(i);
    
    cout << "Output of begin and end: ";
    for(auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    
    cout << "\nOutput of cbegin and cend: ";
    for(auto i = v.cbegin(); i != v.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for(auto ir = v.rbegin(); ir != v.rend(); ++ir)
        cout << *ir << " ";
    
    cout << "\nOutput of crbegin and crend: ";
    for(auto ir = v.crbegin(); ir != v.crend(); ++ir)
        cout << *ir << " ";
    cout << "\n";
    return;
}

int main(){
    vect_iterator();
    return 0;
}