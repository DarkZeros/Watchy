#ifndef WATCHY_7_SEG_H
#define WATCHY_7_SEG_H

#include <Watchy.h>
#include "Seven_Segment10pt7b.h"
#include "DSEG7_Classic_Regular_15.h"
#include "DSEG7_Classic_Bold_25.h"
#include "DSEG7_Classic_Regular_39.h"
#include "icons.h"

class Watchy7SEG : public Watchy{
    using Watchy::Watchy;
    public:
        Watchy7SEG(const watchySettings& settings);
        void drawWatchFace();
        void drawTime();
        void drawDate();
        void drawBatteryTrend();
        void drawSteps();
        void drawExtra();
        void drawWeather();
        void drawBattery();
};

#endif