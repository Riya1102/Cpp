#include <bits/stdc++.h>
using namespace std;

class mdArray
{
    int size_ptr;
    int *size_col, *cnt;
    int **array;

public:
    mdArray(int n, int *arr)
    {
        size_ptr = n;
        array = new int *[n];
        size_col = new int[n];
        cnt = new int[n];
        for (int i = 0; i < n; i++)
        {
            cnt[i] = 0;
            size_col[i] = arr[i];
            array[i] = new int[arr[i]];
        }
    }
    bool copyToOthermdArray()
    {
        try
        {
            mdArray m2(size_ptr, size_col);
            for (int i = 0; i < size_ptr; i++)
            {
                for (int j = 0; j < size_col[i]; j++)
                {
                    m2.setVal(i, array[i][j]);
                }
            }
            printAll();
            m2.printAll();
            return 1;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return 0;
        }
    }
    void printAll()
    {
        for (int i = 0; i < size_ptr; i++)
        {
            for (int j = 0; j < size_col[i]; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }
    bool increaseSpace(int i)
    {
        try
        {
            int arr[size_col[i]];
            for (int j = 0; j < size_col[i]; j++)
            {
                arr[j] = array[i][j];
            }
            delete[] array[i];
            array[i] = new int[size_col[i] * 2];
            for (int j = 0; j < size_col[i]; j++)
            {
                array[i][j] = arr[j];
            }
            size_col[i] *= 2;
            return 1;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return 0;
        }
    }
    int returnIntArraySize(int i)
    {
        return cnt[i];
    }
    bool setVal(int i, int val)
    {
        if (cnt[i] < size_col[i])
        {
            array[i][cnt[i]] = val;
            cnt[i]++;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void flush()
    {
        delete[] array, size_col, cnt;
    }
};

int main()
{
    int n, input;
    cout << "Enter number of pointers.\n";
    cin >> n;
    int arr[n];
    cout << "Enter size of each array pointed by pointers.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mdArray m(n, arr);
    do
    {
        cout << "\n\nEnter your choice.\n0.Show array size pointed by pointer.\n1.for setting element of array\n2.for copying it to another mdArray.\n";
        cin >> input;
        switch (input)
        {
        case 1:
            int i, val;
            cout << "Enter index of array pointer and its value.\n";
            cin >> i >> val;
            if (m.setVal(i, val))
            {
                cout << "Successfully added the value!!\n\n"
                     << endl;
            }
            else
            {
                string choice;
                cout << "Space is completly of array index " << i << ", do you want to increase space(yes or no)?";
                cin >> choice;
                if (choice == "yes")
                {
                    if (m.increaseSpace(i))
                    {
                        cout << "Space increased to double of initial.\n\n"
                             << endl;
                    }
                    else
                    {
                        cout << "Some error occured\n";
                    }
                }
            }
            break;
        case 0:
            int index;
            cout << "Enter index of array.\n";
            cin >> index;
            cout << "The filled space in array with index " << i << " is " << m.returnIntArraySize(index) << ".\n\n\n";
            break;
        case 2:
            (m.copyToOthermdArray()) ? cout << "Successfully copied!!\n\n" : cout << "Some error occured.\n\n";
            break;
        }
    } while (input != 3);
    m.flush();
    return 0;
}