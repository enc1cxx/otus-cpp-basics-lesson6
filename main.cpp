#include "double_linked_list.hpp"
#include "single_linked_list.hpp"

int main() {
  // 1
  single_linked_list::SingleLinkedList<int> list1;
  // 2
  for (int i = 0; i < 10; ++i) {
    list1.push_back(i);
  }
  // 3
  std::cout << "Result print() = ";
  list1.print();
  // 4
  std::cout << "list1.size() = " << list1.size() << std::endl;
  // 5
  list1.erase(std::next(list1.begin(), 1));
  list1.erase(std::next(list1.begin(), 2));
  list1.erase(std::next(list1.begin(), 3));
  // 6
  std::cout << "Result print() = ";
  list1.print();
  // 7
  list1.push_front(10);
  // 8
  std::cout << "Result print() = ";
  list1.print();
  // 9
  list1.insert(std::next(list1.begin(), 3), 20);
  // 10
  std::cout << "Result print() = ";
  list1.print();
  // 11
  list1.push_back(30);
  // 12
  std::cout << "Result print() = ";
  list1.print();

  std::cout << *list1.begin() << std::endl;
  std::cout << list1[0] << std::endl;

  list1.pop_front();

  std::cout << "Result print() = ";
  list1.print();
  std::cout << "list1.size() = " << list1.size() << std::endl;

  std::cout << "=================================================" << std::endl;

  // 1
  double_linked_list::DoubleLinkedList<int> list2;
  // 2
  for (int i = 0; i < 10; ++i) {
    list2.push_back(i);
  }
  // 3
  std::cout << "Result print() = ";
  list2.print();
  // 4
  std::cout << "list2.size() = " << list2.size() << std::endl;
  // 5
  list2.erase(std::next(list2.begin(), 1));
  list2.erase(std::next(list2.begin(), 2));
  list2.erase(std::next(list2.begin(), 3));
  // 6
  std::cout << "Result print() = ";
  list2.print();
  // 7
  list2.push_front(10);
  // 8
  std::cout << "Result print() = ";
  list2.print();
  // 9
  list2.insert(std::next(list2.begin(), 3), 20);
  // 10
  std::cout << "Result print() = ";
  list2.print();
  // 11
  list2.push_back(30);
  // 12
  std::cout << "Result print() = ";
  list2.print();

  std::cout << *list2.begin() << std::endl;
  std::cout << list2[0] << std::endl;

  list2.pop_front();

  std::cout << "Result print() = ";
  list2.print();
  std::cout << "list2.size() = " << list2.size() << std::endl;
}
