#include <cstdio>

#include <iostream>
using namespace std;

// https://learnxinyminutes.com/docs/c++/

// Function overloading
void print(char const* myString){
    printf("String %s\n", myString);
}

void print(int myInt){
    printf("My int is %d", myInt);
}

// Default function arguments
void doSomeingWithInts(int a=1, int b=4){
    // Do something with the ints here
}

// Namespaces provide seperate scopes for variable, function
// and other declarations.
// namespace can be nested

namespace First{
    namespace Nested{
        void foo(){
            printf("This is First::Nested::foo\n");
        }
    }
}

namespace Second{
    void foo(){
        printf("This is Second::foo\n");
    }
    void bar(){
        printf("This is Second::bar\n");
    }
}

void foo(){
    printf("This is global foo\n");
}

int main(int argc, char **argv)
{
    printf("Hello, world!\n");
    // in C++, character literals are chars,
    cout << "size of char:" << sizeof(char) << endl;
    cout << "size of 'c':" << sizeof('c') << endl;

    printf("C++ has strict prototyping\n");
    void func(); // function which accepts no arguments

    printf("In C++, Use nullptr instead of NULL in C\n");
    int *ip = nullptr;

    printf("C++ provides function overloading\n");
    print("Hello World\n");
    print(123);

    // default function arguments
    doSomeingWithInts();
    doSomeingWithInts(123);
    doSomeingWithInts(123, 456);

    // Namespace
    using namespace Second;
    bar();
    Second::foo();
    First::Nested::foo();
    ::foo();

    // Standard input and output

    int myInt;
    // Prints to stdout
    cout << "Enter your favorite number:\n";
    // Takes in input
    cin >> myInt;

    cout << "Your favorite number is " << myInt << '\n';

    cerr << "Used for error messages\n";

    return 0;
}
