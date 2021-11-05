
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    // @TODO Update to return the index you are choosing to be your root.
    return 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the left child.
    size_t output = currentIdx * 2;
    return output;
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the right child.
    size_t output = currentIdx * 2;
    return output + 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    // @TODO Update to return the index of the parent.

    size_t output = currentIdx / 2;
    return output;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
    if (leftChild(currentIdx) < _elems.size()) {
        return true;
    }
    return false;
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    size_t l_child = leftChild(currentIdx);
    size_t r_child = rightChild(currentIdx);
    if (_elems.size() > r_child) {
        return higherPriority(_elems.at(l_child), _elems.at(r_child)) ? l_child : r_child;
    } 
    return l_child;
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    if (hasAChild(currentIdx) == true) {
        size_t index = maxPriorityChild(currentIdx);
        if (higherPriority(_elems.at(index), _elems.at(currentIdx))) {
            std::swap(_elems.at(currentIdx), _elems.at(index));
            heapifyDown(index);
        }
    }
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;
    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
    // @TODO Depending on your implementation, this function may or may
    ///   not need modifying
    _elems.push_back(T());
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T>& elems) 
{
    // @TODO Construct a heap using the buildHeap algorithm
    _elems.push_back(T());
    for (T val : elems) {
        _elems.push_back(val);
    }
    for (size_t i = parent(_elems.size() - 1); i >= root(); i--) {
        heapifyDown(i);
    }
}

template <class T, class Compare>
T heap<T, Compare>::pop()
{
    if (empty() == false) {
        T temp = _elems.at(1);
        size_t index = _elems.size() - 1;
        _elems.at(1) = _elems.at(index);
        _elems.pop_back();
        heapifyDown(1);
        return temp;
    }
    return T();
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    // @TODO Return, but do not remove, the element with highest priority
    return _elems.at(1);
}

template <class T, class Compare>
void heap<T, Compare>::push(const T& elem)
{
    _elems.push_back(elem);
    size_t index = _elems.size() - 1;
    heapifyUp(index);
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t & idx, const T& elem)
{
    // @TODO In-place updates the value stored in the heap array at idx
    // Corrects the heap to remain as a valid heap even after update
    T temp = _elems.at(idx);
    _elems.at(idx) = elem;
    if (higherPriority(elem, temp)) {
        heapifyUp(idx);
    } else {
        heapifyDown(idx);
    }
}


template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
    // @TODO Determine if the heap is empty
    if (_elems.size() <= 1) {
        return true;
    }
    return false;
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> & heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++) {
        heaped.push_back(_elems[i]);
    }
}
