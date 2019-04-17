#ifndef VIEWCONTROLLERS_MAINVIEWCONTROLLER_HPP
#define VIEWCONTROLLERS_MAINVIEWCONTROLLER_HPP

#include <QObject>

class MainViewController : public QObject {
  Q_OBJECT

 public slots:
  void addOpendesktopAccount(QString protocol, QString username,
                             QString password);
  void addCustomAccount(QString protocol, QString url, QString username,
                        QString password);
  void getAccountList();
  void removeAccount(QString accountName);
  void syncAccount(QString accountName);

 signals:
  void showToast(QString message);
  void accountList(QList<QString> accounts);
  void accountAdded();

 private:
  void addAccount(QString protocol, QString url, QString username,
                  QString password, QString accountName);
};

#endif
