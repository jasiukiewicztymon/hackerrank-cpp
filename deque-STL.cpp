#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
    int max;

    max = *max_element(arr,arr+k);

    cout<< max<<" ";

    for ( int i=1; i <= n-k; i++)

    {
        if(arr[i+k-1]>max)  
        {
            max=arr[i+k-1]; 
            cout<< max << " ";
            continue;
        }

        if(arr[i-1]!=max)
        {
            cout<< max << " ";
        }
        else {
            max = *max_element(&arr[i],&arr[i+k]);
            cout<< max<<" ";
        }
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
