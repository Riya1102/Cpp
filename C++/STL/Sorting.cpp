#include <algorithm>
#include <iostream>
using namespace std;

void show(int a[], int a_size)
{
    for (int i = 0; i < a_size; ++i)
        cout << a[i] << " ";
}
int main()
{
    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};

    int n = sizeof(a) / sizeof(a[0]);

    cout << "The array before sorting is : \n";

    show(a, n);
    cout << "\n";

    sort(a, a + n);
    cout << "The array after sorting is : \n";

    show(a, n);

    return 0;
}