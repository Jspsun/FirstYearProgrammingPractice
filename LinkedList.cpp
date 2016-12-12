#include <iostream>
using namespace std;

struct Node {
  int   data;
  Node *next = NULL;
  Node(int x) {
    data = x;
  }
};

class LinkedList {
  Node *head = NULL;

public:

  int length;
  LinkedList() {
    length = 0;
  }

  void add(int d) {
    Node *newNode = new Node(d);

    if (head == NULL) {
      head = newNode;
    }

    Node *tempNode = head;

    for (int i = 0; i < length; i++) {
      tempNode = tempNode->next;
    }
    tempNode->next = newNode;
    length++;
  }

  // asssumes valid input
  int get(int index) {
    Node *tempNode = head;

    for (int i = 0; i < index; i++) {
      tempNode = tempNode->next;

      if (tempNode == NULL) {
        return 999;
      }
    }
    return tempNode->data;
  }
};

int main() {
  LinkedList *list = new LinkedList();

  list->add(1);
  list->add(2);


  for (int i = 0; i < list->length; i++) {
    cout << list->get(i) << endl;
  }
}
