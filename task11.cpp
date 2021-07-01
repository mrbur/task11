#include <iostream>
#include "Student.h"
#include "Person.h"

int main()
{
    //1 task
    {
        Student s1("Ivan", 18, Gender::MALE, 65);
        Student s2("Sasha", 19, Gender::MALE, 65);
        Student s3("Masha", 20, Gender::FEMALE, 45);
        Student students[3] = { s1, s2, s3 };

        int choose = -1;
        while (choose != 0)
        {
            cout << "Student list: " << endl;
            for (rsize_t i = 0; i < 3; i++) {
                cout << i+1 << " " << students[i].getName() << endl;
            }
            cout << "Insert 0 to quit" << endl;
            cin >> choose;
            if (choose > 0 && choose <= (int)Student::getStudentCount()) {
                students[choose - 1].print();
            }
        }

    }
    return 0;
}

