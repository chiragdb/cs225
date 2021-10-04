#include "List.h"

int main() {
  List<int> list;
  List<int> list2;
  for (int i = 1; i < 10; i++) {
    list.insertBack(i);
    list.insertBack(i);
  }
  //list.merge(list2);
  return 0;
}
