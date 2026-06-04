#include <iostream>
using namespace std;

class AAA {
public:
    void function() {
        cout << "AAA's function" << endl;
    }
};

class BBB : public AAA {
public:
    void function() {
        cout << "BBB's function" << endl;
    }
};

class CCC : public BBB {
public:
    void function() {
        cout << "CCC's function" << endl;
    }
};

int main() {
    AAA* ptrA = new CCC();
    BBB* ptrB = new CCC();
    CCC* ptrC = new CCC();

    ptrA->function();
    ptrB->function();
    ptrC->function();

    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}