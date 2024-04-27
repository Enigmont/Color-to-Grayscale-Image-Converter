\#include <fstream>
#include <iostream>
using namespace std;
int R;
int G;
int B;
int r;
int g;
int b;
int x = 1;
int scaleL = 0;
int scaleW = 0;
string mconst = "P3";


int main() {
	ifstream fin("color_image_1.ppm");
	if (!fin) {
		cout << "Error: Nonexistent input file" << endl;
		system("pause");
		return -1;
	}
	if (fin >> "" == mconst) {
		cout << "Input check success" << endl;
		continue;
	}
	else {
		cout << "Error: Wrong file input" << endl;
		return -1;
	}
	ofstream fout("output.ppm");
	//scale line == scale
	while (x > 0) {
		fin >> R;
		fin >> G;
		fin >> B;
		//conversion
		r = g = b = 0.3 * R + 0.59 * G + 0.11 * B;
		fout << r << endl;
		fout << g << endl;
		fout << b << endl;
		return 0;
	}
	//read 3 lines for color image
	//each line of the 3 goes into separate categories RGB
	//use equation of the RGB
	//output 3 times the grayscale of RGB line*/
	fin.close();
	fout.close();
}
