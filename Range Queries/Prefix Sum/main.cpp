#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>

using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
//cout << fixed << setpercision(# of digits after the fixed point 

const int N = 3e5 + 5;

int arr[N];
int prefixSum[N + 1];
void AllPrefixSum(int arr[], int n) {

	for (int i = 1; i <= n; i++) {

		prefixSum[i] = arr[i - 1] + prefixSum[i - 1];
	}
}

int main() {

	int arr[] = { 1,3, 4,8, 6, 1,4,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	AllPrefixSum(arr,n);

	for (int i = 1; i <= n; i++) {
		cout << prefixSum[i] << " ";
	}

	cout << el;
	//sum between L = 3, R = 4
	int l = 3, r = 4;
	cout << prefixSum[r] - prefixSum[l - 1]; 
}