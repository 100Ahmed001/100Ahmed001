#include <iostream>
 using namespace std;


 class rm 
 {
    private:
    float real , img;
    
    public :
    rm ();
    void read ();
    void setreal (float r);
    void setimg (float m);
     float getreal();
    float getimg();
    void add (  rm y , rm &z );
    void mul ( rm y , rm &z);
 };


     rm::rm ()
    {
        real = 0;
        img = 0;
    }
    void rm::read()
    {
        cout << "Enter Real : ";
        cin >> real ;
        cout << "Enter img : ";
        cin >> img ;
    }
    void rm::setreal(float r)
    {
        real = r;
    }
    void rm::setimg(float m)
    {
        img = m;
    }
    float rm::getreal()
    {
        return real; 
    }

    float rm::getimg()
    {
       return img; 
    }

    void rm::add (  rm y , rm &z )
   {
    z.setreal ( getreal() + y.getreal()) ;
    z.setimg ( getimg() + y.getimg() ) ;
   }
   
  void rm::mul ( rm y , rm &z)
  {
    z.setreal ( -((getimg())*(y.getimg())) + (getreal())*(y.getreal()) );
    z.setimg ( (getimg()) * (y.getreal()) + (getreal())*(y.getimg()) );
  }




 int main()
 {
    rm A,B,S,M;
    B.setreal(12.5);
    B.setimg(15.7);
    cout << "intialize A : \n" ;
    A.read();


    A.add(B,S);
    A.mul(B,M);
    cout << " sum :" << S.getreal() << " + " << S.getimg() << " i" << endl;

    cout << "mul :" << M.getreal() << " + " << M.getimg() << " i \n";






}

 
 