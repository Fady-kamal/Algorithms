

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



bool Search(vector<string>& names, string key) {

    for (int i = 0; i < names.size(); i++) {

        if (names[i] == key) return true;

    }

    return false;
}

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
void insertionSort(vector<int>& v) {

    for (int j = 1; j < v.size(); j++) {

        int key = v[j];

        //insert A[j] into the sorted sequence A[0.....j-2]
        int i = j - 1;

        // we stop at the position where
        // the element at that position is less than the key 
        //so we insert the key after it 
        while (i >= 0 && v[i] > key) {

            v[i + 1] = v[i];
            --i;
        }

        v[i + 1] = key;

    }
}

int main() {

    vector<int> v = { 5,9,8,6,2 };
    printVector(v);
}

 




