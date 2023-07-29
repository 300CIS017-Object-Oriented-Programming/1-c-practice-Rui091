#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student  {
    private:
        int age;
        string first;
        string last;
        int standard;
        
    public:
        void set_age(int edad){
            age=edad;
        }
        void set_first_name(string nombre){
            first=nombre;
        }
        void set_last_name(string apellido){
            last=apellido;
        }
        void set_standard(int num){
            standard=num;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_last_name(){
            return last;
        }
        string get_first_name(){
            return first;
        }
        string to_string(){
            stringstream salida;
            salida << age << "," << first << "," << last << "," << standard;
            string ans=salida.str();
            
            return ans;
            
        }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
