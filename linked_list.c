#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
  struct Node* next;
  int value;
} Node;

typedef struct {
  Node* head;
} List;

void print_list(List l) {
  printf("printing linked list\n");
  Node* p = l.head;
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
  printf("\n");
}

/*
 * Print the length of the list l
 */
void print_list_length(List l) {

}

/*
 * Print out the i-th element of l
 */
void print_list_element(List l, int i) {

}

int main() {
  Node n1, n2, n3;
  List list;

  n1.value = 1;
  n1.next = &n2;
  n2.value = 2;
  n2.next =  &n3;
  n3.value = 3;
  n3.next = NULL;
  list.head = &n1;

  print_list(list);
  print_list_length(list);
  print_list_element(list, 0);

  return EXIT_SUCCESS;
}
