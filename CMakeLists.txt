cmake_minimum_required(VERSION 3.14)
project(LearningC)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearningC main.cpp data-structure/BTreeNode.cpp data-structure/BTreeNode.h BinaryTree.cpp BinaryTree.h)