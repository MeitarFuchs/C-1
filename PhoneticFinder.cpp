//
// Created by meitarfuchs on 23/03/2020.
//
#include <string>
#include "PhoneticFinder.hpp"
#ifndef UNTITLED1_PHONETIC_H
#define UNTITLED1_PHONETIC_H
#include <stdexcept>
#include <iostream>
#include <stdio.h>


#endif //UNTITLED1_PHONETIC_H
using namespace std;

namespace phonetic
{
    using namespace std;

    string find(string text, string word)
    {

        if ((word=="")   || word.empty() || (word==" ")) {

            throw ("empty word");
        }

        if ((text=="")   || text.empty() || (text==" "))
            throw ("empty text");


        int countW=0;
        string currline="";
        string currword="";
        string ansWord="";
        size_t lenText=text.length();
        int lenCurrWord=0;
        int lenWord=word.length();
        int k=0;
        bool b=true;
        char c;
        for (int i=0; i<lenText; i++)
        {

                c = text[i];

                if (c != ' ')
                    currword = currword + c;


                if ( (c== ' ' && currword != ""  ) || ( (i+1)==lenText)   )
            { // if you space
                b=true;
                ansWord=currword;

                lenCurrWord=currword.length();
                if (lenCurrWord==lenWord)
                {

                    if (currword==word)
                        return ansWord;

                    for (size_t h = 0; h < currword.length();h++)
                    {
                        currword[h] = tolower(currword[h]);
                    }

                    for (size_t h = 0; h < word.length();h++)
                    {
                        word[h] = tolower(word[h]);
                    }

                    k=0;
                    while (k<lenWord && k<lenCurrWord && b==true)
                    {
                        if ( word[k] == currword[k] )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='d' || word[k]=='t') && (currword[k]=='d' || currword[k]=='t') )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='o' || word[k]=='u') && (currword[k]=='o' || currword[k]=='u') )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='b' || word[k]=='f') && (currword[k]=='b' || currword[k]=='f') )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='b' || word[k]=='p') && (currword[k]=='b' || currword[k]=='p' ) )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='f' || word[k]=='p') && (currword[k]=='f' || currword[k]=='p' ) )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='v' || word[k]=='w' ) && (currword[k]=='v' || currword[k]=='w' ) )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='g' || word[k]=='j' ) && (currword[k]=='g' || currword[k]=='j' ) )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='c' || word[k]=='k' || word[k]=='q') && (currword[k]=='c' || currword[k]=='k' || currword[k]=='q') )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='s' || word[k]=='z' ) && (currword[k]=='s' || currword[k]=='z' ) )
                        {
                            k++;
                        }
                        else
                        if ( (word[k]=='i' || word[k]=='y' ) && (currword[k]=='i' || currword[k]=='y' ) )
                        {
                            k++;
                        }
                        else
                        {
                            b=false;
                        }
                    }

                    if (b==true)
                    {
                       return ansWord;
                    }

                    ansWord.clear();
                    currword.clear();
                }
                currword.clear();
                ansWord.clear();
            }
        }

        if (b==false)
        {
            throw ("not found");
        }

    }




}