#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> array={12, 3, 1, 2, -6, 5, -8, 6};
    int targetSum  = 0;
    int num = array.size();
	cout << targetSum << endl;
    sort(array.begin() , array.end());
	for(int i = 0 ; i<num -2; i++){
		for(int j = i ; j<num -1; j++){
			for(int z = j ; z<num ; z++){
				if (array[i] + array[j]+ array[z] == targetSum){
					cout << array[i] << " "<< array[j] << " "<< array[z] << endl;
				}
			}
		}
	}
}   