#include "iostream"

using namespace std;

enum NodePart { Head = 0, Tail = 0 };

template<class T>
union NodeValue{
  T content;
  NodePart status;
};

template<class T>
struct Node{
  NodeValue<T> value;
  Node *next;
};

template<class T>
class LinkedList{
private:
  Node<T> *head;
  Node<T> *tail;
  unsigned long long act_size;

public:
  LinkedList(){
    act_size = 0;
    Node<T> *head_init = new Node<T>();
    head_init->value.status = NodePart::Head;
    head_init->next = NULL;

    Node<T> *tail_init = new Node<T>();
    tail_init->value.status = NodePart::Tail;
    tail_init->next = NULL;

    head = head_init;
    tail = tail_init;
  }

  void push_back(T value){
    Node<T> *node = new Node<T>();
    node->value.content = value;
    node->next = head;

    head = node;
    act_size++;
  }

  T pop_back(){
    Node<T> *n = head;
    T ret = n->value.content;
    head = head->next;

    delete n;
    act_size--;
    return ret;
  }

  void push_front(T value){
    Node<T> *node = new Node<T>();
    node->value.status = NodePart::Tail;

    tail->value.content = value;
    tail->next = node;

    tail = node;
    act_size++;
  }

  T pop_front(){
    Node<T> *actual = head;
    Node<T> *last = new Node<T>();

    for(unsigned long long i = 0 ; i < act_size-1 ; i++){
      last = actual;
      actual = actual->next;
    }

    tail = last;
    T ret = actual->value.content;
    delete actual;
    act_size--;

    return ret;
  }

  unsigned long long size(){
    return act_size;
  }

  T at(unsigned long long index){
    unsigned long long truly_index = act_size - index;

    Node<T> *actual = head;
    for(unsigned long long i = 0 ; i < truly_index ; i++){
      if(i == truly_index-1)
        return actual->value.content;

      actual = actual->next;
    }
  }
};

int main(){
  auto linkedList = new LinkedList<int>();

  linkedList->push_back(11);
  linkedList->push_back(12);
  linkedList->push_back(13);

  //cout << linkedList->pop_front() << endl;
  cout << linkedList->at(1) << endl;

  return 0;
}
