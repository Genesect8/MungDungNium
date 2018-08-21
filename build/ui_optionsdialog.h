/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QVBoxLayout *verticalLayout_Main;
    QCheckBox *bitcoinAtStartup;
    QSpacerItem *verticalSpacer_Main;
    QHBoxLayout *horizontalLayout_2_Main;
    QSpacerItem *horizontalSpacer_2_Main;
    QPushButton *resetButton;
    QWidget *tabWallet;
    QVBoxLayout *verticalLayout_Network;
    QLabel *transactionFeeInfoLabel;
    QHBoxLayout *horizontalLayout_1_Main;
    QLabel *transactionFeeLabel;
    BitcoinAmountField *transactionFee;
    QSpacerItem *horizontalSpacer_1_Main;
    QLabel *label;
    QCheckBox *spendZeroConfChange;
    QSpacerItem *verticalSpacer;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network1;
    QCheckBox *mapPortUpnp;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QLabel *socksVersionLabel;
    QValueComboBox *socksVersion;
    QSpacerItem *horizontalSpacer_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QCheckBox *displayAddresses;
    QCheckBox *coinControlFeatures;
    QSpacerItem *verticalSpacer_Display;
    QHBoxLayout *horizontalLayout_Buttons;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(540, 380);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabMain = new QWidget();
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
        verticalLayout_Main = new QVBoxLayout(tabMain);
        verticalLayout_Main->setObjectName(QString::fromUtf8("verticalLayout_Main"));
        bitcoinAtStartup = new QCheckBox(tabMain);
        bitcoinAtStartup->setObjectName(QString::fromUtf8("bitcoinAtStartup"));

        verticalLayout_Main->addWidget(bitcoinAtStartup);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QString::fromUtf8("horizontalLayout_2_Main"));
        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);

        resetButton = new QPushButton(tabMain);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_2_Main->addWidget(resetButton);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main);

        tabWidget->addTab(tabMain, QString());
        tabWallet = new QWidget();
        tabWallet->setObjectName(QString::fromUtf8("tabWallet"));
        verticalLayout_Network = new QVBoxLayout(tabWallet);
        verticalLayout_Network->setObjectName(QString::fromUtf8("verticalLayout_Network"));
        transactionFeeInfoLabel = new QLabel(tabWallet);
        transactionFeeInfoLabel->setObjectName(QString::fromUtf8("transactionFeeInfoLabel"));
        transactionFeeInfoLabel->setTextFormat(Qt::PlainText);
        transactionFeeInfoLabel->setWordWrap(true);

        verticalLayout_Network->addWidget(transactionFeeInfoLabel);

        horizontalLayout_1_Main = new QHBoxLayout();
        horizontalLayout_1_Main->setObjectName(QString::fromUtf8("horizontalLayout_1_Main"));
        transactionFeeLabel = new QLabel(tabWallet);
        transactionFeeLabel->setObjectName(QString::fromUtf8("transactionFeeLabel"));
        transactionFeeLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Main->addWidget(transactionFeeLabel);

        transactionFee = new BitcoinAmountField(tabWallet);
        transactionFee->setObjectName(QString::fromUtf8("transactionFee"));

        horizontalLayout_1_Main->addWidget(transactionFee);

        horizontalSpacer_1_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Main->addItem(horizontalSpacer_1_Main);


        verticalLayout_Network->addLayout(horizontalLayout_1_Main);

        label = new QLabel(tabWallet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_Network->addWidget(label);

        spendZeroConfChange = new QCheckBox(tabWallet);
        spendZeroConfChange->setObjectName(QString::fromUtf8("spendZeroConfChange"));

        verticalLayout_Network->addWidget(spendZeroConfChange);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer);

        tabWidget->addTab(tabWallet, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        verticalLayout_Network1 = new QVBoxLayout(tabNetwork);
        verticalLayout_Network1->setObjectName(QString::fromUtf8("verticalLayout_Network1"));
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QString::fromUtf8("mapPortUpnp"));

        verticalLayout_Network1->addWidget(mapPortUpnp);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QString::fromUtf8("connectSocks"));

        verticalLayout_Network1->addWidget(connectSocks);

        horizontalLayout_Network = new QHBoxLayout();
        horizontalLayout_Network->setObjectName(QString::fromUtf8("horizontalLayout_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QString::fromUtf8("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QString::fromUtf8("proxyIp"));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QString::fromUtf8("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_Network->addWidget(proxyPort);

        socksVersionLabel = new QLabel(tabNetwork);
        socksVersionLabel->setObjectName(QString::fromUtf8("socksVersionLabel"));
        socksVersionLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(socksVersionLabel);

        socksVersion = new QValueComboBox(tabNetwork);
        socksVersion->setObjectName(QString::fromUtf8("socksVersion"));

        horizontalLayout_Network->addWidget(socksVersion);

        horizontalSpacer_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Network->addItem(horizontalSpacer_Network);


        verticalLayout_Network1->addLayout(horizontalLayout_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network1->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QString::fromUtf8("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setObjectName(QString::fromUtf8("verticalLayout_Window"));
        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QString::fromUtf8("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QString::fromUtf8("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QString::fromUtf8("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setObjectName(QString::fromUtf8("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QString::fromUtf8("horizontalLayout_1_Display"));
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QString::fromUtf8("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QString::fromUtf8("horizontalLayout_2_Display"));
        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QString::fromUtf8("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QString::fromUtf8("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        displayAddresses = new QCheckBox(tabDisplay);
        displayAddresses->setObjectName(QString::fromUtf8("displayAddresses"));

        verticalLayout_Display->addWidget(displayAddresses);

        coinControlFeatures = new QCheckBox(tabDisplay);
        coinControlFeatures->setObjectName(QString::fromUtf8("coinControlFeatures"));

        verticalLayout_Display->addWidget(coinControlFeatures);

        verticalSpacer_Display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_Display);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QString::fromUtf8("horizontalLayout_Buttons"));
        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);

        applyButton = new QPushButton(OptionsDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        transactionFeeLabel->setBuddy(transactionFee);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        socksVersionLabel->setBuddy(socksVersion);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bitcoinAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start Mungdungnium after logging in to the system.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bitcoinAtStartup->setText(QApplication::translate("OptionsDialog", "&Start Mungdungnium on system login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("OptionsDialog", "Reset all client options to default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("OptionsDialog", "&Reset Options", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("OptionsDialog", "&Main", 0, QApplication::UnicodeUTF8));
        transactionFeeInfoLabel->setText(QApplication::translate("OptionsDialog", "Optional transaction fee per kB that helps make sure your transactions are processed quickly. Most transactions are 1 kB.", 0, QApplication::UnicodeUTF8));
        transactionFeeLabel->setText(QApplication::translate("OptionsDialog", "Pay transaction &fee", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction cannot be used until that transaction has at least one confirmation. This also affects how your balance is computed.", 0, QApplication::UnicodeUTF8));
        spendZeroConfChange->setText(QApplication::translate("OptionsDialog", "Spend unconfirmed change  (experts only)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWallet), QApplication::translate("OptionsDialog", "W&allet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the Mu'É¶ßìg}sLRş|Ç3ÅJÛiôäÖ ¾CÅ»Ç÷>ü„5ÿ¼ĞÍF#óº!ÂçE´Û†fsÀÃAËP^?R4eÌnŞNüaŒœõñ.;pÒıès)‡.‹USxsVáÓM½ËğûÏ¿ëü76 ‹sÄºƒâÉàÔ‹âTl­ı?ÛÍ>G ¿N5Ûx/¤1Ê£óZFe°ğÇœ²‘Ô“Ã‰#oSÔCœÖøT3uâœW¤Öu#KãÎ[q†ù@‚“š%w —’˜½ï‰ô¥Š©›—Y9ƒ•Ò~ÛÜóı²ã…ê¶§ú •Dİ,¶{õ=Cz²VÂŒ›U×ÉŸºl¾’ÇcèÓ-YïÂe|_mO7‹BW.ÃDÁ_zÿÍÚz÷æÊŠ«î.ìj	köò-Ğ0Ê_«ÛL1\i¨hÜ¬eMWÉ=û­¥QîÌ<ÙO<¯óÔ¢èX‰xl-ˆ³kvªp'Ä	·ªCÂ+W"«”¡§æ¼şµ[±úJœ¹“N=±ÙâîfÄh!_ÅmÑHûO©˜<_4j>²m‘A²H53ËCøpÑLz¨zÓˆbo%0IQ§¬#&#^$ıVëÎgZëÍ˜`¼cF*d(*!M-, ˜Õäsšs8v¤J¹i–¯·TfqXvêÂM+ÚH=ŞÂ>æù5×Ô«-¿ˆ½3ÒÊì:¸«øAkrô`}ÈË”g‡7Ä1¢Æp)t0íAøM>‡«›M«&İ¾F1x*|…¯‚yë¹Ó­^uú!}ÿCbÊ¢fÙº<KZÁçnOaOøI¢¿U2Ã4âå({´Ö`İ-âCB‰úÙ	¯»Ç©“PÀoÅšÂ¼Ü­¦€SQ}ı™Øì>6FpÂîàmfQ²	§’‡w£ÿÀ:™º»?Ê½^îQ~™0s€ m@/ĞOí²,UkÁV‚×v]–Úò&yq%PŸ•ÿ>;ù”5XşNSo°C¤¤Ú{ÛáëğS¥DZ4K`f$/ñ4m¢ÑæÂFÍC‰‡@eÍvú	®1¼21ü°»¯ÄNä+ìÕ_Çİ6=ƒÿÈ4Dq³Øíê°ñ"ÄµÇõP×¿3
Ş+d›[*ŠĞ¬ş2ú†ÎÂaº¹Hcê¶Ë½ƒËÀßg¦|›G$W8%şY5’]Âù„"n™lÛ5ûÊ*/?aSÖé÷XiÉLX­½_œ;o%Ç°ÑÕ4Ì¤ˆD–úún(vm/bE_d^ë£3è·/½ìEúØxbÀ®j¢8,Ï°Ûeé¦J’H9»#Äº>ƒ$}ÉJQàZqat‰(lÇqRªWÇÎ‘Š½ÆÌİ•äÙ	&´¼Š\¥CWD@]d‰ñK’Ş"êŒÌshN’”Yn]O¹Hñl„klVÿ­0LNÊñ)Â&sÃ{Q2™æéÚ@ü_ùo‡Iôi¯Â"³vE©ì»ôÙ7|ÍÛÉA–Û}ñ§Î‰($æ®	ÎšÖ±ğGÒre­¥bU8½qÆ˜FüÛË5·¾ÉäW¬#VüBZ¤HÆ¨B#ƒåônDÅ™¡;ùŸ]A¢àÀc>l(?)/­-:’M§ZûºOI4ãï¡«êV?İ~‘l=
Xş_òUš§èx6rÇÿğ¨#VªÒ•½'‚Y·ªüDóFdª	G1·yø‰	¬ˆleÂ©’Ùq¹hóMĞInDhiİƒ>vˆ,úZs^+]1U¯»
å[ÍÜ @kŠÛv9ğxÕ ¬3HëHüx5tCBò=¥j±ì2È#MÌO&‚Hôñ1‚&è¦ıM*»»¥+2­wd¦yş_e¸¥çókŞüoÌ1oö¾	Tğêº*¹ûÆ6¬ù´5`æ™lê·Y¬-µš
ôãJ_k
€º	5È!¯fçê~S›ÕZeb;z&1áäi)ÏLòõˆ½8+OíÄè~4ÙÎØ˜[¨tliµÉë9·'L0t¦PÛ6Ñ(MxvDÊıúMÙûÜ*œëºwÍ•1ßÔQªÈzìÊƒ\]f~J¡°§a£ÙCÛ»q¨B<x÷†”Ãë`æúÉÄpşˆoñı,+óÇPÙĞÛÇZS7’x­1›&Ğ«ò‡äx˜Šé#°4éíÂv8
<–†+3írD']
TÕôŞ–`´ÇOé™#^š$€ÓÙ6ô»÷€İ`¹~qV‘rÅ÷T3]dbÍ%ÏÃ.X˜qÆA şî_•	îÒ­[²x/•­ÍÇt¿OJä3Niô{uÒÀ½àg?×®ı‰M4Ç88~f¬‡ˆv˜Ê¡Ğ	jjˆ´ß©Hº‡¡ÿÑºG¥¸p
ë uƒG%¹ĞIŠ!©fnë`Ü•àV®}+‰Y`m"¡šœM5€f¤JöÄÀîâB(¡®iˆ_+ç¼øMW¾ÎÃ÷2wŒC~¡'ÿ‰á³3ÖZ¤.#.0~=ığö‰É Ao<["ûŸKó]ß’$€Âë	Õñ*+4‡¯âÂ¥é{ –º5ÁwÀÜ3Ú&^$ÒÄŞ_¶¾ìmÁ¡GMÃ]©¹®jAˆ”L Iörd^sñy\÷Òğÿ;¤šşy7oU+5<ó‘O’å†r!ŠtİË›ÄºªÑ#¸ÅN8 ^Å…c>[<SÇÑlçç… ë<b¨y¢ñü6TiNFcØM§ğãT—€™ôkQ”
Â•ÜãGÜĞ?¦
‚. [ê‰£–&¼¹-¬T­6«İÚ{›RC!,lÖÕºE^Ë¦ÈÔ¸¡íÂ=J¢ÚlÄjz7<
ƒfØ–ğ†ŠÎï)EöVÊınWûˆw}–Ş‘@J÷B©Ë	ØCK…±h'üjU.İ€›A¬V·ĞNŞ¹ŞZ áÓ¸È7âqğÃ¾Q/˜¡{ç·ƒÎDœ
tpìEGÇ\'$0¾Ö[/h“¤y#y8ü&ÑäJ1zÚ’„2ßnà÷ÍL¦@ #?òe³›„IÛ(‰ŞLçÂ·DØé/§Q>8éL€*À<Éƒ4Ioªå9`¶6U©Zs¢"ø°øÒilw#ÈGâêÔæ¿·_¡¸ ¨Åy*Ò¦˜Šp;ÒJ ğõ*-Aoµl'¼{¬ŒPfFÔo²56oÌâÈ*cÆX°Ñ ¡8bÚğÒ›‚AÀÙ‘3mı±Š|·Xy"‚ÔÓæ`Ñ40?i½šB^#g\ûÀ§JŸQ8è1¦ğøÀUŞ	bc“$¨ÒÜÜnQC©bş]9%ì‹İ	İ’}¨ÏÙg–?Ç¦ÖØı¼‚÷?©×wôÊ˜¨#{ñàˆ†«íë"‚å3x¤OkÙ$ıÔ6ö)¥İK|…våÏ?jì5,i¹Í‚@ÂgÉî&ˆÉ«Z*HºJ†Wõ*ÙYí•7`û{Øo¾™ßÇîp±"Ê¶#šíq1ŸÆ†Kğ|¹^4yâÆq¥†»d‹b©FœßbÒß«¸'‡ÛY ïÅâjA2v|£s§;QÖ §–dGíº½$ìZµ£¼nd›¡Á…ûÈ–,ëÅñÿæD
ãô‚éÿÜBtPéJ«õ6ä–#¾dKæı”“ÎI½òX$Ì¬6¹à€ñ±]Kİ¶T4w¿ÏñW9ª¸I2ãE)ÄMJimviøßÅQAËbHõmGZ“•êİ!¹µ*ÖßèäÆb "$ö[–“E´ØŞŒG4Ûm¶Fsf xûò‘†[°=¨r¿ãÂÊÊÄ•’—]¡jº'µœ¡‘~ÏcnbX´s‚+WÖ[å?2æâ,0ñS£ø*KåëU~Öêu¢T<“P •÷U{bŒÃ™4<Òª#ˆ@£n¢p/L{„Ù·\¤«ïÄ9nœ[»ïåÊQyåtÄô	Çëzë;"øMŠSU”v4'Ş\›_­F¤´K¹).;ÄŸŒÑöhtlZñà}â<ˆö¤¿|`ÛkšT3Jç4àpµíWÏÒ‘ö	ç/>;W5Uá¾åIşbÆÓÕ	4‡ìt­¼ë‘Í;`Çl$\SÕ?ÊF£NjÿòO[7"ôeÃP—dñ$‡ ™[#³ïÄÿLê•’4½5Ã”OÁf±0üä÷yÇì‹§‰Û©M©C3]FÏ×AwÌ€ÂÕ™ÓÏG¤JâC¿#hõ ;Û&8×ÎÄÚØ&¶•˜Â“GúQÒo*sK}yùÈ˜ E}@àØëÀ™”QûfEv¢£yÛŒx]Zïœdwõ>1‚‡x¹™&EõV<»4çuê*ı4ÕCÍ­®1øI0Vßµ›•‚ŞÍMÊBË´õÚ|‰2yØ-{±™?·*sßĞ¨S/-ab(\¾ıÆp÷htC|W€ıŞË¾V‰~Œ&@ÀpÏjÛ…>’~F‹-=AÍ;ıõF!h)Ê|š¨ÖMï‹ÇNÄJ+*èôí ÌQï‰sı4HäâC2‡ÂÙ›à‡ww·¤˜nÃy–ÓTÁJ.6´è`ñİìSióï&Ütàe(	÷Š¶¬'Btüd]S—,´f«œ]Än/œ•~\ŸFês–ÿ]­ü–9şá’±x~ÎK¹#@!¨‚G
•
±”—êÛ<'Eï¡0Ò.VÙ“Ä¨€öc¶1è©(—F? ÃŠÍç´¿‰}1:‹•5ƒ‹gô:qÉd'6ËaûÚ8LÛªÅ>[i`w*Í\ÛµÊ›%‹&B>å0_]bî39Ošl<k•'µA=I] Ñr6˜°—¸cB¨Uå'ãG5†ˆ|ØáË¯ß›_âÓ¤—}åü@É÷Hì¬,xL.PôJm¹Û¡§tçqşGtXg<]:)Ó÷²»Ïb‰Äë¨KÚ{_4©Bù?Ò?ÁWŒQ%eLz=_Kã‰ÏŠ1¿Œ”¾gÁ6/mÿ~m’…×yú­SP»«L¥w£7.M`¯MÂÇê"Ó­˜qÚÛÓ-¶³;²9Å´[½J8=NşòÅB2ÎÆ\S´\ŸìñI>–1Èæc×'´$®ëaöÍ^áîï)ä>†ŞºŸwæ+–±Øõ–S0òÅ ?H o”RğËXKG–11"><£0Ÿ.Ù‹o({Ùd¯%Cßc^¤©Ì*<…Â&½W·Æ/¶Õ6Õ"åã‚ò'àÆkbM@„v¬ÒéZàÇ¥A­8Â7¯¬şãg‹CPFãVG8ü‰$°äª*Ó_éÅ¿.µ¶d){Ä£Q…`*°ÙsóM§{a% lT*×÷ê/*Yé»ê¾ÇˆGäŒÊ„ax"W¬¹-ÈÓıµÔ=#ôl¬„X©C¨‚–¡ü¯w¯•QQ®ïÅ†*‘Ë|¥EtÁĞ•Fo)e^JÛ	r©dé‚—¨\œ7—Øfš>†ÔË9tF^Ë]˜„º•qÕ;»Ó…®FVšR:ô†QÎwî‹µ¤6¬Í$Dã•Í×Ğ#Ô÷}•Ø¬.C®›‰Ë;FüK}àÎ Pñ´Ä±ÿYÆMò…g³¦/+Ã"W‡Îx¨2G |:MEéšoR—vôŒıËoFX¿ŠVJW~¬…ÄlD6ØûÕ†X–­˜]Sğs:n-u{“=Y‚æÅq‰&Fşú¥ûzu9,%èfv‰ü|ö×6»B	%ğçäB¬z¾zÕjJpÖÙ!NUµşm²ÚŞ
Év´Ãİ 	ì1IGõoZCD^eÅø”µåTt$ü*±¢O¶.}„;ãÉò~gÏ²n³¨¶½«fœ×/¹ØMK ¸x\&ÍY8dG#&3—×T‘—KFñ§ìGÀúeô¢íúg…<	¡@k¿?#Ä˜Aá'½˜ÿÅ>ÉÖ{fâúÇXĞ²¦Q&éï!nÓü‚/XZûY—aòP¨(a"Ä )yæ¤<8ÙCØM64âˆõÃ;ü¬¿?ÆÏ÷d{öx)›áÂhs]à‰õ¢Ö°ßê™Ø‰şßı1	j]]A&ñº»·Ò‰*3úb$pâ¸Ã„İÔ™¾µ•D 2¥ƒ	æÁ«óÊyó{Ä¨Ôı–´U)Srjè0ŸAòõo¸>‡e¥AâN4<Tóúš5ri–@ã¼œÛap¼²È—ï3İ½ã×™X$g)º'²0õz£BiÓù2ÄÛ@~€ÎîX§Ñè,Øóº-¶$ıáu¯k¸óŒ[f3ã+¸²öCÅõCÆ7¿‡Öš“ë‚t¤Xj^-QŒÇ1O.Ø«¶2yEs‘:±Ò!œ©¶<Çä´©À5O¿jJY’ã]¿×>é¥