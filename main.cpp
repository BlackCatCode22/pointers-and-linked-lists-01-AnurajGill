#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n = 5;

    cout << &n << endl;

    int * ptr =&n;

    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;

    int v;
    int* ptr2=&v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    int num1 = 20;
    cout << &num1 << endl;
    int *p = &num1;
    cout << p << endl;
    cout << *p << endl;
    *p = 50;
    cout << *p << endl;


    int age = 19;
    double gpa = 2.7;
    string name = "Raj";

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << *pAge;





    return 0;
}
