#include "../header/Prime.h";
#include <iostream>;

using namespace std;

Prime::Prime(int size)
{
	SieveOfEratosthenes(size);
}

bool* Prime::createArr(int size)
{
	bool* primeArr = new bool[size];

	for (int i = 2; i != size; i++)
	{
		primeArr[i] = true;
	}
	return primeArr;
}


void Prime::SieveOfEratosthenes(int& n)
{
	bool* arr = createArr(n+1);
	for (int p = 2; p*p <= n; p++)
	{
		if (arr[p])
		{
			for (int j = (p * 2); j <= n; j += p)
			{
				arr[j] = false;
			}
		}
	}
	printArr(arr,n);
}


void Prime::printArr(bool* arr,int size) 
{
	for (int i = 2; i != size; i++)
	{
		if (arr[i]) {
			cout << i << endl;
		}
	}
}

bool* Prime::getArrPtr() 
{
	return primeArrPtr;
}
