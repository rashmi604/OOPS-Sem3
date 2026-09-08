#include <iostream>
using namespace std;

class Student {
  private: int marks;
  public: Student() {marks = 85; }
  
  // Teacher is declared as a friend class
  friend class Teacher;
};

class Teacher {
  public: void displayMarks(Student s){
    //Friend class can access private members
    cout << "Student Marks: "<s.marks;
  }
};


int main() {
  Student s1; Teacher t1; t1.displayMarks(s1);
  return 0;
}


//a friend class is a class that is given permission to access the private and protected members of another class

//)friendship is one way)
//Student markes Teacher its friend , Teacher can access Student's private data,not vice versa

