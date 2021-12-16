#include <iostream>

using namespace std;

typedef struct {
    int id;
    string name;
} Student;

Student enter1_Student();
void enter2_Student(Student &);
void enter3_Student(Student *);
void print_Student(Student);

int main()
{
    Student s;
    
    // s = enter1_Student();
    // enter2_Student(s);
    enter3_Student(&s);

    print_Student(s);

    return 0;
}

Student enter1_Student()
{
    Student s;
    
    s.id = 1000;
    s.name = "Peter Harris";
    
    return s;
}

// passing-by-reference
void enter2_Student(Student &s)
{
    s.id = 1000;
    s.name = "Peter Harris";
}

// passing-by-referene (pointer)
void enter3_Student(Student *s)
{
    s->id = 1000;
    (*s).name = "Peter Harris";
}

// pass-by-value
void print_Student(Student s)
{
    cout << "ID: " << s.id << "\tName: " << s.name << endl;
}
