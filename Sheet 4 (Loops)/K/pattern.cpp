#include <iostream>
using namespace std;
void shape1(){
    /*
    *
    * *
    * * *
    * * * * 
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape1: ";
    cin >> no_of_lines;
    cout << "\nshape1:" << endl;
    for(int line=1;line<=no_of_lines;line++){
        for (int i=1;i<=line;i++)
            cout<<" *";
        cout<<endl;
    }
}

void shape2(){
    /*
    * * * * *
    * * * *
    * * *
    * *
    *
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape2: ";
    cin >> no_of_lines;
    cout << "\nshape2:" << endl;
    for(int line=1;line<=no_of_lines;line++){
        for (int i=1;i<=no_of_lines-line+1;i++)
            cout<<" *";
        cout<<endl;
    }
}

void shape3(){
    /*
    * * *
      * *
        *
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape3: ";
    cin >> no_of_lines;
    cout << "\nshape3:" << endl;
    for(int i=1;i<=no_of_lines;i++){
        for (int j=1;j<=no_of_lines;j++){
            if (i>j)
                cout << " ";
            else
                cout << "*";    
            
        }
        cout<<endl;
    }
}

void shape4(){
    /*
    * * * * 
    * * *
    * * 
    *
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape4: ";
    cin >> no_of_lines;
    cout << "\nshape4:" << endl;
    for(int i=1;i<=no_of_lines;i++){
        for (int j=1;j<=no_of_lines;j++){
            if (i+j<=no_of_lines+1)
                cout << "*";
            else
                cout << " ";    
            
        }
        cout<<endl;
    }
}

 void shape5(){
    /*
          *
        * *
      * * *
    * * * *
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape5: ";
    cin >> no_of_lines;
    cout << "\nshape5:" << endl;
    for(int i=1;i<=no_of_lines;i++){
        for (int j=1;j<=no_of_lines;j++){
            if (i+j<no_of_lines+1)
                cout << " ";    
            else
                cout << "*";
            
        }
        cout<<endl;
    }
    ///anthor solution 
    // for(int i=1;i<=no_of_lines;i++){
    //     for (int j=1;j<=no_of_lines-i;j++)
    //         cout << " ";    
    //     for (int j=1;j<=i;j++)
    //         cout << "*";
    //     cout<<endl;
    // }
}
void shape6(){
    /*
      *
     ***
    *****
     ***
      *  
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape6: ";
    cin >> no_of_lines;
    cout << "\nshape6:" << endl;
    // up-part 
    int mid=no_of_lines/2;
    for(int i=1;i<=mid+1;i++)
    {
        for(int j=1;j<=no_of_lines-(mid+i);j++)
            cout << " ";
        for(int j=1;j<=2*i-1;j++)
            cout << "*";
        cout << endl;
    }
    // down-part
    for(int i=mid;i>=1;i--)
    {
        for(int j=1;j<=no_of_lines-(mid+i);j++)
            cout << " ";
        for(int j=1;j<=2*i-1;j++)
            cout << "*";
        cout << endl;
    } 
}
void shape7(){
    /*
    *****
     ***
      *
     ***
    ***** 
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape7: ";
    cin >> no_of_lines;
    int mid=no_of_lines/2;
    //up-part
    for(int i=mid;i>=1;i--)
    {
        for(int j=1;j<=(no_of_lines-(3*i)+1)/2;j++)
            cout << " ";
        for(int j=1;j<=2*i+1;j++)
            cout << "*";
        cout << endl;
    } 
    // down-part
    for(int i=1;i<=mid+1;i++)
    {
        for(int j=1;j<=no_of_lines-(mid+i);j++)
            cout << " ";
        for(int j=1;j<=2*i-1;j++)
            cout << "*";
        cout << endl;
    }
}
void shape8(){
    /*
    * * * *
    *     *
    *     *
    * * * *
    */
    int no_of_lines ;
    cout << "Enter number of lines for shape8: ";
    cin >> no_of_lines;
    cout << "\nshape8:" << endl;
    for(int line=1;line<=no_of_lines;line++){
        for (int i=1;i<=no_of_lines;i++){
            if (line==1 || line==no_of_lines||i==no_of_lines||i==1)
                cout<<" *";
            else
                cout<<"  ";    
            
        }
        cout<<endl;
    }
}
int main() {
    int choice;
    cout << "Choose a shape (1-8): ";
    cin >> choice;
    switch(choice){
        case 1: shape1(); break;
        case 2: shape2(); break;
        case 3: shape3(); break;
        case 4: shape4(); break;
        case 5: shape5(); break; 
        case 6: shape6(); break;
        case 7: shape7(); break;
        case 8: shape8(); break; 
        default: cout << "Invalid choice!";
    }
    return 0;
}
