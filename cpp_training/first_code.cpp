#include <iostream>
#include <vector>
#include <string>
#include <thread> // For std::this_thread::sleep_for
#include <chrono> // For std::chrono::seconds

using namespace std;


int mult(int a, int b);
void print_mult(int a, int b);

void swap(int &a, int &b);


// int main(int argc, char *argv[])
int main()
{
    // // Hello World!
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    //     std::this_thread::sleep_for(std::chrono::milliseconds(200));
    // }
    // cout << endl;


    // // variables, conditions and loops
    // int age;
    // do{
    //     cout << "Please enter your age in the last year:" << endl;
    //     cin >> age;
    //     age > 0 ? cout << "ok :)" << endl : cout << "negative age?! try agein..." << endl;
    // } while(age <= 0);

    // age++;
    // if (age == 13){
    //     cout << "Oh, now your age is " << age << ", you have a Bar-Mitsva!" << endl;
    // }
    // else{
    //     cout << "Oh, OK!" << endl;
    // }

    // int n;
    // cout << "enter n: ";
    // cin >> n;
    
    // int start_number;
    // cout << "enter positive start number: ";
    // cin >> start_number;
    
    // int MAX_NUMBER = 21;
    
    // for (int i=1; i<=n; i++){
    //     if (i < start_number)
    //         continue;
    //     if (i > MAX_NUMBER)
    //         break;
    //     cout << i;
    //     i == n || i==MAX_NUMBER ? cout << "" : cout << " - ";
    // }
    // cout << endl;

    
    // // arrays
    // int array[] = {0, 2, 4, 6, 8, 10, 12};
    // const size_t array_size = sizeof(array) / sizeof(array[0]);
    // cout << array_size << endl;


    // // functions
    // int a = 5, b = 8, mult_res;
    // // int a = std::stoi(argv[1]), b = std::stoi(argv[2]), mult_res;
    // mult_res = mult(a, b);
    // cout << mult_res << endl;
    // print_mult(a, b);


    // // pointers - pointer to the variable memory
    // char c = 'A';
    // char *p1_c = &c;
    // char *p2_c = p1_c;
    // cout << c << endl;

    // *p1_c = 'B';
    // cout << c << endl;

    // *p2_c = 'C';
    // cout << c << endl;


    // // reference - more name to the same variable memory
    // int num;
    // int &ref = num;

    // num = 10;
    // cout << num << " , " << ref << endl;

    // ref = 20;
    // cout << num << " , " << ref << endl;


    // int a = 5, b = 8;
    // cout << a << " , " << b << endl;
    // swap(a, b);
    // cout << a << " , " << b << endl;


    // // dynamic memory allocation
    // int *ptr = new int;
    // *ptr = 10;
    // cout << *ptr << endl;
    // delete ptr;
    // cout << *ptr << endl;

    // int length = 4;
    // int *array = new int[length];
    // for(int i=0; i < length; i++){
    //     array[i] = i;
    // }
    // for(int i=0; i < length; i++){
    //     cout << array[i];
    // }
    // cout << endl;
    // delete array;


    // // vectors
    // vector<int> v(2);
    // size_t i, new_size;
    
    // for(i = 0; i < v.size(); i++)
    //     cin >> v[i];

    // cout << "new size: ";
    // cin >> new_size;
    // v.resize(new_size);

    // for(; i < v.size(); i++)
    // cin >> v[i];

    // for(i = 0; i < v.size(); i++)
    // cout << v[i] << endl;



    system("Pause");

    return 0;
}


int mult(int a, int b){
    int mult_res = a * b;
    return mult_res;
}

void print_mult(int a, int b){
    int mult_res = mult(a, b);
    cout << mult_res << endl;
}

void swap(int &a, int &b){
    int temp = a;
    temp = a;
    a = b;
    b = temp;
}
