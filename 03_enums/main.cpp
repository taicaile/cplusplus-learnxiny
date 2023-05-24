#include <iostream>

using namespace std;

enum ECarTypes
{
 Sedan,
 Hatchback,
 SUV,
 Wagon
};

ECarTypes GetPreferredCarType(){

    return ECarTypes::Hatchback;
}


int main(){

    
    cout<< GetPreferredCarType();
}
