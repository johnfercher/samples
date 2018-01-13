#include "iostream"
#include "cstdlib"
#include "optional"

using namespace std;

/*
  LinkedList
    - Estrutura fundamental, pois todos os outros partem dele
    - Tamanho variavel**
    - Um nó aponta para o proximo, se o nó for o "primeiro" o mesmo é NULL
    - Não é alocado sequencialmente
    - Não serve para adição de elementos nas duas extremidades, pois é necessário navegar até o final da lista
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

  int deep_search(Node<T> *actualNode, int actualSize = 0){
    if(actualNode == NULL)
      return actualSize;

    deep_search(actualNode->next, ++actualSize);
  }

  std::optional<T> recursive_element_search(Node<T> *actualNode, int objectiveLevel, int actualLevel = 0){
    if(actualNode == NULL)
      return {};

    if(actualLevel == objectiveLevel)
      return actualNode->value;

    return recursive_element_search(actualNode->next, objectiveLevel, ++actualLevel);
  }

  void fill_array(Node<T> *actualNode, T *array, int actualIndex = 0){
    if(actualNode == NULL)
      return;

    array[actualIndex] = actualNode->value;
    fill_array(actualNode->next, array, ++actualIndex);
  }

public:
  LinkedList(){
    head = NULL;
  }

  void push_back(int value){
    Node<T> *n = new Node<T>();
    n->value = value;
    n->next = head;
    head = n;
  }

  std::optional<T> pop_back(){
    if(head == NULL)
      return {};

    Node<T> *n = head;
    int ret = n->value;
    head = head->next;

    delete n;
    return ret;
  }

  std::optional<T> peek_back(){
    if(head == NULL)
      return {};

    return head->value;
  }

  std::optional<T> at(int index){
    if(auto element = recursive_element_search(head, index))
        return *element;

    return {};
  }

  bool any(){
    return head == NULL ? false : true;
  }

  int size(){
    return deep_search(head);
  }

  T* to_array(){
    T *array = new T[size()];
    fill_array(head, array);
    return array;
  }
};

int main(){
  LinkedList<int> list;

  list.push_back(12);
  list.push_back(55);
  list.push_back(16);


  cout << list.at(2).value_or(0) << endl;
}
