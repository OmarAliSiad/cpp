#include<iostream>
#include<cmath>
#define endl '\n'
using namespace std;

void arithmetic(){
	int op = 0;
	float A = 0;
	float B = 0;

	cout<<"Select opeartion\n";
	cout<<"[1] Addition\n";
	cout<<"[2] Substraction\n";
	cout<<"[3] Product\n";
	cout<<"[4] Division\n";
        cout<<"Enter Your Choice : ";
	cin>>op;
	cout<<"Enter the number : ";
	cin>>A;

	cout<<"Enter second number : ";
	cin>>B;

	cout<<"Result : ";

	switch(op){
		case 1:
			cout<<(A+B);
			break;
		case 2:
			cout<<(A-B);
			break;
		case 3:
			cout<<(A*B);
			break;
		case 4:
			cout<<(A/B);
			break;
		default:
			cout<<"Invalid operation";
			break;
	}
	cout<< endl;
}

void trignometric(){
	int op = 0;
	float val = 0.0;
        cout<<"Select\n";
	cout<<"[1] Sine\n";
	cout<<"[2] Cosine\n";
	cout<<"The values in rad \n";
	cout<<"Enter Your Choice : ";
	cin>>op;
	cout<<"Enter value : ";
	cin>>val;
	if(op == 1){
		cout<<sin(val);
	}
	else if(op == 2){
		cout<<cos(val);
	}
	else{
		cout<<"Invalid operation";
	}
	cout<<endl;
}

void exponential(){
	float base = 0.0;
	float eee = 0.0;
	cout<<"Enter base : ";
	cin>>base;
	cout<<"Enter expnent : ";
	cin>>eee;
	cout<<pow(base, eee)<<endl;
}

void logarithmic(){
	float value = 0.0;
	cout<<"Enter the value to calculate the log(e) : ";
	cin>>value;
	cout<<log(value)<<endl;
}
void Advanc_cal()
{
    cout<<"------------------------"<<endl;
    cout<<"Advanced Calculator\n";
    cout<<"[1] Arithmetic\n";
	cout<<"[2] Trignometric\n";
	cout<<"[3] Exponential\n";
	cout<<"[4] Logarithmic\n";
	cout<<"------------------------"<<endl;
	cout<<"Your choice:\n";

}
int main(){
	int sel = 0;
	char choice = 'y';
    Advanc_cal();
    bool t=true;
	while(choice == 'y'){
        if(t!=true)
        {
            Advanc_cal();
        }
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>sel;

		switch(sel){
			case 1:
				arithmetic();
				break;
			case 2:
				trignometric();
				break;
			case 3:
				exponential();
				break;
			case 4:
				logarithmic();
				break;
			default:
				cout<<"Invalid Operation";
		}

		cout<<"Do you want to continue? Enter 'y' else Enter 'n' "<<endl;
		cin>>choice;
		if(choice == 'n'){
			break;
		}
		else
        {
            t=false;
        }
	}
	return 0;
}
