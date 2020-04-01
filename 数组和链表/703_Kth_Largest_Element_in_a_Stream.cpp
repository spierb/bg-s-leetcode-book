#include <iostream>
#include <queue>
using namespace std;

class KthLargest {
private:
	priority_queue<int, vector<int>, greater<int> > pq;
	int K;
	int key;
public:
    KthLargest(int k, vector<int>& nums) {
		K = k;
		pq = {std::begin(nums),std::end(nums)};
        while(pq.size() > k) pq.pop();
    }
    
    int add(int val) {
		pq.push(val);
		if(pq.size() > K)
			pq.pop();
		return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main(int argc, char* argv[])
{
    priority_queue<int,vector<int>,greater<int>> p;
	p.push(1);
	p.push(2);
    p.push(43);
	p.push(8);
	p.push(5);

	for(int i=0;i<5;i++){
		cout<<p.top()<<endl;
		p.pop();
	}

    return 0;
}