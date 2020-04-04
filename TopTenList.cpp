//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _links.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _links[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _links[index];
}

void TopTenList::display_forward()
{
  std::cout<<"Top Ten List";
  if( _links.size() == 0 )
  {
    std::cout<<" is empty.\n";
  }
  else
  {
    std::cout<<":\n";
  }
  for(int i=0; i<_links.size(); i++)
  {
    std::cout<<i+1<<" of "<<_links.size()<<" "
             <<_links[i].text<<" "
             <<_links[i].url<<std::endl;
  }
}

void TopTenList::display_backward()
{
  std::cout<<"Top Ten List";
  if( _links.size() == 0 )
  {
    std::cout<<" is empty.\n";
  }
  else
  {
    std::cout<<":\n";
  }
  for(int i=_links.size()-1; i>=0; i--)
  {
    std::cout<<i+1<<" of "<<_links.size()<<" "
             <<_links[i].text<<" "
             <<_links[i].url<<std::endl;
  }
}