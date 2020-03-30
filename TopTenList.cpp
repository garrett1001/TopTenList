//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  links.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  links[index] = link;
}

Hyperlink TopTenList::get(int index)
{
  return links[index];
}
