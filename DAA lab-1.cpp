#include <iostream>
using namespace std;

// Task 1: Write a program in Cpp to store elements in an array and print it.

int main()
{
int n;
cout << "Enter the no of elements in the array: ";
cin >> n;

int arr[n];

for(int i=0; i<n; i++)
{
    cout << "Enter the element " << i << ": ";
    cin >> arr[i];
}

cout << "\nArray is: ";
for(int i=0; i<n; i++)
    cout <<arr[i];

//Task 2:
cout << "\nThe array in reverse order: ";
for(int i=n-1; i>=0; i--)
    cout << arr[i];

// Task 3:
int sum = 0;
cout << "\nSum of all the numbers in the array: ";
for(int i=0; i<n; i++)
    sum = sum + arr[i];
cout << sum;

//Task 4:
int A[] = {32, 45, 29, 66, 41, 58, 327};

int n = sizeof(A)/sizeof(A[0]);

}
