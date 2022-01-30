 modded class PlayerBase // modded keyword for modding existing class
{
	
   // --- HACK
   // @Aherys
   // Reduce durability of the item in hand after the death of a player.
   // --- Config
   // Damage to apply is a multiplier of MaxHealth to scale with the amount of health of an item.
	
	private void DamageBadlyThisWeapon(ItemBase TargetItem) 
	{
		float DamageToApply = Math.RandomFloat(0, 1) * TargetItem.GetMaxHealth();
		
		if (TargetItem && TargetItem.IsWeapon())
	      {
			Print("---------------------------------");
			Print("--- Health : "+ TargetItem.GetHealth() +" --- Damaging :" +  DamageToApply + "/" + TargetItem.GetMaxHealth());
	          TargetItem.DecreaseHealth("","", DamageToApply);
			Print("--- Final Health : "+ TargetItem.GetHealth());
			Print("---------------------------------");
	      }
	}
	
    override void EEKilled( Object killer ) // Override when the player is killed
    {
        
		DamageBadlyThisWeapon(GetItemInHands());
		DamageBadlyThisWeapon(GetItemOnSlot("Shoulder"));
		DamageBadlyThisWeapon(GetItemOnSlot("Melee"));
        
        super.EEKilled( killer );
    }
}