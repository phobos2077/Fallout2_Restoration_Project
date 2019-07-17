#define NAME "rpu"
#define rpu_ini "mods\\rpu.ini"
#define ndebug(message) debug_msg(NAME + ": " + message + "\n")
#define sec_main "main"
#define rpu_setting(section, setting) get_ini_setting(rpu_ini + "|" + section + "|" + setting)
#define rpu_string(section, setting) get_ini_string(rpu_ini + "|" + section + "|" + setting)
#define rpu_msetting(setting) get_ini_setting(rpu_ini + "|" + sec_main + "|" + setting)

#define set_marcus_armor "marcus_armor"
#define set_dogmeat_armor "dogmeat_armor"
