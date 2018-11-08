#include <iostream>
using namespace std;

int main () {
    
    //2.a
    int my_ints[4];
    
    //2.b
    cout << "populate the array" << endl;
    for (int i = 0 ; i < 4 ; i++)
    {
        cin >> my_ints[i];
    }
    cout<< endl;
    
    //2.c
    int sizeIntArr = sizeof(my_ints)/sizeof(my_ints[0]);  // number of bytes in array / bytes of an int

    int *my_ptrs[sizeIntArr];                       //declare an array of pointers
    int sizePtrArr = sizeof(my_ptrs)/sizeof(my_ptrs[0]);
    
    for (int i = 0; i < sizeIntArr; i++)
    {
        my_ptrs[i] = &my_ints[i];
    }
     
    //2.d sort pointers array
    for (int a = 0; a < sizePtrArr-1; a++)
    {
        for (int b = a+1; b < sizePtrArr; b++)
        {
            if (*my_ptrs[a] > *my_ptrs[b])
            {
                int *swap = my_ptrs[a];
                my_ptrs[a] = my_ptrs[b];
                my_ptrs[b] = swap;
            }
            
        }
    }
    
    //2.e print my_ptrs values
    cout << "Sorted Pointers Array ";
    for( int i = 0; i < sizePtrArr; i++)
    {
        cout  << *my_ptrs[i] << " ";
    }
    
    cout << endl;
    
    
    cout << "Original Array ";
    for( int i = 0; i < sizePtrArr; i++)
    {
        cout <<  my_ints[i] << " ";
    }
    
    
}