#include <iostream>
#include <vector>
using namespace std;
int main(){
    std::vector<int> primes;//vector to store prime numbers upto given number
    int num,iter,iter2,flag=1,count=0;
    //for input validation repeat while block till postive even number > 2 is entered
    while(true){
        cout<<"Enter a even number:";
        cin>>num;
        if(num < 1 || num % 2 == 1)
            cout<<"Invalid number"<<endl;
        else
            break;
    }
    primes.push_back(2);//insert 2 to prime vector
    //finding other prime numbers
    for(iter=3;iter<num;iter=iter+2){
        flag=1;
        if(iter % 2 == 0)
            continue;
        for(iter2=3;iter2 <= iter/2;iter2=iter2+2){
            if(iter % iter2 == 0){
                flag=0;
                break;
            }
        }
        if(flag){
            primes.push_back(iter);
        }
    }
    //checking for the pair that make sum of given number
    cout<<"list of pairs"<<endl;
    for(std:: vector<int>::iterator it=primes.begin();it!=primes.end();++it){
        for(std:: vector<int>::iterator it2=it;it2!=primes.end();++it2){
            if(*it2+*it==num){
                cout<<"("<<*it<<","<<*it2<<")"<<endl;//outputing the pair
                count++;//count increment
            }
        }
    }
    cout<<"No of pairs="<<count;

    return 0;
}
