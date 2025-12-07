#include<iostream>
using namespace std;
int acendingbinary(int array[],int size, int target){
	int low = 0,high=size-1;
	while(low<=high){
		int mid = (low+high)/2;
		if (array[mid]==target)
		return mid;
		else if (array[mid]<target){
			low=mid+1;
		}
		else high = mid-1;
	}
	return 0;
}
int decendingbinary(int array[],int size,int target){
	int low = 0,high=size-1;
	while(low<=high){
		int mid = (low+high)/2;
		if (array[mid]==target)
		return mid;
		else if (array[mid]>target){
			low=mid+1;
		}
		else high = mid-1;
	}
	return 0;
}
int main(){
	int n;
	cout<<"ENTER how many student are there  : \n";
	cin>>n;
	int rolln[100];
	cout<<"ENTER ROLL NUMBER : ";
	for(int i=0;i<n;i++){
		cin>>rolln[i];
	}
	int target;
	cout<<"WHOM TO SERACH";
	cin>>target;
	char order;
	cout<<"IF ARRAY IS SORTED ASCENDING (a) OR DESCENDING(d)";
	cin>>order;
	int position = -1;
	if(order=='a'){
		position=acendingbinary(rolln,n,target);}
		else if (order=='b'){
			position=decendingbinary(rolln,n,target);}
	else{
	
		cout<<"read the question"<<endl;
		return 0;}
	if (position !=-1){
		cout<<"roll number found at position"<<position<<endl;
	}else{
		cout<<"ROLL NUMBER NOT FOUND<<endl"<<endl;
}
	
}
