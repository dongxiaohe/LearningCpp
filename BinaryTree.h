//
// Created by Danny Dong on 2019-06-28.
//

#ifndef LEARNINGC_BINARYTREE_H
#define LEARNINGC_BINARYTREE_H

#include <string>
#include <iostream>

using namespace std;

class BinaryTree {
public:
    string val;

    BinaryTree() {
        val = "no value";
    }

    void printVal() {
        cout << val << endl;
    }

    string foo();
};


#endif //LEARNINGC_BINARYTREE_H
