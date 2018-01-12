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

  std::optional<T> recursiveElementSearch(Node<T> *actualNode, int objectiveLevel, int actualLevel = 0){
    if(actualNode == NULL)
      return {};

    if(actualLevel == objectiveLevel)
      return actualNode->value;

    return recursiveElementSearch(actualNode->next, objectiveLevel, ++actualLevel);
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
    return head == NULL ? {} : head->value;
  }

  std::optional<T> at(int index){
    if(auto element = recursiveElementSearch(head, index))
        return *element;

    return {};
  }

  bool any(){
    return head == NULL ? false : true;
  }

  int size(){
    return deepSearch(head);
  }
};

int main(){
  LinkedList<int> list;

  cout << list.any() << endl;

  list.push(12);
  list.push(55);
  list.push(16);

  cout << list.any() << endl;
  cout << list.at(3).value_or(0) << endl;

  cout << list.pop().value_or(0) << endl;
  cout << list.pop().value_or(0) << endl;
  cout << list.pop().value_or(0) << endl;
}
