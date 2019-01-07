#include<iostream>


using namespace std;

class bubbleSort {
public:
	solution(){}
	~solution(){}

	void bubbleSort(int arr) {
		if (arr == null && arr.length < 2) {
			return;
		}
		for (int end = arr.length - 1;end > 0;end--) 
		{
			for (int i = 0;i < end;i++) 
			{
				if (arr[i] > arr[i + 1]) 
				{
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}

			}
		}
			
	}
