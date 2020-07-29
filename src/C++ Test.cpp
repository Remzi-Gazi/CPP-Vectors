#include <iostream>	//cin cout
#include <stdio.h> //scanf printf
#include <vector>
#include <string>

using namespace std;

int main() {


	vector<int> vector1;

	vector1.push_back(5);
	vector1.push_back(3);
	vector1.push_back(8);
	vector1.push_back(7);
	vector1.push_back(4);

	for(unsigned int i=0; i<vector1.size(); i++){
		printf("%d\n",vector1.at(i));
	}

	printf("%d\n",vector1.size());


	printf("%d\n",vector1.begin());//memory location
	printf("%d\n",*vector1.begin());//value at start point

	printf("%d\n",vector1.end());//memory location
	printf("%d\n",*vector1.end());//value at end point


	vector<vector<int>> vector2;//vector inside vector

	vector2.push_back(vector1);

	printf("%d\n",(vector2.at(0)).at(2));






    return 0;
}
