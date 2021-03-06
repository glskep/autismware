#pragma once

namespace callbacks {
	void SkinUpdate();
	void ForceFullUpdate();
	void ToggleThirdPerson();
	void ToggleLeft();
	bool ToggleDamage();
	void ToggleRight();
	void ToggleBack();
	void ToggleFakeLatency();
	void ToggleKillfeed();
	void SaveHotkeys();
	void ConfigLoad1();
	void ConfigLoad2();
	void ConfigLoad3();
	void ConfigLoad4();
	void ConfigLoad5();
	void ConfigLoad6();
	void ConfigLoad();
	void HiddenCvar();
	void ConfigSave();

	bool IsShotchamsOn();
	bool IsOvrFovOn();
	bool IsOvrViewOn();
	bool IsShowSpreadOn();
	bool IsDroppedOn();
	bool IsDroppedDistOn();
	bool IsDroppedAmmoOn();
	bool IsProjOn();
	bool IsMollyOn();
	bool IsSmokeOn();
	bool IsPenDotOn();
	bool IsTracersOn();
	bool IsAmmoOn();
	bool IsLbyUpdateOn();
	bool IsOffScreenOn();
	bool IsBtChamsOn();
	bool IsFakeLagOn();
	bool IsManAAOn();
	bool IsFakeChamsOn();
	bool IsForceTurnOff();
	bool IsBoxEnemy();
	bool IsNameOn();
	bool IsBuyBotOn();
	bool IsWeaponESPOn();
	bool IsHealthESPOn();
	bool IsBoxFriendly();
	bool IsWeaponGeneral();
	bool IsWeaponNotGeneral();
	bool IsWeaponAuto();
	bool IsWeaponAWP();
	bool IsWeaponScout();
	bool IsWeaponPistol();
	bool IsBaimHealth();
	bool IsAfterMisses();
	bool IsFovOn();
	bool IsHitchanceOnGeneral();
	bool IsHitchanceOnAuto();
	bool IsDTHitchanceOnAuto();
	bool IsHitchanceOnAWP();
	bool IsHitchanceOnScout();
	bool IsHitchanceOnPistols();
	bool IsDTHitchanceOnPistols();
	bool IsCustomOn();

	bool IsPenetrationOnGeneral();
	bool IsMultipointOnGeneral();
	bool IsMultipointBodyOnGeneral();

	bool IsPenetrationOnAuto();
	bool IsMultipointOnAuto();
	bool IsMultipointBodyOnAuto();

	bool IsPenetrationOnAWP();
	bool IsMultipointOnAWP();
	bool IsMultipointBodyOnAWP();

	bool IsPenetrationOnScout();
	bool IsMultipointOnScout();
	bool IsMultipointBodyOnScout();

	bool IsPenetrationOnPistols();
	bool IsMultipointOnPistols();
	bool IsMultipointBodyOnPistols();

	bool IsBaimHealth();
	bool IsAfterMisses();
	bool IsFovOn();
	bool IsAntiAimModeStand();
	bool IsExploitLBYEnabled();
	bool IsTwistLBYEnabled();
	bool IsDistortOn();
	bool IsForceTurnOn();
	bool IsZeusbotOn();
	bool HasStandYaw();
	bool IsStandYawJitter();
	bool IsStandYawRotate();
	bool IsStandYawRnadom();
	bool IsStandDirAuto();
	bool IsStandDirCustom();
	bool IsLBYBreakOn();
	bool IsAntiAimModeWalk();
	bool WalkHasYaw();
	bool IsWalkYawJitter();
	bool IsWalkYawRotate();
	bool IsWalkYawRandom();
	bool IsWalkDirAuto();
	bool IsWalkDirCustom();
	bool IsAntiAimModeAir();
	bool AirHasYaw();
	bool IsModelscaleOn();

	bool IsAirYawJitter();
	bool IsAirYawRotate();
	bool IsAirYawRandom();
	bool IsAirDirAuto();
	bool IsAirDirCustom();
	bool IsFakeAntiAimRelative();
	bool IsFakeAntiAimJitter();
	bool IsNightMode();
	bool IsSkeletonEnemy();
	bool IsSkeletonFriendly();
	bool IsGlowEnemy();
	bool IsGlowFriendly();
	bool IsGlowOn();

	bool IsConfig1();
	bool IsConfig2();
	bool IsConfig3();
	bool IsConfig4();
	bool IsConfig5();
	bool IsConfig6();


	bool IsDamageVisibleGeneral();
	bool IsDamageInVisibleGeneral();

	bool IsDamageVisibleAuto();
	bool IsDamageInVisibleAuto();

	bool IsDamageVisibleAWP();
	bool IsDamageInVisibleAWP();

	bool IsDamageVisibleScout();
	bool IsDamageInVisibleScout();

	bool IsDamageVisiblePistols();
	bool IsDamageInVisiblePistols();

	bool IsTransparentProps();
	bool IsSkyBoxChange();

	bool IsCustomLby();

	// weapon cfgs.
	bool DEAGLE();
	bool ELITE();
	bool FIVESEVEN();
	bool GLOCK();
	bool AK47();
	bool AUG();
	bool AWP();
	bool FAMAS();
	bool G3SG1();
	bool GALIL();
	bool M249();
	bool M4A4();
	bool MAC10();
	bool P90();
	bool UMP45();
	bool XM1014();
	bool BIZON();
	bool MAG7();
	bool NEGEV();
	bool SAWEDOFF();
	bool TEC9();
	bool P2000();
	bool MP7();
	bool MP9();
	bool NOVA();
	bool P250();
	bool SCAR20();
	bool SG553();
	bool SSG08();
	bool M4A1S();
	bool USPS();
	bool CZ75A();
	bool REVOLVER();
	bool KNIFE_BAYONET();
	bool KNIFE_FLIP();
	bool KNIFE_GUT();
	bool KNIFE_KARAMBIT();
	bool KNIFE_M9_BAYONET();
	bool KNIFE_HUNTSMAN();
	bool KNIFE_FALCHION();
	bool KNIFE_BOWIE();
	bool KNIFE_BUTTERFLY();
	bool KNIFE_SHADOW_DAGGERS();
	bool AUTO_STOP();
	bool IsOverrideDamage();
	bool IsOptifineBound();
	bool IsFwBound();
	bool IsThirdPersonBound();
	bool IsDTBound();

	void ToggleDMG();
	void ToggleDT();

	bool IsEnemyChams();
	bool IsFriendlyChams();
	bool IsLocalChams();
	bool IsFakeChams();
	bool HasDistortion();

} 