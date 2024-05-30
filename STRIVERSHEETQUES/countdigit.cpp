#include<bits/stdc++.h>
using namespace std;



int countDigits(int n){
	// Write your code here.

	int ld;
	int count = 0;


        while (n!=0) {
		
			n = n/10;
			count ++;



        }

		return count;
}


//2ND APPROACH


int count(int n){
	int cnt = (int)(log10(n)+1);
	return cnt;
}
