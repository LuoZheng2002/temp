#define TEST
#include"Exception.h"
#include"thread.h"
#include"mutex.h"
#include"cv.h"
#include"cpu.h"
#include<vector>
#include"Requester.h"
#include<iostream>
int main(int argc, char** argv)
{
    int numFiles = argc-2;
    std::vector<Requester> requesters;
    for(int i = 0;i < numFiles;i++)
    {
        requesters.emplace_back(argv[i+2]);
    }
    for(const Requester requester: requesters)
    {
        PRINT(requester.Info());
    }
    
    return 0;
}