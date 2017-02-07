#ifndef FRONTEND_INLINE
#include <frontend.h>
#include <feinputs.h>
#endif

#define IF_ENUM_PARSE_RETURN(sValue, eValue) if (strcmp(#eValue, sValue) == 0) return eValue;

int onParseEmuButton(const char* _szKey)
{
	IF_ENUM_PARSE_RETURN(_szKey, IPT_INVALID)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UNUSED)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_END)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UNKNOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PORT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_DIPSWITCH)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_CONFIG)

		// start buttons
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START5)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START6)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START7)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START8)

		// coin slots
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN5)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN6)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN7)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN8)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN9)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN10)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN11)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_COIN12)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BILL1)

		// service coin
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SERVICE1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SERVICE2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SERVICE3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SERVICE4)

		// tilt inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TILT1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TILT2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TILT3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TILT4)

		// misc other digital inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SERVICE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TILT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_INTERLOCK)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_VOLUME_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_VOLUME_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_START)                  // MESS only
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SELECT)                 // MESS only
		IF_ENUM_PARSE_RETURN(_szKey, IPT_KEYPAD)                 // MESS only
		IF_ENUM_PARSE_RETURN(_szKey, IPT_KEYBOARD)               // MESS only

		// digital joystick inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_DIGITAL_JOYSTICK_FIRST)

		// use IPT_JOYSTICK for panels where the player has one single joystick
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICK_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICK_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICK_LEFT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICK_RIGHT)

		// use IPT_JOYSTICKLEFT and IPT_JOYSTICKRIGHT for dual joystick panels
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKRIGHT_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKRIGHT_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKRIGHT_LEFT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKRIGHT_RIGHT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKLEFT_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKLEFT_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKLEFT_LEFT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_JOYSTICKLEFT_RIGHT)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_DIGITAL_JOYSTICK_LAST)

		// action buttons
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON5)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON6)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON7)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON8)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON9)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON10)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON11)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON12)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON13)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON14)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON15)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_BUTTON16)

		// mahjong inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_A)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_B)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_C)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_D)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_E)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_F)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_G)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_H)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_I)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_J)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_K)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_L)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_M)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_N)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_O)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_P)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_Q)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_KAN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_PON)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_CHI)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_REACH)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_RON)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_BET)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_LAST_CHANCE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_SCORE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_DOUBLE_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_FLIP_FLOP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_BIG)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_SMALL)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_MAHJONG_LAST)

		// hanafuda inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_A)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_B)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_C)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_D)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_E)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_F)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_G)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_H)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_YES)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_NO)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_HANAFUDA_LAST)

		// gambling inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLING_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_KEYIN)   // attendant
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_KEYOUT)  // attendant
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_SERVICE) // attendant
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BOOK)    // attendant
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DOOR)    // attendant
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DOOR2)   // many gambling games have several doors.
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DOOR3)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DOOR4)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DOOR5)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_HIGH)    // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_LOW)     // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_HALF)    // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_DEAL)    // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_D_UP)    // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_TAKE)    // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_STAND)   // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BET)     // player
		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_PAYOUT)  // player
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON1) // player
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON2) // many many gambling games have multi-games and/or multi-function-buttons
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON3) // I suggest to eliminate specific names
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON4)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON5)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON6)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON7)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON8)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON9)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON10)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON11)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON12)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON13)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON14)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON15)
		//  IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLE_BUTTON16)

		// poker-specific inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_HOLD1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_HOLD2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_HOLD3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_HOLD4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_HOLD5)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_CANCEL)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POKER_BET)

		// slot-specific inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SLOT_STOP1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SLOT_STOP2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SLOT_STOP3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SLOT_STOP4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SLOT_STOP_ALL)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_GAMBLING_LAST)

		// analog inputs
		IF_ENUM_PARSE_RETURN(_szKey, IPT_ANALOG_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_ANALOG_ABSOLUTE_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_AD_STICK_X)     // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_AD_STICK_Y)     // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_AD_STICK_Z)     // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PADDLE)         // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PADDLE_V)       // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PEDAL)          // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PEDAL2)         // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_PEDAL3)         // absolute // autocenter
		IF_ENUM_PARSE_RETURN(_szKey, IPT_LIGHTGUN_X)     // absolute
		IF_ENUM_PARSE_RETURN(_szKey, IPT_LIGHTGUN_Y)     // absolute
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POSITIONAL)     // absolute // autocenter if not wraps
		IF_ENUM_PARSE_RETURN(_szKey, IPT_POSITIONAL_V)   // absolute // autocenter if not wraps

		IF_ENUM_PARSE_RETURN(_szKey, IPT_ANALOG_ABSOLUTE_LAST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_DIAL)           // relative
		IF_ENUM_PARSE_RETURN(_szKey, IPT_DIAL_V)         // relative
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TRACKBALL_X)    // relative
		IF_ENUM_PARSE_RETURN(_szKey, IPT_TRACKBALL_Y)    // relative
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MOUSE_X)        // relative
		IF_ENUM_PARSE_RETURN(_szKey, IPT_MOUSE_Y)        // relative

		IF_ENUM_PARSE_RETURN(_szKey, IPT_ANALOG_LAST)

		// analog adjuster support
		IF_ENUM_PARSE_RETURN(_szKey, IPT_ADJUSTER)

		// the following are special codes for user interface handling - not to be used by drivers!
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_FIRST)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_CONFIGURE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_ON_SCREEN_DISPLAY)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_DEBUG_BREAK)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_PAUSE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_RESET_MACHINE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SOFT_RESET)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SHOW_GFX)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_FRAMESKIP_DEC)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_FRAMESKIP_INC)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_THROTTLE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_FAST_FORWARD)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SHOW_FPS)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SNAPSHOT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_RECORD_MOVIE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_TOGGLE_CHEAT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_LEFT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_RIGHT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_HOME)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_END)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_PAGE_UP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_PAGE_DOWN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SELECT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_CANCEL)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_DISPLAY_COMMENT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_CLEAR)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_ZOOM_IN)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_ZOOM_OUT)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_PREV_GROUP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_NEXT_GROUP)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_ROTATE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SHOW_PROFILER)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_TOGGLE_UI)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_TOGGLE_DEBUG)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_PASTE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_SAVE_STATE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_LOAD_STATE)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_TAPE_START)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_TAPE_STOP)

		// additional OSD-specified UI port types (up to 16)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_1)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_2)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_3)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_4)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_5)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_6)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_7)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_8)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_9)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_10)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_11)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_12)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_13)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_14)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_15)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OSD_16)

		IF_ENUM_PARSE_RETURN(_szKey, IPT_UI_LAST)

		// other meaning not mapped to standard defaults
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OTHER)

		// special meaning handled by custom code
		IF_ENUM_PARSE_RETURN(_szKey, IPT_SPECIAL)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_CUSTOM)
		IF_ENUM_PARSE_RETURN(_szKey, IPT_OUTPUT)

		return -1;
}

