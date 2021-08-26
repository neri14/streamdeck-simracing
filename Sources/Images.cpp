#include "Images.h"

namespace Images {
    namespace Consts {
        const std::string headlightsOff = "data:image/png;base64,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";
        const std::string headlightsLowBeam = "data:image/png;base64,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";
        const std::string headlightsHighBeam = "data:image/png;base64,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";

        const std::string rainLightOff = "data:image/png;base64,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";
        const std::string rainLightOn = "data:image/png;base64,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";
    }

    const std::string& getImage(GameState::Headlights headlights)
    {
        switch (headlights) {
        case (GameState::Headlights::Off):
            return Consts::headlightsOff;
        case (GameState::Headlights::LowBeam):
            return Consts::headlightsLowBeam;
        case (GameState::Headlights::HighBeam):
            return Consts::headlightsHighBeam;
        default:
            return Consts::headlightsOff;
        }
    }
    const std::string& getImage(GameState::RainLight rainLight)
    {
        switch (rainLight) {
        case (GameState::RainLight::Off):
            return Consts::rainLightOff;
        case (GameState::RainLight::On):
            return Consts::rainLightOn;
        default:
            return Consts::rainLightOff;
        }
    }
} // namespace Images