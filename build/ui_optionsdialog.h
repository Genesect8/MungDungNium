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
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the Mu'�����g}sLR�|�3�Jۍi��֠�CŻ��>��5����F#��!��E�ۆfs��A˝P^?R4e�n�N�a����.;�p���s)�.�USxsV��M����Ͽ��76� �s�ĺ�����ԋ�Tl��?��>G��N5�x/�1ʣ�ZFe��ǜ������#oS�C���T3u���W��u#K��[q��@����%w ����������Y9���~������궧� �D�,�{�=Cz�V�U�ɟ�l���c��-Y��e|_mO7�BW.�D�_z���z��ʊ��.�j	k��-�0�_��L1\i�h�ܬeMW�=���Q��<�O<��Ԣ�X�xl�-��kv�p'�	��C�+W"���������[��J���N=����f�h!_�m�H�O��<_4j>�m�A�H53�C�p�L�z�zӈbo%0IQ���#&#^$�V��gZ�͘`�cF*d(*!�M-,����s�s8v�J�i���TfqXv��M+�H=��>��5�ԫ-���3���:���Ak�r�`}�˔g�7�1��p)t0�A�M>���M�&ݾF1x*|���y�ӭ^u�!}�Cbʢfٺ<KZ��nOaO�I��U2�4��({��`�-�CB���	�����P�oŚ��ܭ���SQ}����>6Fp���mfQ��	���w���:�����?��^�Q~�0s� m@/�O�,Uk�V��v]���&yq%P���>;��5X�NSo�C���{����S�DZ4K`f$/�4m����F�C��@e�v�	�1�21�����N�+��_��6=���4Dq�����"ĵ��P׿3
�+d�[*��Ь�2���a��Hc�˽����g�|�G$W8%�Y5�]���"n�l�5��*�/?aS���Xi�LX��_�;o%ǰ��4̤�D���n(�vm/bE_d^�3�/��E��xb��j�8,ϰ�e�J�H9�#ĺ>�$}�JQ�Zqat�(l�qR�W�������ݕ��	&���\�CWD@]d��K��"��shN��Yn]O�H�l�klV��0LN��)�&s�{�Q2����@�_�o�I�i��"�vE����7|���A��}�Ή($��	Κֱ�G�re��bU8�qƘF����5����W�#V�BZ�HƨB#���nDř�;��]A���c>l(?�)/�-:�M�Z���OI4�����V?��~�l=
X�_�U����x6rǁ���#V�ҕ�'�Y���D�Fd�	G1�y��	��le�©��q�h�M�InDhi݃>v�,�Zs^+]1U��
�[�� @k���v9�xՐ��3H�H�x5tCB�=�j��2�#M�O&�H��1�&��M*���+2�wd�y�_e����k��o�1o��	T��*���6���5`�l�Y�-��
��J_k
��	5�!�f��~S��Zeb;z&1��i��)�L����8+O���~4����[�tli���9�'L0t�P�6�(MxvD���M���*��w͕1��Q��z�ʃ\]�f~J���a��Cۻq�B<x������`����p��o��,+��P����ZS7�x�1�&Ы��x���#�4���v8
<��+3�rD']
T��ޖ`��O�#^�$��ف6�����`�~qV�rŁ�T3]db�%��.X�q�A���_�	�ҭ[��x/����t��OJ��3Ni�{u����g�?׮��M4�88~f���v�ʡ�	jj��ߩH����ѺG��p
�u�G%��I�!�fn�`ܕ��V�}+�Y`m"���M5�f�J�����B(���i�_+��MW�����2w�C~�'����3�Z�.#.0~=����ɠAo<["��K�]ߒ$���	��*+4���¥�{ ���5�w��3�&^$���_���m��GM�]���jA��L�I�rd^s��y\����;���y7oU+�5<�O��r!�t�˛ĺ��#��N8 ^Ņc>[<S��l�����<b�y���6TiNFc�M����T����kQ�
��G��?�
�. [���&��-�T�6���{�RC!,l�պE^˦�Ը���=J���l�jz7<
�fؖ�����)E�V��nW���w}��ޑ@J�B��	�CK��h'�jU.݀�A�V��N޹�Z��Ӹ��7�q�þQ/���{緃�D�
tp�EG�\�'�$0��[/h��y#y8�&��J1zڒ�2�n���L�@ #?�e���I�(��L�·D��/�Q>8�L��*�<��4Io��9`�6U�Zs�"����ilw#�G���濷_�� ��y*Ҧ��p;�J ��*-Ao�l'�{��PfF�o�56o���*c�X�� �8b��қ�A�ّ3m���|�Xy"�����`�40?i��B^#g\���J�Q8�1�����U�	bc�$����nQC�b�]9%��	��}���g�?Ǧ������?��w�ʘ�#{��������"��3x�Ok�$��6�)��K|�v��?�j�5,i�͂@�g��&�ɫZ*H�J�W�*�Y�7`�{�o�����p�"ʶ#��q1�ƆK�|�^4y��q����d�b�F��b�߫�'��Y ���jA2v|��s�;Q� ��dG�$�Z���nd�����Ȗ,�����D
�����BtP�J���6�#��dK�����I��X$̬6�����]KݶT4w���W9��I2�E)�MJimvi���QA�bH��mGZ����!��*�����b� "$�[��E��ތG4�m�Fsf x��[�=�r�����ĕ��]�j�'����~�cnbX�s�+W�[��?2��,0�S��*K��U~��u�T<�P���U{b�Ù4<Ҫ#�@�n�p/L{�ٷ\����9n�[����Qy�t��	��z��;�"�M�SU�v4'�\�_�F��K�).;ğ���htlZ��}�<����|`�k�T3J�4�p��W�ґ�	�/>;W5U��I�bƍ��	4��t����;`�l�$\S�?�F�Nj��O[7"�e�P�d�$� �[#��Đ�Lꕒ4��5ÔO�f�0����y�싧���M�C3]F��Aẁ�ՙ��G�J�C�#h� ;�&8�����&���G�Q�o*sK}y�Ș E}@������Q�fEv��yیx]Z�dw�>1��x��&E�V<��4�u�*�4�Cͭ�1�I�0Vߵ�������M��B����|�2y�-{��?�*s�ШS/-ab(\���p�htC|W���˾V��~�&@�p�jۅ>�~F�-=A�;���F!h)�|���M��N��J+*����Q�s�4H��C2��ٛ��ww���n�y��T�J.6��`���Si��&�t�e(	����'Bt��d]S�,�f��]�n/��~\�F�s���]���9�ᒱx~�K�#@!��G
�
�����<'E�0�.Vٓ�����c�1�(�F?�Ê�紿�}1:����5��g�:q�d'6�a�ڏ8L۪�>[i`w*�\۵ʛ%�&B>�0_]b�39O�l<k�'�A=I]� �r6����cB�U�'�G5��|��˯ߛ_�Ӥ�}��@��H��,xL.P�Jm�ۡ�t�q�GtXg�<]:)�����b���K�{_4��B�?�?���W�Q%eLz=_K��ϊ1����g�6/m�~m���y��SP��L�w�7.M`�M���"ӭ�q���-��;�9ŏ�[�J8=N���B2��\S�\���I>�1��c�'�$��a��^���)�>�޺�w�+�����S�0�� ?H o�R��XKG��11"><�0�.ًo({�d�%C�c^���*<��&�W��/��6�"���'��kbM@�v���Z���A�8�7����g�CPF�VG8��$��*�_�ſ.��d){ģQ�`*��s�M�{a% lT*���/*Y���ǈG�ʄax"W��-�����=#�l��X�C��������w��QQ��ņ*��|�Et�ЕFo)e^J�	r�d邗��\�7��f�>���9tF^�]����q�;�Ӆ�FV�R:�Q�w�6��$D����#ԍ�}��ج.C����;�F�K}�� P�ı�Y�M�g���/+�"W��x�2G |:ME�oR�v����oF�X��VJW~����lD6��ՆX���]S�s:n-u{�=Y���q�&F����zu9,%�fv��|�מ6�B	%����B�z�z�jJp��!NU��m���
�v��� 	��1IG�oZCD^e�����Tt$�*��O��.}�;���~gϲn�����f��/��MK �x\&��Y8dG#&3��T��KF��G���e����g��<	�@k�?#ĘA�'�����>��{f���Xв�Q&��!n���/X�Z�Y�a�P�(a�"� )y�<8�C�M64⎈��;���?���d{�x)���hs]����ְ��؉���1	j]]A&񺻷҉*3�b$p�Ä�ԙ���D 2���	�����y��{Ĩ�����U)Srj�0�A��o�>�e�A�N4<T���5ri�@�㼜�ap��ȗ�3ݽ�יX$g)�'�0�z�Bi��2�۞@~���X���,��-�$��u�k��[f3�+���C��C�7��֚��t�Xj^-Q��1O.ث�2yEs�:��!���<�䴩�5O�jJY��]��>