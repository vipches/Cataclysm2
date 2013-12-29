#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
#include "item_type.h"

class Item
{
public:
  Item(Item_type* T = NULL);
  Item(const Item &rhs);
  ~Item();

  Item& operator=(const Item &rhs);

  Item_type* type;

  glyph top_glyph();
  std::string get_name();
  std::string get_name_with_article();
  int get_weight();
  int get_volume();
private:
};

#endif
