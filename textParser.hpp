#ifndef TEXTPARSER_H
#define TEXTPARSER_H

#include <string>
#include <stdio.h>
#include <dirent.h>

using namespace std;

class loadText {
  private:
    FILE * current;
    FILE ** loaded;
    DIR * current;
  public:
    int loadDir (string path);
    int load (string name);
    int loadAll ();
    int loadNext ();
    int unloadAll ();
    int unloadPrevious ();
    int stepForward (int steps, bool storePassed);
};

#endif