#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "Any2FASTAPlugin.h"

void Any2FASTAPlugin::input(std::string file) {
   inputfile = file;
}

void Any2FASTAPlugin::run() {}

void Any2FASTAPlugin::output(std::string file) {
       	std::string outputfile = file;
	std::string myCommand = "any2fasta "+inputfile+" >& "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<Any2FASTAPlugin> Any2FASTAPluginProxy = PluginProxy<Any2FASTAPlugin>("Any2FASTA", PluginManager::getInstance());
