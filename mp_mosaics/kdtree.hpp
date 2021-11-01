/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    if (first[curDim] == second[curDim]) {
      if (first < second) {
        return true;
      } else {
        return false;
      }
    }
    if (first[curDim] < second[curDim]) {
      return true;
    } else {
      return false;
    }
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    double current = 0;
    double potent = 0;
    for (unsigned i = 0; i < Dim; i++) {
      double currentVal = (target[i] - currentBest[i]);
      currentVal = currentVal * currentVal;
      double potentialVal = (target[i] - potential[i]);
      potentialVal = potentialVal * potentialVal;
      current = current + currentVal;
      potent = potent + potentialVal;
    }
    if (current == potent) {
      if (potential < currentBest) {
        return true;
      } else {
        return false;
      }
    }
    if (potent < current) {
      return true;
    } else {
      return false;
    }
}

template <int Dim>
void KDTree<Dim>::swap(std::vector<Point<Dim>>& vect, unsigned index1, unsigned index2) {
  Point<Dim> temp = vect.at(index1);
  vect.at(index1) = vect.at(index2);
  vect.at(index2) = temp;

}

template <int Dim>
unsigned KDTree<Dim>::splitter(std::vector<Point<Dim>>& vect, int dimension, unsigned left, unsigned right, unsigned idx) {
  unsigned index = left;
  Point<Dim> p = vect.at(idx);
  swap(vect, idx, right);
  for (unsigned iter = left; iter < right; iter++){
    if (smallerDimVal(vect.at(iter), p, dimension) == true) {
      swap(vect, index, iter);
        index++;
    }
  }
  swap(vect, index, right);
  return index;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::createNewNode(std::vector<Point<Dim>>& vect, int dimension, unsigned left, unsigned right) {
  if (vect.size() == 0) {
    return nullptr;
  }
  if (left > right) {
    return nullptr;
  }
  if (left >= vect.size() || right >= vect.size()) {
    return nullptr;
  }
  if (left < 0 || right < 0) {
    return nullptr;
  }
  unsigned sum = left + right;
  unsigned idx = sum / 2;
  int dimVal = dimension % Dim;
  KDTreeNode* kd = new KDTreeNode(quickselectHelper(vect, dimVal, left, right, idx));
  dimension++;
  size++;
  unsigned rightVal = idx - 1;
  unsigned leftVal = idx + 1;
  kd->right = createNewNode(vect, dimension, leftVal, right);
  kd->left = createNewNode(vect, dimension, left, rightVal);
  return kd;
}

template <int Dim>
Point<Dim> KDTree<Dim>::quickselectHelper(std::vector<Point<Dim>>& vect, int dimension, unsigned left, unsigned right, unsigned u) {
  if (left == right) {
    return vect.at(left);
  }
  unsigned idx = u;
  idx = splitter(vect, dimension, left, right, idx);
  if (idx == u) {
    return vect.at(u);
  } else if (u < idx) {
    unsigned rightVal = idx - 1;
    return quickselectHelper(vect, dimension, left, rightVal, u);
  } else {
    unsigned leftVal = idx + 1;
    return quickselectHelper(vect, dimension, leftVal, right, u);
  }
}

template <int Dim>
void KDTree<Dim>::clearMem(KDTreeNode* kd) {
  if (kd == nullptr) {
    return;
  }
  if (kd->right != nullptr) {
    clearMem(kd->right);
  }
  if (kd->left != nullptr) {
    clearMem(kd->left);
  }
  delete kd;
  kd = nullptr;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
  std::vector<Point<Dim>> vect;
  for (Point<Dim> p : newPoints) {
    vect.push_back(p);
  }
  size = 0;
  unsigned rightVal = vect.size() - 1;
  root = createNewNode(vect, 0, 0, rightVal);
}

template <int Dim>
void KDTree<Dim>::copyHelper(KDTreeNode* subroot, KDTreeNode* otherRoot) {
  subroot = new KDTreeNode();
  Point<Dim> temp = otherRoot->point;
  subroot->point = temp;
  copy(subroot->left, otherRoot->left);
  copy(subroot->right, otherRoot->right);
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  copyHelper(this->root, other.root);
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  if (this != nullptr) {
    clearMem(root);
  }
  size = rhs.size;
  copyHelper(this->root, rhs->root);
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  clearMem(root);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    return findNearestNeighborHelper(query, root, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighborHelper(const Point<Dim>& query, typename KDTree<Dim>::KDTreeNode* curr, int dimension) const
{
  if (curr->left == nullptr) {
    if (curr->right == nullptr) {
      return curr->point;
    }
  }
  Point<Dim> closePoint = curr->point;
  Point<Dim> p = closePoint;
  int newDimension = (dimension + 1) % Dim;
  bool b = smallerDimVal(query, closePoint, dimension);

  if (b == true) {
    if (curr->left != nullptr) {
      p = findNearestNeighborHelper(query, curr->left, newDimension);
    }
  } else if (b == false) {
    if (curr->right != nullptr) {
      p = findNearestNeighborHelper(query, curr->right, newDimension);
    }
  }

  bool temp = shouldReplace(query, closePoint, p);
  if (temp == true) {
    closePoint = p;
  }

  int dimensionRad = (query[dimension] - curr->point[dimension]);
  dimensionRad = dimensionRad * dimensionRad;

  int rad = 0;
  for (int i = 0; i < Dim; i++) {
    int j = (query[i] - closePoint[i]) * (query[i] - closePoint[i]);
    rad = rad + j;
  }

  if (dimensionRad <= rad) {
    if (b == false) {
      if (curr->left != nullptr) {
        p = findNearestNeighborHelper(query, curr->left, newDimension);
        if (shouldReplace(query, closePoint, p)) {
          closePoint = p;
        }
      }
    } else if (b == true) {
      if (curr->right != nullptr) {
        p = findNearestNeighborHelper(query, curr->right, newDimension);
        if (shouldReplace(query, closePoint, p)) {
          closePoint = p;
        }
      }
    }
  }
  return closePoint;
}

