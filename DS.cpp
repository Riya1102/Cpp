#pragma GCC optimize("O2")
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void swap(int arr[],int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

class Heap
{
    int *heap_array;
    int size = 0;

public:
    Heap(int size)
    {
        this->size = size;
        heap_array = new int[this->size];
        for (int i = 0; i < this->size; i++)
        {
            heap_array[i] = INT_MAX;
        }
    }
    void insert_elements(int val[])
    {
        for (int i = 0; i < size; i++)
        {
            heap_array[i] = val[i];
        }
    }
    void heapify(int n, int index)
    {
        int curr = index;
        int left = 2 * index + 1, right = 2 * index + 2;
        if (left < n and heap_array[left] > heap_array[curr])
        {
            curr = left;
        }
        if (right < n and heap_array[right] > heap_array[curr])
        {
            curr = right;
        }
        if (curr != index)
        {
            swap(heap_array,index,curr);
            heapify(n, curr);
        }
    }
    void create_heap()
    {
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(size, i);
        }
    }
    void heap_sort()
    {
        for (int i = size - 1; i >= 0; i--)
        {
            swap(heap_array,0,i);
            heapify(i, 0);
        }
    }
    void print_heap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << heap_array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    system("cls");
    int choice = 1, size = 0;
    cout << "Please enter number of elements to insert in heap.\n";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element.\n";
        cin >> arr[i];
    }
    Heap h(size);
    h.insert_elements(arr);
    h.create_heap();
    do
    {
        cout << "Please enter a choice : \n1. to retrive the heap.\n2. to retrive the sorted array.\nany number to exit\n Choice : ";
        cin >> choice;
        if (choice == 1)
        {
            h.print_heap();
        }else if(choice == 2){
            h.heap_sort();
            h.print_heap();
        }else{
            exit(0);
        }
    } while (1);
    return 0;
}