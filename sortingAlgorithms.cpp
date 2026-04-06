#include<iostream>
using namespace std;


/* Different types of sorting algorithms    */

//Selection sort algorithm
void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex =  i;
        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the current element/ index i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

}

//Insertion sort algorithm
void insertionSort(int arr[], int n)
{
    for(int i =1; i < n; i++)
    {
        int key = arr[i];
        int j = i -1;

        // elementsa that are greater are moved one position over to the right
        while(j >= 0 && arr[j] > key)
        {
            arr[ j +1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
        
}

//Merge sort 
