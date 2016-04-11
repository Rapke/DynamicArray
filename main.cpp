#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arrays = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arrays[i];
    }
    cout << "---------" <<endl;

    int temp;
    for(int e=0; e<n; e++)
    {
        for(int l=0; l<n; l++)
        {
            if(arrays[l] > arrays[l+1])
            {
                temp = arrays[l];
                arrays[l] = arrays[l+1];
                arrays[l+1] = temp;
            }

        }
    }
    cout << "---------" <<endl;
    for(int m=0; m<n; m++)
    {

        cout << arrays[m] <<endl;
    }
    return 0;
}
