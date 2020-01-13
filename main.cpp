#include <iostream>

using namespace std;

int main() {

  //    This program takes n number of element from user (where, n is specified
  //    by user) and stores data in an array. Then, this program displays the
  //    largest element of that array using loops.

  int n{};
  cin >> n;
  int numbers[n];

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  for (int j = 1; j < n; ++j) {
    if (numbers[0] < numbers[j]) {
      numbers[0] = numbers[j];
    }
  }
  cout << numbers[0];
  return 0;
}
