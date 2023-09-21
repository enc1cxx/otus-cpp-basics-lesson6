#include "double_linked_list.hpp"
#include "single_linked_list.hpp"
#include "sll.hpp"

int main() {
  // 1
  single_linked_list::SingleLinkedList<int> list1;
  // 2
  for (int i = 0; i < 10; ++i) {
    list1.push_back(i);
  }
  // 3
  std::cout << "result print() = ";
  list1.print();
  // 4
  std::cout << " list1.size() = " << list1.size() << std::endl;
  // 5
  list1.erase(list1.begin());
  //   list1.erase(std::next(list1.begin(), 3));
  //   list1.erase(std::next(list1.begin(), 4));
  // 6
  std::cout << "result print() = ";
  list1.print();

  single_linked_list::SingleLinkedList<int> list2;
  list2 = list1;

  std::cout << "result print() = ";
  list2.print();

//   std::cout << "================" << std::endl;

//   // 1
//   single_linked_list::SingleLinkedList<int> list2 = {0, 1, 2, 3, 4,
//                                                      5, 6, 7, 8, 9};

//   // 3
//   std::cout << "result print() = ";
//   list2.print();
//   // 4
//   std::cout << " list2.size() = " << list2.size() << std::endl;
//   // 5
//   list2.erase(list2.before_begin());
//   //   list1.erase(std::next(list1.begin(), 3));
//   //   list1.erase(std::next(list1.begin(), 4));
//   // 6
//   std::cout << "result print() = ";
//   list2.print();

  return 0;
}
