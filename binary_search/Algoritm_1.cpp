#include <iostream>
#include <vector>

using namespace std;

static int binary_search(vector<int> list, int item)
{
    int low = 0;
    int high = list.size() - 1; //Look where in the list i find the item

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = list[mid];

        if (guess == item)
        {
            return mid;
        }

        if (guess > item)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> my_list = { 1, 3, 5, 7, 9 };
    int number;
    cout << "Write down your number: ";
    cin >> number;
    int result = binary_search(my_list, number);
    if (result != -1)
    {
        cout << "Index of the number: " << result << "\tYour number: " << my_list[result] << endl;
    }
    
    else
    {
        cout << "There isn't this number" << endl;
    }
    
    return 0;
}
