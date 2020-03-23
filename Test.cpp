//
// Created by meitarfuchs on 23/03/2020.
//

#include "doctest.h"

#include "PhoneticFinder.hpp"

using namespace phonetic;


#include <string>

using namespace std;







TEST_CASE("Test replacement of p and b") {

string text = "xxx happy yyy";

CHECK(find(text, "happy") == string("happy"));

CHECK(find(text, "habby") == string("happy"));

CHECK(find(text, "hapby") == string("happy"));

CHECK(find(text, "habpy") == string("happy"));

/* Add more checks here */

}

TEST_CASE("Test replacement of p and f") {

string text = "xxx happy yyy";

CHECK(find(text, "happy") == string("happy"));

CHECK(find(text, "haffy") == string("happy"));

CHECK(find(text, "hapfy") == string("happy"));

CHECK(find(text, "hafpy") == string("happy"));


text = "xxx puppy yyy";

CHECK(find(text, "puppy") == string("puppy"));

CHECK(find(text, "fuffy") == string("puppy"));

CHECK(find(text, "fuppy") == string("puppy"));

CHECK(find(text, "fufpy") == string("puppy"));
CHECK(find(text, "puffy") == string("puppy"));
CHECK(find(text, "fupfy") == string("puppy"));

}
TEST_CASE("Test replacement of b and f") {

string text = "xxx baby boss";

CHECK(find(text, "baby") == string("baby"));

CHECK(find(text, "bafy") == string("baby"));

CHECK(find(text, "faby") == string("baby"));

CHECK(find(text, "fafy") == string("baby"));



CHECK(find(text, "boss") == string("boss"));

CHECK(find(text, "foss") == string("boss"));


}

TEST_CASE("Test replacement of v and w") {

string text = "xxx vote yyy";

CHECK(find(text, "vote") == string("vote"));

CHECK(find(text, "wote") == string("vote"));

text = "xxx worry yyy";

CHECK(find(text, "worry") == string("worry"));

CHECK(find(text, "vorry") == string("worry"));

}

TEST_CASE("Test replacement of g and j") {

string text = "xxx jumpping yyy";

CHECK(find(text, "jumpping") == string("jumpping"));

CHECK(find(text, "gumppinj") == string("jumpping"));
CHECK(find(text, "jumppinj") == string("jumpping"));
CHECK(find(text, "gumpping") == string("jumpping"));


CHECK(find(text, "jumppyng") == string("jumpping"));

CHECK(find(text, "gumppynj") == string("jumpping"));
CHECK(find(text, "jumppynj") == string("jumpping"));
CHECK(find(text, "gumppyng") == string("jumpping"));

}
TEST_CASE("Test replacement of c and k") {

string text = "xxx kakoun yyy";

CHECK(find(text, "kakoun") == string("kakoun"));
CHECK(find(text, "kacoun") == string("kakoun"));
CHECK(find(text, "cakoun") == string("kakoun"));
CHECK(find(text, "cacoun") == string("kakoun"));



CHECK(find(text, "kakoun") == string("kakoun"));
CHECK(find(text, "kacoon") == string("kakoun"));
CHECK(find(text, "cakuun") == string("kakoun"));
CHECK(find(text, "cacuon") == string("kakoun"));

}

TEST_CASE("Test replacement of q and k") {

string text = "xxx kakoun yyy";

CHECK(find(text, "kakoun") == string("kakoun"));
CHECK(find(text, "kaqoun") == string("kakoun"));
CHECK(find(text, "qakoun") == string("kakoun"));
CHECK(find(text, "qaqoun") == string("kakoun"));



CHECK(find(text, "kakoun") == string("happy"));
CHECK(find(text, "kaqoon") == string("happy"));
CHECK(find(text, "qakuun") == string("happy"));
CHECK(find(text, "qacuon") == string("happy"));

}
TEST_CASE("Test replacement of c and q") {

string text = "xxx cook yyy";

CHECK(find(text, "cook") == string("cook"));
CHECK(find(text, "qook") == string("cook"));

CHECK(find(text, "cook") == string("cook"));
CHECK(find(text, "qouk") == string("cook"));
CHECK(find(text, "cuok") == string("cook"));
CHECK(find(text, "quuk") == string("cook"));

}

