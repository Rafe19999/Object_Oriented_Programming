#include<iostream>
using namespace std;
	int Add(int output1, int output2)
	{
		return output1 + output2;
	}
	int main()
	{
		int answer, input1, input2;
		cout << "Give a integer number:";
		cin >> input1;
		cout << "Give another integer number:";
		cin >> input2;
		answer = Add(input1,input2);
		cout << input1 << " + " << input2 << " = " << answer;
		return 0;
	}
