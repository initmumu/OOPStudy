#include <iostream>
#include <iomanip>
using namespace std;

/*�ۼ�*/ GPAEval(/*�ۼ�*/) {
	/*�ۼ�*/
}

int main() {
	int point[5] = { 33, 60, 47, 85, 88 };
	
	cout << setw(20) << "�ƶ��� ����: " << GPAEval(point[0]) << endl;
	cout << setw(20) << "������ ����: " << GPAEval(point[1]) << endl;
	cout << setw(20) << "�޸��������� ����: " << GPAEval(point[2]) << endl;
	cout << setw(20) << "������ ����: " << GPAEval(point[3]) << endl;
	cout << setw(20) << "��̳ʽ��� ����: " << GPAEval(point[4]) << endl;
}