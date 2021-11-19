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

int partition(int arr[], int p, int q) {

	int x = arr[p];
	int i = p;

	for (int j = p + 1; j < q; j++) {

		if (arr[j] <= x) {
			i += 1;
			swap(arr[i], arr[j]);
		}

	}

	swap(arr[p], arr[i]);
	return i; 
}
void quickSort(int arr[], int p, int q) {

	if (p < q) {  //recursive step 

		int r = partition(arr, p, q);
		quickSort(arr, p, r);
		quickSort(arr, r + 1, q);
	}

}
 

int main() {


	int arr[] = { 6,10,13,5,8,3,2,25,4,11 };
	int p = 0;
	int q = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr,p,q);

	fr(q) {
		cout << arr[i] << " ";
	}

}