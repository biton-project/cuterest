#ifndef PROXYSETTINGSWIDGET_H
#define PROXYSETTINGSWIDGET_H
#include "abstractsettingswidget.h"
#include <QtWidgets>
#include <QNetworkProxy>
#include <QGroupBox>
class ProxySettingsWidget : public AbstractSettingsWidget
{
    Q_OBJECT
public:
    ProxySettingsWidget(QWidget * parent=0);
    ~ProxySettingsWidget();



public slots:
    bool save();
    bool load();
    bool reset();

protected slots:
    void typeChanged(int index);


protected:
    void setTypeCombo();


private:
    QLineEdit * mHostEdit;
    QSpinBox * mPortEdit;
    QLineEdit * mUserEdit;
    QLineEdit * mPasswordEdit;
    QComboBox * mTypeCombo;
    QGroupBox * mBox;
};

#endif // PROXYSETTINGSWIDGET_H
