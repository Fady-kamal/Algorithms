

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>


using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f 



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
void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}


void selectioSort(vector<int>& v) {


    //number of swaps  = n - 1
    for (int i = 0; i < v.size(); i++) {

        int minIndex = i; //index for the min element found sofar
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex])
                minIndex = j;
        }

        swap(v[i], v[minIndex]);

    }

}

int main() {

    vector<int> v = { 5,9,8,6,2 };
    printVector(v);
}

 





