#include <iostream>

using namespace std;

typedef struct {
    int id;
    string name;
} Student;

void enter_Student(Student &);
void print_Student(Student);

int main()
{
    Student s;
    
    enter_Student(s);

    print_Student(s);

    return 0;
}

// passing-by-reference
void enter_Student(Student &s)
{
    s.id = 1000;
    s.name = "Peter Harris";
}

// pass-by-value
void print_Student(Student s)
{
    cout << "ID: " << s.id << "\tName: " << s.name << endl;
}