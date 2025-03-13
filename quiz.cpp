#include<iostream>
#include<string>
#include<thread>
#include<chrono>
#include<algorithm>
#include<fstream>
#include<cctype>

using namespace std;



//stars print
void asteriks(int n){
    int i=1;
    while(i<=n){
    cout<<"*";
    i++;
    }

    cout<<endl;
}

// heading
void interface(){
    asteriks(70);
    cout<<"\033[1;31m                         Smart Quiz Application \033[22m" ;
    cout<<"\033[31m"<<endl;
    asteriks(70);
}

//system clear function
void clear_screen(int i){

    this_thread::sleep_for(chrono::seconds(i));
    system("cls");
}

void instruction(){
    
    cout<<"\033[32m Read the Instruction Carefully! "<<endl;
    cout<<"(1). READ THE QUESTION CAREFULLY"<<endl;
    cout<<"(2). EACH QUESTION CARRY 5 MARKS"<<endl;
    cout<<"(3). TOTAL TEST CONSIST 50 MARKS."<<endl;
    cout<<"(4). good luck"<<endl;
}

//valid username input
bool valid_user_input(string& username){
    while(true){
        cout<<"Enter your name : "<<endl;
        getline(cin,username);
        if(username.empty()){
            cout<<"Invalid input. username cannot be empty."<<endl;
            clear_screen(2);
            interface();
        }else{
            return true;
        }
    }
}


//valid Class input function.
bool valid_classinput(string& Class){
    while(true){
        cout<<"Enter your Class (e.g, se02,se01,cs01): "<<endl;
        getline(cin,Class);
        transform(Class.begin(),Class.end(),Class.begin(),::tolower);
        if(Class == "se01" || Class == "se02" || Class == "cs01" || Class == "cs02" || Class == "cs03"){
        return true;
    }else{
        cout<<"Please enter the valid class (e.g., SE02, SE01,CS01,CS02)"<<endl;
        clear_screen(2);
        interface();
        }
    }
}




//main function
int main(){
    string username,Class;
    
    interface();

    if(valid_user_input(username)){
        valid_classinput(Class);
        ofstream write("USERdata.txt");
        if(write.is_open()){
            write<<"User name : "<<username<<endl;
            write<<"class : "<<Class<<endl;
            write.close();
        }
        clear_screen(2);
        interface();
        cout<<"hi "<<username<<endl;
        instruction();
    }

    return 0;
}