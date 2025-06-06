#pragma once

#include <extensions/WEnum.hpp>

// TODO: Make this an enum class
enum eSoundBank : int16 {
    SND_BANK_UNK                               = -1,

    SND_BANK_FIRST                             = 0,

    /* Feet */
    SND_BANK_FEET_GENERIC = SND_BANK_FIRST, // 0x0
    SND_BANK_FEET_GRASS   = 1,              // 0x1
    SND_BANK_FEET_GRAVEL  = 2,              // 0x2
    SND_BANK_FEET_METAL   = 3,              // 0x3
    SND_BANK_FEET_SAND    = 4,              // 0x4
    SND_BANK_FEET_TILE    = 5,              // 0x5
    SND_BANK_FEET_WOOD    = 6,              // 0x6

    /* Vehicles and stuff */
    SND_BANK_GENRL_90S_D                       = 7,  // 0x7
    SND_BANK_GENRL_90S_P                       = 8,  // 0x8
    SND_BANK_GENRL_AIPROP                      = 9,  // 0x9
    SND_BANK_GENRL_AIRPORT_D                   = 10, // 0xA
    SND_BANK_GENRL_AIRPORT_P                   = 11, // 0xB
    SND_BANK_GENRL_APACHE                      = 12, // 0xC
    SND_BANK_GENRL_APACHE_D                    = 13, // 0xD
    SND_BANK_GENRL_ATV_D                       = 14, // 0xE
    SND_BANK_GENRL_ATV_P                       = 15, // 0xF
    SND_BANK_GENRL_BELAIR_D                    = 16, // 0x10
    SND_BANK_GENRL_BELAIR_P                    = 17, // 0x11
    SND_BANK_GENRL_BICYCLE_D                   = 18, // 0x12
    SND_BANK_GENRL_BICYCLE_P                   = 19, // 0x13
    SND_BANK_GENRL_BOAT_CRUISER_D              = 20, // 0x14
    SND_BANK_GENRL_BOAT_INBOARD_D              = 21, // 0x15
    SND_BANK_GENRL_BOAT_INBOARD_P              = 22, // 0x16
    SND_BANK_GENRL_BOAT_SPEEDBOAT_D            = 23, // 0x17
    SND_BANK_GENRL_BOAT_V12_D                  = 24, // 0x18
    SND_BANK_GENRL_BUICK_D                     = 25, // 0x19
    SND_BANK_GENRL_BUICK_P                     = 26, // 0x1A
    SND_BANK_GENRL_BULLET_HITS                 = 27, // 0x1B

    SND_BANK_GENRL_BULLET_PASS_FIRST           = 28,
    SND_BANK_GENRL_BULLET_PASS_1               = SND_BANK_GENRL_BULLET_PASS_FIRST,  // 0x1C
    SND_BANK_GENRL_BULLET_PASS_2               = 29, // 0x1D
    SND_BANK_GENRL_BULLET_PASS_3               = 30, // 0x1E
    SND_BANK_GENRL_BULLET_PASS_4               = 31, // 0x1F
    SND_BANK_GENRL_BULLET_PASS_LAST            = SND_BANK_GENRL_BULLET_PASS_4,

    SND_BANK_GENRL_BUS_D                       = 32, // 0x20
    SND_BANK_GENRL_BUS_P                       = 33, // 0x21
    SND_BANK_GENRL_CADILLAC_D                  = 34, // 0x22
    SND_BANK_GENRL_CADILLAC_P                  = 35, // 0x23
    SND_BANK_GENRL_CHAINSAW_P                  = 36, // 0x24
    SND_BANK_GENRL_COBRA_D                     = 37, // 0x25
    SND_BANK_GENRL_COBRA_P                     = 38, // 0x26
    SND_BANK_GENRL_COLLISIONS                  = 39, // 0x27
    SND_BANK_GENRL_COPBIKE_D                   = 40, // 0x28
    SND_BANK_GENRL_COPBIKE_P                   = 41, // 0x29
    SND_BANK_GENRL_COUPE_D                     = 42, // 0x2A
    SND_BANK_GENRL_COUPE_P                     = 43, // 0x2B
    SND_BANK_GENRL_CRANE_P                     = 44, // 0x2C
    SND_BANK_GENRL_CUTLASS_D                   = 45, // 0x2D
    SND_BANK_GENRL_CUTLASS_P                   = 46, // 0x2E
    SND_BANK_GENRL_DIRTBIKE_D                  = 47, // 0x2F
    SND_BANK_GENRL_DIRTBIKE_P                  = 48, // 0x30
    SND_BANK_GENRL_DODGE_D                     = 49, // 0x31
    SND_BANK_GENRL_DODGE_P                     = 50, // 0x32
    SND_BANK_GENRL_DOORS                       = 51, // 0x33
    SND_BANK_GENRL_EXPLOSIONS                  = 52, // 0x34
    SND_BANK_GENRL_FASTPROP                    = 53, // 0x35
    SND_BANK_GENRL_FASTPROP_D                  = 54, // 0x36
    SND_BANK_GENRL_FORD_T_D                    = 55, // 0x37
    SND_BANK_GENRL_FORD_T_P                    = 56, // 0x38
    SND_BANK_GENRL_FORKLIFT_D                  = 57, // 0x39
    SND_BANK_GENRL_FORKLIFT_P                  = 58, // 0x3A
    SND_BANK_GENRL_FRONTEND_GAME               = 59, // 0x3B
    SND_BANK_GENRL_FRONTEND_MENU               = 60, // 0x3C
    SND_BANK_GENRL_GOKART_D                    = 61, // 0x3D
    SND_BANK_GENRL_GOKART_P                    = 62, // 0x3E
    SND_BANK_GENRL_GOLF_D                      = 63, // 0x3F
    SND_BANK_GENRL_GOLF_P                      = 64, // 0x40
    SND_BANK_GENRL_GOLFCART_P                  = 65, // 0x41
    SND_BANK_GENRL_HAIRCUT_V1                  = 66, // 0x42
    SND_BANK_GENRL_HAIRCUT_V2                  = 67, // 0x43
    SND_BANK_GENRL_HARVESTER_D                 = 68, // 0x44
    SND_BANK_GENRL_HARVESTER_P                 = 69, // 0x45
    SND_BANK_GENRL_HEAVY_V8_D                  = 70, // 0x46
    SND_BANK_GENRL_HEAVY_V8_P                  = 71, // 0x47
    SND_BANK_GENRL_HONDA_D                     = 72, // 0x48
    SND_BANK_GENRL_HONDA_P                     = 73, // 0x49
    SND_BANK_GENRL_HORN                        = 74, // 0x4A
    SND_BANK_GENRL_HOTROD_D                    = 75, // 0x4B
    SND_BANK_GENRL_HOTROD_P                    = 76, // 0x4C
    SND_BANK_GENRL_HOVERCRAFT_D                = 77, // 0x4D
    SND_BANK_GENRL_HOVERCRAFT_P                = 78, // 0x4E
    SND_BANK_GENRL_ICEVAN_P                    = 79, // 0x4F
    SND_BANK_GENRL_JALOPY_D                    = 80, // 0x50
    SND_BANK_GENRL_JALOPY_P                    = 81, // 0x51
    SND_BANK_GENRL_LOADING                     = 82, // 0x52
    SND_BANK_GENRL_MACKTRUCK_D                 = 83, // 0x53
    SND_BANK_GENRL_MACKTRUCK_P                 = 84, // 0x54
    SND_BANK_GENRL_MAVERICK                    = 85, // 0x55
    SND_BANK_GENRL_MERC_D                      = 86, // 0x56
    SND_BANK_GENRL_MERC_P                      = 87, // 0x57
    SND_BANK_GENRL_MODEL_T_D                   = 88, // 0x58
    SND_BANK_GENRL_MODEL_T_P                   = 89, // 0x59
    SND_BANK_GENRL_MONSTER_D                   = 90, // 0x5A
    SND_BANK_GENRL_MONSTER_P                   = 91, // 0x5B
    SND_BANK_GENRL_MUSTANG_D                   = 92, // 0x5C
    SND_BANK_GENRL_MUSTANG_P                   = 93, // 0x5D
    SND_BANK_GENRL_PACARD_D                    = 94, // 0x5E
    SND_BANK_GENRL_PACARD_P                    = 95, // 0x5F
    SND_BANK_GENRL_PADDY_D                     = 96, // 0x60
    SND_BANK_GENRL_PADDY_P                     = 97, // 0x61
    SND_BANK_GENRL_PATHFINDER_D                = 98, // 0x62
    SND_BANK_GENRL_PATHFINDER_P                = 99, // 0x63
    SND_BANK_GENRL_PONTIAC_D                   = 100, // 0x64
    SND_BANK_GENRL_PONTIAC_P                   = 101, // 0x65
    SND_BANK_GENRL_PORSCHE_D                   = 102, // 0x66
    SND_BANK_GENRL_PORSCHE_P                   = 103, // 0x67
    SND_BANK_GENRL_R22                         = 104, // 0x68
    SND_BANK_GENRL_RAIN                        = 105, // 0x69
    SND_BANK_GENRL_RC_CAR_D                    = 106, // 0x6A
    SND_BANK_GENRL_RC_CAR_P                    = 107, // 0x6B
    SND_BANK_GENRL_RC_HELI_D                   = 108, // 0x6C
    SND_BANK_GENRL_RC_HELI_P                   = 109, // 0x6D
    SND_BANK_GENRL_RC_PLANE_D                  = 110, // 0x6E
    SND_BANK_GENRL_RC_PLANE_P                  = 111, // 0x6F
    SND_BANK_GENRL_RC_TANK_D                   = 112, // 0x70
    SND_BANK_GENRL_RC_TANK_P                   = 113, // 0x71
    SND_BANK_GENRL_RS427_D                     = 114, // 0x72
    SND_BANK_GENRL_RS427_P                     = 115, // 0x73
    SND_BANK_GENRL_SALOON_D                    = 116, // 0x74
    SND_BANK_GENRL_SALOON_P                    = 117, // 0x75
    SND_BANK_GENRL_SCOOTER_D                   = 118, // 0x76
    SND_BANK_GENRL_SCOOTER_P                   = 119, // 0x77
    SND_BANK_GENRL_SINGLEPROP                  = 120, // 0x78
    SND_BANK_GENRL_SKATEBOARD_P                = 121, // 0x79
    SND_BANK_GENRL_SPORT_D                     = 122, // 0x7A
    SND_BANK_GENRL_SPORT_P                     = 123, // 0x7B
    SND_BANK_GENRL_SPORTSBIKE_D                = 124, // 0x7C
    SND_BANK_GENRL_SPORTSBIKE_P                = 125, // 0x7D
    SND_BANK_GENRL_SWEEPER_D                   = 126, // 0x7E
    SND_BANK_GENRL_SWEEPER_P                   = 127, // 0x7F
    SND_BANK_GENRL_SWIMMING                    = 128, // 0x80
    SND_BANK_GENRL_TEMP_D                      = 129, // 0x81
    SND_BANK_GENRL_TEMP_P                      = 130, // 0x82
    SND_BANK_GENRL_TRAIN_D                     = 131, // 0x83
    SND_BANK_GENRL_TRAIN_P                     = 132, // 0x84
    SND_BANK_GENRL_TRAM_D                      = 133, // 0x85
    SND_BANK_GENRL_TWINPROP                    = 134, // 0x86
    SND_BANK_GENRL_TWINPROP_D                  = 135, // 0x87
    SND_BANK_GENRL_VAN_D                       = 136, // 0x88
    SND_BANK_GENRL_VAN_P                       = 137, // 0x89
    SND_BANK_GENRL_VEHICLE_GEN                 = 138, // 0x8A
    SND_BANK_GENRL_VTWINBIKE_D                 = 139, // 0x8B
    SND_BANK_GENRL_VTWINBIKE_P                 = 140, // 0x8C
    SND_BANK_GENRL_VW_VAN_D                    = 141, // 0x8D
    SND_BANK_GENRL_VW_VAN_P                    = 142, // 0x8E
    SND_BANK_GENRL_WEAPONS                     = 143, // 0x8F
    SND_BANK_PAIN_A_CARL                       = 144, // 0x90
    SND_BANK_PAIN_A_FEMALE                     = 145, // 0x91
    SND_BANK_PAIN_A_MALE                       = 146, // 0x92

