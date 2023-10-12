#include <iostream>
#include <boost/format.hpp>
#include <readline/readline.h>
#include <readline/history.h>

#include "options.hpp"

using namespace std;
using namespace boost;

int main(int argc, char **argv)
{
  loadOptions(argc, argv);

  using_history();

  for (int i = 0; i < 5; i++)
  {
    auto data = readline((format("hello %1%> ") % i).str().c_str());
    add_history(data);
    free(data);
  }

  HIST_ENTRY **optionsList = history_list();
  HIST_ENTRY *value;
  for (int i = 0; (value = optionsList[i]); i++)
  {
    cout << format("%1%: %2%") % i % value->line << endl;
  }

  free(optionsList);

  return 0;
}