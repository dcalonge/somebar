// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrains Mono Nerd Font 11";

constexpr ColorScheme colorInactive = {Color(0x93, 0xa1, 0xa1), Color(0x00, 0x00, 0x00)};
constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0x00, 0x00, 0x00)};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
