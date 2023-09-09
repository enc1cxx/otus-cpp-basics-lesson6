#include <cassert>
#include <cstddef>
#include <string>
#include <utility>
#include <initializer_list>
#include <algorithm>
#include <iostream>

namespace double_linked_list {

    struct Node
    {
    public:
        Node() = default;
        Node(int value, Node* next, Node* prev)
            : value_(value), 
            next_node_(next),
            prev_node_(prev) {}

    private:
        int value_;
        Node* prev_node_ = nullptr;
        Node* next_node_ = nullptr;
    };


    class DoubleLinkedList {
    public:
        DoubleLinkedList() = default;

    private:
        size_t size_ = 0;
        Node head_;
    };

} //end double_linked_list



