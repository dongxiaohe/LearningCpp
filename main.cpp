#include <iostream>
#include "BinaryTree.h"

int main() {
    std::string greeting {"hello world"};
    std::cout << greeting << std::endl;
    std::cout << "Hello, World!" << std::endl;

    BinaryTree binaryTree;
    binaryTree.printVal();
    binaryTree.val = "123";
    binaryTree.printVal();
    std::cout << binaryTree.foo() << std::endl;

    return 0;
}
