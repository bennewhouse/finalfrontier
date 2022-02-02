static const u8 sHPStatName[] = _("HP");
static const u8 sAtkStatName[] = _("Attack");
static const u8 sDefStatName[] = _("Defense");
static const u8 sSPAtkStatName[] = _("Special Attack");
static const u8 sSPDefStatName[] = _("Special Defense");
static const u8 sSpeedStatName[] = _("Speed");


const u8 *const gStatNamePointers[] =
{
    [MON_DATA_HP_IV] = sHPStatName,
    [MON_DATA_ATK_IV] = sAtkStatName,
    [MON_DATA_DEF_IV] = sDefStatName,
    [MON_DATA_SPATK_IV] = sSPAtkStatName,
    [MON_DATA_SPDEF_IV] = sSPDefStatName,
    [MON_DATA_SPEED_IV] = sSpeedStatName,
};
