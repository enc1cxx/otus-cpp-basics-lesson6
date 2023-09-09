#include <gtest/gtest.h>

#include "single_linked_list.hpp"

using namespace single_linked_list;

TEST(TestSingleLinkedList, is_empty) {
    SingleLinkedList<int> list;
    ASSERT_TRUE(list.IsEmpty());
}

TEST(TestSingleLinkedList, is_empty_initializer_list) {
    SingleLinkedList<int> list = {};
    ASSERT_TRUE(list.IsEmpty());
}

TEST(TestSingleLinkedList, not_empty) {
    SingleLinkedList<int> list;
    list.push_front(1);
    ASSERT_TRUE(!list.IsEmpty());
}

TEST(TestSingleLinkedList, self_equal) {
    SingleLinkedList<int> list;
    ASSERT_TRUE(list == list);
}

TEST(TestSingleLinkedList, contains_equal) {
    SingleLinkedList<int> list1;
    SingleLinkedList<int> list2;
    list1.push_front(1);
    list1.push_front(2);
    list1.push_front(3);

    list2.push_front(1);
    list2.push_front(2);
    list2.push_front(3);
    ASSERT_TRUE(list1 == list2);
}