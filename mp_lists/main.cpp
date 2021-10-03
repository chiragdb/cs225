#include "List.h"

int main() {
  List<int> list;
  for (int i = 1; i <= 10; i++) {
    list.insertBack(i);
  }
  // ListNode* curr = head_;
  // while (curr != head) {
  //   std::cout << curr->data << std::endl;
  //   curr = curr->next;
  // }
  std::cout << "Size of the list: " << list.size() << std::endl;
  list.tripleRotate();
  return 0;
}
