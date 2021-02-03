//
//  main.cpp
//  Quick Sort Algorithm
//
//  Created by Valence Kajuna on 03/02/2021.
//



//Defining the Partition function
int Partition(int arr[],int s, int e){
    //Picking the pivot
    int pivot = arr[e];
    int pIndex = s;
    
    for (int i=s; i<=e-1; i++) { // Last element is not tested because it is the pivot itself
        if(arr[i]<pivot){
            int tmp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = tmp;
            pIndex++;
        }
    }
    
    //Coding to bring the pivot at its index referred by pIndex
    
    int tmp = arr[pIndex];
    arr[pIndex] = pivot;
    arr[e] = tmp;
    
    //Returning the pIndex
    return  pIndex;
}

//Defining the QuickSort function
void QuickSort(int arr[], int s, int e){
    if(s<e){
        int p = Partition(arr,s,e);
        
        //Calling QuickSort for the first half
        QuickSort(arr, s, p-1);
        
        //Calling QuickSort for the second half
        QuickSort(arr, p+1, e);
    }
}

#include <iostream>

int main(int argc, const char * argv[]) {
    int arr[] = {9,8,7,6,5};
    QuickSort(arr, 0, 4);
    for (int i=0; i<5; i++) {
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}
