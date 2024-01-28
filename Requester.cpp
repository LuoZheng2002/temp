#include"Requester.h"
#include<assert.h>
#include<fstream>
#include<sstream>
Requester::Requester(const char *filename)
    :
    filename(filename)
{
    std::ifstream file(filename);
    while(true)
    {
        int track = 0;
        file >> track;
        if (file.good())
        {
            tracks.push_back(track);
        }
        else
        {
            break;
        }        
    }
}

std::string Requester::Info() const
{
    std::ostringstream oss;
    oss << "Requester:\n";
    oss << "name: " << filename << "\n";
    oss << "tracks: ";
    for(int track: tracks)
    {
        oss << track << " ";
    }
    oss << "\n";
    return oss.str();
}

