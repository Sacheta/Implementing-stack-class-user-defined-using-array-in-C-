//User-defined stack class implementation using array
//By- Sacheta

#include<iostream>
using namespace std;

class stac{  //class for all stack implementations
    int top; //variable to keep hold of top
    int cap; //variable to keep hold of size of stack array
    int *arr;  //pointer to the stack
public:
    stac();  //default constructor, just being safer
    stac(int cap){ //parameterized constructor
        this->cap=cap; //updating capacity of stack
        arr=new int[cap]; //creating stack of capacity length
        top=-1;  //initializing top to 1
    }
    void peek(){ //function to peek onto stack
        if(top==-1){
            cout<<"Stack is Empty!"<<endl;
            return;}
        cout<<arr[top]<<" is at top of stack!"<<endl;
    }
    void push(){  //function to push onto to stack
        if(top==cap-1){  //check overflow condition
            cout<<"OverFlow!"<<endl;
            return;
        }
        cout<<"Enter element to be pushed: ";
        int a;
        cin>>a;
        arr[++top]=a;  //updating top and pushing a onto stackk
        cout<<a<<" is pushed onto stack!"<<endl;
    }
    void pop(){ //function to pop an element out of the stack
        if(top==-1){  //checking underflow condition
            cout<<"Underflow!"<<endl;
            return;}
        cout<<arr[top--]<<" is popped out!"<<endl;  //printing the popped element and updating the top
    }
    void size(){  //function for printing size of stack
        if(top==-1){  //if stack's empty
            cout<<"Empty"<<endl;
            return;
        }
       cout<<top+1<<" is size of stack!"<<endl;  //printing size of stack
    }
    void isempty(){  //function for printing if stack is empty
        if(top==-1)
            cout<<"Yes, stack is empty!"<<endl;
            else
                cout<<"No, stack's not empty!"<<endl;
        return;
    }
    void display(){  //function to display the stack
        if(top==-1){
            cout<<"Empty!"<<endl;
            return;
        }
        cout<<"------------------------"<<endl;
        for(int i=0;i<=top;++i)
            cout<<arr[i]<<"\t";
        cout<<endl<<"------------------------"<<endl;
    }

};

int main(){
    cout<<"Enter size of stack: ";
    int n;
    cin>>n;
    stac a(n); //creating new stack
    cout<<"Stack of size "<<n<<" created!"<<endl;

    cout<<"Make selection:"<<endl;
    cout<<"1. Push onto the stack"<<endl;
    cout<<"2. Pop out of the stack"<<endl;
    cout<<"3. Peek onto the stack"<<endl;
    cout<<"4. Know current size of stack"<<endl;
    cout<<"5. know is stack is empty"<<endl;
    cout<<"6. Display the stack"<<endl;
    int N=0;  //taking input for the selection
    while(cin>>N){  //while loop until the input is non- integer type
        switch(N){
        case 1:
            a.push();
            break;
        case 2:
            a.pop();
            break;
        case 3:
            a.peek();
            break;
        case 4:
            a.size();
            break;
        case 5:
            a.isempty();
            break;
        case 6:
            a.display();
            break;
        default:
            cout<<"Invalid Input!"<<endl;

        }
    }
}
