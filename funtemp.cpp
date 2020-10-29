
template <class T> 
void swapp(T &a,T &b); // template prototype

template <class T> 
void swapp(T &a,T &b){ // function template definition
    T temp;
    temp = a;
    a = b;
    b = temp;
}