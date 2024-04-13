//
// Created by George Maxi on 12/04/24.
//

#ifndef UNTITLED_COUNTER_H
#define UNTITLED_COUNTER_H
#include <QObject>

class Counter: public QObject{
    Q_OBJECT
private:
    int m_value;
public:
    Counter() {
        m_value = 0;
    }
    int value() const {
        return m_value;
    }
public slots:
    void setValue(int value);
signals:
    void valueChanged(int newValue);
};


#endif //UNTITLED_COUNTER_H
