#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   //int a[3];
    //a[0]=43;
     vector<int>v;        //declaration
     v.push_back(10);     // push_back()
     v.push_back(2);
     v.push_back(11);
     v.push_back(200);
     v.push_back(16);
     v.push_back(400);
     v.push_back(50);
//     cout<<v[0]<<" "<<v[1]<<" "<<v[3]<<endl;    //vector print
//    cout<<v.at(0)<<" ";                         //another way
//    cout<<v.at(1)<<endl;
////
////    cout<<v[45]<<endl;                 //different
////    cout<<v.at(45)<<endl;
     cout<<v.size()<<endl;               //size print
    for(int i=0;i<v.size();i++){          //print array with size function
        cout<<v[i]<<" ";
    }
      cout<<endl;
//
    cout<<v.front()<<endl;                //front() function
    cout<<v.back()<<endl;                  //back() function
//    v.clear();                           //clear function
//    cout<<v.size()<<endl;
   if(v.empty())                           //empty function
        cout<<"empty"<<endl;
   else   cout<<"not empyt"<<endl;

//    v.pop_back();                         //pop function use last value delete
//    for(int i=0;i<v.size();i++){          //print array with size function
//        cout<<v[i]<<" ";
//    }
//      cout<<endl;
//
//    v.erase(v.begin());                        //erase function
//     for(int i=0;i<v.size();i++){          //print array with size function
//        cout<<v[i]<<" ";
//    }
//      cout<<endl;

//      v.erase(v.begin()+1);         //erase function // v.erase(v.begin()+2, v.end()-1);
//     for(int i=0;i<v.size();i++){          //print array with size function
//        cout<<v[i]<<" ";
//    }
//      cout<<endl;
//
//      v.insert(v.begin(),10000);        //insert function // v.insert(v.begin()+2,10000);
//      for(int i=0;i<v.size();i++){          //print array with size function
//        cout<<v[i]<<" ";
//    }
//      cout<<endl;
//
//       v.insert(v.begin()+2,3,88);
//       for(int i=0;i<v.size();i++){          //print array with size function
//        cout<<v[i]<<" ";
//    }
//      cout<<endl;


vector<int>v1;                      //for swap function
v1.push_back(40);
v1.push_back(20);
v1.push_back(40);
v1.push_back(30);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

swap(v,v1);                                  //swap function

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

sort(v1.begin(),v1.end());                   // sort function
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;


reverse(v1.begin(),v1.end());                      //reverse function
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<endl;


 vector<int>::iterator it;               //iteration
 it=v1.begin();
 cout<<*it<<endl;
 it=v1.begin()+3;
 cout<<*it<<endl;
 for(it=v1.begin();it<v1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

}

