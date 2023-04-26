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
    //cout<<radNo; 
    cout<<"\nDifficulty levels: easy(a) "<<endl;
    cout<<"\n1. Easy (Hint: Multiples of the number. 10 Attempts)"<<endl;
    cout<<"\n2. Medium (Hint: Less or greater then 50. 7 Attempts)"<<endl;
    cout<<"\n3. Hard (Hint: Number is even or odd. 5 Attempts)"<<endl;
    cout<<"\nEnter difficulty(according to mentioned above) level you want to play: ";
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
    int unum; //user number
    if(rad>50){
        cout<<"\nHint: Number is greater than 50"<<endl;
    }else{
        cout<<"\nHint: Number is less then or equal to 50"<<endl;
    }
    for(int i=1;i<=8;i++){
        if(i==8){
            cout<<"\nYOU LOST!!!, the correct number was: "<<rad<<endl;
            break;
        }
        cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 7-i << "\n" << endl; //attempt remaining
        cout<<"Enter the number:";
        cin>>unum;
        if(unum==rad){
            cout<<"\nHurray!! You won..."<<endl;
            break;
        } else if(unum > rad&&i<10){ //tells the user to go towards number
            cout<<"\nGo lower"<< endl;
        }
        else if(unum < rad&&i<10){
            cout<<"\nGo higher"<< endl;
        }
        // if((7-i)>0){
        // cout<<"\nTry again!!!, You got "<<(7-i)<<" tries left"<<endl<<endl; //tries left
        // }
        //i++;
        // if(i==8){
        //     cout<<"\nYOU LOST!!!, the correct number was: "<<rad<<endl;
        // }
        
    } 
}
void hard(int radNo){
        cout<<"\nHard Level !!!"<<endl;
        int guess;
        cout<< "\nYou will get 5 chances to guess the number";
        if(radNo%2==0) //condition for odd/even determinantion
    {
        cout<<"\nTHE NUMBER IS EVEN"<<endl;
    }
    else
    {
        cout<<"\nTHE NUMBER IS ODD"<<endl;
    }
        int chance = 5; //chances according to HARD level
        for (int i = 1; i <7; i++) // for loop for taking guess inputs for 5 chances
        {
            if(i==6){
                cout<<"\nYOU LOST!!!, the correct number was: "<<radNo<<endl;
                break;
            }
            cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 5-i << "\n" << endl; //attempt remaining
            cout << "Enter the number: "; //taking guesses inputs
            cin >> guess;
            if(guess== radNo) //correct condition for randNO
            {
                cout<<"\nHurray!! You guessed it right...";
                break;
            }
            // condition and response according to the guessed number by the user
            else if(guess>radNo)
            {
                cout<<"\nGo lower"<< endl;
            }
            else
            {
                cout<<"\nGo higher"<< endl;
            }
            // if(chance==0)
            // // display of result at the end of all guesses
            // {
            //     cout<<"\nYOU LOST!!!, the correct number was: "<<radNo<<endl;
            //     break;
            // }
            // chance--; // decrement of chances after every guess
        }
    }
    void easy(int RandNum){
        factors(RandNum);
        int guess;
    for(int i=1 ; i<11 ; i++){ //for loop for scaning and checking the number
        cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 10-i << "\n" << endl; //attempt remaining
        cout<<"Guess the number: "; cin >> guess;
        if (i==10){
            cout<<"\nYou Lost, the number was: " << RandNum <<", better luck next time!" << endl; //break if attempts=7
            break;
        }
        else if( guess == RandNum ){ //checks if guessed number is same as generated number
            cout<<"\nHurray!! you guessed it right..."<<endl;
            break;
        }
        else if(guess > RandNum){ //tells the user to go towards number
            cout<<"\nGo lower"<< endl;
        }
        else if(guess < RandNum){
            cout<<"\nGo higher"<< endl;
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
        cout<<"\nFactors are: 1 and itself"<<endl;
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
