// Стасюк Анна П13121
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	//1
	/*const int n = 5;
	const int m = 4;
	int mas[n][m];
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < m; j++) {
			 mas[i][j] = 10 * i;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << mas[i][j] << ' ';
			}
			cout << endl;
	}*/
	//7
	const int n = 3;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << endl;
	return 0;
}