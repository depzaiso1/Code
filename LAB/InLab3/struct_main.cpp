#include <bits/stdc++.h>
using namespace std;
struct SCP
{
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;
};
void addAddendum(SCP &obj, string addendum)
{
    obj.numAddendums += 1;
    int num = obj.numAddendums - 1;
    // cout << num << endl;
    string *temp = new string[obj.numAddendums];
    for (int i = 0; i < num; i++)
    {
        temp[i] = obj.addendums[i];
    }
    temp[num] = addendum;

    obj.addendums = temp;
}
int main()
{

    string *addendums = nullptr;
    SCP obj{55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 0};

    addAddendum(obj, "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.");

    cout << obj.addendums[0];

    delete[] obj.addendums;
}
