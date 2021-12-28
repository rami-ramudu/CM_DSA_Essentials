//to make a more generic version so that the vector that has been
//customly created has a lot more power


template<typename T>
class Vector
{

    // Private Data Members
    //The most important data members are the dynamic array
    //the current size of the vector
    //the maximum size of the vector
    T *arr;
    int curr_size,max_size;
    
   public:
    //Constructor
    Vector(int _maxsize=1)
    {
        curr_size=0;  //no element in the vector currently
        max_size=_maxsize;   //maximum size could be 1 initially
        arr=new T[max_size];
    }

    //Member functions
    //push_back
    void push_back(const T data)
    {
       //Two cases
       //case 1:where the curr_size==max_size 
       //we have to double the capacity and then copy the elements 
       if(curr_size==max_size)
       {
           T *oldArr=arr;
           max_size=2*max_size;
           arr=new T[max_size];
           for(int i=0;i<curr_size;i++)
           {
               arr[i]=oldArr[i];
           }
           delete [] oldArr;
       }
       //even after case 1,case 2 will happen in case of a push_back
       //case 2:where we have to just insert the element directly
       arr[curr_size]=data;
       curr_size++;
    }
    //pop_back
    void pop_back()
    {
        if(curr_size>0) curr_size--;

    }

    //isempty
    //all the const functions will not modify the data members
    //it is considered as one of the best practices
    bool isEmpty() const
    {
        return curr_size==0;
    }

    //at
    T at(int i) const
    {
       
        return arr[i];
    }
    //size
    int size() const
    {
        return curr_size;
    }
    //capacity
    int capacity()
    {
        return max_size;
    }

    //front
    T front() const
    {
        return arr[0];
    
    }
    //back
    T back() const
    {
        return arr[curr_size-1];
    }
    //overload the [] operator so that while calling our object on this operator
    //it will perform the function specified in the definition
    T operator [] (const int i) const
    {
        return arr[i];
    }
};
