#include <iostream>

using namespace std;

void Shell(int list[], int k)
{
	if (k == 1)
	{
		return;
	}

	else
	{
		int TLS = sizeof(list) / sizeof(list[0]) / k;

		for(int i = 0; i < k; i++)
		{
			int tem = list[i];
						
			if(list[i] > list[i + k])
			{
				list[i] = list[i + k];
			}

			list[i + k] = tem;
		}

		k = k / 2;

		Shell(list, k);
	}
}

int main()
{
#pragma region 쉘 정렬

	// 리스트를 일정한 간격에 따라 나누고, 각 부분 리스트를 삽입 정렬을 통해
	// 정렬하는 방법입니다.

	// 1. 초기 시작 간격을 설정합니다.

	// 2. 간격 단위로 그룹을 묶어서 리스트를 나눕니다.

	// 3. 각 그룹의 n번째 원소들끼리 삽입 정렬을 수행합니다.

	// 4. 간격의 크기를 반으로 줄입니다.

	// 5. 간격이 1이 될 때까지 2번부터 반복합니다.

	int list[] = { 14,57,21,8,36,25,32,19 };

	int k = sizeof(list) / sizeof(list[0]) / 2;

	Shell(list, k);

#pragma endregion


	return 0;
}
