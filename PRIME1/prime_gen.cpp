#include <iostream>
/*
Solution for http://www.spoj.com/problems/PRIME1/
*/
using namespace std;

struct Range{
	int start;
	int end;
};

bool is_prime(const int &n){
  if( n < 2 )
    return false;
	 
  for( int i=2;i*i <= n;++i )
    if( n%i == 0 )
      return false;
  return true;
}

int main(int argc, char** argv) {
	int no_o_testcases=0;

	cin >> no_o_testcases;
	Range testcases[no_o_testcases];
	for( int i=0;i < no_o_testcases;++i ){
		cin >> testcases[i].start >> testcases[i].end;
	};
	cout << endl;
	for( int i=0;i < no_o_testcases;++i ){
		for( int j=testcases[i].start;j <= testcases[i].end;++j ){
			if ( is_prime(j) ) cout << j << endl;
		}
		cout << endl;
	};
	
	return 0;
}
