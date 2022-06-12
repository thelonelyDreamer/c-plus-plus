#include<stdio.h> 
#include<set>

using namespace std;
/**
 * set multiset unordered_set
 *
 */
int main(){
	set<int> st;
	st.insert(3);
	st.insert(3);
	st.insert(1);
	st.insert(2);
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d ",*it);
	}
	
	return 0;
}
