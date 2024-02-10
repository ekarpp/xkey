/* see LICENSE file for copyright and license details. */

static const struct bind binds[] = {
	/* mod,         key,    cmd */
	{ 0,		XF86XK_AudioLowerVolume,	"amixer sset Master 5%- -q && pkill -RTMIN+2 dwmblocks" },
	{ 0,		XF86XK_AudioMute,		"amixer sset Master toggle -q && pkill -RTMIN+2 dwmblocks" },
	{ 0,		XF86XK_AudioRaiseVolume,	"amixer sset Master 5%+ -q && pkill -RTMIN+2 dwmblocks" },
        { 0,		XF86XK_MonBrightnessDown,	"sudo brightness down && pkill -RTMIN+1 dwmblocks" },
	{ 0,		XF86XK_MonBrightnessUp,		"sudo brightness up && pkill -RTMIN+1 dwmblocks" },
	{ 0,		XF86XK_AudioMicMute,		"amixer sset Capture toggle -q && pkill -RTMIN+3 dwmblocks" },
	{ 0,		0xff61,				"scrot -s" }
};
