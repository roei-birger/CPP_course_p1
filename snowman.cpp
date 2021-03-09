#include "snowman.hpp"
#include <string>

using namespace std;
using namespace ariel;

namespace ariel
{
    string myH(int num) //return the correct ans for - H
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

    string myN(int num) //return the correct ans for - N
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

    string myL(int num) //return the correct ans for - L
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

    string myR(int num) //return the correct ans for - R
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
    string myX(int num) //return the correct ans for - X
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
    string myY(int num) //return the correct ans for - Y
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
    string myT(int num) //return the correct ans for - T
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
    string myB(int num) //return the correct ans for - B
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
        string finalSnowman = "init"; //init the final string
        const int div = 10;
        const int max = 44444444;
        const int min = 11111111;

        const int hat = 1;
        const int nose = 2;
        const int leftEye = 3;
        const int rightEye = 4;
        const int leftArm = 5;
        const int rightArm = 6;
        const int torso = 7;
        const int base = 8;
        const int numOfDig = 8;

        if (num < min || num > max) //check the number range
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

        for (int i = numOfDig; i > 0; i--) //Assigns the appropriate character to each variable
        {
            temp = (int)num % div;
            num = num / div;

            switch (i)
            {
            case base:
                b = myB(temp);
                break;
            case torso:
                t = myT(temp);
                break;
            case rightArm:
                y = myY(temp);
                break;
            case leftArm:
                x = myX(temp);
                break;
            case rightEye:
                r = myR(temp);
                break;
            case leftEye:
                l = myL(temp);
                break;
            case nose:
                n = myN(temp);
                break;
            case hat:
                h = myH(temp);
                break;
            default:
                throw invalid_argument("Inserting incorrect literature");
            }
        }

        finalSnowman = h; //Put the hat in the string
        string levelThree = ".";

        if (x == "\\") //check the left-Hand cases
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

        finalSnowman = finalSnowman + "\n" + x + t + y + "\n" + b; //Completing the snowman as a string

        return finalSnowman; //Return the final snowman
    }
}