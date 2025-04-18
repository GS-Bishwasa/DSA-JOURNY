#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> ans){
    int s =0;
    int e = ans.size()-1;
    while(s<e){
    swap(ans[s++],ans[e--]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return ans;
    }


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j = m-1;
	vector<int> ans;

int carry = 0;

	while(i>=0 && j>=0){
int val1 = a[i];
int val2 = b[j];
int sum = val1+val2+carry;
carry = sum/10;
sum = sum%10; 
	ans.push_back(sum);

	i--;
	j--;
	}

// First Case
while(i>=0){
int sum = a[i]+carry;
carry = sum/10;
sum = sum%10; 
	ans.push_back(sum);
	i--;
}


// Second Case
while(j>=0){
int sum = b[j]+carry;
carry = sum/10;
sum = sum%10; 
	ans.push_back(sum);
	j--;
}

// Third Case
while(carry != 0){
int sum = carry;
carry = sum/10;
sum = sum%10; 
	ans.push_back(sum);
}




 return reverse(ans);

}
int main(){

vector<int> arr;
vector<int> arr1;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);

arr1.push_back(6);
findArraySum(arr,4,arr1,1);

return 0;
}