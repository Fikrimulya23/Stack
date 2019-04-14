#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct Element {
int data, top;
Element *next;
};

class MyStack {
	private:
		Element tumpuk;
		Element *head = NULL;

	public:
		void tumtop(){
		tumpuk.top = -1;
		}
		bool isEmpty(){
		if(tumpuk.top == -1){
			return 1;
		}else{
			return 0;
		}
			}

	bool isFull(){
		if(tumpuk.top == MAX_STACK_SIZE-1){
			return 1;
		} else{
			return 0;
		}
	}
	
	void push(int a){
		if (!isFull()){
			
			Element *tmp = new Element;
			tmp->data = a;
			tmp->next = NULL;
			if(isEmpty()){
				head = tmp;
				head->next = NULL;
			} else{
				tmp->next = head;
				head = tmp;
				
				}
				tumpuk.top++;
			}
		else {
			cout<<"\nStack Penuh!!\n"<<endl;
			}
		}
	Element pop(){
		Element item;
			if (isEmpty()){
				cout<<"\nStack Kosong\n";
			}
			else{
				Element *tmp = new Element;
				tmp = head;
				head = head->next;
				delete tmp;
				tumpuk.top--;
			}
		return item;
		}
	void printStackList(){
		if (!isEmpty()){
				Element *tmp = new Element;
				tmp = head;
				cout<<"\nisi stack = ";
				while(tmp!=NULL){
					cout<<tmp->data<<" ";
					tmp = tmp->next;
					}
					cout<<"\n";
				}
				else {
					cout<<"Stack Kosong"<<endl;
				}
			}
	int getTop(){
		if(isEmpty()){
			cout<<"tumpukkan kosong\n";
		} else{
			cout<<"top = "<<head->data<<endl;
		}	
	}	
};

int main(){

	MyStack s;
	
	int pu, pp, a, jwb;
	cout<<"#Fikri mulya permana - 1857051011\n";
	do{

		cout<<"\n>lakukan push, pop atau get top?\n";
		cout<<"jawab 1 untuk push atau 2 untuk pop atau 3 untuk get top\n";
		cout<<"jawaban: ";
		cin>>pp;
		
		if(pp == 1){
			cout<<"masukkan angka: ";
			cin>>a;
			s.push(a);
			}
			
		else if(pp == 2){
			s.pop();	
			}
		else if(pp == 3){
			s.getTop();	
			}
		else{
			cout<<"\n===pilihan tak ada, tolong ulangi===\n";
			}
			
		s.printStackList();
		
		cout<<"\n>lakukan get top atau push/pop lagi?\n";
		cout<<"ya = 1 atau tidak = *angka selain 1\n";
		cout<<"jawaban: ";
		cin>>jwb;
	} while (jwb == 1);
		s.printStackList();
		cout<<"\n\nTERIMA KASIH\n";
	return 0;
}
