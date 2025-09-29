#ifndef TELCO_COLOR_CODER_H
#define TELCO_COLOR_CODER_H

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    constexpr int numberOfMajorColors = 5;
    constexpr int numberOfMinorColors = 5;

    extern const char* MajorColorNames[numberOfMajorColors];
    extern const char* MinorColorNames[numberOfMinorColors];

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

    void PrintColorCodeManual();
}

#endif // TELCO_COLOR_CODER_H
