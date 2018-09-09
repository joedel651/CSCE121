//Joseph DeLeonardis
//CSCE 121-101
//Due: July 4, 2016
//hw5pr3.cpp

#include "std_lib_facilities_4.h"
int main()
try{
	
    vector<string> definitions;

    ifstream file("/usr/share/dict/words");//read the dictinoary
    
    string definition;
    while (file >> definition) {//read definition from file dictionary
        definitions.push_back(definition);//push definitions in the vector
    }
    
    int position;
    while (true) {//infinite loop to take input from user
        cout << "Letter position?" << endl;
        cin >> position;
        int count = 0;
        for (int i = 0; i <(int) definitions.size(); i++) {//run until all the words from the vector are exhausted
            string word = definitions[i];
            if ((int)position <=(int)definition.length()) {//position <= word's length
                if (word[position - 1] == 'a' //check if this letter is there in the word, similarly for following steps
                    || definition[position - 1] == 'A'
                    || definition[position- 1] == 'e'
                    || definition[position - 1] == 'E'
                    || definition[position - 1]== 'i'
                    || definition[position - 1] == 'I'
                    || definition[position - 1] == 'o'
                    || definition[position - 1] == 'O'
                    || definition[position - 1] == 'u'
                    || definition[position - 1] == 'U')
                {
                   count++;//increase the count, since letter is present in the word
                }
            }
        }
        /*output the result*/
        cout << count << " words in the dictionary have a vowel [aeiou] in position "<< position << endl;
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
    
    
    