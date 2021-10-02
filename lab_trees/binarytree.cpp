/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>

/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + std::max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    std::cout << std::endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    std::cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
    template <typename T>
void BinaryTree<T>::mirror()
{
    mirrorHelper(root);
}

template <typename T>
void BinaryTree<T>::mirrorHelper(Node* n)
{
    if (n == nullptr) {
        return;
    }
    Node* right_holder = n->right;
    Node* left_holder = n->left;

    Node* holder = n->left;
    n->left = n->right;                         //swapping left and right nodes
    n->right = holder;

    mirrorHelper(right_holder);
    mirrorHelper(left_holder);
    //your code here
}

/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    InorderTraversal<T> trav(root);
    typename TreeTraversal<T>::Iterator iter = trav.begin();
    T prev = (*iter)->elem;
    ++iter;
    while(iter != trav.end()) {
        T curr = (*iter)->elem;
        if (curr >= prev) {
            prev = curr;
            ++iter;
        } else {
            return false;
        }
    }
    return true;
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    return isOrderedRecursiveHelper(root, nullptr, nullptr);
    return true;
}

template <typename T>
bool BinaryTree<T>::isOrderedRecursiveHelper(Node* r, Node* left_sub, Node* right_sub) const
{
    if (r == nullptr) {
        return true;
    } 
    if (left_sub != nullptr) {
        if (r->elem < left_sub->elem) {
            return false;
        }
    }
    if (right_sub != nullptr) {
        if (right_sub->elem < r->elem) {
            return false;
        }
    }
    Node* next_left = r->left;
    Node* next_right = r->right;
    return (isOrderedRecursiveHelper(next_right, r, right_sub) && isOrderedRecursiveHelper(next_left, left_sub, r));
    return true;
}



