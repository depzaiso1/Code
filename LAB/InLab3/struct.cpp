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

string convertToString(SCP obj)
{
    string str;
    string item = "Item #: SCP-";
    string id_item = to_string(obj.id);
    while (id_item.size() < 3)
        id_item = "0" + id_item;
    item += id_item;

    string oclass;
    if (obj.objClass == 0)
        oclass = "Safe";
    else if (obj.objClass == 1)
        oclass = "Euclid";
    else
        oclass = "Keter";
    string d = "Description: " + obj.description;
    string z = "Special Containment Procedures: " + obj.speConProcedures;
    str = item + "\n" + "Object Class: " + oclass + "\n" + z + "\n" + d + "\n";

    for (int i = 0; i < obj.numAddendums; i++)
    {
        str += obj.addendums[i] + "\n";
    }
    return str;
}
int main()
{
    string *addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP obj{55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    cout << convertToString(obj);

    delete[] addendums;
}