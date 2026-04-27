#include<iostream>
#include<cstring>
using namespace std;

class Vector {int  a[100], size;
		public:	Vector ( );
			void insert (int index, int val);
			void print ( );
			void add (Vector b);
			int sum( ); };
	       Vector ::Vector( ) {cout<<"  creat new data  "<<endl; size=0;}
				void Vector ::insert(int index, int val) {   a[index] = val; size++;}
		void Vector :: print ( ){  cout<<"  values  "<<endl;
		for(int i=0; i < size ; i++)cout<<a[i]<<"  "; cout<<endl; }
		void Vector :: add (Vector b) { for(int i=0; i< size ; i++) a[i]+= b. a[i];}
		int Vector :: sum( ){ int s=0; for(int i=0; i < size; i++) s+=a[i]; return s;}
		
// main program declars two objects of the class Vector A, B, 
// insert 3  values in each array, adds the arrays A and B in the array A.
// Print the elements of array A and B. 
	
// 		main( ) 
// 		{ Vector L1,L2; 
// 		   L1. insert(0,10); L1.insert(1,12);  L1.insert(2,40);  L1.insert(3,20);  
// 		L2.insert (0,-5); 	L2.insert(1,30);    L2.insert(2,50); L2. insert(3, 15);
// 		L1.print();  L2.print( );
// 		L1.add(L2);  	L1. print() ;
// 		int s1=L1.sum( ); int s2= L2.sum( ); cout<<"  first sum "<<s1<<endl<<" second sum "<<s2;}

//         10 12 40 20 
// -5 30 50 15 
// 5 42 90 35 
// First sum 172 
// Second sum 90
