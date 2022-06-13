#include <iostream>

void increment1(int** p)
{
    p = p + 1;
}

void increment2(int** p)
{
    *p = *p + 1;
}

void increment3(int** p)
{
    **p = **p + 1;
}

int main() 
{
    int i = 10;
    int* p = &i;

    int** p2 = &p;
    std::cout << p << '\n';
    std::cout << *p2 << '\n';
    std::cout << &i << '\n';

    std::cout << i << '\n';
    std::cout << *p << '\n';
    std::cout << **p << '\n';
}

#include <iostream>

int main(){
    int i = 10;
    int* p = &i;
    int* p2 = p;
    int* p3 = p2;

    int** p_1 = &p;
    int** p_2 = &p2;
    int** p_3 = &p3;

    std::cout << i <<'\n';
    std::cout << *p << '\n';
    std::cout << *p2 << '\n';
    std::cout << *p3 << "\n\n";

    std::cout << **p_1 << '\n';
    std::cout << **p_2 << '\n';
    std::cout << **p_3 << "\n\n";

    
    std::cout << &i << '\n';
    std::cout << p << '\n';
    std::cout << p2 << '\n';
    std::cout << p3 << '\n';
    std::cout << sizeof(*p) << "\n\n";

    std::cout << p_1 << ", " << p_2 << ", " << p_3 << '\n'; 
}


#include <iostream>

int sum(int *a, int size)
{
    int ans = 0;
    for (int i = 0; i < size; ++i)
    {
        ans += a[i];
    }
    std::cout << *a << '\n';
    return ans;
}


int main()
{
    int a[10] = {1, 3, 1, 5, 6, 5, 2, 3, 1, 3};
    int* p = &a[0];
    std::cout << sizeof(a) << '\n'; 
    std::cout << sum(p+1, 9) << '\n';
}


#include <iostream>

void incrementPointer(int* p)
{
    p = p + 1;
}

void increment(int* p)
{
    ++(*p);
}

int main()
{
    int i = 10;
    int* p = &i;

    std::cout << *p << '\n';


}


#include <iostream>

int main(){
    int i = 10;
    int* p = &i;

    std::cout << p << '\n';
    p = p + 1;
    std::cout << p << '\n'; 

}


#include <iostream>

int main(){
    int i;
    std::cout << i << std::endl;
    
    ++i;
    std::cout << i << std::endl;

    int* p = &i;
    std::cout << p << '\n';

    std::cout << *p << '\n';
    ++(*p);
    std::cout << *p << '\n';
    

}



#include <iostream>

int main(){
    int i = 10;
    int* p = &i;
    int* q = p;
    int* r = q;

    std::cout << i <<'\n';
    std::cout << *p << '\n';
    std::cout << *q << '\n';
    std::cout << *r << '\n';

    
    std::cout << p << '\n';
    std::cout << sizeof(*p) << '\n';
}


#include <iostream>

struct Node{
    int data;
    Node* link;
}

int main(){
    Node* A;
    A = NULL; // Empty List.

    Node* temp = 
    (Node*) malloc(sizeof(Node));

    (*temp).data = 2;
    (*temp).link = NULL;

    A = temp;

    return 0;
}