    /* Script */
    SND_BANK_SCRIPT_FIRST                      = 147, // NOTSA
    SND_BANK_SCRIPT_SCANNER_AREAS              = SND_BANK_SCRIPT_FIRST, // 0x93
    SND_BANK_SCRIPT_SCANNER_COLOURS            = 148, // 0x94
    SND_BANK_SCRIPT_SCANNER_DIRECTIONS         = 149, // 0x95
    SND_BANK_SCRIPT_SCANNER_INSTRUCTIONS       = 150, // 0x96
    SND_BANK_SCRIPT_SCANNER_NUMBERS            = 151, // 0x97
    SND_BANK_SCRIPT_SCANNER_VEHICLES           = 152, // 0x98
    SND_BANK_SCRIPT_AIR_HORN                   = 153, // 0x99
    SND_BANK_SCRIPT_ARCHITECTURAL_ESPIONAGE    = 154, // 0x9A
    SND_BANK_SCRIPT_ARE_YOU_GOING_TO_SAN_FIERO = 155, // 0x9B
    SND_BANK_SCRIPT_BACK_TO_SCHOOL             = 156, // 0x9C
    SND_BANK_SCRIPT_BALLA                      = 157, // 0x9D
    SND_BANK_SCRIPT_BANDIT                     = 158, // 0x9E
    SND_BANK_SCRIPT_BARBERS                    = 159, // 0x9F
    SND_BANK_SCRIPT_BASKETBALL                 = 160, // 0xA0
    SND_BANK_SCRIPT_BBOX                       = 161, // 0xA1
    SND_BANK_SCRIPT_BCS5                       = 162, // 0xA2
    SND_BANK_SCRIPT_BEE                        = 163, // 0xA3
    SND_BANK_SCRIPT_BFYCRP_GAMBLING            = 164, // 0xA4
    SND_BANK_SCRIPT_BIKE_COURIER               = 165, // 0xA5
    SND_BANK_SCRIPT_BLACKJACK_DEALER           = 166, // 0xA6
    SND_BANK_SCRIPT_BLACK_PROJECT              = 167, // 0xA7
    SND_BANK_SCRIPT_BOAT_SCHOOL                = 168, // 0xA8
    SND_BANK_SCRIPT_BREAKING_THE_BANK          = 169, // 0xA9
    SND_BANK_SCRIPT_BURNING_DESIRE             = 170, // 0xAA
    SND_BANK_SCRIPT_CARGO_PLANE                = 171, // 0xAB
    SND_BANK_SCRIPT_CAS1                       = 172, // 0xAC
    SND_BANK_SCRIPT_CAS11                      = 173, // 0xAD
    SND_BANK_SCRIPT_CAS2                       = 174, // 0xAE
    SND_BANK_SCRIPT_CAS3                       = 175, // 0xAF
    SND_BANK_SCRIPT_CAS4                       = 176, // 0xB0
    SND_BANK_SCRIPT_CAS5                       = 177, // 0xB1
    SND_BANK_SCRIPT_CAS6                       = 178, // 0xB2
    SND_BANK_SCRIPT_CAS9                       = 179, // 0xB3
    SND_BANK_SCRIPT_CAT                        = 180, // 0xB4
    SND_BANK_SCRIPT_CAT1                       = 181, // 0xB5
    SND_BANK_SCRIPT_CAT2                       = 182, // 0xB6
    SND_BANK_SCRIPT_CAT2_BANK                  = 183, // 0xB7
    SND_BANK_SCRIPT_CAT3                       = 184, // 0xB8
    SND_BANK_SCRIPT_CAT4                       = 185, // 0xB9
    SND_BANK_SCRIPT_CATX                       = 186, // 0xBA
    SND_BANK_SCRIPT_CES1                       = 187, // 0xBB
    SND_BANK_SCRIPT_CES2                       = 188, // 0xBC
    SND_BANK_SCRIPT_CESX                       = 189, // 0xBD
    SND_BANK_SCRIPT_CRA1                       = 190, // 0xBE
    SND_BANK_SCRIPT_CRA2                       = 191, // 0xBF
    SND_BANK_SCRIPT_CRA3                       = 192, // 0xC0
    SND_BANK_SCRIPT_DAM_AND_BLAST              = 193, // 0xC1
    SND_BANK_SCRIPT_DANCE_HIGH                 = 194, // 0xC2
    SND_BANK_SCRIPT_DANCE_LOW                  = 195, // 0xC3
    SND_BANK_SCRIPT_DANCE_MED                  = 196, // 0xC4
    SND_BANK_SCRIPT_DANCE_NOT                  = 197, // 0xC5
    SND_BANK_SCRIPT_DA_NANG                    = 198, // 0xC6
    SND_BANK_SCRIPT_DC2                        = 199, // 0xC7
    SND_BANK_SCRIPT_DECONSTRUCTION             = 200, // 0xC8
    SND_BANK_SCRIPT_DES1                       = 201, // 0xC9
    SND_BANK_SCRIPT_DES2                       = 202, // 0xCA
    SND_BANK_SCRIPT_DES3                       = 203, // 0xCB
    SND_BANK_SCRIPT_DES6                       = 204, // 0xCC
    SND_BANK_SCRIPT_DES8                       = 205, // 0xCD
    SND_BANK_SCRIPT_DES9                       = 206, // 0xCE
    SND_BANK_SCRIPT_DOGG                       = 207, // 0xCF
    SND_BANK_SCRIPT_DON_PEYOTE                 = 208, // 0xD0
    SND_BANK_SCRIPT_DUALITY                    = 209, // 0xD1
    SND_BANK_SCRIPT_END_OF_THE_LINE            = 210, // 0xD2
    SND_BANK_SCRIPT_EXPLOSIVE_SITUATION        = 211, // 0xD3
    SND_BANK_SCRIPT_FAR2                       = 212, // 0xD4
    SND_BANK_SCRIPT_FAR3                       = 213, // 0xD5
    SND_BANK_SCRIPT_FAR4                       = 214, // 0xD6
    SND_BANK_SCRIPT_FAR5                       = 215, // 0xD7
    SND_BANK_SCRIPT_FIN1                       = 216, // 0xD8
    SND_BANK_SCRIPT_FIN2                       = 217, // 0xD9
    SND_BANK_SCRIPT_FREEFALL                   = 218, // 0xDA
    SND_BANK_SCRIPT_GAR1                       = 219, // 0xDB
    SND_BANK_SCRIPT_GAR2                       = 220, // 0xDC
    SND_BANK_SCRIPT_GATE                       = 221, // 0xDD
    SND_BANK_SCRIPT_GOGO                       = 222, // 0xDE
    SND_BANK_SCRIPT_GREY_IMPORTS               = 223, // 0xDF
    SND_BANK_SCRIPT_GRO1                       = 224, // 0xE0
    SND_BANK_SCRIPT_GRO2                       = 225, // 0xE1
    SND_BANK_SCRIPT_GYM                        = 226, // 0xE2
    SND_BANK_SCRIPT_HE1                        = 227, // 0xE3
    SND_BANK_SCRIPT_HE2                        = 228, // 0xE4
    SND_BANK_SCRIPT_HE3                        = 229, // 0xE5
    SND_BANK_SCRIPT_HE4                        = 230, // 0xE6
    SND_BANK_SCRIPT_HE5                        = 231, // 0xE7
    SND_BANK_SCRIPT_HE8                        = 232, // 0xE8
    SND_BANK_SCRIPT_HEI                        = 233, // 0xE9
    SND_BANK_SCRIPT_HIJACK                     = 234, // 0xEA
    SND_BANK_SCRIPT_HOME_INVASION              = 235, // 0xEB
    SND_BANK_SCRIPT_HOUSE_PARTY                = 236, // 0xEC
    SND_BANK_SCRIPT_INT1                       = 237, // 0xED
    SND_BANK_SCRIPT_INT2                       = 238, // 0xEE
    SND_BANK_SCRIPT_JIZX                       = 239, // 0xEF
    SND_BANK_SCRIPT_JIZZY                      = 240, // 0xF0
    SND_BANK_SCRIPT_KEYCARD_TO_HER_HEART       = 241, // 0xF1
    SND_BANK_SCRIPT_KEYPAD                     = 242, // 0xF2
    SND_BANK_SCRIPT_KUNG                       = 243, // 0xF3
    SND_BANK_SCRIPT_LIFE_BEACH_CONV            = 244, // 0xF4
    SND_BANK_SCRIPT_LOC1                       = 245, // 0xF5
    SND_BANK_SCRIPT_LOC2                       = 246, // 0xF6
    SND_BANK_SCRIPT_LOC3                       = 247, // 0xF7
    SND_BANK_SCRIPT_LOC4                       = 248, // 0xF8
    SND_BANK_SCRIPT_LOCX                       = 249, // 0xF9
    SND_BANK_SCRIPT_LOS_SEPULCROS              = 250, // 0xFA
    SND_BANK_SCRIPT_LOWR                       = 251, // 0xFB
    SND_BANK_SCRIPT_LURE                       = 252, // 0xFC
    SND_BANK_SCRIPT_MACX                       = 253, // 0xFD
    SND_BANK_SCRIPT_MADD_DOG                   = 254, // 0xFE
    SND_BANK_SCRIPT_MAD_DOGGS_RHYMES           = 255, // 0xFF
    SND_BANK_SCRIPT_MAN1                       = 256, // 0x100
    SND_BANK_SCRIPT_MAN2                       = 257, // 0x101
    SND_BANK_SCRIPT_MAN3                       = 258, // 0x102
    SND_BANK_SCRIPT_MAN5                       = 259, // 0x103
    SND_BANK_SCRIPT_MANAGEMENT_ISSUES          = 260, // 0x104
    SND_BANK_SCRIPT_MBARB                      = 261, // 0x105
    SND_BANK_SCRIPT_MCAT                       = 262, // 0x106
    SND_BANK_SCRIPT_MCES                       = 263, // 0x107
    SND_BANK_SCRIPT_MDEN                       = 264, // 0x108
    SND_BANK_SCRIPT_MEAT_BUSINESS              = 265, // 0x109
    SND_BANK_SCRIPT_MECHANIC                   = 266, // 0x10A
    SND_BANK_SCRIPT_MECHANIC_DIALOGUE          = 267, // 0x10B
    SND_BANK_SCRIPT_MHEL                       = 268, // 0x10C
    SND_BANK_SCRIPT_MHRZ                       = 269, // 0x10D
    SND_BANK_SCRIPT_MJET                       = 270, // 0x10E
    SND_BANK_SCRIPT_MJIZ                       = 271, // 0x10F
    SND_BANK_SCRIPT_MKND                       = 272, // 0x110
    SND_BANK_SCRIPT_MKP                        = 273, // 0x111
    SND_BANK_SCRIPT_MLOC                       = 274, // 0x112
    SND_BANK_SCRIPT_MMICH                      = 275, // 0x113
    SND_BANK_SCRIPT_MMILL                      = 276, // 0x114
    SND_BANK_SCRIPT_MOUNTAIN_CLOUD_BOY         = 277, // 0x115
    SND_BANK_SCRIPT_MPUL                       = 278, // 0x116
    SND_BANK_SCRIPT_MROS                       = 279, // 0x117
    SND_BANK_SCRIPT_MSAL                       = 280, // 0x118
    SND_BANK_SCRIPT_MSMK                       = 281, // 0x119
    SND_BANK_SCRIPT_MSWE                       = 282, // 0x11A
    SND_BANK_SCRIPT_MTEN                       = 283, // 0x11B
    SND_BANK_SCRIPT_MTG                        = 284, // 0x11C
    SND_BANK_SCRIPT_MTOR                       = 285, // 0x11D
    SND_BANK_SCRIPT_MTRU                       = 286, // 0x11E
    SND_BANK_SCRIPT_MWUZ                       = 287, // 0x11F
    SND_BANK_SCRIPT_MZAHN                      = 288, // 0x120
    SND_BANK_SCRIPT_MZER                       = 289, // 0x121
    SND_BANK_SCRIPT_NOE                        = 290, // 0x122
    SND_BANK_SCRIPT_NULL                       = 291, // 0x123
    SND_BANK_SCRIPT_OGLOC                      = 292, // 0x124
    SND_BANK_SCRIPT_OTB                        = 293, // 0x125
    SND_BANK_SCRIPT_PIMPING                    = 294, // 0x126
    SND_BANK_SCRIPT_POOL                       = 295, // 0x127
    SND_BANK_SCRIPT_POOL_MINIGAME              = 296, // 0x128
    SND_BANK_SCRIPT_PUNCTURE_WOUNDS            = 297, // 0x129
    SND_BANK_SCRIPT_RESTAURANT                 = 298, // 0x12A
    SND_BANK_SCRIPT_REUNITING_THE_FAMILIES     = 299, // 0x12B
    SND_BANK_SCRIPT_ROB_GAS_STATION            = 300, // 0x12C
    SND_BANK_SCRIPT_ROT1                       = 301, // 0x12D
    SND_BANK_SCRIPT_ROT2                       = 302, // 0x12E
    SND_BANK_SCRIPT_ROT4                       = 303, // 0x12F
    SND_BANK_SCRIPT_ROULETTE                   = 304, // 0x130
    SND_BANK_SCRIPT_RYD1                       = 305, // 0x131
    SND_BANK_SCRIPT_RYD2                       = 306, // 0x132
    SND_BANK_SCRIPT_RYD3                       = 307, // 0x133
    SND_BANK_SCRIPT_RYDX                       = 308, // 0x134
    SND_BANK_SCRIPT_SCR1                       = 309, // 0x135
    SND_BANK_SCRIPT_SHOOTING_RANGE             = 310, // 0x136
    SND_BANK_SCRIPT_SHRK                       = 311, // 0x137
    SND_BANK_SCRIPT_SMO1                       = 312, // 0x138
    SND_BANK_SCRIPT_SMO2                       = 313, // 0x139
    SND_BANK_SCRIPT_SMO3                       = 314, // 0x13A
    SND_BANK_SCRIPT_SMO4                       = 315, // 0x13B
    SND_BANK_SCRIPT_SMOX                       = 316, // 0x13C
    SND_BANK_SCRIPT_SOLO                       = 317, // 0x13D
    SND_BANK_SCRIPT_STADIUM_CHEERS             = 318, // 0x13E
    SND_BANK_SCRIPT_STINGER                    = 319, // 0x13F
    SND_BANK_SCRIPT_STL1                       = 320, // 0x140
    SND_BANK_SCRIPT_STL2                       = 321, // 0x141
    SND_BANK_SCRIPT_STL4                       = 322, // 0x142
    SND_BANK_SCRIPT_STL5                       = 323, // 0x143
    SND_BANK_SCRIPT_SWE1                       = 324, // 0x144
    SND_BANK_SCRIPT_SWE2                       = 325, // 0x145
    SND_BANK_SCRIPT_SWE3                       = 326, // 0x146
    SND_BANK_SCRIPT_SWE4                       = 327, // 0x147
    SND_BANK_SCRIPT_SWE5                       = 328, // 0x148
    SND_BANK_SCRIPT_SWE7                       = 329, // 0x149
    SND_BANK_SCRIPT_SWEX                       = 330, // 0x14A
    SND_BANK_SCRIPT_SYN1                       = 331, // 0x14B
    SND_BANK_SCRIPT_SYN2                       = 332, // 0x14C
    SND_BANK_SCRIPT_SYN3                       = 333, // 0x14D
    SND_BANK_SCRIPT_SYN4                       = 334, // 0x14E
    SND_BANK_SCRIPT_SYN5                       = 335, // 0x14F
    SND_BANK_SCRIPT_SYN7                       = 336, // 0x150
    SND_BANK_SCRIPT_TATTOO                     = 337, // 0x151
    SND_BANK_SCRIPT_TBOX                       = 338, // 0x152
    SND_BANK_SCRIPT_TEMPEST                    = 339, // 0x153
    SND_BANK_SCRIPT_THE_JAR_OF_GREEN_GOO       = 340, // 0x154
    SND_BANK_SCRIPT_TORX                       = 341, // 0x155
    SND_BANK_SCRIPT_TRU1                       = 342, // 0x156
    SND_BANK_SCRIPT_TRU2                       = 343, // 0x157
    SND_BANK_SCRIPT_TRUX                       = 344, // 0x158
    SND_BANK_SCRIPT_UNCLE_SAM                  = 345, // 0x159
    SND_BANK_SCRIPT_UP_UP_AND_AWAY             = 346, // 0x15A
    SND_BANK_SCRIPT_VALET                      = 347, // 0x15B
    SND_BANK_SCRIPT_VCR1                       = 348, // 0x15C
    SND_BANK_SCRIPT_VCR2                       = 349, // 0x15D
    SND_BANK_SCRIPT_VENDING                    = 350, // 0x15E
    SND_BANK_SCRIPT_VERTICAL_BIRD              = 351, // 0x15F
    SND_BANK_SCRIPT_VIDEO_POKER                = 352, // 0x160
    SND_BANK_SCRIPT_VO                         = 353, // 0x161
    SND_BANK_SCRIPT_WBOX                       = 354, // 0x162
    SND_BANK_SCRIPT_WFYCRP_GAMBLING            = 355, // 0x163
    SND_BANK_SCRIPT_WUZ1                       = 356, // 0x164
    SND_BANK_SCRIPT_WUZ2                       = 357, // 0x165
    SND_BANK_SCRIPT_WUZ4                       = 358, // 0x166
    SND_BANK_SCRIPT_WUZX                       = 359, // 0x167
    SND_BANK_SCRIPT_ZER1                       = 360, // 0x168
    SND_BANK_SCRIPT_ZER2                       = 361, // 0x169
    SND_BANK_SCRIPT_ZER3                       = 362, // 0x16A
    SND_BANK_SCRIPT_ZER4                       = 363, // 0x16B
    SND_BANK_SCRIPT_ZEROING_IN                 = 364, // 0x16C

