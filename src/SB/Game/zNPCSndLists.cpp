#include "zNPCSndLists.h"

NPCSndProp g_sndProps[17] = {
    { NPC_STYP_ENCOUNTER, 0x400, 1.0f },   { NPC_STYP_LAUGH, 0xC00, 7.0f },
    { NPC_STYP_ALERT, 0x400, 0.0f },       { NPC_STYP_CLANKING, 0x400, 0.75f },
    { NPC_STYP_RESPAWN, 0x200, 0.75f },    { NPC_STYP_WARNBANG, 0x200, 0.1f },
    { NPC_STYP_OUCH, 0x200, 0.1f },        { NPC_STYP_DIZZY, 0x200, 0.1f },
    { NPC_STYP_EXCLAIM, 0x200, 0.5f },     { NPC_STYP_CHEERING, 0xA00, 0.25f },
    { NPC_STYP_LIGHTNING, 0xA00, 0.1f },   { NPC_STYP_DANCE, 0x400, 0.2f },
    { NPC_STYP_DEATH, 0x2200, 1.0f },      { NPC_STYP_DEATHJELLY, 0x2C00, 1.0f },
    { NPC_STYP_TIKIEXPLODE, 0x400, 0.1f }, { NPC_STYP_TIKITHUNDER, 0x1A00, 0.1f },
    { NPC_STYP_LISTEND, 0x200, -1.0f },
}; // size: 0xCC, address: 0x4DFCA0
NPCSndTrax g_sndTrax_Universal[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF988
NPCSndTrax g_sndTrax_General[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF998
NPCSndTrax g_sndTrax_Villager[27] = {
    { NPC_STYP_EXCLAIM, "bad_notes_accguitar1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_accguitar2", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_banjo1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_banjo2", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_banjo3", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_bassone1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_bassone2", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_bassone3", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_piano1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_piano2", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_piano3", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_piano4", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_trumpet1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_trumpet2", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_trumpet3", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_ukeleli", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_violin1", 0 },
    { NPC_STYP_EXCLAIM, "bad_notes_violin2", 0 },
    { NPC_STYP_EXCLAIM, "cover", 0 },
    { NPC_STYP_EXCLAIM, "drum", 0 },
    { NPC_STYP_EXCLAIM, "Check", 0 },
    { NPC_STYP_EXCLAIM, "xylo_1", 0 },
    { NPC_STYP_EXCLAIM, "xylo_2", 0 },
    { NPC_STYP_EXCLAIM, "xylo_3", 0 },
    { NPC_STYP_EXCLAIM, "xylo_4", 0 },
    { NPC_STYP_EXCLAIM, "xylo_5", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x144, address: 0x4DFD70
NPCSndTrax g_sndTrax_Squidward[6] = {
    { NPC_STYP_EXCLAIM, "clarinet_1", 0 }, { NPC_STYP_EXCLAIM, "clarinet_2", 0 },
    { NPC_STYP_EXCLAIM, "clarinet_3", 0 }, { NPC_STYP_EXCLAIM, "clarinet_4", 0 },
    { NPC_STYP_EXCLAIM, "clarinet_5", 0 }, { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x48, address: 0x4DFEC0
NPCSndTrax g_sndTrax_VillagerCoStar[16] = {
    { NPC_STYP_EXCLAIM, "Bounce", 0 },       { NPC_STYP_EXCLAIM, "Bowl_hitplate", 0 },
    { NPC_STYP_EXCLAIM, "Bump_beep1", 0 },   { NPC_STYP_EXCLAIM, "Bump_hit1", 0 },
    { NPC_STYP_EXCLAIM, "Bump_hit2", 0 },    { NPC_STYP_EXCLAIM, "Bus_dooropen", 0 },
    { NPC_STYP_EXCLAIM, "CarAlarm", 0 },     { NPC_STYP_EXCLAIM, "Check1", 0 },
    { NPC_STYP_EXCLAIM, "Gate_hit2", 0 },    { NPC_STYP_EXCLAIM, "Metal_tube_hit", 0 },
    { NPC_STYP_EXCLAIM, "NPC_GL_jump", 0 },  { NPC_STYP_EXCLAIM, "Pop_in", 0 },
    { NPC_STYP_EXCLAIM, "Pop_out", 0 },      { NPC_STYP_EXCLAIM, "Sailflap", 0 },
    { NPC_STYP_EXCLAIM, "SlapLeaf_hit", 0 }, { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC0, address: 0x4DFF10
NPCSndTrax g_sndTrax_VillagerMale[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9A8
NPCSndTrax g_sndTrax_VillagerFemale[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9B8
NPCSndTrax g_sndTrax_VillagerElder[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9C8
NPCSndTrax g_sndTrax_VillagerEldess[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9D8
NPCSndTrax g_sndTrax_VillagerBoy[2] = {
    { NPC_STYP_CHEERING, "laugh", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x18, address: 0x4DFFD0
NPCSndTrax g_sndTrax_VillagerGirl[2] = {
    { NPC_STYP_CHEERING, "laugh", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x18, address: 0x4DFFF0
NPCSndTrax g_sndTrax_Neptune[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9E8
NPCSndTrax g_sndTrax_Jelly[4] = {
    { NPC_STYP_OUCH, "mnu4_exit", 0 },
    { NPC_STYP_DEATHJELLY, "mnu4_Pop_in", 0 },
    { NPC_STYP_ENCOUNTER, "Jellyfish_charge", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x30, address: 0x4E0010
NPCSndTrax g_sndTrax_TikiShared[3] = {
    { NPC_STYP_TIKISTACK, "Tiki_St_land2", 0 },
    { NPC_STYP_TIKIEXPLODE, "Tiki_Wd_dest", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E0040
NPCSndTrax g_sndTrax_TikiThunder[2] = {
    { NPC_STYP_TIKITHUNDER, "Tiki_Th_Light", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x18, address: 0x4E0070
NPCSndTrax g_sndTrax_Duplotron[3] = {
    { NPC_STYP_WARNBANG, "Dupli_full", 0 },
    { NPC_STYP_CLANKING, "Dupli_idle", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E0090
NPCSndTrax g_sndTrax_Robot[2] = {
    { NPC_STYP_LAUGH, "RSB_laugh_8", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x18, address: 0x4E00C0
NPCSndTrax g_sndTrax_Fodder[3] = {
    { NPC_STYP_OUCH, "Fod_hit", 0 },
    { NPC_STYP_ALERT, "Fod_alert", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E00E0
NPCSndTrax g_sndTrax_FodBomb[6] = {
    { NPC_STYP_DEATH, "Fod_destroy", 0 },   { NPC_STYP_ALERT, "Fod3_alert", 0 },
    { NPC_STYP_WARNBANG, "Fod3_alert", 0 }, { NPC_STYP_ATTACK, "Fod3_attack", 0 },
    { NPC_STYP_OUCH, "Fod_hit", 0 },        { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x48, address: 0x4E0110
NPCSndTrax g_sndTrax_FodBzzt[3] = {
    { NPC_STYP_OUCH, "Fod_hit", 0 },
    { NPC_STYP_ALERT, "Fod2_alert", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E0160
NPCSndTrax g_sndTrax_Chomper[4] = {
    { NPC_STYP_OUCH, "Fod_hit", 0 },
    { NPC_STYP_ALERT, "Fod4_alert1", 0 },
    { NPC_STYP_ATTACK, "Fod4_attack", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x30, address: 0x4E0190
NPCSndTrax g_sndTrax_Hammer[3] = {
    { NPC_STYP_ALERT, "Ham_alert", 0 },
    { NPC_STYP_OUCH, "Ham_hit1", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E01C0
NPCSndTrax g_sndTrax_TarTar[4] = {
    { NPC_STYP_ALERT, "Tar_alert", 0 },
    { NPC_STYP_OUCH, "Tar_damage", 0 },
    { NPC_STYP_DIZZY, "Tar_damage", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x30, address: 0x4E01F0
NPCSndTrax g_sndTrax_Glove[2] = {
    { NPC_STYP_ALERT, "Glove_alert", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x18, address: 0x4E0220
NPCSndTrax g_sndTrax_Monsoon[3] = {
    { NPC_STYP_ALERT, "Mon_alert", 0 },
    { NPC_STYP_LIGHTNING, "Mon_Light", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E0240
NPCSndTrax g_sndTrax_Sleepy[3] = {
    { NPC_STYP_ATTACK, "ST_attack", 0 },
    { NPC_STYP_OUCH, "ST_hit", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E0270
NPCSndTrax g_sndTrax_Chuck[5] = {
    { NPC_STYP_ALERT, "Chu_alert", 0 },  { NPC_STYP_WEPLAUNCH, "Chu_cock", 0 },
    { NPC_STYP_ATTACK, "Chu_throw", 0 }, { NPC_STYP_OUCH, "Fod_hit", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x3C, address: 0x4E02A0
NPCSndTrax g_sndTrax_ArfArf[3] = {
    { NPC_STYP_DIZZY, "Arf_death2", 0 },
    { NPC_STYP_PUNCH, "Arf_attack2", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x24, address: 0x4E02E0
NPCSndTrax g_sndTrax_ArfDog[4] = {
    { NPC_STYP_OUCH, "ArfD_stunned", 0 },
    { NPC_STYP_WARNBANG, "Fod3_attack", 0 },
    { NPC_STYP_DEATH, "Fod_hit", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x30, address: 0x4E0310
NPCSndTrax g_sndTrax_Tubelet[5] = {
    { NPC_STYP_ALERT, "Tube_alert", 0 }, { NPC_STYP_UNBONKED, "Tube_spawn", 0 },
    { NPC_STYP_BONKED, "Tube_pop", 0 },  { NPC_STYP_WARNBANG, "Tube_pop", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x3C, address: 0x4E0340
NPCSndTrax g_sndTrax_Slick[5] = {
    { NPC_STYP_ALERT, "Slk_alert1", 0 }, { NPC_STYP_DIZZY, "Slk_hit1", 0 },
    { NPC_STYP_OUCH, "Slk_hit2", 0 },    { NPC_STYP_ATTACK, "Slk_attack1", 0 },
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0x3C, address: 0x4E0380
//NPCSndTrax g_sndTrax_Prawn[1] = { {} }; // size: 0xC, address: 0x0
NPCSndTrax g_sndTrax_KingJelly[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CF9F8
NPCSndTrax g_sndTrax_Dutchman[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CFA08
NPCSndTrax g_sndTrax_BossSandy[1] = {
    { NPC_STYP_LISTEND, NULL, 0 },
}; // size: 0xC, address: 0x5CFA18
//NPCSndTrax g_sndTrax_BossPat[1] = { {} }; // size: 0xC, address: 0x0
//NPCSndTrax g_sndTrax_BossSB[1] = { {} }; // size: 0xC, address: 0x0
