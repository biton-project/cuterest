#include "cookiesettingswidget.h"

CookieSettingsWidget::CookieSettingsWidget(QWidget * parent)
    :AbstractSettingsWidget(parent)
{
    setWindowTitle(tr("Cookies"));

    mView = new QTableView;
    mModel =new QStandardItemModel;
    mView->setModel(mModel);
    mClearButton = new QPushButton(tr("Clear"));

    QVBoxLayout * layout  = new QVBoxLayout;
    layout->addWidget(mView);
    layout->addWidget(mClearButton);

    setLayout(layout);

    connect(mClearButton,SIGNAL(clicked()),this,SLOT(clear()));


}

CookieSettingsWidget::~CookieSettingsWidget()
{
    delete mView;
    delete mModel;
    delete mClearButton;
}

bool CookieSettingsWidget::save()
{


return true;
}

bool CookieSettingsWidget::load()
{

return true;

    //    mModel->clear();
    //    foreach (QNetworkCookie cookie, manager()->cookieJar()->allCookies()){

    //        QList<QStandardItem*> row;

    //        row.append(new QStandardItem(cookie.domain()));
    //        row.append(new QStandardItem(cookie.expirationDate().toString()));
    //        row.append(new QStandardItem(cookie.value()));

    //        mModel->appendRow(row);




    //    }


}

bool CookieSettingsWidget::reset()
{

}

void CookieSettingsWidget::clear()
{


}

