#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <regex>
using namespace std;
class timestamp
{     
    public:
    int hour,min,sec;
    timestamp(int r = 0,int m = 0,int s = 0){
        this->hour = r;
        this->min = m;
        this->sec = s;
    }
    bool operator > (timestamp const &other){
        if(hour > other.hour)
            return true;
        else{
            if(hour < other.hour)
                return false;
            else
            {
                if(min > other.min)
                    return true;
                else{
                    if (min < other.min)
                        return false;
                    else{
                        if(sec > other.sec)
                            return true;
                        else
                            return false;
                    }
                }
            } 
        }
    }
    bool operator < (timestamp const &other){
        if(hour < other.hour)
            return true;
        else{
            if(hour > other.hour)
                return false;
            else
            {
                if(min < other.min)
                    return true;
                else{
                    if (min > other.min)
                        return false;
                    else{
                        if(sec < other.sec)
                            return true;
                        else
                            return false;
                    }
                }
            } 
        }
    }
    bool operator == (timestamp const &other){
        if(hour != other.hour || min != other.min || sec != other.sec)
            return false;
        else
            return true;
    }
    bool operator != (timestamp const &other){
        if(hour == other.hour && min == other.min && sec != other.sec)
            return false;
        else
            return true;
    }
};

int main()
{
    timestamp a(23,32,43);
    timestamp b(23,32,44);
    if (a>b)
        cout<<1;
    else
        cout<<0<<endl;
}