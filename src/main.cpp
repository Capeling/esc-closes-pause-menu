#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class $modify(PauseLayer) {
	void keyDown(enumKeyCodes key) {
		if(key == enumKeyCodes::KEY_Escape) {
			return onResume(nullptr);
		}
		return PauseLayer::keyDown(key);
	}
};