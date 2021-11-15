

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
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0)

void printVector(vector<int>& vec) {

    cout << '{';
    for (int i = 0; i < vec.size(); i++) {

        if (i > 0)
            cout << ", ";
        cout << vec[i];
    }

    cout << '}';

}
void printVector(vector<string>& vec) {

    cout << '{';
    for (int i = 0; i < vec.size(); i++) {

        if (i > 0)
            cout << ", ";
        cout << vec[i];
    }

    cout << '}';

}
 
void bubbleSort(vector<int> &v) {
    int n = v.size();

    //assume the array is sorted before comparing 
    bool is_sorted = true;

    //compare pair of adjacents items
    for(int i = n - 1; i >= 1; --i) {

        for (int j = 1; j <= i; ++j) {
            if (v[j - 1] > v[j]) {
                swap(v[j], v[j - 1]);

                //any swap will invalidate the assumption 
                is_sorted = false;
            }
               
        }


        // if the flag remains true after the inner loop --> the array is sorted
        if (is_sorted == true)
            return;
    }
}


int main() {

    vector<int> v = { 5,4,1,3,2 };
    bubbleSort(v);
    printVector(v);

}



 




