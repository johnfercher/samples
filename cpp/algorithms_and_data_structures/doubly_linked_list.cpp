#include "iostream"

using namespace std;

template<class T>
struct Node{
  Node<T> *next;
  Node<T> *previous;
  T value;
};

template<class T>
class DoublyLinkedList{
private:
  Node<T> *head;
  Node<T> *tail;

  unsigned long long lenght;

public:
  DoublyLinkedList(){
    head = new Node<T>();
    tail = new Node<T>();

    head->next = tail;
    head->previous = tail;

    tail->next = head;
    tail->previous = head;
  }

  void push_front(T value){
    Node<T> *new_node = new Node<T>();
    new_node->next = head;
    new_node->previous = tail;

    head->previous = new_node;
    head = new_node;
    head->next->value = value;
    lenght++;
  }

  void push_back(T value){
    Node<T> *new_node = new Node<T>();
    new_node->value = value;
    new_node->next = tail;
    new_node->previous = tail->previous;

    tail->previous->next = new_node;
    tail->previous = new_node;
    lenght++;
  }

  T peek_front(){
    return head->next->value;
  }

  T peek_back(){
    return tail->previous->value;
  }

  T pop_front(){
    T value = head->next->value;

    auto aux = head->next;
    head->next = head->next->next;
    head->next->previous = head;

    delete aux;
    lenght--;

    return value;
  }

  T pop_back(){
    T value = tail->previous->value;

    auto aux = tail->previous;
    tail->previous = tail->previous->previous;
    tail->previous->next = tail;

    delete aux;
    lenght--;

    return value;
  }
  
  void show(){
    auto actual = head;
    while(true){
      if(actual->next != tail){
        cout << actual->next->value << endl;
        actual = actual->next;
      }else{
        break;
      }
    }
  }

  unsigned long long size(){
    return lenght;
  }
};

int main(){
  auto doubly = new DoublyLinkedList<int>();

  doubly->push_back(11);
  doubly->push_back(12);
  doubly->push_back(13);
  doubly->push_front(10);
  doubly->push_front(9);

  //cout << doubly->get_tail()->previous->value << endl;
  //cout << doubly->pop_back() << endl;
  cout << "removendo " << doubly->pop_back() << endl;
  //doubly->show();
  //cout << doubly->pop_back() << endl;
  doubly->show();
}
