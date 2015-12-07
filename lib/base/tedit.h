#ifndef TEDIT_H
#define TEDIT_H

#include <QListWidgetItem>
#include "bedit.h"

class Tedit : public Bedit
{
  Q_OBJECT

public:
  Tedit();

  void append(QString s);
  void append_smoutput(QString s);
  QString getprompt();
  void insert(QString s);
  void load(QString s, bool d);
  QString loadcmd(QString s, bool d);
  void removeprompt();
  void setprompt();
  void setresized(int);
  void promptreplace(QString t,int pos=-1);
  void showcmd(QString t);

  QScrollBar *hScroll;
  int ifResized, Tw, Th;
  QString smprompt;

public slots:
  void docmdp(QString t, bool show, bool same);
  void docmds(QString t, bool show,bool same=false);
  void docmdx(QString t);
  void itemActivated(QListWidgetItem *);
  void loadscript(QString s,bool show);
  void runall(QString s, bool show=true);

private slots:

private:
  void docmd(QString t);
  void keyPressEvent(QKeyEvent *);
  void enter();
  void togglemode();
};

extern Tedit *tedit;

#endif
