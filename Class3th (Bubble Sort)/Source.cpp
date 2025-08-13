#include <iostream>

using namespace std;

int main()
{
#pragma region 거품 정렬

    //서로 인접한 두 원소를 비교하여 정렬하는 알고리즘

    double list[] = { 5,3,2,1,4,6,8,10,9,11,15,13,14,12 };

    int size = sizeof(list) / sizeof(list[0]);

    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < (size - j) - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                swap(list[i], list[i + 1]);
            }
        }
    }

    for (const auto& element : list)
    {
        cout << element << " ";
    }

#pragma endregion


    return 0;
}