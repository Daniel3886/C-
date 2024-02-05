#include <iostream>

using namespace std;

int main(){
	int element, t1 = 0, t2 = 1, nextTerm = 0;
	
	
	cout<<"Podaj ktory element ciagu chcesz wyswietlic: \n";
	cin>> element;
	
	for(int i = 0; i<=element; i++){
		if(i == 1) {
            cout << i << " wyraz ciagu Fibonacciego wynosi: "<< t1 << endl;
            continue;
        }
        if(i == 2) {
            cout << i << " wyraz ciagu Fibonacciego wynosi: "<< t2 << endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << i << " wyraz ciagu Fibonacciego wynosi: " << nextTerm << endl;
	}
	
	return 0;
}
