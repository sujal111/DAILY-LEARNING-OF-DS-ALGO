//PREORDER TO POSTORDER

#include<bits/stc++.h>
using namespace std;
bool isOperator(char x){
    switch(x){
        case '+':
         case '-':
          case '*':
           case '/':
           return true;
           else{
               return false;
           }
           string pretoPost(string prep_exp){
               stack<string>s;
                int length=prep_exp.size();
                for(int i=length-1;i>=0;i--){
                    if(isOperator(prep_exp[i])){
                         string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp=op1+op2+prep_exp[i];
             s.push(temp);
        }
 
       
        else {
 
            // push the operand to the stack
            s.push(string(1, pre_exp[i]));
        }
    }
 
    return s.top();
}


                    }
                }
           }
    }
}