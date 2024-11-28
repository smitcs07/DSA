#include <iostream>
using namespace std;

class InsertNode
{
  int *arr;
  int size;
  int total_size;

public:
  InsertNode(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  void insert(int item)
  {
    if (size == total_size)
    {
      cout << "Heap is overflow\n";
      return;
    }
    arr[size] = item;
    int index = size;
    size++;

    while (index > 0 && arr[(index - 1) / 2] < arr[index])
    {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    }
  }

  void print()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void deleteRoot()
  {
    if (size == 0)
    {
      cout << "Heap is Underflow\n";
      return;
    }
    cout << arr[0] << " deleted from the Heap\n";
    arr[0] = arr[size - 1];
    size--;

    if (size > 0)
      Heapify(0);
  }

  void Heapify(int index)
  {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && arr[left] > arr[largest])
      largest = left;

    if (right < size && arr[right] > arr[largest])
      largest = right;

    if (largest != index)
    {
      swap(arr[index], arr[largest]);
      Heapify(largest);
    }
  }

  ~InsertNode()
  {
    delete[] arr;
  }
};

int main()
{
  InsertNode obj(8);
  obj.insert(4);
  obj.insert(44);
  obj.insert(45);
  obj.insert(42);
  obj.insert(423);
  obj.insert(342);
  obj.insert(334);
  obj.insert(34);
  obj.print();
  obj.deleteRoot();
  obj.print();

  return 0;
}
