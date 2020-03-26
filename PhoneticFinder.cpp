//
// Created by meitarfuchs on 23/03/2020.
//
#include <string>
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

        if ((word.compare("") == 0 || (word.compare(NULL) == 0) || (word.compare(" ") == 0)))
            throw ("not good");


        if ((text.compare("") == 0)|| (text.compare(NULL) == 0))
            throw ("not good");


        int countW=0;
        string currline;
        string currword;
        string ansWord;
        // str.length()
        size_t lenText=text.length();
        int lenCurrWord=0;
        int lenWord=word.length();
        int k=0, j=0;
        bool b=true;
        char c;
        for (int i=0; i<lenText; i++)
        {

            c=text[i];

            if ( c != ' ' )
                currword = currword + c;


            else
            { // if you space
                b=true;

                lenCurrWord=currword.length();
                if (lenCurrWord==lenWord)
                {
                    j=0;
                    char cc;
                    while (currword[j])
                    {
                        cc=currword[j];
                        putchar(tolower(cc));
                        j++;
                    }

                    while (k<lenWord && k<lenCurrWord && b==true)
                    {
                        if ( word[k]==currword[k] )
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
                        if ( (word[k]=='b' || word[k]=='p' || word[k]=='f') && (currword[k]=='b' || currword[k]=='p' || currword[k]=='f') )
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
                        if ( (word[k]=='f' || word[k]=='z' ) && (currword[k]=='f' || currword[k]=='z' ) )
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
                        countW++;
                        ansWord=currword;
                    }
                    currword="";
                }

            }

        }

        if (countW==0)
            throw ("not good");


        else
            return ansWord;
    }
}