TEST_CASE("Test replacement of s and z") {

string text = "xxx zebra yyy";

CHECK(find(text, "zebra") == string("zebra"));
CHECK(find(text, "sebra") == string("zebra"));
CHECK(find(text, "zepra") == string("zebra"));
CHECK(find(text, "sefra") == string("zebra"));


text = "xxx sabon yyy";

CHECK(find(text, "sabon") == string("sabon"));
CHECK(find(text, "zabon") == string("sabony"));

CHECK(find(text, "sapon") == string("sabon"));
CHECK(find(text, "zafon") == string("sabon"));

CHECK(find(text, "sabun") == string("sabon"));
CHECK(find(text, "zabun") == string("sabon"));
CHECK(find(text, "sapun") == string("sabon"));
CHECK(find(text, "zafun") == string("sabon"));

}

TEST_CASE("Test replacement of d and t") {

string text = "xxx donuts yyy";

CHECK(find(text, "donuts") == string("donuts"));
CHECK(find(text, "donuds") == string("donuts"));
CHECK(find(text, "tonuts") == string("donuts"));
CHECK(find(text, "tonuds") == string("donuts"));

CHECK(find(text, "donots") == string("donuts"));
CHECK(find(text, "dunuds") == string("donuts"));
CHECK(find(text, "tunots") == string("donuts"));

CHECK(find(text, "donutz") == string("donuts"));
CHECK(find(text, "donudz") == string("donuts"));
CHECK(find(text, "tonutz") == string("donuts"));
CHECK(find(text, "tonudz") == string("donuts"));

CHECK(find(text, "donotz") == string("donuts"));
CHECK(find(text, "dunudz") == string("donuts"));
CHECK(find(text, "tunotz") == string("donuts"));

}


TEST_CASE("Test replacement of o  and u") {

string text = "xxx country yyy";

CHECK(find(text, "country") == string("country"));
CHECK(find(text, "coontry") == string("country"));
CHECK(find(text, "cuuntry") == string("country"));
CHECK(find(text, "cuontry") == string("country"));

CHECK(find(text, "countri") == string("country"));
CHECK(find(text, "coontri") == string("country"));
CHECK(find(text, "cuuntri") == string("country"));
CHECK(find(text, "cuontri") == string("country"));

}
TEST_CASE("Test replacement of y and i") {

string text = "xxx israeli yyy";

CHECK(find(text, "israeli") == string("israeli"));
CHECK(find(text, "israely") == string("israeli"));
CHECK(find(text, "ysraeli") == string("israeli"));
CHECK(find(text, "ysraely") == string("israeli"));

CHECK(find(text, "izraeli") == string("israeli"));
CHECK(find(text, "izraely") == string("israeli"));
CHECK(find(text, "yzraeli") == string("israeli"));
CHECK(find(text, "yzraely") == string("israeli"));

}


TEST_CASE("Test replacement of lower-case and upper-case") {

string text = "Happi xxx yyy";

CHECK(find(text, "happi") == string("Happi"));

CHECK(find(text, "Happi") == string("Happi"));

CHECK(find(text, "HAPPI") == string("Happi"));

CHECK(find(text, "HaPpI") == string("Happi"));

/* Add more checks here */

}

TEST_CASE("Test replacement of upper-case and lower-case")
{

string text = "Israeli yyy";

CHECK(find(text, "IsRaeLi") == string("Israeli"));
CHECK(find(text, "IsRaeLI") == string("Israeli"));
CHECK(find(text, "IsraeLi") == string("Israeli"));
CHECK(find(text, "israeli") == string("Israeli"));

CHECK(find(text, "ISRAELI") == string("Israeli"));
CHECK(find(text, "iSRAELI") == string("Israeli"));
CHECK(find(text, "israEli") == string("Israeli"));
CHECK(find(text, "israELI") == string("Israeli"));

}