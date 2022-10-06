#pragma once

#include "vars.hpp"

#include <dependencies/json.hpp>

using json = nlohmann::json;

void from_json(json& j, const std::string& key, bool& val);
void from_json(json& j, const std::string& key, int& val);
void from_json(json& j, const std::string& key, size_t& val);
void from_json(json& j, const std::string& key, float& val);
void from_json(json& j, const std::string& key, std::string& val);


void to_json(json& j, const CfgWeapon& val);
void to_json(json& j, const CfgColor& val, const std::string& extra = "");
void to_json(json& j, const CfgBeam& val, const std::string& extra = "");
void to_json(json& j, const Key& val, const std::string& extra = "");

void to_json(json& j, const VarAim& val);
void to_json(json& j, const VarAimPaint& val);
void to_json(json& j, const VarVisuals& val);
void to_json(json& j, const VarVisuals::VarChams& val);
void to_json(json& j, const VarVisuals::VarGlow& val);
void to_json(json& j, const VarVisuals::VarEsp& val);
void to_json(json& j, const VarVisuals::VarEsp::VarBoxes& val);
void to_json(json& j, const VarVisuals::VarEsp::VarHealthBar& val);
void to_json(json& j, const VarVisuals::VarEsp::VarArmorBar& val);
void to_json(json& j, const VarVisuals::VarEsp::VarWeaponBar& val);
void to_json(json& j, const VarVisuals::VarEsp::VarName& val);
void to_json(json& j, const VarVisuals::VarEsp::VarSkeleton& val);
void to_json(json& j, const VarVisuals::VarEsp::VarDlight& val);
void to_json(json& j, const VarVisuals::VarEsp::VarExtraInfo& val);
void to_json(json& j, const VarVisuals::VarEsp::VarFlags& val);
void to_json(json& j, const VarVisuals::VarEsp::VarLasers& val);
void to_json(json& j, const VarVisuals::VarEsp::VarChecks& val);
void to_json(json& j, const VarVisuals::VarEsp::VarDropped& val);
void to_json(json& j, const VarVisuals::VarSound& val);
void to_json(json& j, const VarVisuals::VarDormacy& val);
void to_json(json& j, const VarVisuals::VarWorld& val);
void to_json(json& j, const VarVisuals::VarWorld::VarBomb& val);
void to_json(json& j, const VarVisuals::VarWorld::VarProjectiles& val);
void to_json(json& j, const VarVisuals::VarWorld::VarSky& val);
void to_json(json& j, const VarVisuals::VarWorld::VarModulate& val);
void to_json(json& j, const VarVisuals::VarWorld::VarMolotov& val);
void to_json(json& j, const VarVisuals::VarWorld::VarSmoke& val);
void to_json(json& j, const VarVisuals::VarWorld::VarZeus& val);
void to_json(json& j, const VarVisuals::VarWorld::VarParticles& val);
void to_json(json& j, const VarVisuals::VarWorld::VarTracer& val);
void to_json(json& j, const VarVisuals::VarWorld::VarImpacts& val);
void to_json(json& j, const VarVisuals::VarWorld::VarFog& val);
void to_json(json& j, const VarVisuals::VarWorld::VarScreenEffect& val);
void to_json(json& j, const VarVisuals::VarWorld::VarTone& val);
void to_json(json& j, const VarVisuals::VarWorld::VarWeather& val);
void to_json(json& j, const VarVisuals::VarWorld::VarAmbient& val);
void to_json(json& j, const VarKeys& val);
void to_json(json& j, const VarBacktrack& val);
void to_json(json& j, const VarMisc& val);
void to_json(json& j, const VarMisc::VarLogs& val);
void to_json(json& j, const VarMisc::VarFov& val);
void to_json(json& j, const VarMisc::VarThridP& val);
void to_json(json& j, const VarMisc::VarCrosshair& val);
void to_json(json& j, const VarMisc::VarFakeLatency& val);
void to_json(json& j, const VarMisc::VarBunnyHop& val);
void to_json(json& j, const VarMisc::VarHitmarker& val);
void to_json(json& j, const VarMisc::VarScope& val);
void to_json(json& j, const VarMisc::VarPlots& val);
void to_json(json& j, const VarMisc::VarInfo& val);
void to_json(json& j, const VarMisc::VarAimWarn& val);
void to_json(json& j, const VarMisc::VarRadar& val);
void to_json(json& j, const VarMisc::VarTrail& val);
void to_json(json& j, const VarMisc::VarNades& val);
void to_json(json& j, const VarMisc::VarHat& val);
void to_json(json& j, const VarMisc::VarDiscord& val);
void to_json(json& j, const VarMisc::VarMotionBlur& val);
void to_json(json& j, const VarMisc::VarFreeLook& val);
void to_json(json& j, const VarMisc::VarMirrorCam& val);
void to_json(json& j, const VarMisc::VarFreeCam& val);
void to_json(json& j, const VarMisc::VarFlashlight& val);
void to_json(json& j, const VarStyling& val);

