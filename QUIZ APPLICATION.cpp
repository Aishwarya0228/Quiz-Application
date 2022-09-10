#include<iostream>
using namespace std;
int main(){
    int finalresult=0;
char playAgain;
    int playquiz(void);
     play:
     finalresult =  playquiz();
     cout<<"your score is"<<finalresult<<endl;
     if(finalresult>=6)
     {
         cout<<" you are pass"<<endl;
         cout<<" do you want to play QUIZ again y or n ? "<<endl;
         cin>>playAgain;
         if(playAgain == 'y' || playAgain == 'Y')
         {
             
             goto play;
         }
         else
         {
             cout<<" thank you to play QUIZ !"<<endl;
         }
     }
     else{
         cout<<" you are fail"<<endl;
         cout<<" do you want to play QUIZ again y or n ? "<<endl;
         cin>>playAgain;
         if(playAgain == 'y' || playAgain == 'Y')
         {
             playquiz();
         }
         else
         {
             cout<<" thank you to play QUIZ !"<<endl;
         }
     }
    
}
int playquiz(){
    char c;
    char option;
    int score=0;
    playInsideFunction:
    cout<<"welcome to quiz game"<<endl;
    cout<<"please folloe the instructions"<<endl;
    cout<<" step -1 : quiz contains total 10 questions"<<endl;
    cout<<"step -2 : you will be given 1 mark for each right answer"<<endl;
    cout<<"step -3 : there will be no negative marking"<<endl;
    cout<<" step -4 : please press s to start the quiz"<<endl;
    cout<<"step 5: please select option a,b,c,d "<<endl;
    cout<<" if you score >=6 you will pass the quiz "<<endl;
    cin>>c;
    if(c=='s'|| c=='S')
    {
        cout<<"Q1. what is the capital of India"<<endl;
        cout<<" (a) Delhi (b) Mumbai (c) Kolkata (d) Chennai"<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q2. who is the prime minister of india "<<endl;
        cout<<" (a) Narendra Modi (b) Adityanath (c) Kejrival (d) Nitin"<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q3.  what is the national bird of India"<<endl;
        cout<<" (a) peacock  (b) sparrow  (c) pigeon (d) parrot "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q4.what is the national animal of India"<<endl;
        cout<<" (a)Tiger (b) Lion  (c) Zebra (d) Leopard "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q5. what is the National flower of India"<<endl;
        cout<<" (a) Lotus (b) Rose (c) Lily (d) Sunflower "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q6. who is the chief minister of UP "<<endl;
        cout<<" (a) Adityanath (b)Kejriwal  (c) Nitin  (d) Raghunath "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q7. what is the capital of UP"<<endl;
        cout<<" (a) Lucknow (b) prayagraj (c) Mirzapur (d) Itawa "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q8. what is the capital of Jharkhand "<<endl;
        cout<<" (a) Ranchi  (b) Ramgarh  (c) Plamu  (d) Dhanbad "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q9.who is the leader of congress "<<endl;
        cout<<" (a) Rahul (b) Sonia  (c) Roshan  (d) Rohit "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<" Q10. which of the following state comes in north "<<endl;
        cout<<" (a) Delhi (b) Banglore (c) Chennai (d) Kerala "<<endl;
        cin>>option;
        if(option=='a'|| option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        
    }
    else
    {
        cout<<" you have entered wrong value , please enter s"<<endl;
        goto playInsideFunction;
    }
    return score;
}

