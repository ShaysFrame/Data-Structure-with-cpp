class Student
{
    public:
    int rollNumber;

    private:
    int age;

    public:

    // 4. Destructor
    ~Student()
    {
        std::cout << "Destructor Called!" << '\n';
    }

    // Default constructor
    Student()
    {
        std::cout << "Constructor called!" <<'\n';
    }

    //Student(int r) // here instead of r if we want to use rollNumber same as the variable inside the class then we need to use the kyeword this which is also called pointer variable. "this" stores the address of the current object that's just being created.
    Student(int rollNumber)
    {
        std::cout << "Constructor 2 called!" <<'\n';
        this -> rollNumber = rollNumber;
    }

    Student(int age, int rollNumber)
    {
        std::cout << "this: " << this << '\n';
        std::cout << "Constructor 3 called!" << '\n';
        this -> age = age;
        this -> rollNumber = rollNumber;
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