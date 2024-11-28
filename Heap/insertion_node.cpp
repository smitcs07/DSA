#include<iostream>
using namespace std;

class InsertNode{
  int *arr;
  int size; // Size of node;
  int totalSize; // Size of Heap;
  public:
  InsertNode(int data){
    arr = new int(data);
    size = 0;
    totalSize = data;
  }

   ~InsertNode() {
        delete[] arr; // Free the allocated memory
    }

  int insert(int value){
  // If space is not available  
    if(size==totalSize){
      cout<<"Heap is Overflow ";
      return 1;
    }
    arr[size] = value;
    int index = size;
    size++;

  // Compare its value with parents; 
    while(index > 0 && arr[(index-1)/2]<arr[index]){
      swap(arr[index],arr[(index-1)/2]);
      index = (index-1)/2;
    }
    return 1;
  }
    void print(){
      cout<<"\nThe following Heap is: "<<endl;
      for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
      }
    }
};

int main(){
  InsertNode obj(7);
  obj.insert(3);
  obj.insert(32);
  obj.insert(23);
  obj.insert(33);
  obj.insert(63);
  obj.insert(113);
  obj.insert(30);
  obj.print();
}