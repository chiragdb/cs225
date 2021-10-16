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
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node* temp = t->right;
    t->right = temp->left;
    temp->left = t;
    t = temp;
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
    t = temp;
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
        if (right_difference != 1) {
            rotateRightLeft(subtree);
        } else {
            rotateLeft(subtree);
        }
    } else if (difference == -2) {
        int left_most = heightOrNeg1(subtree->left->left);
        int right_child = heightOrNeg1(subtree->left->right);
        int left_difference = right_child - left_most;
        if (left_difference != -1) {
            rotateLeftRight(subtree);
        } else {
            rotateRight(subtree);
        }
    }
    if (subtree->right != nullptr) {
        int right_most = heightOrNeg1(subtree->right->right);
        int left_child = heightOrNeg1(subtree->right->left);
        int temp_max = 0;
        if (right_most >= left_child) {
            temp_max = right_most;
        } else {
            temp_max = left_child;
        }
        subtree->right->height = 1 + temp_max;
    }
    if (subtree->left != nullptr) {
        int left_most = heightOrNeg1(subtree->left->left);
        int right_child = heightOrNeg1(subtree->left->right);
        int temp_max = 0;
        if (left_most >= right_child) {
            temp_max = left_most;
        } else {
            temp_max = right_child;
        }
        subtree->left->height = 1 + temp_max;
    }
    int max = 0;
    int left_height = heightOrNeg1(subtree->left);
    int right_height = heightOrNeg1(subtree->right);
    if (left_height >= right_height) {
        max = left_height;
    } else {
        max = right_height;
    }
    subtree->height = 1 + max;
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
    }
    rebalance(subtree);
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
            // your code here
        } else if (subtree->left != NULL && subtree->right != NULL) {
            Node* to_swap = subtree->left;
            while (to_swap->right != nullptr) {
                to_swap = to_swap->right;
            }
            swap(subtree, to_swap);
            remove(subtree->left, key);
        } else {
            if (subtree->right != nullptr) {
                subtree = subtree->right;
            } else {
                subtree = subtree->left;
            }
        }
        // your code here
    }
    rebalance(subtree);
}
