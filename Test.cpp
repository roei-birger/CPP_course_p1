
#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowman code with all digit are same")
{
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
}

TEST_CASE("Good snowman code with all the options")
{
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12124442) == string("       \n _===_ \n (..o) \n (   ) \n (\" \") "));
    CHECK(snowman(21232224) == string("  ___  \n ..... \n\\(o,O)/\n (] [) \n (   ) "));
    CHECK(snowman(21211121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
    CHECK(snowman(33224442) == string("   _   \n  /_\\  \n (o_o) \n (   ) \n (\" \") "));
    CHECK(snowman(43443342) == string("  ___  \n (_*_) \n (-_-) \n/(   )\\\n (\" \") "));
    CHECK(snowman(43223343) == string("  ___  \n (_*_) \n (o_o) \n/(   )\\\n (___) "));
    CHECK(snowman(44323333) == string("  ___  \n (_*_) \n (O o) \n/(> <)\\\n (___) "));
}


TEST_CASE("Less digits than needed")
{
    CHECK_THROWS(snowman(7));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(1234321));
}

TEST_CASE("More digits than needed")
{
    CHECK_THROWS(snowman(222222222));
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(444444444));
}

TEST_CASE("correct output- hat cases"){
   CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(21211121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
    CHECK(snowman(33224442) == string("   _   \n  /_\\  \n (o_o) \n (   ) \n (\" \") "));
    CHECK(snowman(43443342) == string("  ___  \n (_*_) \n (-_-) \n/(   )\\\n (\" \") "));
}

TEST_CASE("correct output- nose cases"){
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12124442) == string("       \n _===_ \n (..o) \n (   ) \n (\" \") "));
    CHECK(snowman(43223343) == string("  ___  \n (_*_) \n (o_o) \n/(   )\\\n (___) "));
    CHECK(snowman(44323333) == string("  ___  \n (_*_) \n (O o) \n/(> <)\\\n (___) "));
}

TEST_CASE("correct output- eyes cases"){
    CHECK(snowman(12124442) == string("       \n _===_ \n (..o) \n (   ) \n (\" \") "));
    CHECK(snowman(21232224) == string("  ___  \n ..... \n\\(o,O)/\n (] [) \n (   ) "));
    CHECK(snowman(21211121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
    CHECK(snowman(43443342) == string("  ___  \n (_*_) \n (-_-) \n/(   )\\\n (\" \") "));
    CHECK(snowman(44323333) == string("  ___  \n (_*_) \n (O o) \n/(> <)\\\n (___) "));
}

TEST_CASE("correct output- hands cases"){
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(21232224) == string("  ___  \n ..... \n\\(o,O)/\n (] [) \n (   ) "));
    CHECK(snowman(43223344) == string("  ___  \n (_*_) \n (o_o) \n/(   )\\\n (   ) "));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("correct output- torso cases"){
     CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
     CHECK(snowman(21211121) == string("  ___  \n ..... \n (o,.) \n<(] [)>\n ( : ) "));
     CHECK(snowman(12341231) == string("       \n _===_ \n (O.-)/\n<(> <) \n ( : ) "));
     CHECK(snowman(33224441) == string("   _   \n  /_\\  \n (o_o) \n (   ) \n ( : ) "));
}

TEST_CASE("correct output- base cases"){
    CHECK(snowman(13114411) == string("       \n _===_ \n (._.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11114422) == string("       \n _===_ \n (.,.) \n (] [) \n (\" \") "));
    CHECK(snowman(11111113) == string("       \n _===_ \n (.,.) \n<( : )>\n (___) "));
    CHECK(snowman(43443334) == string("  ___  \n (_*_) \n (-_-) \n/(> <)\\\n (   ) "));   
}

TEST_CASE("Inserting incorrect literature")
{
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-555));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(71234123));
    CHECK_THROWS(snowman(12341238));
    CHECK_THROWS(snowman(12346321));
    CHECK_THROWS(snowman(31615858));
}
