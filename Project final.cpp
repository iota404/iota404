#include<iostream>
#include<cstdlib>
#include<time.h>
void easy(int RandNum);
int PrimeCheck(int n);
void factors(int num);
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
    easy(radNo);
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
void medium(int rad){
    int unum; 
    if(rad>50){
        cout<<"Hint: Number is greater then or equal to 50"<<endl;
    }else{
        cout<<"Hint: Number is less then or equal to 50"<<endl;
    }
    for(int i=1;i<=10;){
        cout<<"Enter the number:";
        cin>>unum;
        if(unum==rad){
            cout<<"Congratulation!!!, You guessed the right number in "<<i<<" Tries"<<endl;
            break;
        } else if(unum > rad&&i<10){ //tells the user to go towards number
            cout<<"Go lower"<< endl;
        }
        else if(unum < rad&&i<10){
            cout<<"Go higher"<< endl;
        }
        if((10-i)>0){
        cout<<"Try again!!!, You got "<<(10-i)<<" tries left"<<endl<<endl;
        }
        i++;
        if(i==11){
            cout<<endl<<"You Lost!!!"<<endl;
    cout<<"The number was "<<rad<<endl;
        }
        
    } 
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
    void easy(int RandNum){
        factors(RandNum);
        int guess;
    for(int i=1 ; i<9 ; i++){ //for loop for scaning and checking the number
        cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 7-i << "\n" << endl; //attempt remaining
        cout<<"Guess the number: "; cin >> guess;
        if (i==7){
            cout<<"You Lost, the number was: " << RandNum <<", better luck next time!" << endl; //break if attempts=7
            break;
        }
        else if( guess == RandNum ){ //checks if guessed number is same as generated number
            cout<<"Hurray!! you guessed it right..."<<endl;
            break;
        }
        else if(guess > RandNum){ //tells the user to go towards number
            cout<<"Go lower"<< endl;
        }
        else if(guess < RandNum){
            cout<<"Go higher"<< endl;
        }
    } //for loop end //hello
}
int PrimeCheck(int n){  //function to check prime number
    int prime=1;
    for (int i = 2 ; i < n ; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    if(prime==1) //returning if prime check is positive
        return 1;
    else
       return 0;
}

void factors(int num) {
    int i;
    if(PrimeCheck(num)){  //calling prime check function in if condition
        cout<<"Factors are: 1 and itself"<<endl;
    }
    else{
        cout<<"Factors are: ";
        for(i=1; i <= (num); i++) {  //printing factors if the number is not prime
            if (num % i == 0&&i!=num)
                cout << i << " ";
        }
        cout<<endl;
    }
}