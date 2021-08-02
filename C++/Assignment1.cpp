#include <iostream>

using namespace std;

void
swap (int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void
lsearch (int *A, int t)
{
  cout << "\n Enter no to be searched";
  int i, n, ctr = 0;
  cin >> n;
  for (i = 0; i < t; i++)
    {
      if (A[i] == n)
	{
	  cout << "\n Element found at " << i + 1 << "th position";
	  break;
	}
      else
	{
	  if (i == t - 1)
	    cout << "\n Element not found";
	}
      ctr++;

    }


  cout << "\n The number of steps taken to search in linear search:" << ctr +
    1;
}

int
bsearch (int *A, int t)
{
  int l = 0;
  int r = t - 1;
  int mid = (l + r) / 2;
  int ctr2 = 0;
  int n;
  cout << "\n Enter the number to be searched in binary search";
  cin >> n;
  while (l <= r)
    {
      ctr2++;
      if (A[mid] == n)
	{
	  cout << "\n Element present at position: " << mid + 1;
	  break;
	}
      else if (A[mid] > n)
	{
	  l = mid + 1;
	}
      else
	{
	  r = mid - 1;
	}
      mid = (l + r) / 2;
    }

  if (l > r)
    {
      cout << "\nElement not found.";
    }

  return ctr2;
}

int
main ()
{
  int k;
  cout << "enter the no of elements in the array";
  cin >> k;
  int A[k];
  int min = A[k];
  for (int z = 0; z < k; z++)
    {
      cout << "\n Enter the " << z + 1 << "th element";
      cin >> A[z];
    }

  //linear search

  lsearch (A, k);


  int st = 0;

  //selection sort
  for (int s = 0; s < k; s++)
    {
      for (int j = 0; j < k; j++)
	if (A[s] > A[j])
	  {
	    swap (&A[j], &A[s]);
	    st++;
	  }
    }

  cout << "\n Array after sorting is";
  for (int y = 0; y < k; y++)
    {
      cout << A[y] << "\t";
    }


  //Binary search
  int steps = bsearch (A, k);
  cout << "\n Total no of steps in Binary Search" << steps + st;



  return 0;
}