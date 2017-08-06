#include<iostream>
using namespace std;

int main(){

   int i, j, num, temp;
   int person[10];
   int original[10];

   for(i=0;i<10;i++){
   cout<<"Please enter the pancake aten by person "<<i<<endl;
   cin>>person[i];
   original[i]=person[i];    
   }
   
//bubble sorting in descending order

   for(i=0;i<10;i++){
     for(j=0;j<9;j++){
      if(person[j+1]>person[j]){
         temp=person[j];
         person[j]=person[j+1];
         person[j+1]=temp;
      }
     }
   }
   
   for(i=0;i<10;i++){
     if(original[i]==person[0])
      cout<<"Person "<<i<<" ate the most, he ate "<<person[0]<<" cakes"<<endl;
   }

  
   for(i=0;i<10;i++){
     for(j=0;j<10;j++){
     if(person[i]==original[j]){
        cout<<"Person "<<j<<": ate "<<person[i]<<" pancakes"<<endl;
     }



     }
   }
  






    return 0;

}
