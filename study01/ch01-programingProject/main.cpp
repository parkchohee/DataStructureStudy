#include <iostream>

using namespace std;


int sumAlgorithmA(int n)
{
	// �˰���A, sum = n(n+1)/2 ���� ���
	int sum = 0;

	sum = (n * (n + 1)) / 2;	//����Ƚ�� 3 -> �ð����⵵ O(1)

	return sum;
}

int sumAlgorithmB(int n)
{
	// �˰���B, sum = 1+2+...+n 
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;	// ����Ƚ�� n -> �ð����⵵ O(n)
	}

	return sum;
}

int sumAlgorithmC(int n)
{
	//�˰���C, sum = 0 + (1) + (1+1) + ... + (1+1+...+1)
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += 1;	// ����Ƚ�� n * n -> �ð����⵵ O(n^2)
		}
	}
	
	return sum;
}

int main()
{
	cout << "algorithmA : " << sumAlgorithmA(10) << endl;
	cout << "algorithmB : " << sumAlgorithmB(10) << endl;
	cout << "algorithmC : " << sumAlgorithmC(10) << endl;

	// �ð����⵵ : A (O(1)) < B (O(n)) < C (O(n^2))

	return 0;
}
