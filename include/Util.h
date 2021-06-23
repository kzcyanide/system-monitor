#include <string>
#include <fstream>

class Util
{

public:

    //for converting system time in seconds to hrs::min::sec
    static std::string convertTime(long int input_seconds){
        long minutes = input_seconds/60;
        long hours = minutes/60;
        long seconds = int(input_seconds%60);
        minutes = int(minutes%60);

        std::string result = std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds);
        return result;
    }

    //create a progress bar for a given %age
    //50 bars (0 - 100%)
    // 1 bar = 2%
    // returns a string for a given %age

    static std::string getProgressbar(std::string percent){
        std::string result ="0% ";
        int size = 50;
        int bars = (stof(percent)/100)*size;

        for(int i=0;i<size;i++){

            if(i<=bars){
                result+="|";
            }

            else{
                result+=" ";
            }
        }

        result +=" " + percent + " /100%";
        return result;
    }

    //for reading different files
    //returns a file stream

    static std::ifstream getStream(std::string path){

        std::ifstream stream(path);

        if(!stream){
            throw std::runtime_error("Non - existing PID");
        }

        return stream;

    }




};


