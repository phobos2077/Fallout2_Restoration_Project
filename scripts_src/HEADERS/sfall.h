//Recognised modes for set_shader_mode and get_game_mode
#define WORLDMAP   (0x1)
#define LOCALMAP   (0x2) //No point hooking this: would always be 1 at any point at which scripts are running
#define DIALOG     (0x4)
#define ESCMENU    (0x8)
#define SAVEGAME   (0x10)
#define LOADGAME   (0x20)
#define COMBAT     (0x40)
#define OPTIONS    (0x80)
#define HELP       (0x100)
#define CHARSCREEN (0x200)
#define PIPBOY     (0x400)
#define PCOMBAT    (0x800)
#define INVENTORY  (0x1000)
#define AUTOMAP    (0x2000)
#define SKILLDEX   (0x4000)

//Valid arguments to register_hook
#define HOOK_TOHIT           (0)
#define HOOK_AFTERHITROLL    (1)
#define HOOK_CALCAPCOST      (2)
#define HOOK_DEATHANIM1      (3)
#define HOOK_DEATHANIM2      (4)
#define HOOK_COMBATDAMAGE    (5)
#define HOOK_ONDEATH         (6)
#define HOOK_FINDTARGET      (7)
#define HOOK_USEOBJON        (8)
#define HOOK_REMOVEINVENOBJ  (9)
#define HOOK_BARTERPRICE     (10)
#define HOOK_MOVECOST        (11)
#define HOOK_HEXMOVEBLOCKING (12)
#define HOOK_HEXAIBLOCKING   (13)
#define HOOK_HEXSHOOTBLOCKING (14)
#define HOOK_HEXSIGHTBLOCKING (15)
#define HOOK_ITEMDAMAGE      (16)

//Valid arguments to list_begin
#define LIST_CRITTERS    (0)
#define LIST_GROUNDITEMS (1)
#define LIST_SCENERY     (2)
#define LIST_WALLS       (3)
//#define LIST_TILES       (4) //Not listable via sfall list functions
#define LIST_MISC        (5)
#define LIST_ALL         (9)

//Valid flags for force_encounter_with_flags
#define ENCOUNTER_FLAG_NO_CAR (1)

//The attack types returned by get_attack_type
#define ATKTYPE_LWEP1           (0)
#define ATKTYPE_LWEP2           (1)
#define ATKTYPE_RWEP1           (2)
#define ATKTYPE_RWEP2           (3)
#define ATKTYPE_PUNCH           (4)
#define ATKTYPE_KICK            (5)
#define ATKTYPE_LWEP_RELOAD     (6)
#define ATKTYPE_RWEP_RELOAD     (7)
#define ATKTYPE_STRONGPUNCH     (8)
#define ATKTYPE_HAMMERPUNCH     (9)
#define ATKTYPE_HAYMAKER       (10)
#define ATKTYPE_JAB            (11)
#define ATKTYPE_PALMSTRIKE     (12)
#define ATKTYPE_PIERCINGSTRIKE (13)
#define ATKTYPE_STRONGKICK     (14)
#define ATKTYPE_SNAPKICK       (15)
#define ATKTYPE_POWERKICK      (16)
#define ATKTYPE_HIPKICK        (17)
#define ATKTYPE_HOOKKICK       (18)
#define ATKTYPE_PIERCINGKICK   (19)

//Some possible values for the 4th argument to hs_removeinvobj
#define RMOBJ_DROP      (0x49B875)  //If the object is dropped manually by the player from the inventory screen
#define RMOBJ_TRADE     (0x47761D)  //If the object is offered up as a trade
#define RMOBJ_DROPMULTI (0x45C1CF)  //When dropping a part of a stack (RMOBJ_DROP occures first)

