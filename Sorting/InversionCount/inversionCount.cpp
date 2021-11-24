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


 

ll merge(int arr[], int l, int m, int r) {
    /*
    * input arguments:
    * # arr[]: the array we need to be sorted
    * # p: the index of the first element in the array
    * # q: the index of the middle element in the array
    * # r: the index of the last element int the array
    *
    */
    
    ll invCount = 0;


    //Step 1: create a copy of the two sorted arrays 
    int sizeOne = m - l + 1; //from l to m	 
    int sizeTwo = r - m;     // from m+1 to r

    int left[sizeOne];
    int right[sizeTwo];

    for (int i = 0; i < sizeOne; i++) {

        left[i] = arr[l + i];

    }
    for (int i = 0; i < sizeTwo; i++) {
        right[i] = arr[m + (i + 1)];
    }


    //Step 2: Construct pointers points to the beginnig of the two subarray and the combined array 
    int i, j, k;
    i = 0;  //the index  for the first element in the sub-array one 
    j = 0;  // the index  for the first element in the sub-array two
    k = l;  //the index  for the first element in the main array 


    //Step 3: Look at the two elements and pick out the smallest 
    while (i < sizeOne && j < sizeTwo) {

        if (left[i] <= right[j]) {

            arr[k] = left[i];
            ++i, ++k;
        }

        else {
            arr[k] = right[j];
            invCount += sizeOne - i;
            j++, ++k;

        }



        //adavance the pointers to the next position 
        //k++;

    }


    //Final Step: if one of two sorted subarrays runs out , append the remaining elements in the second one 
    while (i < sizeOne) {
        arr[k] = left[i];
        ++i, ++k;
    }


    while (j < sizeTwo) {
        arr[k] = right[j];
        ++j, ++k;
    }
    
    
    return invCount;

}




 
ll mergeSort(int arr[] , int l , int r){

	ll invCount = 0;
	
	if( l < r){
	    
		int m = l  + (r - l) / 2;

		//count the number of inversions just in A(left sub-array) alone 
		invCount += mergeSort(arr, l , m);

		//count the number of inversions just in B(right subarray) alone 
		invCount += mergeSort(arr, m+1, r);

		//count the number of inversions that cross between A and B by 
		//counting the number of inversions one element comes from A and one comes from B
		invCount += merge(arr, l, m, r);

	}
	
	return invCount;

	

}

int main()
{
    int arr[] = {2,4,1,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    ll invCount = mergeSort(arr, 0, size - 1);

    //print the array
    for (int i = 0; i < size; i++) {
    
        cout << arr[i] << " ";
    }


    //print the number of inversions in the array 
    cout << el <<  "The Inversion Count: " << invCount  << el;

}