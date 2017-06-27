/*!
    \file intrusive_bintree.cpp
    \brief Intrusive binary tree container example
    \author Ivan Shynkarenka
    \date 22.06.2017
    \copyright MIT License
*/

#include "intrusive/bintree.h"

#include <iostream>

struct MyBinTreeNode : public CppCommon::BinTree<MyBinTreeNode>::Node
{
    int value;
    MyBinTreeNode(int v) : value(v) {}
    friend bool operator<(const MyBinTreeNode& node1, const MyBinTreeNode& node2)
    { return node1.value < node2.value; }
};

int main(int argc, char** argv)
{
    CppCommon::BinTree<MyBinTreeNode> bintree;

    MyBinTreeNode item1(1);
    MyBinTreeNode item2(2);
    MyBinTreeNode item3(3);
    MyBinTreeNode item4(4);
    MyBinTreeNode item5(5);
    MyBinTreeNode item6(6);
    MyBinTreeNode item7(7);
    MyBinTreeNode item8(8);
    MyBinTreeNode item9(9);

    bintree.push(item6);
    bintree.push(item3);
    bintree.push(item7);
    bintree.push(item2);
    bintree.push(item8);
    bintree.push(item1);
    bintree.push(item4);
    bintree.push(item9);
    bintree.push(item5);

    std::cout << "bintree:" << std::endl;
    for (auto it : bintree)
        std::cout << it.value << std::endl;

    return 0;
}
