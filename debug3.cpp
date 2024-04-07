#include <iostream>
#include <vector>

using namespace std;

int second_largest_number(vector<int>& nums) {
    int n = nums.size();
    int largest = -1e5;
    int second_largest = -1e5;
    for (int i = 0; i < n; i++) {
        if (nums[i] > largest) {
            second_largest = largest;
            largest = nums[i];
        } else if (nums[i] > second_largest) {
            second_largest = nums[i];
        }
    }
    return second_largest;
}

int main() {
    int n;
    cout<<"Enter the Number of elements  : ";
    cin>>n;

    vector<int> nums;
    for(int i = 0 ; i  < n ;i++){
        int k;
        cin>>k;
        nums.emplace_back(k);
    }
    cout << "The second largest number in the array is: " << second_largest_number(nums) << endl;
    return 0;
}
