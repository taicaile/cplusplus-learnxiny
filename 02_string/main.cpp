#include <string>
#include <iostream>
using namespace std;

int main(){
    // String
    string myString = "Hello";
    string myOtherString = "World";
    cout << myString + myOtherString;
    myString.append(" dog");
    cout << myString;
    
    // Reference
    string foo = "I am foo";
    string bar = "I am bar";

    string& fooRef = foo;
    fooRef += ". Hi!";
    cout << fooRef;
    
    // Reference cannot be reassigned once set
    cout << &fooRef << endl;
    fooRef = bar;
    cout << &fooRef << endl; // Still prints the address of foo
    cout << fooRef; 
    



}

