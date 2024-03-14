#include <iostream>
using namespace std;

void InsertionShort() {
	int i, n, temp, j;
	int arr[9];

	for (i = 1; <= n - 1; i++) { //step 1

		temp = arr[i]; //step 2
		
		j = i - 1; //step 3

		while (j >= 0 && arr[j] > temp) //step 3b
		{
			arr[j + 1] = arr[j]; //step 4a
			j--; //step 4b
		}
		arr[j + 1] = temp; //step 5
	}
}

int main()
{

}