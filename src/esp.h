#ifndef __ESP_H_
#define __ESP_H_

#include "settings.h"
#include "SDK.h"
#include "draw.h"
#include "interfaces.h"
#include "pstring.h"
#include "bone.h"
#include "entity.h"

namespace ESP
{
	void DrawTracer(C_BasePlayer* localPlayer, C_BaseEntity* entity);
	void DrawPlayerBox(C_BasePlayer* localPlayer, C_BaseEntity* entity);
	void DrawPlayerInfo(C_BasePlayer* localPlayer, C_BaseEntity* entity, int entityIndex);
	void DrawBones(C_BaseEntity* entity);
	void PaintTraverse(VPANEL vgui_panel, bool force_repaint, bool allow_force);
}

#endif