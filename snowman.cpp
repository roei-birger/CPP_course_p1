#include "snowman.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace ariel;

namespace ariel
{
    string myH(int num)
    {

        switch (num)
        {
        case 1:
            return "       \n _===_ \n";
        case 2:
            return "  ___  \n ..... \n";
        case 3:
            return "   _   \n  /_\\  \n";
        case 4:
            return "  ___  \n (_*_) \n";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }

    string myN(int num)
    {
        switch (num)
        {
        case 1:
            return ",";
        case 2:
            return ".";
        case 3:
            return "_";
        case 4:
            return " ";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }

    string myL(int num)
    {
        switch (num)
        {
        case 1:
            return ".";
        case 2:
            return "o";
        case 3:
            return "O";
        case 4:
            return "-";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }

    string myR(int num)
    {
        switch (num)
        {
        case 1:
            return ".";
        case 2:
            return "o";
        case 3:
            return "O";
        case 4:
            return "-";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }
    string myX(int num)
    {
        switch (num)
        {
        case 1:
            return "<";
        case 2:
            return "\\";
        case 3:
            return "/";
        case 4:
            return " ";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }
    string myY(int num)
    {
        switch (num)
        {
        case 1:
            return ">";
        case 2:
            return "/";
        case 3:
            return "\\";
        case 4:
            return " ";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }
    string myT(int num)
    {
        switch (num)
        {
        case 1:
            return "( : )";
        case 2:
            return "(] [)";
        case 3:
            return "(> <)";
        case 4:
            return "(   )";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }
    string myB(int num)
    {
        switch (num)
        {
        case 1:
            return " ( : ) ";
        case 2:
            return " (\" \") ";
        case 3:
            return " (___) ";
        case 4:
            return " (   ) ";
        default:
            throw invalid_argument("Inserting incorrect literature");
        }
    }

    string snowman(long num)
    {
        string finalSnowman = "init";
        const int div = 10;
        const int zero = 0;
        const int five = 5;
        const int six = 6;
        const int seven = 7;
        const int eight = 8;
        const int max = 44444444;
        const int min = 11111111;


        if (num < min || num > max)
        {
            throw invalid_argument("Inserting incorrect literature");
        }

        string h = "h";
        string n = "n";
        string l = "l";
        string r = "r";
        string x = "x";
        string y = "y";
        string t = "t";
        string b = "b";


        int temp = 0;
        for (int i = eight; i > zero; i--)
        {
            temp = (int)num % div;
            num = num / div;

            switch (i)
            {
            case eight:
                b = myB(temp);
                break;
            case seven:
                t = myT(temp);
                break;
            case six:
                y = myY(temp);
                break;
            case five:
                x = myX(temp);
                break;
            case 4:
                r = myR(temp);
                break;
            case 3:
                l = myL(temp);
                break;
            case 2:
                n = myN(temp);
                break;
            case 1:
                h = myH(temp);
                break;
            default:
                throw invalid_argument("Inserting incorrect literature");
            }
        }

        finalSnowman = h;
        string levelThree = ".";

        if (x == "\\")
        {
            levelThree = x + "(" + l + n + r + ")";
            finalSnowman += levelThree;
            x = " ";
        }
        else
        {
            levelThree = " (" + l + n + r + ")";
            finalSnowman += levelThree;
        }

        if (y == "/")
        {
            finalSnowman += y;
            y = " ";
        }
        else
        {
            finalSnowman += " ";
        }

        finalSnowman = finalSnowman + "\n" + x + t + y + "\n" + b;

        return finalSnowman;
    }
}