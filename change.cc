#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

int arr[100]; //initialize a int array
string str[100];

/*sortarr:
  contains: int arr.
  produce: NULL
*/
void sortarr(int arr[]){
    int i, j;
    int first=0;
    int temp=0;
    int numLength=0;
    int k = 0;
    while(arr[k]){
        numLength++;
        k++;
    }
    for (i= numLength - 1; i > 0; i--)
    {
        first = 0;
        for (j=1; j<=i; j++)
        {
            if (arr[j] < arr[first])
                first = j;
        }
        temp = arr[first];
        arr[first] = arr[i];
        arr[i] = temp;
    }
    return;
}

int main( ){
    int num,index=0,first=0,last=0;
    int open = 0; //controll
    while(true){
        cin >> num;  //read a num
        if (cin.fail()){   //if not a int
            cin.clear();
            cin.ignore();
            cout << "Impossible" << endl;
            break;
        } //if
        else if (open == 0){
            first = num;
            open = 2;
        }
        else if(index == first){
            last = num;
            break;
        }
        else{  //stor the int in my arr
            arr[index] = num;
            index++;
        }
    } //while
    sortarr(arr); //sort my array
    int den = 0, remind = 0;
    int strpos = 0;
    int last2 = last;
    int sum = 0;
    string mystr1; string mystr2;
    int pos = 0;
    int openme = 0;
    while(arr[pos]){
        if (last2 < arr[pos]){
            for(int p=pos; arr[p]; p++){
                if (last2 >= arr[p]){
                    openme = 1;
                }
            }
            if(openme == 0){
                break;
            }
        } //if
        else if(last2 >= arr[pos]){
            den = last2/arr[pos]; //divide
            remind = last2%arr[pos]; //reminder
            string result;
            string next;
            ostringstream convert1;
            convert1 << den;  //convert
            result = convert1.str();
            mystr1 = result;
            ostringstream convert2;
            convert2 << arr[pos];  //convert
            result = convert2.str();
            mystr2 = result;
            str[strpos] = mystr1 + " x " + mystr2;  //append
            strpos++;
            sum = sum + arr[pos]*den;
            last2 = remind;
        } //if
        if(sum == last){
            for(int a=0; str[a] != "";a++){
                cout << str[a] << endl;
            }
            return 0;
        }
        pos++;
    }
    if (last == 0 || str[0] == "0"){
        return 0;
    } //if
    else if (str[0] == ""){
        cout << "Impossible" << endl;
        return 0;
    } //if
    else if(openme == 0){
        cout << "Impossible" << endl;
        return 0;
    } //if
    else{
        for(int a=0; str[a] != "";a++){
        cout << str[a] << endl;
        }  //print for it
    }
}
