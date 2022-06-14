


//Play with constructors
#include <iostream>
#include "Class.cpp"

int main()
{
    Student s1;    // Constructor 1 called;

    Student s2(101);    // Constructor 2 called;

    Student s3(20, 102);    // Constructor 3 called;

    Student s4(s3);     // Copy Constructor

    s1 = s2;    // Copy assignment operator **No constructor call's being made here** Because s1 and s2 already exists in the memory.

    Student s5 = s4; // here "copy constructor" is being used assignment operator is not used by the copmiler for optimization purposes.
    // which initially means the "Student s5 = s4" will be something like this "Student s5(s4)" which is done by the compiler. 
}



// Constructor and destructors
/*
 * 1. Default Constructor:
 *      Student(){
 *      }
 * 2. Copy Constructor:
 *      Student s2(s1);
 * 3. Copy assignment operator ( = )
 *      s2 = s1;
 * 4. Destructor
 *      ~Student() {
 *      } 
 *      Note: for dynamically allocated objects need to delete the object first
 *      ie. delete s3; << after this line gets executed the destructor gets called. 
 */
#include <iostream>
#include "Class.cpp"

int main()
{
    Student s1(10, 1001);
    Student s2(20, 2001);
    
    Student* s3 = new Student(30, 3001);

// 3. Copy assignment operator ( = )
    s2 = s1; 

    *s3 = s1;

    s2 = *s3;

    delete s3;
    /*
    Student s1(10, 1001);
    std::cout << "S1: ";
    s1.display(); 
    
    //2. copy constructor in action "Student s2(s1);"
    Student s2(s1);
    std::cout << "S2: ";
    s2.display();

    Student* s3 = new Student(20, 2001);
    std::cout << "S3: ";
    s3 -> display();

    Student s4(*s3);

    Student* s5 = new Student(*s3);
    Student* s6 = new Student(s1);
    */


}

// constructor

#include <iostream>
#include "Class.cpp"

int main()
{
    Student s1(10, 1001);
    std::cout << "Address of s1: " << &s1 << '\n'; 
    s1.display();
    
    Student s2(20);
    s2.display();

    /*
    Student s1;
    s1.display();

    Student s2;
    
    Student* s3 = new Student;
    s3 -> display();

    Student s4(10); // Student s4 >> this will only call the default constructor. But if we change Student s4 to Student s4(10); it'll work it'll put the 10 in side the Parametrized Constructor and hence the calling of the 2nd constructor happens.
    s4.display();

    Student* s5 = new Student(101);
    s5->display();

    Student s6(24, 5);
    s6.display();
    */
}

// getter setter
//StudentNew.cpp file

#include <iostream>

Class Student
{
    public:
    int rollNumber;

    private:
    int age;

    public:

    // Default constructor
    Student()
    {
        std::cout << "Constructor called!" <<'\n';
    }

    void display()
    {
        std::cout << age << ", " << rollNumber << '\n';
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a, int password)
    {
        if(password != 123)
        {
            return;
        }
        if(a < 0)
        {
            return;
        }

        age = a;
    }
};

int main()
{
    Student s1;

    Student* s2 = new Student;

    s1.setAge(20, 123);
    s2 -> setAge(24, 123);

    s1.display();
    s2 -> display();
}

// OOP

#include <iostream>

// make a Class file for the Class Student.
Class Student{
    public:
        int rollNumber;
    
    private:
        int age;
    
    public:
        void display()
        {
            std::cout << age << " " << rollNumber << '\n';
        }

        int getAge()
        {
            return age;
        }
};

int main()
{
    //Create objects statically
    Student s1;
    Student s2;

    Student s3, s4, s5;

    //s1.age = 24;
    s1.rollNumber = 101;

    std::cout << "S1 age: " << s1.getAge() << std::endl;
    std::cout << "S1 Roll number: " << s1.rollNumber << std::endl;

    s1.display();
    s2.display();

    //s2.age = 30;
    std::cout << s2.getAge() << std::endl;

    // Creating objects Dynamically
    Student* s6 = new Student;
    //(*s6).age = 23;
    (*s6).rollNumber = 104;
    
    (*s6).display();

    std::cout << "S6 age: " << s6 -> getAge() << '\n';

    // the code bellow is the same as the above code snippet.
    //shortcut
    //s6 -> age = 23;
    s6 -> rollNumber = 104; 
    s6 -> display();

    
}