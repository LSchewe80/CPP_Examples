#pragma once

#include <stdio.h>

// Namespace definieren und die Klasse mit einbinden
namespace firma {
    class Car;
}

class firma::Car{
    public:
        int age = 0;

        void fahren();

};