void onCommandSetInputsBindings(const feSCommand* _pCmd)
{
	if (_pCmd->m_iParamsCount < 2)
		return;

	int iPlayer = _pCmd->m_pParams[0].iValue;
	char* szConfigJson = _pCmd->m_pParams[1].szValue;

	feInputsLoadPlayerBindings(iPlayer, szConfigJson);
}
void onCommandSetVolume(const feSCommand* _pCmd)
{
	if (_pCmd->m_iParamsCount < 1)
		return;

	int iVolume = _pCmd->m_pParams[0].iValue;
	int iAttenuation = 0;

	// Convert iVolume[0;255] to iAttenuation[-32;0]
	iAttenuation = (int)((((float)iVolume) / 255.0f)*32.0f) - 32;

	g_current_machine->sound().set_attenuation(iAttenuation);
}
feresult onFrontEndCommand(const feSCommand* _pCmd)
{
	if (!g_current_machine)
		return FE_RESULT_ERROR;

	switch (_pCmd->m_eCmdType)
	{
	case FECommandGameSession_Reset:
		g_current_machine->schedule_soft_reset();
		break;
	case FECommandGameSession_Pause:
		g_current_machine->pause();
		break;
	case FECommandGameSession_Play:
		g_current_machine->resume();
		break;

	case FECommandGameSession_Quicksave:
		break;
	case FECommandGameSession_Quickload:
		break;
	case FECommandGameSession_AutoSave:
		break;
	case FECommandGameSession_AutoLoad:
		break;

	case FECommandGameSession_SetVolume:
		onCommandSetVolume(_pCmd);
		break;

	case FECommandGameSession_SetInputBindings:
		onCommandSetInputsBindings(_pCmd);
		break;

	case FECommandGameSession_Stop:
		feCommandServerStop(&feFrontEndInstance()->m_commandServer);
		g_current_machine->schedule_exit();
		break;

	case FECommandUnknown:
		break;
	}

	return FE_RESULT_OK;
}

char szPlayerConfigTest[] = "\
							{																\
							\"DeviceGuid\" : \"0000-0000-0000-00000000\",				\
							\"Bindings\" : 												\
							[															\
							{													\
							\"EmuButton\" : \"IPT_BUTTON1\",				\
							\"PadButton\" : 0,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_BUTTON2\",				\
							\"PadButton\" : 1,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_BUTTON3\",				\
							\"PadButton\" : 2,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_BUTTON4\",				\
							\"PadButton\" : 3,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_BUTTON5\",				\
							\"PadButton\" : 4,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_BUTTON6\",				\
							\"PadButton\" : 5,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_COIN1\",					\
							\"PadButton\" : 6,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_START1\",					\
							\"PadButton\" : 7,								\
							\"PovButton\" : -1								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICK_UP\",			\
							\"PadButton\" : -1,								\
							\"PovButton\" : 8								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICK_DOWN\",			\
							\"PadButton\" : -1,								\
							\"PovButton\" : 2								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICK_LEFT\",			\
							\"PadButton\" : -1,								\
							\"PovButton\" : 4								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICK_RIGHT\",			\
							\"PadButton\" : -1,								\
							\"PovButton\" : 6								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICKLEFT_UP\",		\
							\"PadButton\" : -1,								\
							\"PovButton\" : 8								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICKLEFT_DOWN\",		\
							\"PadButton\" : -1,								\
							\"PovButton\" : 2								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICKLEFT_LEFT\",		\
							\"PadButton\" : -1,								\
							\"PovButton\" : 4								\
							},													\
							{													\
							\"EmuButton\" : \"IPT_JOYSTICKLEFT_RIGHT\",		\
							\"PadButton\" : -1,								\
							\"PovButton\" : 6								\
							}													\
							]														\
							}																\
							";