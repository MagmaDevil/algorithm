#include <iostream>

using namespace std;

void search(int list[], int key, int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << list[pivot] << " found" << endl;

			return;
		}

		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}

		else
		{
			left = pivot + 1;
		}
	}

	cout << "not found" << endl;
}

int main()
{
#pragma region 이분 탐색

	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 좁혀나가는 방식으로 동작하는 알고리즘입니다.

	int list[] = { 1,5,7,8,10,11,15,16,88,99 };

	int size = sizeof(list) / sizeof(list[0]);

	search(list, 5, size);

#pragma endregion


	return 0;
}
