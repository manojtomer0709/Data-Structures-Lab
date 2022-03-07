#include<iostream>
using namespace std;

char arr[10000];
int top = -1;
int size = 10000;

void pop(){
    // if (top == -1){
    //     printf("stack is empty\n");
    //     return;
    // }
    cout << arr[top];
    top -= 1;

    return;
}

void print_stack(){
    for (int i = top; i >= 0; i--){
        cout << arr[i];
    }
    
    return;
}

void push(char new_char){
    top += 1;
    arr[top] = new_char;
}

void toPostfix(string input_string){
    for (int i = 0; i < input_string.length(); i++){
        if (input_string[i] >= 'a' && input_string[i] <= 'z' || input_string[i] >= 'A' && input_string[i] <= 'Z'){
            cout << input_string[i];
        }

        else{
            if (input_string[i] == '+'){
                while (arr[top] == '-' || arr[top] == '*' || arr[top] == '/' || arr[top] == '^'){
                    pop();
                }
                push(input_string[i]);
            }

            else if (input_string[i] == '-'){
                while (arr[top] == '+' || arr[top] == '*' || arr[top] == '/' || arr[top] == '^'){
                    pop();
                }
                push(input_string[i]);
            }

            else if (input_string[i] == '*'){
                while (arr[top] == '/' || arr[top] == '^'){
                    pop();
                }
                push(input_string[i]);
            }

            else if (input_string[i] == '/'){
                while (arr[top] == '*' || arr[top] == '^'){
                    pop();
                }
                push(input_string[i]);
            }

            else if (input_string[i] == '^'){
                push(input_string[i]);
            }

            else if (input_string[i] == '('){
                push(input_string[i]);
            }

            else if (input_string[i] == ')'){
                while (arr[top] != '('){
                    pop();
                }
                top--;
            }
        
        }

    }
    print_stack();
    
}

int main(){
    string input_string;
    cout << "Enter the string: ";
    cin >> input_string;

    toPostfix(input_string);
    return 0;
}
