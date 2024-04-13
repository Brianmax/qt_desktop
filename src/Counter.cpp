//
// Created by George Maxi on 12/04/24.
//

#include "../include/Counter.h"

void Counter::setValue(int value) {
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}