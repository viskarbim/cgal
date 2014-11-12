#ifndef CGAL_SIZING_FIELD_2_H
#define CGAL_SIZING_FIELD_2_H

#include <list>

#include <CGAL/basic.h>

namespace CGAL
{

template <typename Geom_traits>
class Sizing_field_2 // pure virtual class
{    
public:
  typedef typename Geom_traits::Point_2 Point_2;
  typedef typename Geom_traits::FT      FT;

public:
  Sizing_field_2()
  {
  }
  virtual ~Sizing_field_2()
  {
  }

  virtual FT operator()(const Point_2& p) const = 0;
};

}//namespace CGAL

#endif
