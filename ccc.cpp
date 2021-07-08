#include <iostream>
using namespace std;
int main()
{
	cout << "*";
	
	int i;
	for (i=1;i<=9;i++){
		cout << "     " << i;	
	} 
	cout << "\n";
	for (i=1;i<=9;i++){
		cout << "\n" << i;
	}
    cout << "\n";
	int j;
	for (j=1;j<=9;j++){
		if (j<i){
			cout << "  hello  " << j*i;
            
		}
	}
}
