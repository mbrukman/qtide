#ifndef QWIDGEX_H
#define QWIDGEX_H

#include "child.h"

class Form;
class Pane;

// ---------------------------------------------------------------------
class QWidgex : public Child
{
  Q_OBJECT

public:
  QWidgex(string n, string s, Form *f, Pane *p);

private slots:

};

#endif
