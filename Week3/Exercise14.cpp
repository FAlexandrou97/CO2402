#include <iostream>
#include <vector>
#include <random>
#include <time.h>
using namespace std;

struct Box
{
	double length;      // Length of a box
	double breadth;     // Breadth of a box
	double height;      // Height of a box
};


int main() {
	//Generate random seed each runtime.
	srand(time(NULL));

	vector<Box> vBox;
	int vectorSize = 10;
	for (int i = 0; i < vectorSize; i++) {
		vBox.push_back(Box());
	}

	for (vector<Box>::iterator it = vBox.begin(); it != vBox.end(); ++it) {
		it->length = rand() % 100 + 1;
		it->breadth = rand() % 100 + 1;
		it->height = rand() % 100 + 1;
	}

	for (int i = 0; i<vBox.size(); i++){
		cout << "Box [" << i + 1 << "] {l:" << vBox[i].length << ", b:" << vBox[i].breadth << ", h:" << vBox[i].height << "}" << endl;
	}
}