    /* Ped speech */
    SND_BANK_SPC_EA_ARMY1                      = 365, // 0x16D
    SND_BANK_SPC_EA_ARMY2                      = 366, // 0x16E
    SND_BANK_SPC_EA_ARMY3                      = 367, // 0x16F
    SND_BANK_SPC_EA_EMT1                       = 368, // 0x170
    SND_BANK_SPC_EA_EMT2                       = 369, // 0x171
    SND_BANK_SPC_EA_EMT3                       = 370, // 0x172
    SND_BANK_SPC_EA_EMT4                       = 371, // 0x173
    SND_BANK_SPC_EA_EMT5                       = 372, // 0x174
    SND_BANK_SPC_EA_FBI2                       = 373, // 0x175
    SND_BANK_SPC_EA_FBI3                       = 374, // 0x176
    SND_BANK_SPC_EA_FBI4                       = 375, // 0x177
    SND_BANK_SPC_EA_FBI5                       = 376, // 0x178
    SND_BANK_SPC_EA_FBI6                       = 377, // 0x179
    SND_BANK_SPC_EA_LAPD1                      = 378, // 0x17A
    SND_BANK_SPC_EA_LAPD2                      = 379, // 0x17B
    SND_BANK_SPC_EA_LAPD3                      = 380, // 0x17C
    SND_BANK_SPC_EA_LAPD4                      = 381, // 0x17D
    SND_BANK_SPC_EA_LAPD5                      = 382, // 0x17E
    SND_BANK_SPC_EA_LAPD6                      = 383, // 0x17F
    SND_BANK_SPC_EA_LAPD7                      = 384, // 0x180
    SND_BANK_SPC_EA_LAPD8                      = 385, // 0x181
    SND_BANK_SPC_EA_LVPD1                      = 386, // 0x182
    SND_BANK_SPC_EA_LVPD2                      = 387, // 0x183
    SND_BANK_SPC_EA_LVPD3                      = 388, // 0x184
    SND_BANK_SPC_EA_LVPD4                      = 389, // 0x185
    SND_BANK_SPC_EA_LVPD5                      = 390, // 0x186
    SND_BANK_SPC_EA_MCOP1                      = 391, // 0x187
    SND_BANK_SPC_EA_MCOP2                      = 392, // 0x188
    SND_BANK_SPC_EA_MCOP3                      = 393, // 0x189
    SND_BANK_SPC_EA_MCOP4                      = 394, // 0x18A
    SND_BANK_SPC_EA_MCOP5                      = 395, // 0x18B
    SND_BANK_SPC_EA_MCOP6                      = 396, // 0x18C
    SND_BANK_SPC_EA_PULASKI                    = 397, // 0x18D
    SND_BANK_SPC_EA_RCOP1                      = 398, // 0x18E
    SND_BANK_SPC_EA_RCOP2                      = 399, // 0x18F
    SND_BANK_SPC_EA_RCOP3                      = 400, // 0x190
    SND_BANK_SPC_EA_RCOP4                      = 401, // 0x191
    SND_BANK_SPC_EA_SFPD1                      = 402, // 0x192
    SND_BANK_SPC_EA_SFPD2                      = 403, // 0x193
    SND_BANK_SPC_EA_SFPD3                      = 404, // 0x194
    SND_BANK_SPC_EA_SFPD4                      = 405, // 0x195
    SND_BANK_SPC_EA_SFPD5                      = 406, // 0x196
    SND_BANK_SPC_EA_SWAT1                      = 407, // 0x197
    SND_BANK_SPC_EA_SWAT2                      = 408, // 0x198
    SND_BANK_SPC_EA_SWAT4                      = 409, // 0x199
    SND_BANK_SPC_EA_SWAT6                      = 410, // 0x19A
    SND_BANK_SPC_FA_BARBARA                    = 411, // 0x19B
    SND_BANK_SPC_FA_BMOBAR                     = 412, // 0x19C
    SND_BANK_SPC_FA_BMYBARB                    = 413, // 0x19D
    SND_BANK_SPC_FA_BMYTATT                    = 414, // 0x19E
    SND_BANK_SPC_FA_CATALINA                   = 415, // 0x19F
    SND_BANK_SPC_FA_DENISE                     = 416, // 0x1A0
    SND_BANK_SPC_FA_HELENA                     = 417, // 0x1A1
    SND_BANK_SPC_FA_KATIE                      = 418, // 0x1A2
    SND_BANK_SPC_FA_MICHELLE                   = 419, // 0x1A3
    SND_BANK_SPC_FA_MILLIE                     = 420, // 0x1A4
    SND_BANK_SPC_FA_POL_ANN                    = 421, // 0x1A5
    SND_BANK_SPC_FA_WFYBURG                    = 422, // 0x1A6
    SND_BANK_SPC_FA_WFYCLOT                    = 423, // 0x1A7
    SND_BANK_SPC_FA_WMYAMMO                    = 424, // 0x1A8
    SND_BANK_SPC_FA_WMYBARB                    = 425, // 0x1A9
    SND_BANK_SPC_FA_WMYBELL                    = 426, // 0x1AA
    SND_BANK_SPC_FA_WMYCLOT                    = 427, // 0x1AB
    SND_BANK_SPC_FA_WMYPIZZ                    = 428, // 0x1AC
    SND_BANK_SPC_GA_BBDYG1                     = 429, // 0x1AD
    SND_BANK_SPC_GA_BBDYG2                     = 430, // 0x1AE
    SND_BANK_SPC_GA_BFORI                      = 431, // 0x1AF
    SND_BANK_SPC_GA_BFOST                      = 432, // 0x1B0
    SND_BANK_SPC_GA_BFYBE                      = 433, // 0x1B1
    SND_BANK_SPC_GA_BFYBU                      = 434, // 0x1B2
    SND_BANK_SPC_GA_BFYCRP                     = 435, // 0x1B3
    SND_BANK_SPC_GA_BFYPRO                     = 436, // 0x1B4
    SND_BANK_SPC_GA_BFYRI                      = 437, // 0x1B5
    SND_BANK_SPC_GA_BFYST                      = 438, // 0x1B6
    SND_BANK_SPC_GA_BIKDRUG                    = 439, // 0x1B7
    SND_BANK_SPC_GA_BIKERA                     = 440, // 0x1B8
    SND_BANK_SPC_GA_BIKERB                     = 441, // 0x1B9
    SND_BANK_SPC_GA_BMOCD                      = 442, // 0x1BA
    SND_BANK_SPC_GA_BMORI                      = 443, // 0x1BB
    SND_BANK_SPC_GA_BMOSEC                     = 444, // 0x1BC
    SND_BANK_SPC_GA_BMOST                      = 445, // 0x1BD
    SND_BANK_SPC_GA_BMOTR1                     = 446, // 0x1BE
    SND_BANK_SPC_GA_BMYAP                      = 447, // 0x1BF
    SND_BANK_SPC_GA_BMYBE                      = 448, // 0x1C0
    SND_BANK_SPC_GA_BMYBOUN                    = 449, // 0x1C1
    SND_BANK_SPC_GA_BMYBOX                     = 450, // 0x1C2
    SND_BANK_SPC_GA_BMYBU                      = 451, // 0x1C3
    SND_BANK_SPC_GA_BMYCG                      = 452, // 0x1C4
    SND_BANK_SPC_GA_BMYCON                     = 453, // 0x1C5
    SND_BANK_SPC_GA_BMYCR                      = 454, // 0x1C6
    SND_BANK_SPC_GA_BMYDJ                      = 455, // 0x1C7
    SND_BANK_SPC_GA_BMYDRUG                    = 456, // 0x1C8
    SND_BANK_SPC_GA_BMYMOUN                    = 457, // 0x1C9
    SND_BANK_SPC_GA_BMYPOL1                    = 458, // 0x1CA
    SND_BANK_SPC_GA_BMYPOL2                    = 459, // 0x1CB
    SND_BANK_SPC_GA_BMYRI                      = 460, // 0x1CC
    SND_BANK_SPC_GA_BMYST                      = 461, // 0x1CD
    SND_BANK_SPC_GA_BYMPI                      = 462, // 0x1CE
    SND_BANK_SPC_GA_CWFOFR                     = 463, // 0x1CF
    SND_BANK_SPC_GA_CWFOHB                     = 464, // 0x1D0
    SND_BANK_SPC_GA_CWFYFR1                    = 465, // 0x1D1
    SND_BANK_SPC_GA_CWFYFR2                    = 466, // 0x1D2
    SND_BANK_SPC_GA_CWFYHB1                    = 467, // 0x1D3
    SND_BANK_SPC_GA_CWMOFR1                    = 468, // 0x1D4
    SND_BANK_SPC_GA_CWMOHB1                    = 469, // 0x1D5
    SND_BANK_SPC_GA_CWMOHB2                    = 470, // 0x1D6
    SND_BANK_SPC_GA_CWMYFR                     = 471, // 0x1D7
    SND_BANK_SPC_GA_CWMYHB1                    = 472, // 0x1D8
    SND_BANK_SPC_GA_CWMYHB2                    = 473, // 0x1D9
    SND_BANK_SPC_GA_DNFOLC1                    = 474, // 0x1DA
    SND_BANK_SPC_GA_DNFOLC2                    = 475, // 0x1DB
    SND_BANK_SPC_GA_DNFYLC                     = 476, // 0x1DC
    SND_BANK_SPC_GA_DNMOLC1                    = 477, // 0x1DD
    SND_BANK_SPC_GA_DNMOLC2                    = 478, // 0x1DE
    SND_BANK_SPC_GA_DNMYLC                     = 479, // 0x1DF
    SND_BANK_SPC_GA_DWFOLC                     = 480, // 0x1E0
    SND_BANK_SPC_GA_DWFYLC1                    = 481, // 0x1E1
    SND_BANK_SPC_GA_DWFYLC2                    = 482, // 0x1E2
    SND_BANK_SPC_GA_DWMOLC1                    = 483, // 0x1E3
    SND_BANK_SPC_GA_DWMOLC2                    = 484, // 0x1E4
    SND_BANK_SPC_GA_DWMYLC1                    = 485, // 0x1E5
    SND_BANK_SPC_GA_DWMYLC2                    = 486, // 0x1E6
    SND_BANK_SPC_GA_HFORI                      = 487, // 0x1E7
    SND_BANK_SPC_GA_HFOST                      = 488, // 0x1E8
    SND_BANK_SPC_GA_HFYBE                      = 489, // 0x1E9
    SND_BANK_SPC_GA_HFYPRO                     = 490, // 0x1EA
    SND_BANK_SPC_GA_HFYRI                      = 491, // 0x1EB
    SND_BANK_SPC_GA_HFYST                      = 492, // 0x1EC
    SND_BANK_SPC_GA_HMORI                      = 493, // 0x1ED
    SND_BANK_SPC_GA_HMOST                      = 494, // 0x1EE
    SND_BANK_SPC_GA_HMYBE                      = 495, // 0x1EF
    SND_BANK_SPC_GA_HMYCM                      = 496, // 0x1F0
    SND_BANK_SPC_GA_HMYCR                      = 497, // 0x1F1
    SND_BANK_SPC_GA_HMYDRUG                    = 498, // 0x1F2
    SND_BANK_SPC_GA_HMYRI                      = 499, // 0x1F3
    SND_BANK_SPC_GA_HMYST                      = 500, // 0x1F4
    SND_BANK_SPC_GA_IMYST                      = 501, // 0x1F5
    SND_BANK_SPC_GA_IRFYST                     = 502, // 0x1F6
    SND_BANK_SPC_GA_IRMYST                     = 503, // 0x1F7
    SND_BANK_SPC_GA_MAFFA                      = 504, // 0x1F8
    SND_BANK_SPC_GA_MAFFB                      = 505, // 0x1F9
    SND_BANK_SPC_GA_MALE01                     = 506, // 0x1FA
    SND_BANK_SPC_GA_NOVOICE                    = 507, // 0x1FB
    SND_BANK_SPC_GA_OFORI                      = 508, // 0x1FC
    SND_BANK_SPC_GA_OFOST                      = 509, // 0x1FD
    SND_BANK_SPC_GA_OFYRI                      = 510, // 0x1FE
    SND_BANK_SPC_GA_OFYST                      = 511, // 0x1FF
    SND_BANK_SPC_GA_OMOBOAT                    = 512, // 0x200
    SND_BANK_SPC_GA_OMOKUNG                    = 513, // 0x201
    SND_BANK_SPC_GA_OMORI                      = 514, // 0x202
    SND_BANK_SPC_GA_OMOST                      = 515, // 0x203
    SND_BANK_SPC_GA_OMYRI                      = 516, // 0x204
    SND_BANK_SPC_GA_OMYST                      = 517, // 0x205
    SND_BANK_SPC_GA_SBFORI                     = 518, // 0x206
    SND_BANK_SPC_GA_SBFOST                     = 519, // 0x207
    SND_BANK_SPC_GA_SBFYPRO                    = 520, // 0x208
    SND_BANK_SPC_GA_SBFYRI                     = 521, // 0x209
    SND_BANK_SPC_GA_SBFYST                     = 522, // 0x20A
    SND_BANK_SPC_GA_SBFYSTR                    = 523, // 0x20B
    SND_BANK_SPC_GA_SBMOCD                     = 524, // 0x20C
    SND_BANK_SPC_GA_SBMORI                     = 525, // 0x20D
    SND_BANK_SPC_GA_SBMOST                     = 526, // 0x20E
    SND_BANK_SPC_GA_SBMOTR1                    = 527, // 0x20F
    SND_BANK_SPC_GA_SBMOTR2                    = 528, // 0x210
    SND_BANK_SPC_GA_SBMYCR                     = 529, // 0x211
    SND_BANK_SPC_GA_SBMYRI                     = 530, // 0x212
    SND_BANK_SPC_GA_SBMYST                     = 531, // 0x213
    SND_BANK_SPC_GA_SBMYTR3                    = 532, // 0x214
    SND_BANK_SPC_GA_SFYPRO                     = 533, // 0x215
    SND_BANK_SPC_GA_SHFYPRO                    = 534, // 0x216
    SND_BANK_SPC_GA_SHMYCR                     = 535, // 0x217
    SND_BANK_SPC_GA_SMYST                      = 536, // 0x218
    SND_BANK_SPC_GA_SMYST2                     = 537, // 0x219
    SND_BANK_SPC_GA_SOFORI                     = 538, // 0x21A
    SND_BANK_SPC_GA_SOFOST                     = 539, // 0x21B
    SND_BANK_SPC_GA_SOFYBU                     = 540, // 0x21C
    SND_BANK_SPC_GA_SOFYRI                     = 541, // 0x21D
    SND_BANK_SPC_GA_SOFYST                     = 542, // 0x21E
    SND_BANK_SPC_GA_SOMOBU                     = 543, // 0x21F
    SND_BANK_SPC_GA_SOMORI                     = 544, // 0x220
    SND_BANK_SPC_GA_SOMOST                     = 545, // 0x221
    SND_BANK_SPC_GA_SOMYAP                     = 546, // 0x222
    SND_BANK_SPC_GA_SOMYBU                     = 547, // 0x223
    SND_BANK_SPC_GA_SOMYRI                     = 548, // 0x224
    SND_BANK_SPC_GA_SOMYST                     = 549, // 0x225
    SND_BANK_SPC_GA_SWFOPRO                    = 550, // 0x226
    SND_BANK_SPC_GA_SWFORI                     = 551, // 0x227
    SND_BANK_SPC_GA_SWFOST                     = 552, // 0x228
    SND_BANK_SPC_GA_SWFYRI                     = 553, // 0x229
    SND_BANK_SPC_GA_SWFYST                     = 554, // 0x22A
    SND_BANK_SPC_GA_SWFYSTR                    = 555, // 0x22B
    SND_BANK_SPC_GA_SWMOCD                     = 556, // 0x22C
    SND_BANK_SPC_GA_SWMORI                     = 557, // 0x22D
    SND_BANK_SPC_GA_SWMOST                     = 558, // 0x22E
    SND_BANK_SPC_GA_SWMOTR1                    = 559, // 0x22F
    SND_BANK_SPC_GA_SWMOTR2                    = 560, // 0x230
    SND_BANK_SPC_GA_SWMOTR3                    = 561, // 0x231
    SND_BANK_SPC_GA_SWMOTR4                    = 562, // 0x232
    SND_BANK_SPC_GA_SWMOTR5                    = 563, // 0x233
    SND_BANK_SPC_GA_SWMYCR                     = 564, // 0x234
    SND_BANK_SPC_GA_SWMYHP1                    = 565, // 0x235
    SND_BANK_SPC_GA_SWMYHP2                    = 566, // 0x236
    SND_BANK_SPC_GA_SWMYRI                     = 567, // 0x237
    SND_BANK_SPC_GA_SWMYST                     = 568, // 0x238
    SND_BANK_SPC_GA_VBFYPRO                    = 569, // 0x239
    SND_BANK_SPC_GA_VBFYST2                    = 570, // 0x23A
    SND_BANK_SPC_GA_VBMOCD                     = 571, // 0x23B
    SND_BANK_SPC_GA_VBMYCR                     = 572, // 0x23C
    SND_BANK_SPC_GA_VBMYELV                    = 573, // 0x23D
    SND_BANK_SPC_GA_VHFYPRO                    = 574, // 0x23E
    SND_BANK_SPC_GA_VHFYST3                    = 575, // 0x23F
    SND_BANK_SPC_GA_VHMYCR                     = 576, // 0x240
    SND_BANK_SPC_GA_VHMYELV                    = 577, // 0x241
    SND_BANK_SPC_GA_VIMYELV                    = 578, // 0x242
    SND_BANK_SPC_GA_VWFYPRO                    = 579, // 0x243
    SND_BANK_SPC_GA_VWFYST1                    = 580, // 0x244
    SND_BANK_SPC_GA_VWFYWAI                    = 581, // 0x245
    SND_BANK_SPC_GA_VWMOTR1                    = 582, // 0x246
    SND_BANK_SPC_GA_VWMOTR2                    = 583, // 0x247
    SND_BANK_SPC_GA_VWMYAP                     = 584, // 0x248
    SND_BANK_SPC_GA_VWMYBJD                    = 585, // 0x249
    SND_BANK_SPC_GA_VWMYCD                     = 586, // 0x24A
    SND_BANK_SPC_GA_VWMYCR                     = 587, // 0x24B
    SND_BANK_SPC_GA_WFOPJ                      = 588, // 0x24C
    SND_BANK_SPC_GA_WFORI                      = 589, // 0x24D
    SND_BANK_SPC_GA_WFOST                      = 590, // 0x24E
    SND_BANK_SPC_GA_WFYBE                      = 591, // 0x24F
    SND_BANK_SPC_GA_WFYBU                      = 592, // 0x250
    SND_BANK_SPC_GA_WFYCRK                     = 593, // 0x251
    SND_BANK_SPC_GA_WFYCRP                     = 594, // 0x252
    SND_BANK_SPC_GA_WFYJG                      = 595, // 0x253
    SND_BANK_SPC_GA_WFYLG                      = 596, // 0x254
    SND_BANK_SPC_GA_WFYPRO                     = 597, // 0x255
    SND_BANK_SPC_GA_WFYRI                      = 598, // 0x256
    SND_BANK_SPC_GA_WFYRO                      = 599, // 0x257
    SND_BANK_SPC_GA_WFYST                      = 600, // 0x258
    SND_BANK_SPC_GA_WFYSTEW                    = 601, // 0x259
    SND_BANK_SPC_GA_WMOMIB                     = 602, // 0x25A
    SND_BANK_SPC_GA_WMOPJ                      = 603, // 0x25B
    SND_BANK_SPC_GA_WMOPREA                    = 604, // 0x25C
    SND_BANK_SPC_GA_WMORI                      = 605, // 0x25D
    SND_BANK_SPC_GA_WMOSCI                     = 606, // 0x25E
    SND_BANK_SPC_GA_WMOST                      = 607, // 0x25F
    SND_BANK_SPC_GA_WMOTR1                     = 608, // 0x260
    SND_BANK_SPC_GA_WMYBE                      = 609, // 0x261
    SND_BANK_SPC_GA_WMYBMX                     = 610, // 0x262
    SND_BANK_SPC_GA_WMYBOUN                    = 611, // 0x263
    SND_BANK_SPC_GA_WMYBOX                     = 612, // 0x264
    SND_BANK_SPC_GA_WMYBP                      = 613, // 0x265
    SND_BANK_SPC_GA_WMYBU                      = 614, // 0x266
    SND_BANK_SPC_GA_WMYCD1                     = 615, // 0x267
    SND_BANK_SPC_GA_WMYCD2                     = 616, // 0x268
    SND_BANK_SPC_GA_WMYCH                      = 617, // 0x269
    SND_BANK_SPC_GA_WMYCON                     = 618, // 0x26A
    SND_BANK_SPC_GA_WMYCONB                    = 619, // 0x26B
    SND_BANK_SPC_GA_WMYCR                      = 620, // 0x26C
    SND_BANK_SPC_GA_WMYDRUG                    = 621, // 0x26D
    SND_BANK_SPC_GA_WMYGAR                     = 622, // 0x26E
    SND_BANK_SPC_GA_WMYGOL1                    = 623, // 0x26F
    SND_BANK_SPC_GA_WMYGOL2                    = 624, // 0x270
    SND_BANK_SPC_GA_WMYJG                      = 625, // 0x271
    SND_BANK_SPC_GA_WMYLG                      = 626, // 0x272
    SND_BANK_SPC_GA_WMYMECH                    = 627, // 0x273
    SND_BANK_SPC_GA_WMYMOUN                    = 628, // 0x274
    SND_BANK_SPC_GA_WMYPLT                     = 629, // 0x275
    SND_BANK_SPC_GA_WMYRI                      = 630, // 0x276
    SND_BANK_SPC_GA_WMYRO                      = 631, // 0x277
    SND_BANK_SPC_GA_WMYSGRD                    = 632, // 0x278
    SND_BANK_SPC_GA_WMYSKAT                    = 633, // 0x279
    SND_BANK_SPC_GA_WMYST                      = 634, // 0x27A
    SND_BANK_SPC_GA_WMYTX1                     = 635, // 0x27B
    SND_BANK_SPC_GA_WMYTX2                     = 636, // 0x27C
    SND_BANK_SPC_GA_WMYVA                      = 637, // 0x27D
    SND_BANK_SPC_NA_BALLAS1                    = 638, // 0x27E
    SND_BANK_SPC_NA_BALLAS2                    = 639, // 0x27F
    SND_BANK_SPC_NA_BALLAS3                    = 640, // 0x280
    SND_BANK_SPC_NA_BALLAS4                    = 641, // 0x281
    SND_BANK_SPC_NA_BALLAS5                    = 642, // 0x282
    SND_BANK_SPC_NA_BIG_BEAR                   = 643, // 0x283
    SND_BANK_SPC_NA_CESAR                      = 644, // 0x284
    SND_BANK_SPC_NA_DNB1                       = 645, // 0x285
    SND_BANK_SPC_NA_DNB2                       = 646, // 0x286
    SND_BANK_SPC_NA_DNB3                       = 647, // 0x287
    SND_BANK_SPC_NA_DNB5                       = 648, // 0x288
    SND_BANK_SPC_NA_DWAINE                     = 649, // 0x289
    SND_BANK_SPC_NA_FAM1                       = 650, // 0x28A
    SND_BANK_SPC_NA_FAM2                       = 651, // 0x28B
    SND_BANK_SPC_NA_FAM3                       = 652, // 0x28C
    SND_BANK_SPC_NA_FAM4                       = 653, // 0x28D
    SND_BANK_SPC_NA_FAM5                       = 654, // 0x28E
    SND_BANK_SPC_NA_JIZZY                      = 655, // 0x28F
    SND_BANK_SPC_NA_LSV1                       = 656, // 0x290
    SND_BANK_SPC_NA_LSV2                       = 657, // 0x291
    SND_BANK_SPC_NA_LSV3                       = 658, // 0x292
    SND_BANK_SPC_NA_LSV4                       = 659, // 0x293
    SND_BANK_SPC_NA_LSV5                       = 660, // 0x294
    SND_BANK_SPC_NA_MACCER                     = 661, // 0x295
    SND_BANK_SPC_NA_MAFBOSS                    = 662, // 0x296
    SND_BANK_SPC_NA_OGLOC                      = 663, // 0x297
    SND_BANK_SPC_NA_RYDER                      = 664, // 0x298
    SND_BANK_SPC_NA_SFR1                       = 665, // 0x299
    SND_BANK_SPC_NA_SFR2                       = 666, // 0x29A
    SND_BANK_SPC_NA_SFR3                       = 667, // 0x29B
    SND_BANK_SPC_NA_SFR4                       = 668, // 0x29C
    SND_BANK_SPC_NA_SFR5                       = 669, // 0x29D
    SND_BANK_SPC_NA_SMOKE                      = 670, // 0x29E
    SND_BANK_SPC_NA_STRI1                      = 671, // 0x29F
    SND_BANK_SPC_NA_STRI2                      = 672, // 0x2A0
    SND_BANK_SPC_NA_STRI4                      = 673, // 0x2A1
    SND_BANK_SPC_NA_STRI5                      = 674, // 0x2A2
    SND_BANK_SPC_NA_SWEET                      = 675, // 0x2A3
    SND_BANK_SPC_NA_TBONE                      = 676, // 0x2A4
    SND_BANK_SPC_NA_TORENO                     = 677, // 0x2A5
    SND_BANK_SPC_NA_TRUTH                      = 678, // 0x2A6
    SND_BANK_SPC_NA_VLA1                       = 679, // 0x2A7
    SND_BANK_SPC_NA_VLA2                       = 680, // 0x2A8
    SND_BANK_SPC_NA_VLA3                       = 681, // 0x2A9
    SND_BANK_SPC_NA_VLA4                       = 682, // 0x2AA
    SND_BANK_SPC_NA_VLA5                       = 683, // 0x2AB
    SND_BANK_SPC_NA_VMAFF1                     = 684, // 0x2AC
    SND_BANK_SPC_NA_VMAFF2                     = 685, // 0x2AD
    SND_BANK_SPC_NA_VMAFF3                     = 686, // 0x2AE
    SND_BANK_SPC_NA_VMAFF4                     = 687, // 0x2AF
    SND_BANK_SPC_NA_VMAFF5                     = 688, // 0x2B0
    SND_BANK_SPC_NA_WOOZIE                     = 689, // 0x2B1
    SND_BANK_SPC_PA_AG                         = 690, // 0x2B2
    SND_BANK_SPC_PA_AG2                        = 691, // 0x2B3
    SND_BANK_SPC_PA_AR                         = 692, // 0x2B4
    SND_BANK_SPC_PA_AR2                        = 693, // 0x2B5
    SND_BANK_SPC_PA_CD                         = 694, // 0x2B6
    SND_BANK_SPC_PA_CD2                        = 695, // 0x2B7
    SND_BANK_SPC_PA_CF                         = 696, // 0x2B8
    SND_BANK_SPC_PA_CF2                        = 697, // 0x2B9
    SND_BANK_SPC_PA_CG                         = 698, // 0x2BA
    SND_BANK_SPC_PA_CG2                        = 699, // 0x2BB
    SND_BANK_SPC_PA_CR                         = 700, // 0x2BC
    SND_BANK_SPC_PA_CR2                        = 701, // 0x2BD
    SND_BANK_SPC_PA_PG                         = 702, // 0x2BE
    SND_BANK_SPC_PA_PG2                        = 703, // 0x2BF
    SND_BANK_SPC_PA_PR                         = 704, // 0x2C0
    SND_BANK_SPC_PA_PR2                        = 705, // 0x2C1
    SND_BANK_SPC_PA_WG                         = 706, // 0x2C2
    SND_BANK_SPC_PA_WG2                        = 707, // 0x2C3
    SND_BANK_SPC_PA_WR                         = 708, // 0x2C4
    SND_BANK_SPC_PA_WR2                        = 709, // 0x2C5

