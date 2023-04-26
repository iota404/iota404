//devarshi dave
#include<bits/stdc++.h>
using namespace std;
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
    int i,a;
    a=PrimeCheck(num);
    if(a==1){  //calling prime check function in if condition
        cout<<"1 and itself"<<endl;
    }
    else{
        for(i=1; i <= (num); i++) {  //printing factors if the number is not prime
            if (num % i == 0&&i!=num)
                cout << i << " ";
        }
    }
}


int main(){
    srand(time(0)); //srand sets a new starting point for random number everytime
    int RandNum= (rand()%(100-1)+1); //generating a rnadom number from 1 to 100
    int guess; //user guess
    //cout << RandNum << endl;
    int attempts=7;
    cout<<"\n#####You have selected Easy level#####"<<endl;
    cout<<"\nThe computer has guessed a random number between 1 to 100"<< endl;
    cout<<"\nHint: The factor(s) of the random number is:";
    factors(RandNum);
    for(int i=1 ; i<9 ; i++){ //for loop for scaning and checking the number
        cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 7-i << "\n" << endl; //attempt remaining
        cout<<"Guess the number: "; cin >> guess;
        if (i==7){
            cout<<"You can't guess the number, the number was: " << RandNum <<" better luck next time!" << endl; //break if attempts=7
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