void from_json(json& j, CfgWeapon& val);
void from_json(json& j, CfgColor& val, const std::string& extra = "");
void from_json(json& j, CfgBeam& val, const std::string& extra = "");
void from_json(json& j, Key& val, const std::string& extra = "");

void from_json(json& j, VarAim& val);
void from_json(json& j, VarAimPaint& val);
void from_json(json& j, VarVisuals& val);
void from_json(json& j, VarVisuals::VarChams& val);
void from_json(json& j, VarVisuals::VarGlow& val);
void from_json(json& j, VarVisuals::VarEsp& val);
void from_json(json& j, VarVisuals::VarEsp::VarBoxes& val);
void from_json(json& j, VarVisuals::VarEsp::VarHealthBar& val);
void from_json(json& j, VarVisuals::VarEsp::VarArmorBar& val);
void from_json(json& j, VarVisuals::VarEsp::VarWeaponBar& val);
void from_json(json& j, VarVisuals::VarEsp::VarName& val);
void from_json(json& j, VarVisuals::VarEsp::VarSkeleton& val);
void from_json(json& j, VarVisuals::VarEsp::VarDlight& val);
void from_json(json& j, VarVisuals::VarEsp::VarExtraInfo& val);
void from_json(json& j, VarVisuals::VarEsp::VarFlags& val);
void from_json(json& j, VarVisuals::VarEsp::VarLasers& val);
void from_json(json& j, VarVisuals::VarEsp::VarChecks& val);
void from_json(json& j, VarVisuals::VarEsp::VarDropped& val);
void from_json(json& j, VarVisuals::VarSound& val);
void from_json(json& j, VarVisuals::VarDormacy& val);
void from_json(json& j, VarVisuals::VarWorld& val);
void from_json(json& j, VarVisuals::VarWorld::VarBomb& val);
void from_json(json& j, VarVisuals::VarWorld::VarProjectiles& val);
void from_json(json& j, VarVisuals::VarWorld::VarSky& val);
void from_json(json& j, VarVisuals::VarWorld::VarModulate& val);
void from_json(json& j, VarVisuals::VarWorld::VarMolotov& val);
void from_json(json& j, VarVisuals::VarWorld::VarSmoke& val);
void from_json(json& j, VarVisuals::VarWorld::VarZeus& val);
void from_json(json& j, VarVisuals::VarWorld::VarParticles& val);
void from_json(json& j, VarVisuals::VarWorld::VarTracer& val);
void from_json(json& j, VarVisuals::VarWorld::VarImpacts& val);
void from_json(json& j, VarVisuals::VarWorld::VarFog& val);
void from_json(json& j, VarVisuals::VarWorld::VarScreenEffect& val);
void from_json(json& j, VarVisuals::VarWorld::VarTone& val);
void from_json(json& j, VarVisuals::VarWorld::VarWeather& val);
void from_json(json& j, VarVisuals::VarWorld::VarAmbient& val);
void from_json(json& j, VarKeys& val);
void from_json(json& j, VarBacktrack& val);
void from_json(json& j, VarMisc& val);
void from_json(json& j, VarMisc::VarLogs& val);
void from_json(json& j, VarMisc::VarFov& val);
void from_json(json& j, VarMisc::VarThridP& val);
void from_json(json& j, VarMisc::VarCrosshair& val);
void from_json(json& j, VarMisc::VarFakeLatency& val);
void from_json(json& j, VarMisc::VarBunnyHop& val);
void from_json(json& j, VarMisc::VarHitmarker& val);
void from_json(json& j, VarMisc::VarScope& val);
void from_json(json& j, VarMisc::VarPlots& val);
void from_json(json& j, VarMisc::VarInfo& val);
void from_json(json& j, VarMisc::VarAimWarn& val);
void from_json(json& j, VarMisc::VarRadar& val);
void from_json(json& j, VarMisc::VarTrail& val);
void from_json(json& j, VarMisc::VarNades& val);
void from_json(json& j, VarMisc::VarHat& val);
void from_json(json& j, VarMisc::VarDiscord& val);
void from_json(json& j, VarMisc::VarMotionBlur& val);
void from_json(json& j, VarMisc::VarFreeLook& val);
void from_json(json& j, VarMisc::VarMirrorCam& val);
void from_json(json& j, VarMisc::VarFreeCam& val);
void from_json(json& j, VarMisc::VarFlashlight& val);
void from_json(json& j, VarStyling& val);
