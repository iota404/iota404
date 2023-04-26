#include<iostream>
#include<cstdlib>
#include<time.h>
void medium(int radNo);
void hard(int radNo);
using namespace std;
int main(){
    
    int radNo,level;
    srand(time(0));
    radNo = rand()%100 + 1;
    cout<<radNo; 
    cout<<"Difficulty levels: easy(a) "<<endl;
    cout<<"1. Easy (Hint: Multiples of the number. 7 Attempts)"<<endl;
    cout<<"2. Medium (Hint: Less or greater then 50. 10 Attempts)"<<endl;
    cout<<"3. Hard (Hint: Number is even or odd. 5 Attempts)"<<endl;
    cout<<"Enter difficulty(according to mentioned above) level you want to play: ";
    cin>>level;
    switch(level) {
  case 1:{
    //easy(radNo);
  }
    break;
  case 2:{
    medium(radNo);
  }
    break;
  case 3:{
  hard(radNo);
  }
    break;
  default:{
    cout<<"You did not entered a valid number!!!"<<endl;
  }   
 }
 return 0;
}
void medium(int radNo){
    int unum; 
    if(radNo>50){
        cout<<"Hint: Number is greater then 50"<<endl;
    }else{
        cout<<"Hint: Number is less then 50"<<endl;
    }
    for(int i=1;i<=10;i++){
        cout<<"Enter the number:";
        cin>>unum;
        if(unum==radNo){
            cout<<"Congratulation!!!, You guessed the right number in "<<i<<" Tries"<<endl;
            break;
        }
        if(i==11){
            cout<<"You Lost!!!"<<endl;
    cout<<"The number is "<<radNo<<endl;
        }
        cout<<"Try again!!!, You got "<<(10-i)<<" tries left"<<endl;
    } 
//     exit:cout<<"hello";  
}
void hard(int radNo){
        cout<<"Hard Level !!!"<<endl;
        int guess;
        cout<< "\nYou will get 5 chances to guess the number";
        if(radNo%2==0) //condition for odd/even determinantion
    {
        cout<<"THE NUMBER IS EVEN"<<endl;
    }
    else
    {
        cout<<"THE NUMBER IS ODD"<<endl;
    }
        int chance = 5; //chances according to HARD level
        for (int i = 1; i <= 5; i++) // for loop for taking guess inputs for 5 chances
         {
            cout << "\n\nEnter the number2345: "; //taking guesses inputs
            cin >> guess;
            if(guess== radNo) //correct condition for randNO
            {
                cout<<"CORRECT NUMBER ! YOU WON";
                break;
            }
            // condition and response according to the guessed number by the user
            else if(guess>radNo)
            {
                cout<<guess<<" is greater than the random number";
            }
            else
            {
               cout<<guess<<" is less than the random number";
            }
            chance--; // decrement of chances after every guess
            if(chance==0)
            // display of result at the end of all guesses
            {
                cout<<"\nYOU LOST TO COMPUTER"<<endl;
                cout<<radNo<<" is the number";
            }
        }
    }

