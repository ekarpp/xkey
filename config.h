/* see LICENSE file for copyright and license details. */

static const struct bind binds[] = {
	/* mod,         key,    cmd */
	{ 0,		XF86XK_AudioLowerVolume,	"amixer sset Master 5%- -q" },
	{ 0,		XF86XK_AudioMute,		"amixer sset Master toggle -q" },
	{ 0,		XF86XK_AudioRaiseVolume,	"amixer sset Master 5%+ -q" },
        { 0,		XF86XK_MonBrightnessDown,	"sudo brightness down" },
	{ 0,		XF86XK_MonBrightnessUp,		"sudo brightness up" },
	{ 0,		XF86XK_AudioMicMute,		"amixer sset Capture toggle -q" }
};
