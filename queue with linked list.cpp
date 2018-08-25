#include<iostream>
using namespace std;
struct node {
	node *next;
	int data;
};
class queue{
	public:
	node *front,*rear;
	queue(){
		front=NULL;
		rear=NULL;
	}
	void create(int n){
		int data1;
		for(int i=0;i<n;i++){
			node *temp=new node;
			cin>>data1;
			temp->data=data1;
			temp->next=NULL;
			if(front==NULL){
				front=temp;
				rear=temp;
			}
			else{
				rear->next=temp;
				rear=rear->next;
			}
		} 
    }
	void display(){
		node *temp;
		temp=front;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
	void deletion(){
		node *ptr;
		ptr=front;
		front=front->next;
		delete ptr;
	}
	void display1(){
		node *temp1;
		temp1=front;
		cout<<endl<<"after deletion"<<endl;
		while(temp1!=NULL){
			cout<<temp1->data;
			temp1=temp1->next;
		}
	}
};
int main(){
	queue obj;
	int n;
	cout<<"enter no. of nodes"<<endl;
	cin>>n;
	obj.create(n);
	obj.display();
	obj.deletion();
	obj.display1();
	return 0;
}
