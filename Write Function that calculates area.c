Class D1 : public B{

  Public:

  void init (int a , int b) override{

    A=a;
    B=b;


  }

  void area() override{

     int res = A*B;
     cout << res << "\n";
  }

  // D1 contains the member functions that contain the Init and area

  Class D2 :  public B{

   public:

     void init (int a , int b) override{
        A=a , B=b;
     }


    void Perimenter() override{

    int res = 2*(A+B)
    cout << res << "\n";

    }
  }

}
