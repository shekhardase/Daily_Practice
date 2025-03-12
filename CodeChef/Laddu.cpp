// https://www.codechef.com/problems/LADDU?tab=statement


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int activity;
// 	    cin>>activity;
// 	    string origin;
// 	    cin>>origin;
// 	    int laddus=0,rank=0,severity=0,bonus=0;
	    
// 	    string input;
// 	    for(int i=0;i<activity;i++){
// 	       cin>>input;
	       
// 	       if(input=="CONTEST_WON"){
// 	           cin>>rank;
// 	           bonus=20-rank;
// 	           if(rank<20)  laddus+=(300+bonus);
// 	           else    laddus+=300;
// 	       }
// 	       else if(input=="TOP_CONTRIBUTOR"){
// 	           laddus+=300;
// 	       }
// 	       else if(input=="BUG_FOUND"){
// 	           cin>>severity;
// 	           if(severity>=50 && severity <=1000)  laddus+=severity;
// 	       }
// 	       else if(input=="CONTEST_HOSTED"){
// 	           laddus+=50;
// 	       }
	        
	        
// 	    }
// 	    if(origin=="INDIAN"){
// 	          cout<<laddus/200<<endl;  
// 	    }
// 	    else{
// 	          cout<<laddus/400<<endl;
// 	    }
// 	}

// }