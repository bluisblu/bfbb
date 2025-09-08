#ifndef ZNPCSNDTABLE_H
#define ZNPCSNDTABLE_H

#include <types.h>

enum en_NPC_SOUND
{
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER,
    NPC_STYP_CLANKING,
    NPC_STYP_EXCLAIM,
    NPC_STYP_OUCH,
    NPC_STYP_CHEERING,
    NPC_STYP_RESPAWN,
    NPC_STYP_ALERT,
    NPC_STYP_DIZZY,
    NPC_STYP_DANCE,
    NPC_STYP_LAUGH,
    NPC_STYP_ATTACK,
    NPC_STYP_PUNCH,
    NPC_STYP_WEPLAUNCH,
    NPC_STYP_LIGHTNING,
    NPC_STYP_WARNBANG,
    NPC_STYP_DEATH,
    NPC_STYP_DEATHJELLY,
    NPC_STYP_BONKED,
    NPC_STYP_UNBONKED,
    NPC_STYP_TIKISTACK,
    NPC_STYP_TIKIEXPLODE,
    NPC_STYP_TIKITHUNDER,
    NPC_STYP_XSFXTALK,
    NPC_STYP_ONELINER,
    NPC_STYP_ONELINERTOO,
    NPC_STYP_NOMORE,
    NPC_STYP_FORCE = 0x7fffffff
};

class NPCSndProp // total size: 0xC
{
public:
    en_NPC_SOUND sndtype; // offset 0x0, size 0x4
    S32 flg_snd; // offset 0x4, size 0x4
    F32 tym_delayNext; // offset 0x8, size 0x4
};

struct NPCSndTrax
{
    en_NPC_SOUND typ_sound;
    const char* nam_sound;
    U32 aid_sound;
};

#endif
