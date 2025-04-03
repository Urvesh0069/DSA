#include<iostream>
#include<vector>
using namespace std;

void twoSum(vector<int>& arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "Pair with given target sum " << target << " is (" << arr[i] << ", " << arr[j] << ")" << endl;
                return;
            }
        }
    }
    
}

int main()
{
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     int target = 7;

     twoSum(arr, target);
}