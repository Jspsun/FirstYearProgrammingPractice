Node* removeByIndex(Node *n, int i) {
  node *check = new node;

  check = n;
  int listLen = 0;

  while (check != 0) {
    listLen++;
    check = check->next;
  }

  if ((i < 1) || (i > listLen)) {
    cerr << "Error: invalid array number";
    return -1;
  }

  curr *node = new node;
  prev *node = new node;
  curr = n->next;
  prev = n;

  if (i = 1) {
    curr = n;
    n    = n->next;
    delete curr;
  }

  while (i > 2) {
    curr = curr->next;
    prev = prev->next;
    i--;
  }

  prev->next = curr->next;
  delete curr;

  return n;
}
