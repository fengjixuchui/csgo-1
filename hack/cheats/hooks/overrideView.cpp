#include "hooks.hpp"

#include "../classes/overrideView.hpp"

#include <SDK/CViewSetup.hpp>
#include <SDK/structs/Entity.hpp>
#include <SDK/interfaces/interfaces.hpp>
#include <cheats/game/globals.hpp>
#include <cheats/game/game.hpp>
#include <config/vars.hpp>

hooks::overrideView::value FASTCALL hooks::overrideView::hooked(FAST_ARGS, CViewSetup* view)
{	
	if(!game::isAvailable())
		return original(thisptr, view);

	if (!game::localPlayer->m_bIsScoped())
		if (auto fov = vars::misc->fov->value; fov > 0.0f || fov < 0.0f)
			view->m_fov += fov;

	globals::FOV = view->m_fov;
	OverrideViewType::runAll(view);

	original(thisptr, view);
}