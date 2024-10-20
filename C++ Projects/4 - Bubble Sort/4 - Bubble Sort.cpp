#include <iostream>
#include <random>

void BubbleSort(int* data , int length) {
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main()
{
    //Real random value seed
    std::random_device rd;

    //Random number Genrator
    std::mt19937 gen(rd());

    //Range
    std::uniform_int_distribution<> dis(1, 100);

    std:: cout << "Enter the array Length :";
    int L = 0;
    std::cin >> L;

    int* Arr = new int[L];

    std::cout << "Undsorted : ";
    for (int i = 0; i < L; i++)
    {
        Arr[i] = dis(gen);
        std::cout << Arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Sorted array Ascending: ";
    BubbleSort(Arr, L);
    for (int i = 0; i < L; i++)
    {
        std::cout << Arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Sorted array Descending: ";

    BubbleSort(Arr, L);

    for (int i = L - 1; i >= 0; i--)
    {
        std::cout << Arr[i] << " ";
    }

    int l;
    std::cin >> l;
    return 0;
}

