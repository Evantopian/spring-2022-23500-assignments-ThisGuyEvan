#include <iostream>
#include <vector>


void printVec(std::vector<int> vec) {
  for (auto it : vec) {
    std::cout << it << ", ";

  }
  std::cout << "\n";
}


int find_min(std::vector<int> vec, int begin) {
  int min = begin;
  for (int i = begin; i < vec.size(); i++) {
    if (vec[i] < vec[min]) {
      min = i;
    }
  }
  return min;
}


std::vector<int> ssort(std::vector<int> vec) {
  for (int i = 0; i < vec.size(); i++) {
    int min, tmp;
    min = find_min(vec, i);

    tmp = vec[i];
    vec[i] = vec[min];
    vec[min] = tmp;
  }
  return vec;
}


std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
  std::vector<int> merged;
  int lcnt = 0, rcnt = 0;

  while (lcnt < right.size() && rcnt < right.size()) {
    if (left[lcnt] < right[rcnt]) {
      merged.push_back(left[lcnt]);
      lcnt++;
    } else {
      merged.push_back(right[rcnt]);
      rcnt++;
    }
  }

  while (lcnt < left.size()) {
    merged.push_back(left[lcnt]);
    lcnt++;
  }

  while (rcnt < right.size()) {
    merged.push_back(right[lcnt]);
    rcnt++;
  }
  return merged;
}


std::vector<int> msort(std::vector<int> v) {
  std::vector<int> merged;
  std::vector<int> left, right;

  if (v.size() < 2) return v;

  for (int i = 0; i < v.size() / 2; i++)
    left.push_back(v[i]);

  for (int i = v.size() / 2; i < v.size(); i++)
    right.push_back(v[i]);

  merged = merge(ssort(left), ssort(right));

  return merged;
}


// terms become 0 when I use rand as intializer for vectors.
// will modify when I learn why.
std::vector<int> makeVec(int n, int max) {
  std::vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    vec.at(i) = rand() % max;
  }
  return vec;
}


int main() {

  // test #1
  std::cout << "Pre-merge:" << "\n\t";
  std::vector<int> v1 = {1, -4, 3, 2, 78, 32, -982, 4, 5, 4};
  printVec(v1);

  v1 = msort(v1);

  std::cout << "Post-Merge:" << "\n\t";
  printVec(v1);

  std::cout << "\n\n";

  // test #2
  std::cout << "Pre-merge:" << "\n\t";
  v1 = {13, 12, 76, 45, -23, 0, -9, 5, -132};
  printVec(v1);

  v1 = msort(v1);

  std::cout << "Post-Merge" << "\n\t";
  printVec(v1);

  return 0;
}
