#ifndef POWERPOPUPWIDGET_H
#define POWERPOPUPWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>

namespace Plugins {
    namespace Power {
        class PowerPopupWidget : public QWidget
        {
            Q_OBJECT
        public:
            explicit PowerPopupWidget(QWidget *parent = nullptr);
            void showAni();
            void hideAni();

        signals:
            void requestHidePopup();

        public slots:
            void onAwakenDisplayChanged(const bool state);
            void onAwakenComputerChanged(const bool state);
        private:
            QVBoxLayout *m_mainLayout;
            QPropertyAnimation *m_showAni;
            QPropertyAnimation *m_hideAni;
            QGraphicsOpacityEffect *m_effect;
            QPropertyAnimation *m_effectShowAni;
            QPropertyAnimation *m_effectHideAni;
        };
    }
}

#endif // POWERPOPUPWIDGET_H