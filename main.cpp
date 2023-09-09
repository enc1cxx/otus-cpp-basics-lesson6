#include "single_linked_list.hpp"
#include "double_linked_list.hpp"
#include "sll.hpp"

int main() {
    single_linked_list::SingleLinkedList<int> list1;
    std::cout << " list1.size() = " << list1.size() << std::endl;
    list1.print();

    list1.push_back(1); 
    std::cout << " list1.size() = " << list1.size() << std::endl;
    list1.print();

    list1.push_back(2);
    std::cout << " list1.size() = " << list1.size() << std::endl;
    list1.print();

    list1.push_back(3);
    std::cout << " list1.size() = " << list1.size() << std::endl;
    list1.print();  
    //============================================

    // single_linked_list::SingleLinkedList<int> list2;
    // std::cout << " list2.size() = " << list2.size() << std::endl;
    // list2.print();

    // list2.push_front(3); 
    // std::cout << " list2.size() = " << list2.size() << std::endl;
    // list2.print();

    // list2.push_front(2);
    // std::cout << " list2.size() = " << list2.size() << std::endl;
    // list2.print();

    // list2.push_front(1);
    // std::cout << " list2.size() = " << list2.size() << std::endl;
    // list2.print();


    // std::cout << (list1 == list2) << std::endl;


    return 0;
}