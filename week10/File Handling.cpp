//            TASK1:Create File, Write, Append, Display

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    // Write to file
//    ofstream fout("notes.txt");
//    fout << "This is a test file.\n";
//    fout.close();
//
//    // Append name & roll number
//    fout.open("notes.txt", ios::app);
//    fout << "Name: Muqaddas, Roll No: 23\n";
//    fout.close();
//
//    // Read and display
//    ifstream fin("notes.txt");
//    string line;
//    cout << "File content:\n";
//    while (getline(fin, line)) {
//        cout << line << endl;
//    }
//    fin.close();
//    return 0;
//}

//                     TASK2:Count Number of Lines

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    ifstream fin("notes.txt");
//    string line;
//    int count = 0;
//    while (getline(fin, line)) {
//        count++;
//    }
//    fin.close();
//    cout << "Total number of lines: " << count << endl;
//    return 0;
//}

//                         TASK3:Copy One File into Another

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ifstream fin("notes.txt");
//    ofstream fout("copy.txt");
//
//    string line;
//    while (getline(fin, line)) {
//        fout << line << endl;
//    }
//
//    fin.close();
//    fout.close();
//    cout << "File copied successfully!" << endl;
//    return 0;
//}

//                        TASK4:Student Details to File

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//struct Student {
//    string name;
//    int roll;
//};
//
//int main() {
//    Student s[3] = { {"Saima", 1}, {"Fehmida", 2}, {"Riffat", 3} };
//
//    ofstream fout("students.txt");
//    for (int i = 0; i < 3; i++) {
//        fout << s[i].name << " " << s[i].roll << endl;
//    }
//    fout.close();
//
//    ifstream fin("students.txt");
//    string name;
//    int roll;
//    cout << "Student details from file:\n";
//    while (fin >> name >> roll) {
//        cout << "Name: " << name << ", Roll No.: " << roll << endl;
//    }
//    fin.close();
//    return 0;
//}
