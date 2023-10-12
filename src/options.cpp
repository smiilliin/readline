#include <iostream>
#include <boost/format.hpp>
#include <getopt.h>

#include "options.hpp"

using namespace std;
using namespace boost;

void loadOptions(int argc, char **argv)
{
  const option longOptions[] = {
      {"help", no_argument, 0, 'h'},
      {"input", required_argument, 0, 'i'},
      {"output", required_argument, 0, 'o'},
      {0, 0, 0, 0}};
  int option;
  int optionIndex = 0;

  while ((option = getopt_long(argc, argv, "hi:o:", longOptions, &optionIndex)) != -1)
  {
    switch (option)
    {
    case 'h':
    {
      cout << "readline, getopt_long, format example" << endl;
      break;
    }
    case 'i':
    {
      cout << format("Input option value: %1%") % optarg << endl;
      break;
    }
    case 'o':
    {
      cout << format("Output option value: %1%") % optarg << endl;
      break;
    }
    }
  }
}