- first of all we can convert the struct of c in the class in cpp.

# C code -
struct Array{
    int A[10];
    int length;
    int size;
}

# CPP code -
class Array{
private:
    int *A;
    int size;
    int length;
public:
    Array(){
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz){
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array(){
        delete []A;
    }

    // Now from here you can write the function for the class.
}