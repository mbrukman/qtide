#ifndef SVR_H
#define SVR_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <list>

class Jcon : public QObject

{
  Q_OBJECT

public:
  Jcon() {};
  void cmd(QString s);
  void cmddo(QString s, bool forceexec = false);
  void cmddo(std::string s, bool forceexec = false);
  void execSentence();
  QString cmdr(QString s);
  int exec();
  void immex(QString s);
  int init(int argc, char* argv[]);
  void quit();
  void set(QString s,QString t);

  std::list <std::string> Sentence;

public slots:
  void input();

};

bool svr_init(int argc, char* argv[]);
extern Jcon *jcon;
extern bool jecallback;

#endif
