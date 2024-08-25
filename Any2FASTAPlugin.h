#ifndef Any2FASTAPLUGIN_H
#define Any2FASTAPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class Any2FASTAPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Any2FASTA";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
