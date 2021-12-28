#include<bits/stdc++.h>
using namespace std;
class Product
{
            int id;
            int mrp;
            int selling_price;
            char *name;
    public:

        //constructors
        //normal constructor
        Product()
        {
            cout<<"Hey see I have been called!\n";
        }
        //parameterized constructor
        Product(int id,int mrp,int selling_price,char *name)
        {
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
            this->id=id;
            this->mrp=mrp;
            this->selling_price=selling_price;
        }

        //copy constructor
        Product(Product &X)
        {
            //the following two lines are used to create a deep copy
            //instead of a shallow copy 
            this->name=new char[strlen(X.name)+1];
            strcpy(this->name,X.name);


            id=X.id;
            mrp=X.mrp;
            selling_price=X.selling_price;
        }

        //overloaded copy assignment operator
        void operator =(Product &X)
        {
            //the following two lines are used to create a deep copy
            //instead of a shallow copy 
            this->name=new char[strlen(X.name)+1];
            strcpy(this->name,X.name);


            id=X.id;
            mrp=X.mrp;
            selling_price=X.selling_price;
        }


            //implementing getters and setters

            //getters are those that will fetch the value of 
            //private data members 
            int getMrp()
            {
                return mrp;
            }

            int getSelling_price()
            {
                return selling_price;
            }
            //setters are those that set some value to the data emmbers
            void setMrp(int price)
            {
                if(price)
                mrp=price;
            }
            void setSelling_price(int price)
            {
                if(price>mrp)
                selling_price=mrp;
                else selling_price=price;
            }
            void setName(char *name)
            {
                strcpy(this->name,name);
            }
            void ShowDetails()
            {
               cout<<"Name: "<<this->name<<endl;
               cout<<"MRP: "<<this->mrp<<endl;
               cout<<"Selling Price: "<<this->selling_price<<endl;
               cout<<"--------------------------------------------------\n";
            }


            //Destructor
            ~Product()
            {
                cout<<"Deleting the object "<<this->name<<"\n";
                if(this->name!=NULL)
                {
                    delete [] this->name;
                    this->name=NULL;
                }
            }
};


int main()
{
    char s[]="Lenovo camera";
    Product camera(1,2000,1900,s);
    //one way to copy an object
    //In this case,a copy constructor is used
   // Product old_camera(camera);

    //another way is use the copy assignment operator 
    //which will also be overloaded to create a deep copy of the
    //object
    Product old_camera1=camera;
    old_camera1.setName("Gurgaon");
    old_camera1.ShowDetails();
    //camera.ShowDetails();
    // old_camera.setName("GroPro8");
    // old_camera.setSelling_price(1000);
    // old_camera.ShowDetails();
    // camera.ShowDetails();
 
    return 0;
}