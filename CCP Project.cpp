/*Team iota404: 
22AIML006 Akshat Borda
22AIML007 Devershi Dave
22AIML015 Shivam Jayswal */
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
    cout<<"\nDifficulty levels: "<<endl;
    cout<<"\n1. Easy (Hint: Multiples of the number. 10 Attempts)"<<endl;
    cout<<"\n2. Medium (Hint: Less or greater then 50. 7 Attempts)"<<endl;
    cout<<"\n3. Hard (Hint: Number is even or odd. 5 Attempts)"<<endl;
    cout<<"\nEnter difficulty(according to mentioned above) level you want to play: ";
    cin>>level;//input for selection of level
    switch(level) {//switch statement to for call the function according to the difficulty selected
        case 1:{
            easy(radNo);//calling function for playing easy level game
        }
            break;
        case 2:{
            medium(radNo);//calling function for playing medium level game 
        }
            break;
        case 3:{
            hard(radNo);//calling function for playing hard level game
        }
            break;
        default:{
            cout<<"You did not entered a valid number!!!"<<endl;//print the invalid input
        }   
    }
    return 0;
}
void medium(int rad){
    cout<<"\nMedium Level !!!"<<endl;
    cout<< "\nYou will get 7 chances to guess the number";
    int unum; //user number
    if(rad>50){//checking if number is greater then or less than 50 for hint
        cout<<"\nHint: Number is greater than 50"<<endl;
    }else{
        cout<<"\nHint: Number is less then or equal to 50"<<endl;
    }
    for(int i=1;i<=8;i++){//iteration for checking the number and counting chances
        if(i==8){//checking if the user ran out of attempts
            cout<<"\nYOU LOST!!!, the correct number was: "<<rad<<endl;
            break;
        }else if(i<9){//counting the number of attempts left
        cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 7-i << "\n" << endl; //attempt remaining
        cout<<"Enter the number:";
        cin>>unum;
        }
        if(unum==rad){//checking if the user won
            cout<<"\nHurray!! You won..."<<endl;
            break;
        } else if(unum > rad&&i<7){ //hint for the user
            cout<<"\nGo lower"<< endl;
        }
        else if(unum < rad&&i<7){//hint for the user
            cout<<"\nGo higher"<< endl;
        }
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
            }else if(i<7){
            cout<<"\nAttempt No: "<< i << ",  Attempts Remaining: "<< 5-i << "\n" << endl; //attempt remaining
            cout << "Enter the number: "; //taking guesses inputs
            cin >> guess;
            }
            if(guess== radNo) //correct condition for randNO
            {
                cout<<"\nHurray!! You guessed it right...";
                break;
            }
            // condition and response according to the guessed number by the user
            else if(guess>radNo&&i<5)
            {
                cout<<"\nGo lower"<< endl;
            }
            else if(guess<radNo&&i<5)
            {
                cout<<"\nGo higher"<< endl;
            }
        }
    }
void easy(int RandNum){
    cout<<"\nEasy Level !!!"<<endl;
    cout<< "\nYou will get 10 chances to guess the number";
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
// int PrimeCheck(int n){  //function to check prime number
//     int prime=1;
//     for (int i = 2 ; i < n ; i++) {
//         if (n % i == 0) {
//             prime = 0;
//             break;
//         }
//     }
//     if(prime==1) //returning if prime check is positive
//         return 1;
//     else
//         return 0;
// }
void factors(int num) {
    int i;
//     if(PrimeCheck(num)){  //calling prime check function in if condition
//         cout<<"\nFactors are: 1 and itself"<<endl;
//     }
//     else{
        cout<<"Factors are: ";
        for(i=1; i <= (num); i++) {  //printing factors if the number is not prime
            if (num % i == 0&&i!=num)
                cout << i << " ";
         }
        cout<<"and itself"<<endl;
        cout<<endl;
}
