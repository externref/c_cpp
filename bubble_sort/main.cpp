#include <iostream>
#define MAX_LIMIT_ARRAY 100

int main(int argc, char *argv[])
{
    int arr[MAX_LIMIT_ARRAY], n, temp;
    printf("enter the number of elements to add in list: ");
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    printf("entered numbers: ");
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    int i = n;
    while (i != 0)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        i--;
    }
    printf("sorted numbers: ");
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
