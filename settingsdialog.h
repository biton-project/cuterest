#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QTabWidget>
#include <QDialogButtonBox>
#include <QNetworkProxy>
#include <QNetworkAccessManager>
#include "manager.h"
#include "abstractsettingswidget.h"
class SettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit SettingsDialog(Manager * manager, QWidget *parent = 0);
    ~SettingsDialog();

    void addSettingsWidget(AbstractSettingsWidget* widget);
public slots:
    void save();
    void load();
    void reset();

protected slots:
    void buttonClicked(QAbstractButton * button);
private:
    QList<AbstractSettingsWidget*> mWidgets;
    QTabWidget * mTabWidget;
    QDialogButtonBox * mButtonBox;
    Manager * mManager;
};

#endif // SETTINGSDIALOG_H
