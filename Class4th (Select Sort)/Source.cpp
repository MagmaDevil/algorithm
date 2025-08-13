#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬

    //주어진 리스트 중에 최솟값을 찾은 다음 특정한 위치에서 결과를 교체

    int list[] = { 8,5,4,3,0,1,6,7,2,9 };

    int size = sizeof(list) / sizeof(list[0]);

    for (int j = 0; j < size = 1; j++)
    {
        int min = list[j];

        int index = j;

        for (int i = j + 1; i < size; i++)
        {
            if (min > list[i])
            {
                min = list[i];

                index = i;
            }
        }

        swap(list[j], list[index]);
    }

    for (const auto& element : list)
    {
        cout << element << " ";
    }

#pragma endregion


    return 0;
}