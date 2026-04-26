#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    Student(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

int main() {

    vector<Student> students;
    int choice;

    while(true) {

        cout << "\n1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            int id;
            string name;
            float marks;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Marks: ";
            cin >> marks;

            students.push_back(Student(id, name, marks));
            cout << "Student added successfully\n";
        }

        else if(choice == 2) {

            if(students.empty())
                cout << "No records found\n";

            else
                for(auto s : students)
                    s.display();
        }

        else if(choice == 3)
            break;

        else
            cout << "Invalid choice\n";
    }

    return 0;
}
