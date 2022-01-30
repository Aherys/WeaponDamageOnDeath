class CfgPatches
{
 class WeaponBreakOnDie
 {
  requiredAddons[]=
  {
    // ""
  };
 }
}
class CfgMods
{
 class WeaponBreakOnDie
 {
  type = "mod";
  
  class defs
  {
   class worldScriptModule
   {
    value = "";
    files[] = {"WeaponBreakOnDie/WorldScripts"};
   }
  }
 }
}