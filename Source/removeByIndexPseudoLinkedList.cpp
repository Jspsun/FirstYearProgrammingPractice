#include <iostream>
using namespace std;

struct Node {
  int   data;
  Node *next;
};
Node* insert(Node *n, int d) {
  Node *nd = new Node;

  nd->data = d;
  nd->next = n;
  return nd;
}

Node* findByIndex(Node *n, int i) {
  if (n == 0) return 0;

  if (i == 0) return n;

  return findByIndex(n->next, --i);
}

// int fI(Node *n, int d, int i) {
//   if (n == 0) return -1;
//
//   if (n->data == d) return i;
//
//   return findIndex(n->next, d, ++i);
// }
//
// int findIndex(Node *n, int d) {
//   fI(n, d, 0);
// }

Node* removeByIndex(Node *n, int i) {
  if ((n == 0) || (i < 0)) {
    cerr << "DNW";
  }

  if (i == 0) {
    n = n->next;
    return n;
  }

  int   index    = 0;
  Node *tempNode = n;
  Node *prev     = 0;

  while (index < i) {
    index++;
    prev     = tempNode;
    tempNode = tempNode->next;
  }

  prev->next = tempNode->next;
  return n;
}

int main() {
  Node *n = 0;

  n = insert(n, 3);
  n = insert(n, 21);
  n = insert(n, -19);
  n = insert(n, 46);
  n = insert(n, 15);


  n = removeByIndex(n, 0);

  while (n != 0) {
    cout << n->data << " ";
    n = n->next;
  }
}
