#ifndef PARTY2_H
#define PARTY2_H

// needs defines from define.h, so included late

procedure party_size_humans begin
   variable n := 0, type, who;
   foreach who in party_member_list_critters begin
      type := critter_kill_type(who);
      if type == KILL_TYPE_men_kills or type == KILL_TYPE_women_kills then n+=1;
   end
   return n;
end

#endif // PARTY2_H
