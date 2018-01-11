#include "iostream"
#include "cstdlib"
#include "optional"

using namespace std;

/*
  LinkedList
    - Estrutura fundamental, pois todos os outros partem dele
    - Tamanho variavel**
    - Um nó aponta para o proximo, se o nó for o "primeiro" o mesmo é NULL
*/

template<class T>
struct Node{
  T value;
  Node *next;
};

template<class T>
class LinkedList{
private:
  Node<T> *head;

  int deepSearch(Node<T> *actualNode, int actualSize = 0){
    if(actualNode == NULL)
      return actualSize;

    deepSearch(actualNode->next, ++actualSize);
  }

public:
  LinkedList(){
    head = NULL;
  }

  void push(int value){
    Node<T> *n = new Node<T>();
    n->value = value;
    n->next = head;
    head = n;
  }

  std::optional<T> pop(){
    if(head == NULL)
      return {};

    Node<T> *n = head;
    int ret = n->value;
    head = head->next;

    delete n;
    return ret;
  }

  std::optional<T> peek(){
    if(head == NULL)
      return {};

    return head->value;
  }

  int size(){
    return deepSearch(head);
  }
};

int main(){
  LinkedList<int> list;

  list.push(12);
  list.push(55);
  list.push(16);

  //cout << list.size() << endl;
  cout << list.pop().value_or(0) << endl;
  cout << list.size() << endl;
  cout << list.pop().value_or(0) << endl;
  cout << list.size() << endl;
  cout << list.pop().value_or(0) << endl;
  cout << list.size() << endl;
}
