#ifndef __CHILD_H
#define __CHILD_H

#include <iostream>
#include <memory>
using namespace std;

class Mother;
class Father;

class Child {
private:
    shared_ptr<Mother> mom;
    shared_ptr<Father> dad;
    string name;
public:
    Child(string name, shared_ptr<Father> dad, shared_ptr<Mother> mom) {
        this->name = name;
        this->mom = mom;
        this->dad = dad;
        cout << "Child constructor ..." << endl;
    }

    ~Child() {
        cout << "Child destructor ..." << endl;
    }

    void printProfile() {
        cout << "Child print method ..." << endl;
    }
};

#endif /* __CHILD_H */