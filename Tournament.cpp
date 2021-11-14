#include <iostream>
using namespace std;

struct Pair
{
    int max2;
    int max;
};
int max_comp = 0;

struct Pair getmax2Max(int arr[], int n)
{
    int prev = arr[0];
    struct Pair max2max;
    int i;
    if (n == 1)
    {
        max_comp++;
        max2max.max = arr[0];
        max2max.max2 = arr[0];
        return max2max;
    }

    if (arr[0] > arr[1])
    {
        max_comp++;
        max2max.max = arr[0];
        max2max.max2 = arr[1];
    }
    else
    {
        max_comp++;
        max2max.max = arr[1];
        max2max.max2 = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        max_comp++;
        if (arr[i] > max2max.max)
        {
            prev = max2max.max;
            max2max.max2 = prev;
            max2max.max = arr[i];
        }
    }
    return max2max;
}

int main()
{
    int arr_size;
    cout << "Enter array size : ";
    cin >> arr_size;
    int arr[arr_size];
    cout << " Enter array element : ";
    for (int i = 0; i < arr_size; i++)
        cin >> arr[i];

    struct Pair max2max = getmax2Max(arr, arr_size);

    cout << "Maximum element is " << max2max.max << endl;
    cout << "Second maximum element is " << max2max.max2 << endl;
    cout << "Total number of Comparisons are : " << max_comp;
    return 0;
}