# TemplateCpp
WU cpp certificate

Template assignment, C++ 712
Factorial Function
Part 1: Convert the following function into a template function which can take any type:
      unsigned long fact (unsigned long n)
      {
         return (n < 2 ? 1 : n * fact(n-1));
      }
Document the operations that are required on the parameterized type.

Part2:
Implement a MyCollection class that takes the type that is stored in the collection as a template parameter (like you specify the type you want to store in a vector ). Implement the methods specified below.
The PrintAll and PrintAllReverseOrder should be implemented using STL iterators.
Note:
1. The syntax I have below is not correct / complete for specifying the template
class... you need to complete it.
2. The element type you want to store in this collection is up to you, but you should
have one example of your own class type (any class you like, you can use the Student /Circle class from earlier assignments, or make up some simple class of your own. What operator do you need to override for this class of yours such that the following template class would work ?
class MyCollection {
public:
            MyCollection;
            void        Add( const T & );
            int         Count() const;
            bool        IsEmpty() const;
// The return value of Get should be a const reference to the // stored type
                  Get(int index ) const;
            void        PrintAll( ostream & os );
            void        PrintAllReverseOrder( ostream & os );
 
Template assignment, C++ 712
 private:
std::vector<T> mCollection;
};
Now, you should be able to execute the following:
      int main(int argc, char ** argv )
      {
// Instantiate MyCollection of integers. Lets say its called m1. // Add some elements to it by calling m1.Add
m1.PrintAll( std::cout );
std::cout << endl; m1.PrintAllReverseOrder( std::cout );
return 0; }

