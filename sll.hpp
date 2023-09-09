


namespace sll {

    struct Node {
        Node* next; // указатель на следующий элемент Node
        Node* prev; // указатель на предыдущий элемент Node
        int data; // пользовательские данные (хранимый объект)
    };

    class Sll
    {
    private:
        Node* first;
        Node* m_last;
        size_t m_size = 0;

    public:
        Sll() = default;
        ~Sll() = default;

        void push_back(int value) {
            Node* new_node = new Node{}; // создание нового узла
            new_node->prev = m_last; // предыдущим элементом станет последний
            new_node->next = nullptr; // следующего элемента пока нет
            new_node->data = value; // сохраняем пользовательские данные
            m_last = new_node; // обновляем указатель на последний
            m_size += 1; // обновляем размер
            }
    };

    
} // end sll