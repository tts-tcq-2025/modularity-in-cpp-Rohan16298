#ifndef TELCO_COLOR_CODER_COLORS_H
#define TELCO_COLOR_CODER_COLORS_H

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    constexpr int numberOfMajorColors = 5;
    constexpr int numberOfMinorColors = 5;

    extern const char* MajorColorNames[numberOfMajorColors];
    extern const char* MinorColorNames[numberOfMinorColors];

}

#endif // TELCO_COLOR_CODER_COLORS_H
