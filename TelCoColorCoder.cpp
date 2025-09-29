#include "TelCoColorCoder.h"
#include <iostream>

namespace TelCoColorCoder
{
    const char* MajorColorNames[numberOfMajorColors] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    const char* MinorColorNames[numberOfMinorColors] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor)
    {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::ToString() const {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorCodeManual() {
        std::cout << "Color Code Reference Manual:\n";
        std::cout << "Pair Number | Major Color | Minor Color\n";
        std::cout << "--------------------------------------\n";
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair pair = GetColorFromPairNumber(i);
            std::cout << i << "           | "
                      << MajorColorNames[pair.getMajor()] << "       | "
                      << MinorColorNames[pair.getMinor()] << "\n";
        }
    }
}
