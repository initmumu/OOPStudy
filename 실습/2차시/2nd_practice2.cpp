#include <iostream>
#include <iomanip>
using namespace std;

/*작성*/ GPAEval(/*작성*/) {
	/*작성*/
}

int main() {
	int point[5] = { 33, 60, 47, 85, 88 };
	
	cout << setw(20) << "아란의 학점: " << GPAEval(point[0]) << endl;
	cout << setw(20) << "에반의 학점: " << GPAEval(point[1]) << endl;
	cout << setw(20) << "메르세데스의 학점: " << GPAEval(point[2]) << endl;
	cout << setw(20) << "팬텀의 학점: " << GPAEval(point[3]) << endl;
	cout << setw(20) << "루미너스의 학점: " << GPAEval(point[4]) << endl;
}