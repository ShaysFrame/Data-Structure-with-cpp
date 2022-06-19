// Const Variable

#include <iostream>

int main()
{
    int i = 10;
    int j = 21;
    const int* p = &i; // == 
    //++(*p); //the memory's value can't be changed here because the int* pointer is const.
    //but this allowed
    p = &j;

    int* const p2 = &i; // == int * const p2 = &i;
    (*p2)++;
    //p2 = &j;

    const int* const p3 = &i;
    // p3 = &j; // not allowed
    // ++(*p3); // not allowed


}

#include <iostream>

int main()
{
    int* * p = new int* [10];

        p[0] = new int[20];

        p[1] = new int[20];

        p[2] = new int[20];     // *(p+2)

        *(p+3) = new int[20];   // p[3]

        p[3][0] = 5;

    std::cout << "**p: "      <<**p << '\n';
    std::cout << "*p: "       << *p << '\n';
    std::cout << "*(p + 0): " << *(p+0) << '\n';
    
    std::cout << *(p+3) << '\n';
    std::cout << p[3] << '\n';
    std::cout << p[3][0] <<'\n';

    std::cout << sizeof(p[3]) << '\n';

    delete [] p[0]; //  -> delete [] *(p+0)
    delete [] p[1]; //  -> delete [] *(p+1)
    delete [] p[2]; //  -> delete [] *(p+2)
    delete [] p[3]; //  -> delete [] *(p+3)
    delete [] p;    //  -> delete [] p 

}


// Multi Dimention Array Mem Allocation

#include <iostream>

int main()
{
    #if 0
    int** p = new int*[10];
    for (int i = 0; in < 10; ++i)
    {
        p[i] = new int[20];
    }
    #endif
    // this creates an array of 10 rows with 20 column in each row. 


    // if we want to take user input for column and row size. then we can do the following;
    #if 0
    int rowSize, colSize;
    std::cin >> rowSize >> colSize;
    int** p = new int*[rowSize];
    for (int i = 0; i < rowSize; ++i)
    {
        p[i] = new int[colSize];
    }
    #endif


    //if we also want initialize the columns from user input do the followings:
    int rowSize, colSize;
    std::cin >> rowSize >> colSize;

    int** p = new int*[rowSize];
    for(int i = 0; i < rowSize; ++i)
    {
        p[i] = new int[colSize];
        for (int j = 0; j < colSize; ++j)
        {
            std::cin >> p[i][j];
        }
    }

    // to delete 
    for (int i = 0; i < rowSize; ++i)
    {
        delete [] p[i];
    }
    delete [] p;
} 

//Dynamic memory allocation

#include <iostream>

int main()
{
    int* p = new int;
    *p = 10;
    std::cout << *p << '\n';
    std::cout << p <<'\n';

    double* pd = new double;
    
    char* c = new char;

    int* pa = new int[50];
    int n;
    std::cout << "Enter num of elemetns: ";
    std::cin >> n;
    
    int* pa2 = new int[n];
    //user's input will initiallize the array now.
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> pa2[i];
    }

    int max = -1;
    for (int i = 0; i < n; ++i) 
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    std::cout << max << '\n';
}




//---------------------------
//2-Reference and pass by reference
#include <iostream>

void increment(int n) //function -- (1.0)
{
    ++n;
} // this doesn't increments the i because int n creates its own memory and it's a different variable that gets lost when the function ends. since it's not returning anything from the function. but in this function we can use the int& n to solve this issue which will not create/allocate memory for int n and will only refer to the passed value's memory.  PS: names also can be the same for example the int& n could be int& i as well. 

// so to solve this wiith reference we can do the following.
void incrementWref(int& n) //function --- (1.1)
{
    ++n;
}

// //useless function
// int f1(int n)
// {
//     int a = n;
//     return a;
// }

// returning by reference
int& f(int n)
{
    int a = n;
    return a;
}

int* f2()
{
    int i = 10;
    return &i;
}
//very bad practice f and f2.

//

int main()
{
    #if 0
        int i = 10;
        int j = i;

        ++i;
        std::cout << j << '\n';
    #endif
    
    //declaring j as reference. 

    int i = 10;
    int& j = i;

    /*
     * int& j;
     * j = i; 
     * We can't do the above because j doesn't have a memory allocation j needs to be initialized when it gets declared.
    */
    
    int& k1 = f(i);
    std::cout << k1 << "\n\n";

    increment(i);
    std::cout << i << '\n';

    incrementWref(i); // now it shows the changes because the parameter int& n is referencing to the memory of the i since i was passed as to the function's parementer as an argument. 
    std::cout << i << "\n\n";

    ++i;
    std::cout << j << '\n';
    ++j;
    std::cout << i << '\n';

    int k = 100;
    j = k;
    std::cout << i << '\n';
}

// 1-Address Typecasting 
#if 0
#include <iostream>

int main()
{
    int i = 65;
    char c = i;
    std::cout << c << '\n';

    int* p = &i;
    //char* pc = p; // can't do this instead do the following
    char* pc = (char*)p;

    std::cout << p << '\n';
    std::cout << pc << "\n\n" ;

    std::cout << *p << '\n';
    std::cout << *pc << '\n';
    std::cout << *(pc + 1) << '\n';
    std::cout << *(pc + 2) << '\n';
    std::cout << *(pc + 3) << '\n';
}
#endif