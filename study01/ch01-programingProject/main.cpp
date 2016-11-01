#include <iostream>

using namespace std;


int sumAlgorithmA(int n)
{
	// 알고리즘A, sum = n(n+1)/2 공식 사용
	int sum = 0;

	sum = (n * (n + 1)) / 2;	//연산횟수 3 -> 시간복잡도 O(1)

	return sum;
}

int sumAlgorithmB(int n)
{
	// 알고리즘B, sum = 1+2+...+n 
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;	// 연산횟수 n -> 시간복잡도 O(n)
	}

	return sum;
}

int sumAlgorithmC(int n)
{
	//알고리즘C, sum = 0 + (1) + (1+1) + ... + (1+1+...+1)
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += 1;	// 연산횟수 n * n -> 시간복잡도 O(n^2)
		}
	}
	
	return sum;
}

int main()
{
	cout << "algorithmA : " << sumAlgorithmA(10) << endl;
	cout << "algorithmB : " << sumAlgorithmB(10) << endl;
	cout << "algorithmC : " << sumAlgorithmC(10) << endl;

	// 시간복잡도 : A (O(1)) < B (O(n)) < C (O(n^2))

	return 0;
}
