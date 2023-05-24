#include <iostream>

using namespace std;

int main() {
  int n, searched_element;
  cout << "Enter the number of element in array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the element of array one by one: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the element which you want to search: ";
  cin >> searched_element;
  int low = 0;
  int high = n - 1;
  int mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == searched_element) {
      cout << "Element found at index: " << mid;
      break;
    } else if (arr[mid] < searched_element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  if (low > high) {
    cout << "Element is not found";
  }

  return 0;
}