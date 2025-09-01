#include <iostream>
#include <vector>

#define INFINITY 10000000

using namespace std;

class Dikstra
{
private:
	vector<vector<int>> adjMatrix;

	vector<int> distance;

	vector<int> visited;
	
public:
	Dikstra()
	{
		for (int i = 0; i < 5; i++)
		{
			adjMatrix[i][i] = 0;
		}

		for (int i = 0; i < 5; i++)
		{			
			distance[i] = INFINITY;			
		}			
	}

	void insert(int i, int j, int weight)
	{
		adjMatrix[i][j] = weight;
		adjMatrix[j][i] = weight;
	}

	void resize(int node)
	{
		int newSize = node + 1;

		adjMatrix.resize(newSize);

		for(int i = 0; i < newSize; i++)
		{
			adjMatrix[i].resize(newSize);
		}

		distance.resize(newSize);

		visited.resize(newSize);
	}

	
};

int main()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘입니다.

	// 1. 거리 배열에서 weight[시작 노드]의 값들로 초기화합니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. 거리 배열에서 최소 비용 노드를 찾고 방문 처리합니다.

    // 4. 최소 비용 노드를 거쳐갈 지 고민해서 거리 배열을 갱신합니다.
	// 단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

	// 방문하지 않은 노드 중에서 가장 작은 거리를 가진 노드를
	// 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.

	Dikstra dikstra;

	dikstra.insert(1, 2, 2);
	dikstra.insert(1, 3, 5);
	dikstra.insert(1, 4, 1);

	dikstra.insert(2, 3, 3);
	dikstra.insert(2, 4, 2);
	
	dikstra.insert(3, 4, 3);
	dikstra.insert(3, 5, 1);
	dikstra.insert(3, 6, 5);

	dikstra.insert(4, 5, 1);

	dikstra.insert(5, 6, 1);



#pragma endregion


	return 0;
}
