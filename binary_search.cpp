#include <iostream>
using namespace std;

int binary_search(int arr [], int size, int target)
{
    int lower_bound = 0;
    int upper_bound = size-1;

    while(lower_bound<=upper_bound)
    {
        int mid = (lower_bound + upper_bound)/2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else 
        {
            if (arr[mid] < target)
            {
                lower_bound = mid+1;
            }
            else
            {
                upper_bound = mid-1;
            }
        }
        
        
    }

    return -1;
    
}

int main(int argc, const char * argv[])
{
    int size;
    int target;
    cin >> size;
    cin >> target;

    int arr[size];
    
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    

    cout << binary_search(arr, size, target) << endl;

    return 0;
}