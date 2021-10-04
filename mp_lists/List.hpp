/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
    ListNode* head_ = NULL;
    ListNode* tail_ = NULL;
    length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  if (length_ == 0) {
    return;
  }
  while (head_) {
    ListNode* temp = head_->next;
    delete head_;
    head_ = temp;
  }
  head_ = NULL;
  tail_ = NULL;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    newNode->next = NULL;
    newNode->prev = NULL;
    head_ = newNode;
    tail_ = newNode;
    length_++;
  } else {
    newNode->next = head_;
    newNode->prev = NULL;
    if (head_ != NULL) {
      head_ ->prev = newNode;
    }
    head_ = newNode;
    length_++;
  }
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    newNode->next = NULL;
    newNode->prev = NULL;
    head_ = newNode;
    tail_ = newNode;
    length_++;
  } else {
    newNode->next = NULL;
    newNode->prev = tail_;
    if (tail_ != NULL) {
      tail_->next = newNode;
    }
    tail_ = newNode;
    length_++;
  }
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  if (splitPoint <= 0) {
    return nullptr;
  }

  if (start == nullptr) {
    return nullptr;
  }
  if (start->next == nullptr) {
    return nullptr;
  }
  if (splitPoint >= length_) {
    return nullptr;
  }

  ListNode * curr = start;
  // for (int i = 0; i < splitPoint || curr == NULL; i++) {
  //   curr = curr->next;
  // }

  for (int i = 0; i < splitPoint; i++) {
    if (curr->next != nullptr) {
      curr = curr->next;
    } else {
      return start;
    }
  }


  if (curr != NULL) {
      tail_ = curr->prev;
      curr->prev->next = nullptr;
      curr->prev = nullptr;
      return curr;
  }

  return nullptr;
}

/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three 
  * elements in the list starting for the first three elements. If the 
  * end of the list has a set of 1 or 2 elements, no rotation all be done 
  * on the last 1 or 2 elements.
  * 
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1
  if (length_ < 3) {
    return;
  }
  ListNode* curr = head_;
  std::vector<ListNode*> node_vector;
  while (curr != nullptr) {
    node_vector.push_back(curr);
    curr = curr->next;
  }
  unsigned num_swaps = length_/3;
  for (unsigned i = 0; i < num_swaps; i++) {
    ListNode* temp_one = node_vector.at(i * 3);
    ListNode* temp_two = node_vector.at((i * 3) + 1);
    ListNode* temp_three = node_vector.at((i * 3) + 2);
    node_vector.at(i * 3) = temp_two;
    node_vector.at((i * 3) + 1) = temp_three;
    node_vector.at((i * 3) + 2) = temp_one;
  }
  // for (unsigned j = 0; j < node_vector.size(); j++) {
  //   std::cout << node_vector.at(j)->data << std::endl;
  // }
  ListNode* temp = head_;
  for (unsigned j = 0; j < node_vector.size(); j++) {
    if (j == 0) {
      head_ = temp = node_vector.at(j);
      temp->prev = nullptr; 
      temp = temp->next;
    } else if (j == node_vector.size() - 1) {
      tail_ = node_vector.at(node_vector.size() - 1);
      tail_->next = nullptr;
    } else {
      temp = node_vector.at(j);
      temp->prev = node_vector.at(j - 1);
      temp->next = node_vector.at(j + 1);
      temp = temp->next;
    }

  }

}


