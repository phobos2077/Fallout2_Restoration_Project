// common functions for all Sierra maps and actors.

#ifndef DEPOLVZ_H
#define DEPOLVZ_H

procedure sierra_set_klaxons_on begin
  variable s;
  foreach s in list_as_array(LIST_SCENERY) begin
    if obj_pid(s) == PID_NS_LIGHT then begin
      create_object_sid(PID_NS_FLASHING_LIGHT, tile_num(s), elevation(s), SCRIPT_WSKLAXON);
      destroy_object(s);
    end
    if obj_pid(s) == PID_EW_LIGHT then begin
      create_object_sid(PID_EW_FLASHING_LIGHT, tile_num(s), elevation(s), SCRIPT_WSKLAXON);
      destroy_object(s);
    end
  end
end
procedure sierra_set_klaxons_off begin
  variable s;
  foreach s in list_as_array(LIST_SCENERY) begin
    if obj_pid(s) == PID_NS_FLASHING_LIGHT then begin
      create_object_sid(PID_NS_LIGHT, tile_num(s), elevation(s), SCRIPT_WSKLAXON);
      destroy_object(s);
    end
    if obj_pid(s) == PID_EW_FLASHING_LIGHT then begin
      create_object_sid(PID_EW_LIGHT, tile_num(s), elevation(s), SCRIPT_WSKLAXON);
      destroy_object(s);
    end
  end
end

#define sierra_set_security_on \
  set_global_var(GVAR_SIERRA_BASE_SECURITY, SIERRA_SECURITY_ON); \
  call sierra_set_klaxons_on

#define sierra_set_security_off \
  set_global_var(GVAR_SIERRA_BASE_SECURITY, SIERRA_SECURITY_OFF); \
  call sierra_set_klaxons_off

#define sierra_security_on (global_var(GVAR_SIERRA_BASE_SECURITY) == SIERRA_SECURITY_ON)
#define sierra_security_off (global_var(GVAR_SIERRA_BASE_SECURITY) == SIERRA_SECURITY_OFF)

#define sierra_update_klaxons \
  if sierra_security_on then call sierra_set_klaxons_on; \
  else call sierra_set_klaxons_off

#endif // DEPOLVZ_H