    NUM_SND_BANKS                              = 710, // 0x2C6
    SND_BANK_END                               = NUM_SND_BANKS
};
NOTSA_WENUM_DEFS_FOR(eSoundBank);


inline std::optional<const char*> EnumToString(eSoundBank v) {
#define ENUM_CASE(_e) \
    case _e: return #_e
    switch (v) {
    ENUM_CASE(SND_BANK_UNK);
    ENUM_CASE(SND_BANK_FEET_GENERIC);
    ENUM_CASE(SND_BANK_FEET_GRASS);
    ENUM_CASE(SND_BANK_FEET_GRAVEL);
    ENUM_CASE(SND_BANK_FEET_METAL);
    ENUM_CASE(SND_BANK_FEET_SAND);
    ENUM_CASE(SND_BANK_FEET_TILE);
    ENUM_CASE(SND_BANK_FEET_WOOD);
    ENUM_CASE(SND_BANK_GENRL_90S_D);
    ENUM_CASE(SND_BANK_GENRL_90S_P);
    ENUM_CASE(SND_BANK_GENRL_AIPROP);
    ENUM_CASE(SND_BANK_GENRL_AIRPORT_D);
    ENUM_CASE(SND_BANK_GENRL_AIRPORT_P);
    ENUM_CASE(SND_BANK_GENRL_APACHE);
    ENUM_CASE(SND_BANK_GENRL_APACHE_D);
    ENUM_CASE(SND_BANK_GENRL_ATV_D);
    ENUM_CASE(SND_BANK_GENRL_ATV_P);
    ENUM_CASE(SND_BANK_GENRL_BELAIR_D);
    ENUM_CASE(SND_BANK_GENRL_BELAIR_P);
    ENUM_CASE(SND_BANK_GENRL_BICYCLE_D);
    ENUM_CASE(SND_BANK_GENRL_BICYCLE_P);
    ENUM_CASE(SND_BANK_GENRL_BOAT_CRUISER_D);
    ENUM_CASE(SND_BANK_GENRL_BOAT_INBOARD_D);
    ENUM_CASE(SND_BANK_GENRL_BOAT_INBOARD_P);
    ENUM_CASE(SND_BANK_GENRL_BOAT_SPEEDBOAT_D);
    ENUM_CASE(SND_BANK_GENRL_BOAT_V12_D);
    ENUM_CASE(SND_BANK_GENRL_BUICK_D);
    ENUM_CASE(SND_BANK_GENRL_BUICK_P);
    ENUM_CASE(SND_BANK_GENRL_BULLET_HITS);
    ENUM_CASE(SND_BANK_GENRL_BULLET_PASS_1);
    ENUM_CASE(SND_BANK_GENRL_BULLET_PASS_2);
    ENUM_CASE(SND_BANK_GENRL_BULLET_PASS_3);
    ENUM_CASE(SND_BANK_GENRL_BULLET_PASS_4);
    ENUM_CASE(SND_BANK_GENRL_BUS_D);
    ENUM_CASE(SND_BANK_GENRL_BUS_P);
    ENUM_CASE(SND_BANK_GENRL_CADILLAC_D);
    ENUM_CASE(SND_BANK_GENRL_CADILLAC_P);
    ENUM_CASE(SND_BANK_GENRL_CHAINSAW_P);
    ENUM_CASE(SND_BANK_GENRL_COBRA_D);
    ENUM_CASE(SND_BANK_GENRL_COBRA_P);
    ENUM_CASE(SND_BANK_GENRL_COLLISIONS);
    ENUM_CASE(SND_BANK_GENRL_COPBIKE_D);
    ENUM_CASE(SND_BANK_GENRL_COPBIKE_P);
    ENUM_CASE(SND_BANK_GENRL_COUPE_D);
    ENUM_CASE(SND_BANK_GENRL_COUPE_P);
    ENUM_CASE(SND_BANK_GENRL_CRANE_P);
    ENUM_CASE(SND_BANK_GENRL_CUTLASS_D);
    ENUM_CASE(SND_BANK_GENRL_CUTLASS_P);
    ENUM_CASE(SND_BANK_GENRL_DIRTBIKE_D);
    ENUM_CASE(SND_BANK_GENRL_DIRTBIKE_P);
    ENUM_CASE(SND_BANK_GENRL_DODGE_D);
    ENUM_CASE(SND_BANK_GENRL_DODGE_P);
    ENUM_CASE(SND_BANK_GENRL_DOORS);
    ENUM_CASE(SND_BANK_GENRL_EXPLOSIONS);
    ENUM_CASE(SND_BANK_GENRL_FASTPROP);
    ENUM_CASE(SND_BANK_GENRL_FASTPROP_D);
    ENUM_CASE(SND_BANK_GENRL_FORD_T_D);
    ENUM_CASE(SND_BANK_GENRL_FORD_T_P);
    ENUM_CASE(SND_BANK_GENRL_FORKLIFT_D);
    ENUM_CASE(SND_BANK_GENRL_FORKLIFT_P);
    ENUM_CASE(SND_BANK_GENRL_FRONTEND_GAME);
    ENUM_CASE(SND_BANK_GENRL_FRONTEND_MENU);
    ENUM_CASE(SND_BANK_GENRL_GOKART_D);
    ENUM_CASE(SND_BANK_GENRL_GOKART_P);
    ENUM_CASE(SND_BANK_GENRL_GOLF_D);
    ENUM_CASE(SND_BANK_GENRL_GOLF_P);
    ENUM_CASE(SND_BANK_GENRL_GOLFCART_P);
    ENUM_CASE(SND_BANK_GENRL_HAIRCUT_V1);
    ENUM_CASE(SND_BANK_GENRL_HAIRCUT_V2);
    ENUM_CASE(SND_BANK_GENRL_HARVESTER_D);
    ENUM_CASE(SND_BANK_GENRL_HARVESTER_P);
    ENUM_CASE(SND_BANK_GENRL_HEAVY_V8_D);
    ENUM_CASE(SND_BANK_GENRL_HEAVY_V8_P);
    ENUM_CASE(SND_BANK_GENRL_HONDA_D);
    ENUM_CASE(SND_BANK_GENRL_HONDA_P);
    ENUM_CASE(SND_BANK_GENRL_HORN);
    ENUM_CASE(SND_BANK_GENRL_HOTROD_D);
    ENUM_CASE(SND_BANK_GENRL_HOTROD_P);
    ENUM_CASE(SND_BANK_GENRL_HOVERCRAFT_D);
    ENUM_CASE(SND_BANK_GENRL_HOVERCRAFT_P);
    ENUM_CASE(SND_BANK_GENRL_ICEVAN_P);
    ENUM_CASE(SND_BANK_GENRL_JALOPY_D);
    ENUM_CASE(SND_BANK_GENRL_JALOPY_P);
    ENUM_CASE(SND_BANK_GENRL_LOADING);
    ENUM_CASE(SND_BANK_GENRL_MACKTRUCK_D);
    ENUM_CASE(SND_BANK_GENRL_MACKTRUCK_P);
    ENUM_CASE(SND_BANK_GENRL_MAVERICK);
    ENUM_CASE(SND_BANK_GENRL_MERC_D);
    ENUM_CASE(SND_BANK_GENRL_MERC_P);
    ENUM_CASE(SND_BANK_GENRL_MODEL_T_D);
    ENUM_CASE(SND_BANK_GENRL_MODEL_T_P);
    ENUM_CASE(SND_BANK_GENRL_MONSTER_D);
    ENUM_CASE(SND_BANK_GENRL_MONSTER_P);
    ENUM_CASE(SND_BANK_GENRL_MUSTANG_D);
    ENUM_CASE(SND_BANK_GENRL_MUSTANG_P);
    ENUM_CASE(SND_BANK_GENRL_PACARD_D);
    ENUM_CASE(SND_BANK_GENRL_PACARD_P);
    ENUM_CASE(SND_BANK_GENRL_PADDY_D);
    ENUM_CASE(SND_BANK_GENRL_PADDY_P);
    ENUM_CASE(SND_BANK_GENRL_PATHFINDER_D);
    ENUM_CASE(SND_BANK_GENRL_PATHFINDER_P);
    ENUM_CASE(SND_BANK_GENRL_PONTIAC_D);
    ENUM_CASE(SND_BANK_GENRL_PONTIAC_P);
    ENUM_CASE(SND_BANK_GENRL_PORSCHE_D);
    ENUM_CASE(SND_BANK_GENRL_PORSCHE_P);
    ENUM_CASE(SND_BANK_GENRL_R22);
    ENUM_CASE(SND_BANK_GENRL_RAIN);
    ENUM_CASE(SND_BANK_GENRL_RC_CAR_D);
    ENUM_CASE(SND_BANK_GENRL_RC_CAR_P);
    ENUM_CASE(SND_BANK_GENRL_RC_HELI_D);
    ENUM_CASE(SND_BANK_GENRL_RC_HELI_P);
    ENUM_CASE(SND_BANK_GENRL_RC_PLANE_D);
    ENUM_CASE(SND_BANK_GENRL_RC_PLANE_P);
    ENUM_CASE(SND_BANK_GENRL_RC_TANK_D);
    ENUM_CASE(SND_BANK_GENRL_RC_TANK_P);
    ENUM_CASE(SND_BANK_GENRL_RS427_D);
    ENUM_CASE(SND_BANK_GENRL_RS427_P);
    ENUM_CASE(SND_BANK_GENRL_SALOON_D);
    ENUM_CASE(SND_BANK_GENRL_SALOON_P);
    ENUM_CASE(SND_BANK_GENRL_SCOOTER_D);
    ENUM_CASE(SND_BANK_GENRL_SCOOTER_P);
    ENUM_CASE(SND_BANK_GENRL_SINGLEPROP);
    ENUM_CASE(SND_BANK_GENRL_SKATEBOARD_P);
    ENUM_CASE(SND_BANK_GENRL_SPORT_D);
    ENUM_CASE(SND_BANK_GENRL_SPORT_P);
    ENUM_CASE(SND_BANK_GENRL_SPORTSBIKE_D);
    ENUM_CASE(SND_BANK_GENRL_SPORTSBIKE_P);
    ENUM_CASE(SND_BANK_GENRL_SWEEPER_D);
    ENUM_CASE(SND_BANK_GENRL_SWEEPER_P);
    ENUM_CASE(SND_BANK_GENRL_SWIMMING);
    ENUM_CASE(SND_BANK_GENRL_TEMP_D);
    ENUM_CASE(SND_BANK_GENRL_TEMP_P);
    ENUM_CASE(SND_BANK_GENRL_TRAIN_D);
    ENUM_CASE(SND_BANK_GENRL_TRAIN_P);
    ENUM_CASE(SND_BANK_GENRL_TRAM_D);
    ENUM_CASE(SND_BANK_GENRL_TWINPROP);
    ENUM_CASE(SND_BANK_GENRL_TWINPROP_D);
    ENUM_CASE(SND_BANK_GENRL_VAN_D);
    ENUM_CASE(SND_BANK_GENRL_VAN_P);
    ENUM_CASE(SND_BANK_GENRL_VEHICLE_GEN);
    ENUM_CASE(SND_BANK_GENRL_VTWINBIKE_D);
    ENUM_CASE(SND_BANK_GENRL_VTWINBIKE_P);
    ENUM_CASE(SND_BANK_GENRL_VW_VAN_D);
    ENUM_CASE(SND_BANK_GENRL_VW_VAN_P);
    ENUM_CASE(SND_BANK_GENRL_WEAPONS);
    ENUM_CASE(SND_BANK_PAIN_A_CARL);
    ENUM_CASE(SND_BANK_PAIN_A_FEMALE);
    ENUM_CASE(SND_BANK_PAIN_A_MALE);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_AREAS);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_COLOURS);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_DIRECTIONS);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_INSTRUCTIONS);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_NUMBERS);
    ENUM_CASE(SND_BANK_SCRIPT_SCANNER_VEHICLES);
    ENUM_CASE(SND_BANK_SCRIPT_AIR_HORN);
    ENUM_CASE(SND_BANK_SCRIPT_ARCHITECTURAL_ESPIONAGE);
    ENUM_CASE(SND_BANK_SCRIPT_ARE_YOU_GOING_TO_SAN_FIERO);
    ENUM_CASE(SND_BANK_SCRIPT_BACK_TO_SCHOOL);
    ENUM_CASE(SND_BANK_SCRIPT_BALLA);
    ENUM_CASE(SND_BANK_SCRIPT_BANDIT);
    ENUM_CASE(SND_BANK_SCRIPT_BARBERS);
    ENUM_CASE(SND_BANK_SCRIPT_BASKETBALL);
    ENUM_CASE(SND_BANK_SCRIPT_BBOX);
    ENUM_CASE(SND_BANK_SCRIPT_BCS5);
    ENUM_CASE(SND_BANK_SCRIPT_BEE);
    ENUM_CASE(SND_BANK_SCRIPT_BFYCRP_GAMBLING);
    ENUM_CASE(SND_BANK_SCRIPT_BIKE_COURIER);
    ENUM_CASE(SND_BANK_SCRIPT_BLACKJACK_DEALER);
    ENUM_CASE(SND_BANK_SCRIPT_BLACK_PROJECT);
    ENUM_CASE(SND_BANK_SCRIPT_BOAT_SCHOOL);
    ENUM_CASE(SND_BANK_SCRIPT_BREAKING_THE_BANK);
    ENUM_CASE(SND_BANK_SCRIPT_BURNING_DESIRE);
    ENUM_CASE(SND_BANK_SCRIPT_CARGO_PLANE);
    ENUM_CASE(SND_BANK_SCRIPT_CAS1);
    ENUM_CASE(SND_BANK_SCRIPT_CAS11);
    ENUM_CASE(SND_BANK_SCRIPT_CAS2);
    ENUM_CASE(SND_BANK_SCRIPT_CAS3);
    ENUM_CASE(SND_BANK_SCRIPT_CAS4);
    ENUM_CASE(SND_BANK_SCRIPT_CAS5);
    ENUM_CASE(SND_BANK_SCRIPT_CAS6);
    ENUM_CASE(SND_BANK_SCRIPT_CAS9);
    ENUM_CASE(SND_BANK_SCRIPT_CAT);
    ENUM_CASE(SND_BANK_SCRIPT_CAT1);
    ENUM_CASE(SND_BANK_SCRIPT_CAT2);
    ENUM_CASE(SND_BANK_SCRIPT_CAT2_BANK);
    ENUM_CASE(SND_BANK_SCRIPT_CAT3);
    ENUM_CASE(SND_BANK_SCRIPT_CAT4);
    ENUM_CASE(SND_BANK_SCRIPT_CATX);
    ENUM_CASE(SND_BANK_SCRIPT_CES1);
    ENUM_CASE(SND_BANK_SCRIPT_CES2);
    ENUM_CASE(SND_BANK_SCRIPT_CESX);
    ENUM_CASE(SND_BANK_SCRIPT_CRA1);
    ENUM_CASE(SND_BANK_SCRIPT_CRA2);
    ENUM_CASE(SND_BANK_SCRIPT_CRA3);
    ENUM_CASE(SND_BANK_SCRIPT_DAM_AND_BLAST);
    ENUM_CASE(SND_BANK_SCRIPT_DANCE_HIGH);
    ENUM_CASE(SND_BANK_SCRIPT_DANCE_LOW);
    ENUM_CASE(SND_BANK_SCRIPT_DANCE_MED);
    ENUM_CASE(SND_BANK_SCRIPT_DANCE_NOT);
    ENUM_CASE(SND_BANK_SCRIPT_DA_NANG);
    ENUM_CASE(SND_BANK_SCRIPT_DC2);
    ENUM_CASE(SND_BANK_SCRIPT_DECONSTRUCTION);
    ENUM_CASE(SND_BANK_SCRIPT_DES1);
    ENUM_CASE(SND_BANK_SCRIPT_DES2);
    ENUM_CASE(SND_BANK_SCRIPT_DES3);
    ENUM_CASE(SND_BANK_SCRIPT_DES6);
    ENUM_CASE(SND_BANK_SCRIPT_DES8);
    ENUM_CASE(SND_BANK_SCRIPT_DES9);
    ENUM_CASE(SND_BANK_SCRIPT_DOGG);
    ENUM_CASE(SND_BANK_SCRIPT_DON_PEYOTE);
    ENUM_CASE(SND_BANK_SCRIPT_DUALITY);
    ENUM_CASE(SND_BANK_SCRIPT_END_OF_THE_LINE);
    ENUM_CASE(SND_BANK_SCRIPT_EXPLOSIVE_SITUATION);
    ENUM_CASE(SND_BANK_SCRIPT_FAR2);
    ENUM_CASE(SND_BANK_SCRIPT_FAR3);
    ENUM_CASE(SND_BANK_SCRIPT_FAR4);
    ENUM_CASE(SND_BANK_SCRIPT_FAR5);
    ENUM_CASE(SND_BANK_SCRIPT_FIN1);
    ENUM_CASE(SND_BANK_SCRIPT_FIN2);
    ENUM_CASE(SND_BANK_SCRIPT_FREEFALL);
    ENUM_CASE(SND_BANK_SCRIPT_GAR1);
    ENUM_CASE(SND_BANK_SCRIPT_GAR2);
    ENUM_CASE(SND_BANK_SCRIPT_GATE);
    ENUM_CASE(SND_BANK_SCRIPT_GOGO);
    ENUM_CASE(SND_BANK_SCRIPT_GREY_IMPORTS);
    ENUM_CASE(SND_BANK_SCRIPT_GRO1);
    ENUM_CASE(SND_BANK_SCRIPT_GRO2);
    ENUM_CASE(SND_BANK_SCRIPT_GYM);
    ENUM_CASE(SND_BANK_SCRIPT_HE1);
    ENUM_CASE(SND_BANK_SCRIPT_HE2);
    ENUM_CASE(SND_BANK_SCRIPT_HE3);
    ENUM_CASE(SND_BANK_SCRIPT_HE4);
    ENUM_CASE(SND_BANK_SCRIPT_HE5);
    ENUM_CASE(SND_BANK_SCRIPT_HE8);
    ENUM_CASE(SND_BANK_SCRIPT_HEI);
    ENUM_CASE(SND_BANK_SCRIPT_HIJACK);
    ENUM_CASE(SND_BANK_SCRIPT_HOME_INVASION);
    ENUM_CASE(SND_BANK_SCRIPT_HOUSE_PARTY);
    ENUM_CASE(SND_BANK_SCRIPT_INT1);
    ENUM_CASE(SND_BANK_SCRIPT_INT2);
    ENUM_CASE(SND_BANK_SCRIPT_JIZX);
    ENUM_CASE(SND_BANK_SCRIPT_JIZZY);
    ENUM_CASE(SND_BANK_SCRIPT_KEYCARD_TO_HER_HEART);
    ENUM_CASE(SND_BANK_SCRIPT_KEYPAD);
    ENUM_CASE(SND_BANK_SCRIPT_KUNG);
    ENUM_CASE(SND_BANK_SCRIPT_LIFE_BEACH_CONV);
    ENUM_CASE(SND_BANK_SCRIPT_LOC1);
    ENUM_CASE(SND_BANK_SCRIPT_LOC2);
    ENUM_CASE(SND_BANK_SCRIPT_LOC3);
    ENUM_CASE(SND_BANK_SCRIPT_LOC4);
    ENUM_CASE(SND_BANK_SCRIPT_LOCX);
    ENUM_CASE(SND_BANK_SCRIPT_LOS_SEPULCROS);
    ENUM_CASE(SND_BANK_SCRIPT_LOWR);
    ENUM_CASE(SND_BANK_SCRIPT_LURE);
    ENUM_CASE(SND_BANK_SCRIPT_MACX);
    ENUM_CASE(SND_BANK_SCRIPT_MADD_DOG);
    ENUM_CASE(SND_BANK_SCRIPT_MAD_DOGGS_RHYMES);
    ENUM_CASE(SND_BANK_SCRIPT_MAN1);
    ENUM_CASE(SND_BANK_SCRIPT_MAN2);
    ENUM_CASE(SND_BANK_SCRIPT_MAN3);
    ENUM_CASE(SND_BANK_SCRIPT_MAN5);
    ENUM_CASE(SND_BANK_SCRIPT_MANAGEMENT_ISSUES);
    ENUM_CASE(SND_BANK_SCRIPT_MBARB);
    ENUM_CASE(SND_BANK_SCRIPT_MCAT);
    ENUM_CASE(SND_BANK_SCRIPT_MCES);
    ENUM_CASE(SND_BANK_SCRIPT_MDEN);
    ENUM_CASE(SND_BANK_SCRIPT_MEAT_BUSINESS);
    ENUM_CASE(SND_BANK_SCRIPT_MECHANIC);
    ENUM_CASE(SND_BANK_SCRIPT_MECHANIC_DIALOGUE);
    ENUM_CASE(SND_BANK_SCRIPT_MHEL);
    ENUM_CASE(SND_BANK_SCRIPT_MHRZ);
    ENUM_CASE(SND_BANK_SCRIPT_MJET);
    ENUM_CASE(SND_BANK_SCRIPT_MJIZ);
    ENUM_CASE(SND_BANK_SCRIPT_MKND);
    ENUM_CASE(SND_BANK_SCRIPT_MKP);
    ENUM_CASE(SND_BANK_SCRIPT_MLOC);
    ENUM_CASE(SND_BANK_SCRIPT_MMICH);
    ENUM_CASE(SND_BANK_SCRIPT_MMILL);
    ENUM_CASE(SND_BANK_SCRIPT_MOUNTAIN_CLOUD_BOY);
    ENUM_CASE(SND_BANK_SCRIPT_MPUL);
    ENUM_CASE(SND_BANK_SCRIPT_MROS);
    ENUM_CASE(SND_BANK_SCRIPT_MSAL);
    ENUM_CASE(SND_BANK_SCRIPT_MSMK);
    ENUM_CASE(SND_BANK_SCRIPT_MSWE);
    ENUM_CASE(SND_BANK_SCRIPT_MTEN);
    ENUM_CASE(SND_BANK_SCRIPT_MTG);
    ENUM_CASE(SND_BANK_SCRIPT_MTOR);
    ENUM_CASE(SND_BANK_SCRIPT_MTRU);
    ENUM_CASE(SND_BANK_SCRIPT_MWUZ);
    ENUM_CASE(SND_BANK_SCRIPT_MZAHN);
    ENUM_CASE(SND_BANK_SCRIPT_MZER);
    ENUM_CASE(SND_BANK_SCRIPT_NOE);
    ENUM_CASE(SND_BANK_SCRIPT_NULL);
    ENUM_CASE(SND_BANK_SCRIPT_OGLOC);
    ENUM_CASE(SND_BANK_SCRIPT_OTB);
    ENUM_CASE(SND_BANK_SCRIPT_PIMPING);
    ENUM_CASE(SND_BANK_SCRIPT_POOL);
    ENUM_CASE(SND_BANK_SCRIPT_POOL_MINIGAME);
    ENUM_CASE(SND_BANK_SCRIPT_PUNCTURE_WOUNDS);
    ENUM_CASE(SND_BANK_SCRIPT_RESTAURANT);
    ENUM_CASE(SND_BANK_SCRIPT_REUNITING_THE_FAMILIES);
    ENUM_CASE(SND_BANK_SCRIPT_ROB_GAS_STATION);
    ENUM_CASE(SND_BANK_SCRIPT_ROT1);
    ENUM_CASE(SND_BANK_SCRIPT_ROT2);
    ENUM_CASE(SND_BANK_SCRIPT_ROT4);
    ENUM_CASE(SND_BANK_SCRIPT_ROULETTE);
    ENUM_CASE(SND_BANK_SCRIPT_RYD1);
    ENUM_CASE(SND_BANK_SCRIPT_RYD2);
    ENUM_CASE(SND_BANK_SCRIPT_RYD3);
    ENUM_CASE(SND_BANK_SCRIPT_RYDX);
    ENUM_CASE(SND_BANK_SCRIPT_SCR1);
    ENUM_CASE(SND_BANK_SCRIPT_SHOOTING_RANGE);
    ENUM_CASE(SND_BANK_SCRIPT_SHRK);
    ENUM_CASE(SND_BANK_SCRIPT_SMO1);
    ENUM_CASE(SND_BANK_SCRIPT_SMO2);
    ENUM_CASE(SND_BANK_SCRIPT_SMO3);
    ENUM_CASE(SND_BANK_SCRIPT_SMO4);
    ENUM_CASE(SND_BANK_SCRIPT_SMOX);
    ENUM_CASE(SND_BANK_SCRIPT_SOLO);
    ENUM_CASE(SND_BANK_SCRIPT_STADIUM_CHEERS);
    ENUM_CASE(SND_BANK_SCRIPT_STINGER);
    ENUM_CASE(SND_BANK_SCRIPT_STL1);
    ENUM_CASE(SND_BANK_SCRIPT_STL2);
    ENUM_CASE(SND_BANK_SCRIPT_STL4);
    ENUM_CASE(SND_BANK_SCRIPT_STL5);
    ENUM_CASE(SND_BANK_SCRIPT_SWE1);
    ENUM_CASE(SND_BANK_SCRIPT_SWE2);
    ENUM_CASE(SND_BANK_SCRIPT_SWE3);
    ENUM_CASE(SND_BANK_SCRIPT_SWE4);
    ENUM_CASE(SND_BANK_SCRIPT_SWE5);
    ENUM_CASE(SND_BANK_SCRIPT_SWE7);
    ENUM_CASE(SND_BANK_SCRIPT_SWEX);
    ENUM_CASE(SND_BANK_SCRIPT_SYN1);
    ENUM_CASE(SND_BANK_SCRIPT_SYN2);
    ENUM_CASE(SND_BANK_SCRIPT_SYN3);
    ENUM_CASE(SND_BANK_SCRIPT_SYN4);
    ENUM_CASE(SND_BANK_SCRIPT_SYN5);
    ENUM_CASE(SND_BANK_SCRIPT_SYN7);
    ENUM_CASE(SND_BANK_SCRIPT_TATTOO);
    ENUM_CASE(SND_BANK_SCRIPT_TBOX);
    ENUM_CASE(SND_BANK_SCRIPT_TEMPEST);
    ENUM_CASE(SND_BANK_SCRIPT_THE_JAR_OF_GREEN_GOO);
    ENUM_CASE(SND_BANK_SCRIPT_TORX);
    ENUM_CASE(SND_BANK_SCRIPT_TRU1);
    ENUM_CASE(SND_BANK_SCRIPT_TRU2);
    ENUM_CASE(SND_BANK_SCRIPT_TRUX);
    ENUM_CASE(SND_BANK_SCRIPT_UNCLE_SAM);
    ENUM_CASE(SND_BANK_SCRIPT_UP_UP_AND_AWAY);
    ENUM_CASE(SND_BANK_SCRIPT_VALET);
    ENUM_CASE(SND_BANK_SCRIPT_VCR1);
    ENUM_CASE(SND_BANK_SCRIPT_VCR2);
    ENUM_CASE(SND_BANK_SCRIPT_VENDING);
    ENUM_CASE(SND_BANK_SCRIPT_VERTICAL_BIRD);
    ENUM_CASE(SND_BANK_SCRIPT_VIDEO_POKER);
    ENUM_CASE(SND_BANK_SCRIPT_VO);
    ENUM_CASE(SND_BANK_SCRIPT_WBOX);
    ENUM_CASE(SND_BANK_SCRIPT_WFYCRP_GAMBLING);
    ENUM_CASE(SND_BANK_SCRIPT_WUZ1);
    ENUM_CASE(SND_BANK_SCRIPT_WUZ2);
    ENUM_CASE(SND_BANK_SCRIPT_WUZ4);
    ENUM_CASE(SND_BANK_SCRIPT_WUZX);
    ENUM_CASE(SND_BANK_SCRIPT_ZER1);
    ENUM_CASE(SND_BANK_SCRIPT_ZER2);
    ENUM_CASE(SND_BANK_SCRIPT_ZER3);
    ENUM_CASE(SND_BANK_SCRIPT_ZER4);
    ENUM_CASE(SND_BANK_SCRIPT_ZEROING_IN);
    ENUM_CASE(SND_BANK_SPC_EA_ARMY1);
    ENUM_CASE(SND_BANK_SPC_EA_ARMY2);
    ENUM_CASE(SND_BANK_SPC_EA_ARMY3);
    ENUM_CASE(SND_BANK_SPC_EA_EMT1);
    ENUM_CASE(SND_BANK_SPC_EA_EMT2);
    ENUM_CASE(SND_BANK_SPC_EA_EMT3);
    ENUM_CASE(SND_BANK_SPC_EA_EMT4);
    ENUM_CASE(SND_BANK_SPC_EA_EMT5);
    ENUM_CASE(SND_BANK_SPC_EA_FBI2);
    ENUM_CASE(SND_BANK_SPC_EA_FBI3);
    ENUM_CASE(SND_BANK_SPC_EA_FBI4);
    ENUM_CASE(SND_BANK_SPC_EA_FBI5);
    ENUM_CASE(SND_BANK_SPC_EA_FBI6);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD1);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD2);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD3);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD4);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD5);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD6);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD7);
    ENUM_CASE(SND_BANK_SPC_EA_LAPD8);
    ENUM_CASE(SND_BANK_SPC_EA_LVPD1);
    ENUM_CASE(SND_BANK_SPC_EA_LVPD2);
    ENUM_CASE(SND_BANK_SPC_EA_LVPD3);
    ENUM_CASE(SND_BANK_SPC_EA_LVPD4);
    ENUM_CASE(SND_BANK_SPC_EA_LVPD5);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP1);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP2);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP3);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP4);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP5);
    ENUM_CASE(SND_BANK_SPC_EA_MCOP6);
    ENUM_CASE(SND_BANK_SPC_EA_PULASKI);
    ENUM_CASE(SND_BANK_SPC_EA_RCOP1);
    ENUM_CASE(SND_BANK_SPC_EA_RCOP2);
    ENUM_CASE(SND_BANK_SPC_EA_RCOP3);
    ENUM_CASE(SND_BANK_SPC_EA_RCOP4);
    ENUM_CASE(SND_BANK_SPC_EA_SFPD1);
    ENUM_CASE(SND_BANK_SPC_EA_SFPD2);
    ENUM_CASE(SND_BANK_SPC_EA_SFPD3);
    ENUM_CASE(SND_BANK_SPC_EA_SFPD4);
    ENUM_CASE(SND_BANK_SPC_EA_SFPD5);
    ENUM_CASE(SND_BANK_SPC_EA_SWAT1);
    ENUM_CASE(SND_BANK_SPC_EA_SWAT2);
    ENUM_CASE(SND_BANK_SPC_EA_SWAT4);
    ENUM_CASE(SND_BANK_SPC_EA_SWAT6);
    ENUM_CASE(SND_BANK_SPC_FA_BARBARA);
    ENUM_CASE(SND_BANK_SPC_FA_BMOBAR);
    ENUM_CASE(SND_BANK_SPC_FA_BMYBARB);
    ENUM_CASE(SND_BANK_SPC_FA_BMYTATT);
    ENUM_CASE(SND_BANK_SPC_FA_CATALINA);
    ENUM_CASE(SND_BANK_SPC_FA_DENISE);
    ENUM_CASE(SND_BANK_SPC_FA_HELENA);
    ENUM_CASE(SND_BANK_SPC_FA_KATIE);
    ENUM_CASE(SND_BANK_SPC_FA_MICHELLE);
    ENUM_CASE(SND_BANK_SPC_FA_MILLIE);
    ENUM_CASE(SND_BANK_SPC_FA_POL_ANN);
    ENUM_CASE(SND_BANK_SPC_FA_WFYBURG);
    ENUM_CASE(SND_BANK_SPC_FA_WFYCLOT);
    ENUM_CASE(SND_BANK_SPC_FA_WMYAMMO);
    ENUM_CASE(SND_BANK_SPC_FA_WMYBARB);
    ENUM_CASE(SND_BANK_SPC_FA_WMYBELL);
    ENUM_CASE(SND_BANK_SPC_FA_WMYCLOT);
    ENUM_CASE(SND_BANK_SPC_FA_WMYPIZZ);
    ENUM_CASE(SND_BANK_SPC_GA_BBDYG1);
    ENUM_CASE(SND_BANK_SPC_GA_BBDYG2);
    ENUM_CASE(SND_BANK_SPC_GA_BFORI);
    ENUM_CASE(SND_BANK_SPC_GA_BFOST);
    ENUM_CASE(SND_BANK_SPC_GA_BFYBE);
    ENUM_CASE(SND_BANK_SPC_GA_BFYBU);
    ENUM_CASE(SND_BANK_SPC_GA_BFYCRP);
    ENUM_CASE(SND_BANK_SPC_GA_BFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_BFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_BFYST);
    ENUM_CASE(SND_BANK_SPC_GA_BIKDRUG);
    ENUM_CASE(SND_BANK_SPC_GA_BIKERA);
    ENUM_CASE(SND_BANK_SPC_GA_BIKERB);
    ENUM_CASE(SND_BANK_SPC_GA_BMOCD);
    ENUM_CASE(SND_BANK_SPC_GA_BMORI);
    ENUM_CASE(SND_BANK_SPC_GA_BMOSEC);
    ENUM_CASE(SND_BANK_SPC_GA_BMOST);
    ENUM_CASE(SND_BANK_SPC_GA_BMOTR1);
    ENUM_CASE(SND_BANK_SPC_GA_BMYAP);
    ENUM_CASE(SND_BANK_SPC_GA_BMYBE);
    ENUM_CASE(SND_BANK_SPC_GA_BMYBOUN);
    ENUM_CASE(SND_BANK_SPC_GA_BMYBOX);
    ENUM_CASE(SND_BANK_SPC_GA_BMYBU);
    ENUM_CASE(SND_BANK_SPC_GA_BMYCG);
    ENUM_CASE(SND_BANK_SPC_GA_BMYCON);
    ENUM_CASE(SND_BANK_SPC_GA_BMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_BMYDJ);
    ENUM_CASE(SND_BANK_SPC_GA_BMYDRUG);
    ENUM_CASE(SND_BANK_SPC_GA_BMYMOUN);
    ENUM_CASE(SND_BANK_SPC_GA_BMYPOL1);
    ENUM_CASE(SND_BANK_SPC_GA_BMYPOL2);
    ENUM_CASE(SND_BANK_SPC_GA_BMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_BMYST);
    ENUM_CASE(SND_BANK_SPC_GA_BYMPI);
    ENUM_CASE(SND_BANK_SPC_GA_CWFOFR);
    ENUM_CASE(SND_BANK_SPC_GA_CWFOHB);
    ENUM_CASE(SND_BANK_SPC_GA_CWFYFR1);
    ENUM_CASE(SND_BANK_SPC_GA_CWFYFR2);
    ENUM_CASE(SND_BANK_SPC_GA_CWFYHB1);
    ENUM_CASE(SND_BANK_SPC_GA_CWMOFR1);
    ENUM_CASE(SND_BANK_SPC_GA_CWMOHB1);
    ENUM_CASE(SND_BANK_SPC_GA_CWMOHB2);
    ENUM_CASE(SND_BANK_SPC_GA_CWMYFR);
    ENUM_CASE(SND_BANK_SPC_GA_CWMYHB1);
    ENUM_CASE(SND_BANK_SPC_GA_CWMYHB2);
    ENUM_CASE(SND_BANK_SPC_GA_DNFOLC1);
    ENUM_CASE(SND_BANK_SPC_GA_DNFOLC2);
    ENUM_CASE(SND_BANK_SPC_GA_DNFYLC);
    ENUM_CASE(SND_BANK_SPC_GA_DNMOLC1);
    ENUM_CASE(SND_BANK_SPC_GA_DNMOLC2);
    ENUM_CASE(SND_BANK_SPC_GA_DNMYLC);
    ENUM_CASE(SND_BANK_SPC_GA_DWFOLC);
    ENUM_CASE(SND_BANK_SPC_GA_DWFYLC1);
    ENUM_CASE(SND_BANK_SPC_GA_DWFYLC2);
    ENUM_CASE(SND_BANK_SPC_GA_DWMOLC1);
    ENUM_CASE(SND_BANK_SPC_GA_DWMOLC2);
    ENUM_CASE(SND_BANK_SPC_GA_DWMYLC1);
    ENUM_CASE(SND_BANK_SPC_GA_DWMYLC2);
    ENUM_CASE(SND_BANK_SPC_GA_HFORI);
    ENUM_CASE(SND_BANK_SPC_GA_HFOST);
    ENUM_CASE(SND_BANK_SPC_GA_HFYBE);
    ENUM_CASE(SND_BANK_SPC_GA_HFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_HFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_HFYST);
    ENUM_CASE(SND_BANK_SPC_GA_HMORI);
    ENUM_CASE(SND_BANK_SPC_GA_HMOST);
    ENUM_CASE(SND_BANK_SPC_GA_HMYBE);
    ENUM_CASE(SND_BANK_SPC_GA_HMYCM);
    ENUM_CASE(SND_BANK_SPC_GA_HMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_HMYDRUG);
    ENUM_CASE(SND_BANK_SPC_GA_HMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_HMYST);
    ENUM_CASE(SND_BANK_SPC_GA_IMYST);
    ENUM_CASE(SND_BANK_SPC_GA_IRFYST);
    ENUM_CASE(SND_BANK_SPC_GA_IRMYST);
    ENUM_CASE(SND_BANK_SPC_GA_MAFFA);
    ENUM_CASE(SND_BANK_SPC_GA_MAFFB);
    ENUM_CASE(SND_BANK_SPC_GA_MALE01);
    ENUM_CASE(SND_BANK_SPC_GA_NOVOICE);
    ENUM_CASE(SND_BANK_SPC_GA_OFORI);
    ENUM_CASE(SND_BANK_SPC_GA_OFOST);
    ENUM_CASE(SND_BANK_SPC_GA_OFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_OFYST);
    ENUM_CASE(SND_BANK_SPC_GA_OMOBOAT);
    ENUM_CASE(SND_BANK_SPC_GA_OMOKUNG);
    ENUM_CASE(SND_BANK_SPC_GA_OMORI);
    ENUM_CASE(SND_BANK_SPC_GA_OMOST);
    ENUM_CASE(SND_BANK_SPC_GA_OMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_OMYST);
    ENUM_CASE(SND_BANK_SPC_GA_SBFORI);
    ENUM_CASE(SND_BANK_SPC_GA_SBFOST);
    ENUM_CASE(SND_BANK_SPC_GA_SBFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_SBFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SBFYST);
    ENUM_CASE(SND_BANK_SPC_GA_SBFYSTR);
    ENUM_CASE(SND_BANK_SPC_GA_SBMOCD);
    ENUM_CASE(SND_BANK_SPC_GA_SBMORI);
    ENUM_CASE(SND_BANK_SPC_GA_SBMOST);
    ENUM_CASE(SND_BANK_SPC_GA_SBMOTR1);
    ENUM_CASE(SND_BANK_SPC_GA_SBMOTR2);
    ENUM_CASE(SND_BANK_SPC_GA_SBMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_SBMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SBMYST);
    ENUM_CASE(SND_BANK_SPC_GA_SBMYTR3);
    ENUM_CASE(SND_BANK_SPC_GA_SFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_SHFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_SHMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_SMYST);
    ENUM_CASE(SND_BANK_SPC_GA_SMYST2);
    ENUM_CASE(SND_BANK_SPC_GA_SOFORI);
    ENUM_CASE(SND_BANK_SPC_GA_SOFOST);
    ENUM_CASE(SND_BANK_SPC_GA_SOFYBU);
    ENUM_CASE(SND_BANK_SPC_GA_SOFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SOFYST);
    ENUM_CASE(SND_BANK_SPC_GA_SOMOBU);
    ENUM_CASE(SND_BANK_SPC_GA_SOMORI);
    ENUM_CASE(SND_BANK_SPC_GA_SOMOST);
    ENUM_CASE(SND_BANK_SPC_GA_SOMYAP);
    ENUM_CASE(SND_BANK_SPC_GA_SOMYBU);
    ENUM_CASE(SND_BANK_SPC_GA_SOMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SOMYST);
    ENUM_CASE(SND_BANK_SPC_GA_SWFOPRO);
    ENUM_CASE(SND_BANK_SPC_GA_SWFORI);
    ENUM_CASE(SND_BANK_SPC_GA_SWFOST);
    ENUM_CASE(SND_BANK_SPC_GA_SWFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SWFYST);
    ENUM_CASE(SND_BANK_SPC_GA_SWFYSTR);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOCD);
    ENUM_CASE(SND_BANK_SPC_GA_SWMORI);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOST);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOTR1);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOTR2);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOTR3);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOTR4);
    ENUM_CASE(SND_BANK_SPC_GA_SWMOTR5);
    ENUM_CASE(SND_BANK_SPC_GA_SWMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_SWMYHP1);
    ENUM_CASE(SND_BANK_SPC_GA_SWMYHP2);
    ENUM_CASE(SND_BANK_SPC_GA_SWMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_SWMYST);
    ENUM_CASE(SND_BANK_SPC_GA_VBFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_VBFYST2);
    ENUM_CASE(SND_BANK_SPC_GA_VBMOCD);
    ENUM_CASE(SND_BANK_SPC_GA_VBMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_VBMYELV);
    ENUM_CASE(SND_BANK_SPC_GA_VHFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_VHFYST3);
    ENUM_CASE(SND_BANK_SPC_GA_VHMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_VHMYELV);
    ENUM_CASE(SND_BANK_SPC_GA_VIMYELV);
    ENUM_CASE(SND_BANK_SPC_GA_VWFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_VWFYST1);
    ENUM_CASE(SND_BANK_SPC_GA_VWFYWAI);
    ENUM_CASE(SND_BANK_SPC_GA_VWMOTR1);
    ENUM_CASE(SND_BANK_SPC_GA_VWMOTR2);
    ENUM_CASE(SND_BANK_SPC_GA_VWMYAP);
    ENUM_CASE(SND_BANK_SPC_GA_VWMYBJD);
    ENUM_CASE(SND_BANK_SPC_GA_VWMYCD);
    ENUM_CASE(SND_BANK_SPC_GA_VWMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_WFOPJ);
    ENUM_CASE(SND_BANK_SPC_GA_WFORI);
    ENUM_CASE(SND_BANK_SPC_GA_WFOST);
    ENUM_CASE(SND_BANK_SPC_GA_WFYBE);
    ENUM_CASE(SND_BANK_SPC_GA_WFYBU);
    ENUM_CASE(SND_BANK_SPC_GA_WFYCRK);
    ENUM_CASE(SND_BANK_SPC_GA_WFYCRP);
    ENUM_CASE(SND_BANK_SPC_GA_WFYJG);
    ENUM_CASE(SND_BANK_SPC_GA_WFYLG);
    ENUM_CASE(SND_BANK_SPC_GA_WFYPRO);
    ENUM_CASE(SND_BANK_SPC_GA_WFYRI);
    ENUM_CASE(SND_BANK_SPC_GA_WFYRO);
    ENUM_CASE(SND_BANK_SPC_GA_WFYST);
    ENUM_CASE(SND_BANK_SPC_GA_WFYSTEW);
    ENUM_CASE(SND_BANK_SPC_GA_WMOMIB);
    ENUM_CASE(SND_BANK_SPC_GA_WMOPJ);
    ENUM_CASE(SND_BANK_SPC_GA_WMOPREA);
    ENUM_CASE(SND_BANK_SPC_GA_WMORI);
    ENUM_CASE(SND_BANK_SPC_GA_WMOSCI);
    ENUM_CASE(SND_BANK_SPC_GA_WMOST);
    ENUM_CASE(SND_BANK_SPC_GA_WMOTR1);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBE);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBMX);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBOUN);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBOX);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBP);
    ENUM_CASE(SND_BANK_SPC_GA_WMYBU);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCD1);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCD2);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCH);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCON);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCONB);
    ENUM_CASE(SND_BANK_SPC_GA_WMYCR);
    ENUM_CASE(SND_BANK_SPC_GA_WMYDRUG);
    ENUM_CASE(SND_BANK_SPC_GA_WMYGAR);
    ENUM_CASE(SND_BANK_SPC_GA_WMYGOL1);
    ENUM_CASE(SND_BANK_SPC_GA_WMYGOL2);
    ENUM_CASE(SND_BANK_SPC_GA_WMYJG);
    ENUM_CASE(SND_BANK_SPC_GA_WMYLG);
    ENUM_CASE(SND_BANK_SPC_GA_WMYMECH);
    ENUM_CASE(SND_BANK_SPC_GA_WMYMOUN);
    ENUM_CASE(SND_BANK_SPC_GA_WMYPLT);
    ENUM_CASE(SND_BANK_SPC_GA_WMYRI);
    ENUM_CASE(SND_BANK_SPC_GA_WMYRO);
    ENUM_CASE(SND_BANK_SPC_GA_WMYSGRD);
    ENUM_CASE(SND_BANK_SPC_GA_WMYSKAT);
    ENUM_CASE(SND_BANK_SPC_GA_WMYST);
    ENUM_CASE(SND_BANK_SPC_GA_WMYTX1);
    ENUM_CASE(SND_BANK_SPC_GA_WMYTX2);
    ENUM_CASE(SND_BANK_SPC_GA_WMYVA);
    ENUM_CASE(SND_BANK_SPC_NA_BALLAS1);
    ENUM_CASE(SND_BANK_SPC_NA_BALLAS2);
    ENUM_CASE(SND_BANK_SPC_NA_BALLAS3);
    ENUM_CASE(SND_BANK_SPC_NA_BALLAS4);
    ENUM_CASE(SND_BANK_SPC_NA_BALLAS5);
    ENUM_CASE(SND_BANK_SPC_NA_BIG_BEAR);
    ENUM_CASE(SND_BANK_SPC_NA_CESAR);
    ENUM_CASE(SND_BANK_SPC_NA_DNB1);
    ENUM_CASE(SND_BANK_SPC_NA_DNB2);
    ENUM_CASE(SND_BANK_SPC_NA_DNB3);
    ENUM_CASE(SND_BANK_SPC_NA_DNB5);
    ENUM_CASE(SND_BANK_SPC_NA_DWAINE);
    ENUM_CASE(SND_BANK_SPC_NA_FAM1);
    ENUM_CASE(SND_BANK_SPC_NA_FAM2);
    ENUM_CASE(SND_BANK_SPC_NA_FAM3);
    ENUM_CASE(SND_BANK_SPC_NA_FAM4);
    ENUM_CASE(SND_BANK_SPC_NA_FAM5);
    ENUM_CASE(SND_BANK_SPC_NA_JIZZY);
    ENUM_CASE(SND_BANK_SPC_NA_LSV1);
    ENUM_CASE(SND_BANK_SPC_NA_LSV2);
    ENUM_CASE(SND_BANK_SPC_NA_LSV3);
    ENUM_CASE(SND_BANK_SPC_NA_LSV4);
    ENUM_CASE(SND_BANK_SPC_NA_LSV5);
    ENUM_CASE(SND_BANK_SPC_NA_MACCER);
    ENUM_CASE(SND_BANK_SPC_NA_MAFBOSS);
    ENUM_CASE(SND_BANK_SPC_NA_OGLOC);
    ENUM_CASE(SND_BANK_SPC_NA_RYDER);
    ENUM_CASE(SND_BANK_SPC_NA_SFR1);
    ENUM_CASE(SND_BANK_SPC_NA_SFR2);
    ENUM_CASE(SND_BANK_SPC_NA_SFR3);
    ENUM_CASE(SND_BANK_SPC_NA_SFR4);
    ENUM_CASE(SND_BANK_SPC_NA_SFR5);
    ENUM_CASE(SND_BANK_SPC_NA_SMOKE);
    ENUM_CASE(SND_BANK_SPC_NA_STRI1);
    ENUM_CASE(SND_BANK_SPC_NA_STRI2);
    ENUM_CASE(SND_BANK_SPC_NA_STRI4);
    ENUM_CASE(SND_BANK_SPC_NA_STRI5);
    ENUM_CASE(SND_BANK_SPC_NA_SWEET);
    ENUM_CASE(SND_BANK_SPC_NA_TBONE);
    ENUM_CASE(SND_BANK_SPC_NA_TORENO);
    ENUM_CASE(SND_BANK_SPC_NA_TRUTH);
    ENUM_CASE(SND_BANK_SPC_NA_VLA1);
    ENUM_CASE(SND_BANK_SPC_NA_VLA2);
    ENUM_CASE(SND_BANK_SPC_NA_VLA3);
    ENUM_CASE(SND_BANK_SPC_NA_VLA4);
    ENUM_CASE(SND_BANK_SPC_NA_VLA5);
    ENUM_CASE(SND_BANK_SPC_NA_VMAFF1);
    ENUM_CASE(SND_BANK_SPC_NA_VMAFF2);
    ENUM_CASE(SND_BANK_SPC_NA_VMAFF3);
    ENUM_CASE(SND_BANK_SPC_NA_VMAFF4);
    ENUM_CASE(SND_BANK_SPC_NA_VMAFF5);
    ENUM_CASE(SND_BANK_SPC_NA_WOOZIE);
    ENUM_CASE(SND_BANK_SPC_PA_AG);
    ENUM_CASE(SND_BANK_SPC_PA_AG2);
    ENUM_CASE(SND_BANK_SPC_PA_AR);
    ENUM_CASE(SND_BANK_SPC_PA_AR2);
    ENUM_CASE(SND_BANK_SPC_PA_CD);
    ENUM_CASE(SND_BANK_SPC_PA_CD2);
    ENUM_CASE(SND_BANK_SPC_PA_CF);
    ENUM_CASE(SND_BANK_SPC_PA_CF2);
    ENUM_CASE(SND_BANK_SPC_PA_CG);
    ENUM_CASE(SND_BANK_SPC_PA_CG2);
    ENUM_CASE(SND_BANK_SPC_PA_CR);
    ENUM_CASE(SND_BANK_SPC_PA_CR2);
    ENUM_CASE(SND_BANK_SPC_PA_PG);
    ENUM_CASE(SND_BANK_SPC_PA_PG2);
    ENUM_CASE(SND_BANK_SPC_PA_PR);
    ENUM_CASE(SND_BANK_SPC_PA_PR2);
    ENUM_CASE(SND_BANK_SPC_PA_WG);
    ENUM_CASE(SND_BANK_SPC_PA_WG2);
    ENUM_CASE(SND_BANK_SPC_PA_WR);
    ENUM_CASE(SND_BANK_SPC_PA_WR2);
    }
#undef ENUM_CASE
    return std::nullopt;
}
