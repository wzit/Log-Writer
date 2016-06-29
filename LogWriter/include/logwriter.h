#ifndef LOGWRITER_H
#define LOGWRITER_H

#include <fstream>
#include <string>
#include <ctime>
//#include "slevel.h"

using namespace std;

class LogWriter : public ofstream {
    public:
        LogWriter(string name_, string path_);
        //LogWriter& operator<<(SLevel severityLevel_);
        string getName() { return name; };
        string getTimeAsString();
    private:
        void writeLogPrefix();

        string name;
        string path;

};

#endif // LOGWRITER_H
