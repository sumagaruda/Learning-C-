#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(char e[]){
    int i=0;
    stack<char> s;

    while(e[i]!='\0'){
        switch(e[i]){
        case '(':
        case '[':
        case '{': s.push(e[i]); break;

        case ')': if(!s.empty()&&s.top()=='('){
                        s.pop();
                        break;
                     }
                  else{
                    return false;

                  }
        case ']': if(!s.empty()&&s.top()=='['){
                        s.pop();
                        break;
                     }
                  else{
                    return false;
                  }
        case '}': if(!s.empty()&&s.top()=='{'){
                        s.pop();
                        break;
                     }
                  else{
                    return false;
                  }


        }
        i++;

    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    char exp[] = " {(a+b)-c*[d]+[e+f)}";

    bool isBal = isBalanced(exp);
    if(isBal){
        cout<<"yes ";
    }
    else{
        cout<<"no ";
    }

return 0;
}
