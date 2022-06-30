#include<bits/stdc++.h>

typedef long long ll;
using namespace std;




void binarySearch(vector<int>arr, int l, int r, int x){
    if (r >= l) {
    	int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;


}









int main(){
	 
	return 0;


}


