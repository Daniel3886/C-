#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int number;
	cout<<"podaj numer w dzienniku: ";
	cin>>number;
	
 for(int i=188; i<209; i++) {
        double sqrt_result = sqrt(i);
        printf("SQRT(%d)=%.2f\n", i, sqrt_result);
    }

    return 0;
}
//cout.precision(2);
