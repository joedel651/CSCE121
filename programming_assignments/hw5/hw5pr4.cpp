//Joseph DeLeonardis
//CSCE 121-101
//Due: July 4, 2016
//hw5pr4.cpp

#include "std_lib_facilities_4.h"
int main()
try{
	
    vector<string> definitions;
   
    ifstream file("/usr/share/dict/words"); //open the file that contains the dictionary on build
    int length;
    char find[20];
    string definition, line;
    while (file >> definition) { //reads definitions from the dictionary
        definitions.push_back(definition); //push definitions into the vector
    }
    
    int position;
    while (true) { //infinite loop to take input from user
        cout << "Letter position?" << endl;
        cin >> position;
		cout << "Which letters?" << endl;
        getline(cin,line);
        getline(cin,line);
        length = line.length();
        for (int j=0; j<length; j++) // this will put the string in an array of characters
           find[j] = line.at(j);
        int count = 0;
        for (int i = 0; i <(int)definitions.size(); i++) { /*run until all the words from the vector are exhausted checks to see if the user input is in there*/
            string definition = definitions[i];
            if ((int)position <=(int)definition.length()) { /*checks for the those letters at the
                                                       position specified by the user*/
                for(int k=0; k < length; k++)
                    if (definition[position - 1] == find[k])
                    count++;
                
            }
        }
        /*output the result*/
        cout<<"There are " << count << " words in the dictionary which have one of the letters ["<<line <<"] in position "<< position << endl;
        
        
        }
        


    return 0;}
	
	catch(exception& e){
        cerr <<"error: "<<e.what()<<'\n';
        return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }