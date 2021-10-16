/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::increment_height(Node*& n) {
    n->height = 1 + std::max(heightOrNeg1(n->right), heightOrNeg1(n->left));
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node* temp = t->right;
    t->right = temp->left;
    temp->left = t;
    increment_height(t);
    t = temp;
    increment_height(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node* temp = t->left;
    t->left = temp->right;
    temp->right = t;
    increment_height(t);
    t = temp;
    increment_height(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    if (subtree == nullptr) {
        return;
    }
    int difference = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);
    if (difference == 2) {
        int right_most = heightOrNeg1(subtree->right->right);
        int left_child = heightOrNeg1(subtree->right->left);
        int right_difference = right_most - left_child;
        if (right_difference == 1) {
            rotateLeft(subtree);
        } else {
            rotateRightLeft(subtree);
        }
    } else if (difference == -2) {
        int left_most = heightOrNeg1(subtree->left->left);
        int right_child = heightOrNeg1(subtree->left->right);
        int left_difference = right_child - left_most;
        if (left_difference == -1) {
            rotateRight(subtree);
        } else {
            rotateLeftRight(subtree);
        }
    }
    increment_height(subtree);
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if (subtree == nullptr) {
        subtree = new Node(key, value);
    } else if (key > subtree->key) {
        insert(subtree->right, key, value);
    } else if (key < subtree->key) {
        insert(subtree->left, key, value);
    } else if (key == subtree->key) {
        subtree->value = value;
        return;
    }
    rebalance(subtree);
    increment_height(subtree);
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            delete subtree;
            subtree = nullptr;
            return;
            // your code here
        } else if (subtree->left != NULL && subtree->right != NULL) {
            Node* to_swap = subtree->left;
            while (to_swap->right != nullptr) {
                to_swap = to_swap->right;
            }
            swap(subtree, to_swap);
            remove(subtree->left, key);
        } else {
            Node* curr;
            if (subtree->right == nullptr) {
                curr = subtree->left;
            } 
            if (subtree->left == nullptr) {
                curr = subtree->right;
            }
            *subtree = *curr;
            delete curr;
            curr = nullptr;
        }
        // your code here
    }
    increment_height(subtree);
    rebalance(subtree);
}
