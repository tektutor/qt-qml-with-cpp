#ifndef __FATHER_H
#define __FATHER_H

#include <iostream>
#include <memory>
#include "child.h"
using namespace std;

class Father {
private:
    weak_ptr<Child> child;
    string name;
public:
    Father(string name=NULL) {
        this->name = name;
        cout << "Father constructor ..." << endl;
    }

    ~Father() {
        cout << "Father destructor ..." << endl;
    }

    void setChild( shared_ptr<Child> child ) {
        this->child = child;
    }

    void printProfile() {
        cout << "Father print method ..." << endl;
    }
};

#endif /* __FATHER_H */