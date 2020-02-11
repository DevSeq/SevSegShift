#pragma once

#include <../SevSeg/SevSeg.h>

class SevSegShift: public SevSeg {
    public:
        void begin();
    private:
        void segmentOn(byte segmentNum);
        void segmentOff(byte segmentNum);
        void digitOn(byte digitNum);
        void digitOff(byte digitNum);
};