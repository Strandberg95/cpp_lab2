#ifndef  PRIME_H
#define PRIME_H

class Prime {
	private: 
		bool* primeArrPtr;

		int size;

	public: 
		Prime(int size);

		void calc(bool* arr);

		void SieveOfEratosthenes(int& n);

		bool* createArr(int size);

		bool* getArrPtr();

		void printArr(bool* arr,int size);
};

#endif // ! PRIME_H
