#include "double_linked_list.hpp"
#include "single_linked_list.hpp"
#include "vector.hpp"

int main() {
  // 1
  single_linked_list::SingleLinkedList<int> list1 = {0, 1, 2, 3, 4,
                                                     5, 6, 7, 8, 9};
  // 2
  // for (int i = 0; i < 10; ++i) {
  //  list1.push_back(i);
  //}
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

  single_linked_list::SingleLinkedList<int> list1_move(std::move(list1));

  std::cout << "Result list1_move print() = ";
  list1_move.print();
  std::cout << "list1_move.size() = " << list1_move.size() << std::endl;

  std::cout << "Result print() = ";
  list1.print();
  std::cout << "list1.size() = " << list1.size() << std::endl;

  single_linked_list::SingleLinkedList<int> list1_move_assignment;
  list1_move_assignment = std::move(list1_move);

  std::cout << "Result list1_move_assignment print() = ";
  list1_move_assignment.print();
  std::cout << "list1_move_assignment.size() = " << list1_move_assignment.size()
            << std::endl;

  std::cout << "=================================================" << std::endl;

  // 1
  double_linked_list::DoubleLinkedList<int> list2 = {0, 1, 2, 3, 4,
                                                     5, 6, 7, 8, 9};
  // 2
  /* for (int i = 0; i < 10; ++i) {
     list2.push_back(i);
   }*/
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

  double_linked_list::DoubleLinkedList<int> list2_move(std::move(list2));

  std::cout << "Result list2_move print() = ";
  list2_move.print();
  std::cout << "list2_move.size() = " << list2_move.size() << std::endl;

  std::cout << "Result print() = ";
  list2.print();
  std::cout << "list2.size() = " << list2.size() << std::endl;

  double_linked_list::DoubleLinkedList<int> list2_move_assignment;
  list2_move_assignment = std::move(list2_move);

  std::cout << "Result list2_move_assignment print() = ";
  list2_move_assignment.print();
  std::cout << "list2_move_assignment.size() = " << list2_move_assignment.size()
            << std::endl;

  std::cout << "=================================================" << std::endl;

  // 1
  vector::Vector<int> vector1;
  // 2
  for (int i = 0; i < 10; ++i) {
    vector1.push_back(i);
  }
  // 3
  std::cout << "Result print() = ";
  vector1.print();
  // 4
  std::cout << "vector1.size() = " << vector1.size() << std::endl;
  // 5
  vector1.erase(std::next(vector1.begin(), 1));
  vector1.erase(std::next(vector1.begin(), 2));
  vector1.erase(std::next(vector1.begin(), 3));
  // 6
  std::cout << "Result print() = ";
  vector1.print();
  // 7
  vector1[0] = 10;
  // 8
  std::cout << "Result print() = ";
  vector1.print();
  // 9
  vector1.insert(std::next(vector1.begin(), 3), 20);
  // 10
  std::cout << "Result print() = ";
  vector1.print();
  // 11
  vector1.push_back(30);
  // 12
  std::cout << "Result print() = ";
  vector1.print();

  std::cout << *vector1.begin() << std::endl;
  std::cout << vector1[0] << std::endl;

  // vector1.pop_front();

  std::cout << "Result print() = ";
  vector1.print();
  std::cout << "vector1.size() = " << vector1.size() << std::endl;

  vector::Vector<int> vector1_move(std::move(vector1));

  std::cout << "Result vector1_move print() = ";
  vector1_move.print();
  std::cout << "vector1_move.size() = " << vector1_move.size() << std::endl;

  std::cout << "Result print() = ";
  vector1.print();
  std::cout << "vector1.size() = " << vector1.size() << std::endl;

  double_linked_list::DoubleLinkedList<int> vector1_move_assignment;
  // vector1_move_assignment = std::move(vector1_move);

  std::cout << "Result vector1_move_assignment print() = ";
  vector1_move_assignment.print();
  std::cout << "vector1_move_assignment.size() = "
            << vector1_move_assignment.size() << std::endl;
}
