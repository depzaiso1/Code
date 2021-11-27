#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

const int MAX = 100;

struct student{
    char name[20];
    long int rollno;
    char sex;
    float height;
    float weight;
};

int main() {
    student cls[MAX];
    int i,n;
    float h,w;
    cout << "How many names ? \n";
    cin >> n;

    for (i = 0; i <= n-1; ++i){
        cout << "record = "<< i+1 << endl;
        cout << "name : "; cin>> cls[i].name;
        cout << "rollno : "; cin>> cls[i].rollno;
        cout << "sex : "; cin>> cls[i].sex;
        cout << "height : "; cin>> cls[i].height;
        cout << "weight : "; cin>> cls[i].weight;
        cout << endl;
    }
    cout << setw(20) << left << "Name";
    cout << setw(20) << left << "Rollno";
    cout << setw(20) << left << "Sex";
    cout << setw(20) << left << "Height";
    cout << setw(20) << left << "Weight" <<endl;
    for(i = 0; i < n; i++){
        cout << setw(20) << left << cls[i].name;
        cout << setw(20) << left << cls[i].rollno;
        cout << setw(20) << left << cls[i].sex;
        cout << setw(20) << left << fixed << setprecision(2) <<cls[i].height;
        cout << setw(20) << left << fixed << setprecision(2) << cls[i].weight <<endl;
    }
    for(i = 0; i<n;i++){
        h += cls[i].height;
        w += cls[i].weight;
    }
    cout << setprecision(5) << h/n << " ";
    cout << setprecision(5) << w/n;
}