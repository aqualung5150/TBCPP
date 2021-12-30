#include <iostream>

using namespace std;

class Student
{
    private:
    int m_id;
    string m_name;

    public:
    Student(const string& name_in)
    : Student(0, name_in)
    {}
    
    Student(const int& id_in, const string& name_in)
    : m_id(id_in), m_name(name_in)
    {}

    void print()
    {
        cout << m_id << " " << m_name << endl;
    }
};