#ifndef __MOTHER_H
#define __MOTHER_H

#include <iostream>
#include <memory>
#include "child.h"
using namespace std;

class Mother {
private:
    weak_ptr<Child> child;
    string name;
public:
    Mother(string name=NULL) {
        this->name = name;
        cout << "Mother constructor ..." << endl;
    }

    ~Mother() {
        cout << "Mother destructor ..." << endl;
    }

    void setChild( shared_ptr<Child> child ) {
        this->child = child;
    }

    void printProfile() {
        cout << "Mother print method ..." << endl;
    }
};

#endif /* __MOTHER_H */