/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  if (startPoint == nullptr) {
    return;
  }
  if (endPoint == nullptr) {
    return;
  }
  if (startPoint == endPoint) {
    return;
  }
  std::vector<ListNode*> node_vector_ordered;
  ListNode* curr = startPoint;
  while (curr != nullptr) {
    if (curr == endPoint) {
      node_vector_ordered.push_back(curr);
      break;
    }
    node_vector_ordered.push_back(curr);
    curr = curr->next;
  }
  std::vector<ListNode*> node_vector_reversed;
  for (int i = node_vector_ordered.size() - 1; i >= 0; --i) {
    node_vector_reversed.push_back(node_vector_ordered.at(i));
  }
  // std::cout << "Reversed Vector Size: " << node_vector_ordered.size() << std::endl;
  // for (unsigned j = 0; j < node_vector_reversed.size(); j++) {
  //   std::cout << node_vector_reversed.at(j)->data << std::endl;
  // }
  // ListNode* temp = head_;
  // for (unsigned j = 0; j < node_vector_reversed.size(); j++) {
  //   if (startPoint == head_ && endPoint == tail_) {
  //     if (temp == head_) {
  //       temp = head_ = node_vector_reversed.at(j);
  //       temp->prev = nullptr;
  //       temp = temp->next;
  //     } else if (temp == tail_) {
  //       temp = tail_ = node_vector_reversed.at(j);
  //       tail_->next = nullptr;
  //     } else {
  //       temp = node_vector_reversed.at(j);
  //       temp->prev = node_vector_reversed.at(j - 1);
  //       temp->next = node_vector_reversed.at(j + 1);
  //       temp = temp->next;
  //     }
  //   }
  // }

  ListNode* start_prev = startPoint->prev; //before
  ListNode* end_next = endPoint->next;     //after
  ListNode* temp = startPoint;             //current
  
  while (temp != endPoint) {
    ListNode* post = temp->next;
    temp->next = temp->prev;
    temp->prev = post;
    temp = post;
  }

  startPoint->next = endPoint->next;
  endPoint->next = endPoint->prev;
  endPoint->prev = start_prev;

  ListNode* end_holder = endPoint;
  endPoint = startPoint;
  startPoint = end_holder;

  if (start_prev != nullptr) {
    start_prev->next = startPoint;
  }

  if (end_next != nullptr) {
    end_next->prev = endPoint;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  if (n <= 1) {
    return;
  }
  if (length_ <= 1) {
    return;
  }
  if (n >= length_) {
    reverse(head_, tail_);
    return;
  }

  ListNode* start = head_;
  ListNode* end = head_;
  int num_swaps = length_/n;
  for (int i = 0; i < num_swaps; i++) {
    for (int j = 1; j < n; j++) {
      end = end->next;
    }
    ListNode* temp = end->next;
    if (start == head_) {
      reverse(head_, end);
    } else if (end == tail_) {
      reverse(start, tail_);
    } else {
      reverse(start, end);
    }
    start = end = temp;
  }
  if ((length_ % n) != 0) {
    reverse(end, tail_);
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  // ListNode* temp_first = first;
  // ListNode* temp_second = second;
  if (first == nullptr && second == nullptr) {
    return nullptr;
  }
  if (first == nullptr) {
    return second;
  }
  if (second == nullptr) {
    return first;
  }
  ListNode* merge_head = nullptr;
  ListNode* curr = nullptr;
  if (first->data < second->data) {
    merge_head = first;
    first = first->next;
  } else {
    merge_head = second;
    second = second->next;
  }
  curr = merge_head;
  while (first != nullptr && second != nullptr) {
    if (first->data < second->data) {
      first->prev = curr;
      curr->next = first;
      first = first->next;
      curr = curr->next;
    } else {
      second->prev = curr;
      curr->next = second;
      second = second->next;
      curr = curr->next;
    }
  }
  while (first != nullptr) {
    first->prev = curr;
    curr->next = first;
    first = first->next;
    curr = curr->next;
  }
  while (second != nullptr) {
    second->prev = curr;
    curr->next = second;
    second = second->next;
    curr = curr->next;
  }

  // while (temp != nullptr) {
  //   std::cout << temp->data;
  //   temp = temp->next;
  // }
  // first = temp_first;
  // second = temp_second;
  return merge_head;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  if (start == nullptr) {
    return nullptr;
  }
  if (chainLength == 1) {
    return start;
  }
  int halfpoint = chainLength/2;
  ListNode* list_one = start;
  ListNode* list_two = split(start, halfpoint);
  int next_point = (chainLength + 1)/2;
  list_one = mergesort(list_one, halfpoint);
  list_two = mergesort(list_two, next_point);
  return merge(list_one, list_two);
  return nullptr;
}
