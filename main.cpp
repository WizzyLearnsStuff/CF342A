#include<iostream>

 using namespace std;

 int main() {
 	int n;

 	cin >> n;

 	int hist[8] = {0};

 	for (int i = 0; i < n; i++) {
 		int a;
 		cin >> a;
 		hist[a]++;
  	}

  	int distinct = 0;

  	for (int i = 0; i < 8; i++) distinct += (hist[i] > 0);

  	if (distinct < 3 || hist[5] > 0 || hist[7] > 0 || (hist[1] != (hist[2] + hist[3]) || hist[4] > hist[2] || hist[6] > (hist[2] + hist[3])|| hist[6] != (hist[3] + hist[2] - hist[4] * (hist[2] > 0)) || hist[4] != (hist[2] - hist[6] + hist[3] * (hist[6] > 0)))) {
  		cout << -1;
  		return 0;
  	}

  	for (int i = 0; i < n/3; i++) {
  		if (hist[1] > 0) {
  			hist[1]--;
  			cout << "1 ";
  			if (hist[2] > 0) {
  				cout << "2 ";
  				hist[2]--;
  				if (hist[4] > 0) {
  					cout << '4';
  					hist[4]--;
  				}
  				else if(hist[6] > 0) {
  					cout << '6';
  					hist[6]--;
  				}
  			}
  			else if (hist[3] > 0) {
  				cout << "3 6";
  				hist[3]--;
  				hist[6]--;
  			}
  			cout << '\n';
  		}
  	}
 }
