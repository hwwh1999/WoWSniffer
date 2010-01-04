#include <iostream>
std::string getspellbyid(int spell)
{
std::string spellname;
switch (spell)
  {
  case 1:
    spellname = "Word of Recall (OLD)";
    break;
  case 3:
    spellname = "Word of Mass Recall (OLD)";
    break;
  case 4:
    spellname = "Word of Recall Other";
    break;
  case 5:
    spellname = "Death Touch";
    break;
  case 7:
    spellname = "Suicide";
    break;
  case 10:
    spellname = "Blizzard";
    break;
  case 11:
    spellname = "Frostbolt of Ages";
    break;
  case 12:
    spellname = "Hot Foot (TEST)";
    break;
  case 13:
    spellname = "Swim Speed (TEST)";
    break;
  case 14:
    spellname = "Mana Drain";
    break;
  case 15:
    spellname = "Leech (TEST)";
    break;
  case 17:
    spellname = "Power Word: Shield";
    break;
  case 18:
    spellname = "Heal Self (TEST)";
    break;
  case 22:
    spellname = "Super Food (TEST)";
    break;
  case 24:
    spellname = "Major Heal Self (TEST)";
    break;
  case 25:
    spellname = "Stun";
    break;
  case 26:
    spellname = "Bind Self (TEST)";
    break;
  case 27:
    spellname = "Goldshire Portal";
    break;
  case 31:
    spellname = "Teleport Goldshire";
    break;
  case 33:
    spellname = "Teleport Westfall";
    break;
  case 34:
    spellname = "Teleport Duskwood";
    break;
  case 35:
    spellname = "Teleport Elwynn";
    break;
  case 43:
    spellname = "Berserk";
    break;
  case 45:
    spellname = "War Stomp";
    break;
  case 47:
    spellname = "Sprint (TEST)";
    break;
  case 49:
    spellname = "Healing Touch (TEST)";
    break;
  case 50:
    spellname = "Show Dot Variable";
    break;
  case 53:
    spellname = "Backstab";
    break;
  case 56:
    spellname = "Stun";
    break;
  case 58:
    spellname = "Magic Missile (TEST)";
    break;
  case 59:
    spellname = "Normal bow shot (TEST)";
    break;
  case 60:
    spellname = "Long bow shot (TEST)";
    break;
  case 61:
    spellname = "Really Long bow shot (TEST)";
    break;
  case 65:
    spellname = "Haste";
    break;
  case 66:
    spellname = "Invisibility";
    break;
  case 67:
    spellname = "Vindication";
    break;
  case 68:
    spellname = "Editor Test Spell";
    break;
  case 71:
    spellname = "Defensive Stance";
    break;
  case 72:
    spellname = "Shield Bash";
    break;
  case 75:
    spellname = "Auto Shot";
    break;
  case 77:
    spellname = "Turtle's Shell";
    break;
  case 78:
    spellname = "Heroic Strike";
    break;
  case 81:
    spellname = "Dodge";
    break;
  case 87:
    spellname = "Automation Mechanic Immunity";
    break;
  case 89:
    spellname = "Cripple";
    break;
  case 91:
    spellname = "Savage Assault";
    break;
  case 96:
    spellname = "Dismember";
    break;
  case 99:
    spellname = "Demoralizing Roar";
    break;
  case 100:
    spellname = "Charge";
    break;
  case 101:
    spellname = "Trip";
    break;
  case 107:
    spellname = "Block";
    break;
  case 108:
    spellname = "Evade (DND)";
    break;
  case 110:
    spellname = "Spell Deflection (NYI)";
    break;
  case 111:
    spellname = "Time Step";
    break;
  case 112:
    spellname = "Reflect Magic (TEST)";
    break;
  case 113:
    spellname = "Chains of Ice";
    break;
  case 116:
    spellname = "Frostbolt";
    break;
  case 118:
    spellname = "Polymorph";
    break;
  case 120:
    spellname = "Cone of Cold";
    break;
  case 122:
    spellname = "Frost Nova";
    break;
  case 126:
    spellname = "Eye of Kilrogg";
    break;
  case 128:
    spellname = "Spellstone";
    break;
  case 130:
    spellname = "Slow Fall";
    break;
  case 131:
    spellname = "Water Breathing";
    break;
  case 132:
    spellname = "Detect Invisibility";
    break;
  case 133:
    spellname = "Fireball";
    break;
  case 134:
    spellname = "Fire Shield";
    break;
  case 136:
    spellname = "Mend Pet";
    break;
  case 139:
    spellname = "Renew";
    break;
  case 142:
    spellname = "New Magic Missile (Test)";
    break;
  case 143:
    spellname = "Fireball";
    break;
  case 145:
    spellname = "Fireball";
    break;
  case 168:
    spellname = "Frost Armor";
    break;
  case 172:
    spellname = "Corruption";
    break;
  case 184:
    spellname = "Fire Shield II";
    break;
  case 196:
    spellname = "One-Handed Axes";
    break;
  case 197:
    spellname = "Two-Handed Axes";
    break;
  case 198:
    spellname = "One-Handed Maces";
    break;
  case 199:
    spellname = "Two-Handed Maces";
    break;
  case 200:
    spellname = "Polearms";
    break;
  case 201:
    spellname = "One-Handed Swords";
    break;
  case 202:
    spellname = "Two-Handed Swords";
    break;
  case 203:
    spellname = "Unarmed";
    break;
  case 204:
    spellname = "Defense";
    break;
  case 205:
    spellname = "Frostbolt";
    break;
  case 227:
    spellname = "Staves";
    break;
  case 228:
    spellname = "Polymorph: Chicken";
    break;
  case 246:
    spellname = "Slow";
    break;
  case 260:
    spellname = "Charm (TEST)";
    break;
  case 261:
    spellname = "Summon Skeleton";
    break;
  case 264:
    spellname = "Bows";
    break;
  case 265:
    spellname = "Area Death (TEST)";
    break;
  case 266:
    spellname = "Guns";
    break;
  case 269:
    spellname = "Walk of Fire Trigger (DNC)";
    break;
  case 271:
    spellname = "Call of the Void";
    break;
  case 284:
    spellname = "Heroic Strike";
    break;
  case 285:
    spellname = "Heroic Strike";
    break;
  case 324:
    spellname = "Lightning Shield";
    break;
  case 325:
    spellname = "Lightning Shield";
    break;
  case 331:
    spellname = "Healing Wave";
    break;
  case 332:
    spellname = "Healing Wave";
    break;
  case 339:
    spellname = "Entangling Roots";
    break;
  case 348:
    spellname = "Immolate";
    break;
  case 355:
    spellname = "Taunt";
    break;
  case 370:
    spellname = "Purge";
    break;
  case 379:
    spellname = "Earth Shield";
    break;
  case 403:
    spellname = "Lightning Bolt";
    break;
  case 408:
    spellname = "Kidney Shot";
    break;
  case 421:
    spellname = "Chain Lightning";
    break;
  case 427:
    spellname = "Teleport Monastery";
    break;
  case 428:
    spellname = "Teleport Moonbrook";
    break;
  case 430:
    spellname = "Drink";
    break;
  case 431:
    spellname = "Drink";
    break;
  case 432:
    spellname = "Drink";
    break;
  case 433:
    spellname = "Food";
    break;
  case 434:
    spellname = "Food";
    break;
  case 435:
    spellname = "Food";
    break;
  case 436:
    spellname = "Restore Mana";
    break;
  case 437:
    spellname = "Restore Mana";
    break;
  case 438:
    spellname = "Restore Mana";
    break;
  case 439:
    spellname = "Healing Potion";
    break;
  case 440:
    spellname = "Healing Potion";
    break;
  case 441:
    spellname = "Healing Potion";
    break;
  case 442:
    spellname = "Teleport Northshire Abbey";
    break;
  case 443:
    spellname = "Teleport Barracks";
    break;
  case 444:
    spellname = "Teleport Lighthouse";
    break;
  case 445:
    spellname = "Teleport Darkshire";
    break;
  case 446:
    spellname = "Teleport Cemetary";
    break;
  case 447:
    spellname = "Teleport Treant";
    break;
  case 448:
    spellname = "Editor test spell 2";
    break;
  case 450:
    spellname = "Fast Cast (NYI)";
    break;
  case 453:
    spellname = "Mind Soothe";
    break;
  case 454:
    spellname = "Gallop (TEST)";
    break;
  case 456:
    spellname = "SHOWLABEL Only OFF";
    break;
  case 457:
    spellname = "Feeblemind";
    break;
  case 458:
    spellname = "Brown Horse";
    break;
  case 459:
    spellname = "Gray Wolf";
    break;
  case 461:
    spellname = "Righteous Flame On";
    break;
  case 463:
    spellname = "Aura Overlap TEST 1";
    break;
  case 464:
    spellname = "Aura Overlap TEST 2";
    break;
  case 465:
    spellname = "Devotion Aura";
    break;
  case 467:
    spellname = "Thorns";
    break;
  case 468:
    spellname = "White Stallion";
    break;
  case 469:
    spellname = "Commanding Shout";
    break;
  case 470:
    spellname = "Black Stallion";
    break;
  case 471:
    spellname = "Palamino Stallion";
    break;
  case 472:
    spellname = "Pinto Horse";
    break;
  case 475:
    spellname = "Remove Lesser Curse";
    break;
  case 483:
    spellname = "Learning";
    break;
  case 491:
    spellname = "Khadgar's Unlocking";
    break;
  case 498:
    spellname = "Divine Protection";
    break;
  case 512:
    spellname = "Chains of Ice";
    break;
  case 514:
    spellname = "Wyatt Test";
    break;
  case 518:
    spellname = "Summon Worm";
    break;
  case 522:
    spellname = "SPELLDEFENSE (DND)";
    break;
  case 526:
    spellname = "Cure Poison";
    break;
  case 527:
    spellname = "Dispel Magic";
    break;
  case 528:
    spellname = "Cure Disease";
    break;
  case 529:
    spellname = "Lightning Bolt";
    break;
  case 530:
    spellname = "Charm (Possess)";
    break;
  case 543:
    spellname = "Fire Ward";
    break;
  case 546:
    spellname = "Water Walking";
    break;
  case 547:
    spellname = "Healing Wave";
    break;
  case 548:
    spellname = "Lightning Bolt";
    break;
  case 550:
    spellname = "Nullify Poison";
    break;
  case 552:
    spellname = "Abolish Disease";
    break;
  case 553:
    spellname = "Wavestorm 2";
    break;
  case 555:
    spellname = "Feral Spirit";
    break;
  case 556:
    spellname = "Astral Recall";
    break;
  case 563:
    spellname = "Moonfire";
    break;
  case 568:
    spellname = "Arcane Burst";
    break;
  case 578:
    spellname = "Black Wolf";
    break;
  case 579:
    spellname = "Red Wolf";
    break;
  case 580:
    spellname = "Large Timber Wolf";
    break;
  case 581:
    spellname = "Winter Wolf";
    break;
  case 585:
    spellname = "Smite";
    break;
  case 586:
    spellname = "Fade";
    break;
  case 587:
    spellname = "Conjure Food";
    break;
  case 588:
    spellname = "Inner Fire";
    break;
  case 589:
    spellname = "Shadow Word: Pain";
    break;
  case 591:
    spellname = "Smite";
    break;
  case 592:
    spellname = "Power Word: Shield";
    break;
  case 594:
    spellname = "Shadow Word: Pain";
    break;
  case 596:
    spellname = "Prayer of Healing";
    break;
  case 597:
    spellname = "Conjure Food";
    break;
  case 598:
    spellname = "Smite";
    break;
  case 600:
    spellname = "Power Word: Shield";
    break;
  case 601:
    spellname = "Sword Mastery";
    break;
  case 602:
    spellname = "Inner Fire";
    break;
  case 603:
    spellname = "Curse of Doom";
    break;
  case 604:
    spellname = "Dampen Magic";
    break;
  case 605:
    spellname = "Mind Control";
    break;
  case 606:
    spellname = "Mind Rot";
    break;
  case 633:
    spellname = "Lay on Hands";
    break;
  case 635:
    spellname = "Holy Light";
    break;
  case 639:
    spellname = "Holy Light";
    break;
  case 642:
    spellname = "Divine Shield";
    break;
  case 643:
    spellname = "Devotion Aura";
    break;
  case 647:
    spellname = "Holy Light";
    break;
  case 668:
    spellname = "Language Common";
    break;
  case 669:
    spellname = "Language Orcish";
    break;
  case 670:
    spellname = "Language Taurahe";
    break;
  case 671:
    spellname = "Language Darnassian";
    break;
  case 672:
    spellname = "Language Dwarven";
    break;
  case 673:
    spellname = "Lesser Armor";
    break;
  case 674:
    spellname = "Dual Wield";
    break;
  case 676:
    spellname = "Disarm";
    break;
  case 686:
    spellname = "Shadow Bolt";
    break;
  case 687:
    spellname = "Demon Skin";
    break;
  case 688:
    spellname = "Summon Imp";
    break;
  case 689:
    spellname = "Drain Life";
    break;
  case 691:
    spellname = "Summon Felhunter";
    break;
  case 692:
    spellname = "Terror (TEST)";
    break;
  case 693:
    spellname = "Create Soulstone";
    break;
  case 694:
    spellname = "Mocking Blow";
    break;
  case 695:
    spellname = "Shadow Bolt";
    break;
  case 696:
    spellname = "Demon Skin";
    break;
  case 697:
    spellname = "Summon Voidwalker";
    break;
  case 698:
    spellname = "Ritual of Summoning";
    break;
  case 699:
    spellname = "Drain Life";
    break;
  case 700:
    spellname = "Sleep";
    break;
  case 701:
    spellname = "Firebolt";
    break;
  case 702:
    spellname = "Curse of Weakness";
    break;
  case 703:
    spellname = "Garrote";
    break;
  case 704:
    spellname = "Curse of Recklessness";
    break;
  case 705:
    spellname = "Shadow Bolt";
    break;
  case 706:
    spellname = "Demon Armor";
    break;
  case 707:
    spellname = "Immolate";
    break;
  case 709:
    spellname = "Drain Life";
    break;
  case 710:
    spellname = "Banish";
    break;
  case 712:
    spellname = "Summon Succubus";
    break;
  case 720:
    spellname = "Entangle";
    break;
  case 724:
    spellname = "Lightwell";
    break;
  case 731:
    spellname = "Entangle";
    break;
  case 739:
    spellname = "Debuff Fire Resist (TEST)";
    break;
  case 740:
    spellname = "Tranquility";
    break;
  case 742:
    spellname = "Pulverize";
    break;
  case 744:
    spellname = "Poison";
    break;
  case 745:
    spellname = "Web";
    break;
  case 746:
    spellname = "First Aid";
    break;
  case 747:
    spellname = "Summon Images";
    break;
  case 750:
    spellname = "Plate Mail";
    break;
  case 755:
    spellname = "Health Funnel";
    break;
  case 758:
    spellname = "Firestone Passive";
    break;
  case 759:
    spellname = "Conjure Mana Agate";
    break;
  case 768:
    spellname = "Cat Form";
    break;
  case 769:
    spellname = "Swipe";
    break;
  case 770:
    spellname = "Faerie Fire";
    break;
  case 772:
    spellname = "Rend";
    break;
  case 774:
    spellname = "Rejuvenation";
    break;
  case 778:
    spellname = "Faerie Fire";
    break;
  case 779:
    spellname = "Swipe";
    break;
  case 780:
    spellname = "Swipe";
    break;
  case 781:
    spellname = "Disengage";
    break;
  case 782:
    spellname = "Thorns";
    break;
  case 783:
    spellname = "Travel Form";
    break;
  case 785:
    spellname = "True Fulfillment";
    break;
  case 799:
    spellname = "Twin Teleport";
    break;
  case 800:
    spellname = "Twin Teleport";
    break;
  case 802:
    spellname = "Mutate Bug";
    break;
  case 804:
    spellname = "Explode Bug";
    break;
  case 806:
    spellname = "Fervor";
    break;
  case 812:
    spellname = "Periodic Mana Burn";
    break;
  case 813:
    spellname = "Language Thalassian";
    break;
  case 814:
    spellname = "Language Draconic (NYI)";
    break;
  case 815:
    spellname = "Language Demon Tongue";
    break;
  case 816:
    spellname = "Language Titan (NYI)";
    break;
  case 817:
    spellname = "Language Old Tongue (NYI)";
    break;
  case 818:
    spellname = "Basic Campfire";
    break;
  case 822:
    spellname = "Magic Resistance";
    break;
  case 823:
    spellname = "Natural Resistance";
    break;
  case 824:
    spellname = "Horse Riding";
    break;
  case 825:
    spellname = "Wolf Riding";
    break;
  case 826:
    spellname = "Ram Riding";
    break;
  case 827:
    spellname = "Nightmare Riding";
    break;
  case 828:
    spellname = "Tiger Riding";
    break;
  case 829:
    spellname = "Thickskull";
    break;
  case 830:
    spellname = "Fearless";
    break;
  case 831:
    spellname = "Swimming (NYI)";
    break;
  case 833:
    spellname = "Green Tea";
    break;
  case 834:
    spellname = "Lesser Armor";
    break;
  case 835:
    spellname = "Tidal Charm";
    break;
  case 836:
    spellname = "LOGINEFFECT";
    break;
  case 837:
    spellname = "Frostbolt";
    break;
  case 845:
    spellname = "Cleave";
    break;
  case 851:
    spellname = "Polymorph: Sheep";
    break;
  case 853:
    spellname = "Hammer of Justice";
    break;
  case 857:
    spellname = "Khadgar's Unlocking";
    break;
  case 865:
    spellname = "Frost Nova";
    break;
  case 871:
    spellname = "Shield Wall";
    break;
  case 879:
    spellname = "Exorcism";
    break;
  case 883:
    spellname = "Call Pet";
    break;
  case 897:
    spellname = "Summon Angry Programmer";
    break;
  case 898:
    spellname = "Create Fervor Potion";
    break;
  case 905:
    spellname = "Lightning Shield";
    break;
  case 913:
    spellname = "Healing Wave";
    break;
  case 915:
    spellname = "Lightning Bolt";
    break;
  case 921:
    spellname = "Pick Pocket";
    break;
  case 930:
    spellname = "Chain Lightning";
    break;
  case 932:
    spellname = "Replenish Spirit II";
    break;
  case 939:
    spellname = "Healing Wave";
    break;
  case 943:
    spellname = "Lightning Bolt";
    break;
  case 945:
    spellname = "Lightning Shield";
    break;
  case 959:
    spellname = "Healing Wave";
    break;
  case 970:
    spellname = "Shadow Word: Pain";
    break;
  case 974:
    spellname = "Earth Shield";
    break;
  case 976:
    spellname = "Shadow Protection";
    break;
  case 980:
    spellname = "Curse of Agony";
    break;
  case 982:
    spellname = "Revive Pet";
    break;
  case 984:
    spellname = "Smite";
    break;
  case 988:
    spellname = "Dispel Magic";
    break;
  case 990:
    spellname = "Conjure Food";
    break;
  case 992:
    spellname = "Shadow Word: Pain";
    break;
  case 996:
    spellname = "Prayer of Healing";
    break;
  case 1002:
    spellname = "Eyes of the Beast";
    break;
  case 1004:
    spellname = "Smite";
    break;
  case 1006:
    spellname = "Inner Fire";
    break;
  case 1008:
    spellname = "Amplify Magic";
    break;
  case 1010:
    spellname = "Curse of Idiocy";
    break;
  case 1014:
    spellname = "Curse of Agony";
    break;
  case 1020:
    spellname = "Divine Shield";
    break;
  case 1022:
    spellname = "Blessing of Protection";
    break;
  case 1026:
    spellname = "Holy Light";
    break;
  case 1032:
    spellname = "Devotion Aura";
    break;
  case 1038:
    spellname = "Blessing of Salvation";
    break;
  case 1042:
    spellname = "Holy Light";
    break;
  case 1044:
    spellname = "Blessing of Freedom";
    break;
  case 1050:
    spellname = "Sacrifice";
    break;
  case 1058:
    spellname = "Rejuvenation";
    break;
  case 1062:
    spellname = "Entangling Roots";
    break;
  case 1064:
    spellname = "Chain Heal";
    break;
  case 1066:
    spellname = "Aquatic Form";
    break;
  case 1075:
    spellname = "Thorns";
    break;
  case 1079:
    spellname = "Rip";
    break;
  case 1082:
    spellname = "Claw";
    break;
  case 1086:
    spellname = "Demon Armor";
    break;
  case 1088:
    spellname = "Shadow Bolt";
    break;
  case 1090:
    spellname = "Sleep";
    break;
  case 1094:
    spellname = "Immolate";
    break;
  case 1098:
    spellname = "Enslave Demon";
    break;
  case 1106:
    spellname = "Shadow Bolt";
    break;
  case 1108:
    spellname = "Curse of Weakness";
    break;
  case 1120:
    spellname = "Drain Soul";
    break;
  case 1121:
    spellname = "Entangle";
    break;
  case 1122:
    spellname = "Inferno";
    break;
  case 1126:
    spellname = "Mark of the Wild";
    break;
  case 1127:
    spellname = "Food";
    break;
  case 1129:
    spellname = "Food";
    break;
  case 1130:
    spellname = "Hunter's Mark";
    break;
  case 1131:
    spellname = "Food";
    break;
  case 1132:
    spellname = "Critical Strike";
    break;
  case 1133:
    spellname = "Drink";
    break;
  case 1135:
    spellname = "Drink";
    break;
  case 1137:
    spellname = "Drink";
    break;
  case 1138:
    spellname = "Crystal Protection";
    break;
  case 1139:
    spellname = "Cold Eye";
    break;
  case 1152:
    spellname = "Purify";
    break;
  case 1159:
    spellname = "First Aid";
    break;
  case 1160:
    spellname = "Demoralizing Shout";
    break;
  case 1161:
    spellname = "Challenging Shout";
    break;
  case 1178:
    spellname = "Bear Form (Passive)";
    break;
  case 1180:
    spellname = "Daggers";
    break;
  case 1206:
    spellname = "REUSE";
    break;
  case 1234:
    spellname = "Brilliance Aura IV";
    break;
  case 1243:
    spellname = "Power Word: Fortitude";
    break;
  case 1244:
    spellname = "Power Word: Fortitude";
    break;
  case 1245:
    spellname = "Power Word: Fortitude";
    break;
  case 1302:
    spellname = "Damage Immunity Test";
    break;
  case 1329:
    spellname = "Mutilate";
    break;
  case 1330:
    spellname = "Garrote - Silence";
    break;
  case 1350:
    spellname = "Feral Spirit";
    break;
  case 1364:
    spellname = "Unyielding Will";
    break;
  case 1373:
    spellname = "Teach Summon Felhunter";
    break;
  case 1386:
    spellname = "Echoes of Lordaeron";
    break;
  case 1413:
    spellname = "Inferno";
    break;
  case 1430:
    spellname = "Rejuvenation";
    break;
  case 1446:
    spellname = "Aquatic Form";
    break;
  case 1449:
    spellname = "Arcane Explosion";
    break;
  case 1454:
    spellname = "Life Tap";
    break;
  case 1455:
    spellname = "Life Tap";
    break;
  case 1456:
    spellname = "Life Tap";
    break;
  case 1459:
    spellname = "Arcane Intellect";
    break;
  case 1460:
    spellname = "Arcane Intellect";
    break;
  case 1461:
    spellname = "Arcane Intellect";
    break;
  case 1462:
    spellname = "Beast Lore";
    break;
  case 1463:
    spellname = "Mana Shield";
    break;
  case 1464:
    spellname = "Slam";
    break;
  case 1485:
    spellname = "Metawheel Boulder";
    break;
  case 1490:
    spellname = "Curse of the Elements";
    break;
  case 1494:
    spellname = "Track Beasts";
    break;
  case 1495:
    spellname = "Mongoose Bite";
    break;
  case 1499:
    spellname = "Freezing Trap";
    break;
  case 1509:
    spellname = "GM Only OFF";
    break;
  case 1510:
    spellname = "Volley";
    break;
  case 1513:
    spellname = "Scare Beast";
    break;
  case 1515:
    spellname = "Tame Beast";
    break;
  case 1516:
    spellname = "Quick Shot";
    break;
  case 1522:
    spellname = "Pet Upgrade (NYI)";
    break;
  case 1528:
    spellname = "Free Master";
    break;
  case 1535:
    spellname = "Fire Nova Totem";
    break;
  case 1536:
    spellname = "Longshot II";
    break;
  case 1538:
    spellname = "Charging";
    break;
  case 1539:
    spellname = "Feed Pet Effect";
    break;
  case 1543:
    spellname = "Flare";
    break;
  case 1557:
    spellname = "Full Speed";
    break;
  case 1579:
    spellname = "Tame Beast";
    break;
  case 1588:
    spellname = "Pet Upgrade";
    break;
  case 1604:
    spellname = "Dazed";
    break;
  case 1608:
    spellname = "Heroic Strike";
    break;
  case 1609:
    spellname = "Ashbringer Buzzsaw";
    break;
  case 1650:
    spellname = "Slowing Strike III";
    break;
  case 1664:
    spellname = "Savage Assault IV";
    break;
  case 1665:
    spellname = "Savage Assault V";
    break;
  case 1666:
    spellname = "Savage Assault";
    break;
  case 1669:
    spellname = "Savage Assault IV";
    break;
  case 1671:
    spellname = "Shield Bash";
    break;
  case 1672:
    spellname = "Shield Bash";
    break;
  case 1680:
    spellname = "Whirlwind";
    break;
  case 1706:
    spellname = "Levitate";
    break;
  case 1710:
    spellname = "Summon Felsteed";
    break;
  case 1714:
    spellname = "Curse of Tongues";
    break;
  case 1715:
    spellname = "Hamstring";
    break;
  case 1719:
    spellname = "Recklessness";
    break;
  case 1725:
    spellname = "Distract";
    break;
  case 1735:
    spellname = "Demoralizing Roar";
    break;
  case 1742:
    spellname = "Cower";
    break;
  case 1747:
    spellname = "Cower";
    break;
  case 1748:
    spellname = "Cower";
    break;
  case 1749:
    spellname = "Cower";
    break;
  case 1750:
    spellname = "Cower";
    break;
  case 1751:
    spellname = "Cower";
    break;
  case 1752:
    spellname = "Sinister Strike";
    break;
  case 1753:
    spellname = "Cower";
    break;
  case 1754:
    spellname = "Cower";
    break;
  case 1755:
    spellname = "Cower";
    break;
  case 1756:
    spellname = "Cower";
    break;
  case 1757:
    spellname = "Sinister Strike";
    break;
  case 1758:
    spellname = "Sinister Strike";
    break;
  case 1759:
    spellname = "Sinister Strike";
    break;
  case 1760:
    spellname = "Sinister Strike";
    break;
  case 1766:
    spellname = "Kick";
    break;
  case 1767:
    spellname = "Kick";
    break;
  case 1768:
    spellname = "Kick";
    break;
  case 1769:
    spellname = "Kick";
    break;
  case 1776:
    spellname = "Gouge";
    break;
  case 1777:
    spellname = "Gouge";
    break;
  case 1784:
    spellname = "Stealth";
    break;
  case 1785:
    spellname = "Stealth";
    break;
  case 1786:
    spellname = "Stealth";
    break;
  case 1787:
    spellname = "Stealth";
    break;
  case 1795:
    spellname = "Disheartening Blow II";
    break;
  case 1796:
    spellname = "Disheartening Blow III";
    break;
  case 1797:
    spellname = "Disheartening Blow IV";
    break;
  case 1798:
    spellname = "Disheartening Blow V";
    break;
  case 1800:
    spellname = "Disheartening Blow II";
    break;
  case 1804:
    spellname = "Pick Lock";
    break;
  case 1809:
    spellname = "Lockpicking";
    break;
  case 1810:
    spellname = "Lockpicking";
    break;
  case 1822:
    spellname = "Rake";
    break;
  case 1823:
    spellname = "Rake";
    break;
  case 1824:
    spellname = "Rake";
    break;
  case 1825:
    spellname = "Lend Pet (NYI)";
    break;
  case 1831:
    spellname = "Blast Wave";
    break;
  case 1833:
    spellname = "Cheap Shot";
    break;
  case 1834:
    spellname = "Gathering Speed";
    break;
  case 1842:
    spellname = "Disarm Trap";
    break;
  case 1844:
    spellname = "Disarming Fury Effect";
    break;
  case 1848:
    spellname = "Divining Chant";
    break;
  case 1850:
    spellname = "Dash";
    break;
  case 1852:
    spellname = "Silenced";
    break;
  case 1853:
    spellname = "Growl";
    break;
  case 1856:
    spellname = "Vanish";
    break;
  case 1857:
    spellname = "Vanish";
    break;
  case 1860:
    spellname = "Safe Fall";
    break;
  case 1881:
    spellname = "Summon Hive'Zara Hatchling";
    break;
  case 1906:
    spellname = "Debilitating Charge";
    break;
  case 1908:
    spellname = "Uber Heal Over Time";
    break;
  case 1936:
    spellname = "Teleport Anvilmar";
    break;
  case 1940:
    spellname = "Rocket Blast";
    break;
  case 1943:
    spellname = "Rupture";
    break;
  case 1949:
    spellname = "Hellfire";
    break;
  case 1950:
    spellname = "Greater Shadow Imp";
    break;
  case 1953:
    spellname = "Blink";
    break;
  case 1966:
    spellname = "Feint";
    break;
  case 1978:
    spellname = "Serpent Sting";
    break;
  case 1991:
    spellname = "Scatter Shot IV";
    break;
  case 2000:
    spellname = "Head Shot";
    break;
  case 2006:
    spellname = "Resurrection";
    break;
  case 2008:
    spellname = "Ancestral Spirit";
    break;
  case 2010:
    spellname = "Resurrection";
    break;
  case 2018:
    spellname = "Blacksmithing";
    break;
  case 2020:
    spellname = "Apprentice Blacksmith";
    break;
  case 2021:
    spellname = "Journeyman Blacksmith";
    break;
  case 2023:
    spellname = "Restore Mana";
    break;
  case 2024:
    spellname = "Healing Potion";
    break;
  case 2048:
    spellname = "Battle Shout";
    break;
  case 2050:
    spellname = "Lesser Heal";
    break;
  case 2052:
    spellname = "Lesser Heal";
    break;
  case 2053:
    spellname = "Lesser Heal";
    break;
  case 2054:
    spellname = "Heal";
    break;
  case 2055:
    spellname = "Heal";
    break;
  case 2060:
    spellname = "Greater Heal";
    break;
  case 2061:
    spellname = "Flash Heal";
    break;
  case 2062:
    spellname = "Earth Elemental Totem";
    break;
  case 2070:
    spellname = "Sap";
    break;
  case 2075:
    spellname = "Searing Totem";
    break;
  case 2090:
    spellname = "Rejuvenation";
    break;
  case 2091:
    spellname = "Rejuvenation";
    break;
  case 2094:
    spellname = "Blind";
    break;
  case 2096:
    spellname = "Mind Vision";
    break;
  case 2098:
    spellname = "Eviscerate";
    break;
  case 2108:
    spellname = "Leatherworking";
    break;
  case 2110:
    spellname = "FIRESTAFF (DND)";
    break;
  case 2118:
    spellname = "Dodge Mastery";
    break;
  case 2119:
    spellname = "Nature Resist";
    break;
  case 2120:
    spellname = "Flamestrike";
    break;
  case 2121:
    spellname = "Flamestrike";
    break;
  case 2123:
    spellname = "Holy Affinity";
    break;
  case 2136:
    spellname = "Fire Blast";
    break;
  case 2137:
    spellname = "Fire Blast";
    break;
  case 2138:
    spellname = "Fire Blast";
    break;
  case 2139:
    spellname = "Counterspell";
    break;
  case 2140:
    spellname = "Stasis Effect";
    break;
  case 2147:
    spellname = "Mending";
    break;
  case 2148:
    spellname = "Periodic Shadow Storm";
    break;
  case 2149:
    spellname = "Handstitched Leather Boots";
    break;
  case 2152:
    spellname = "Light Armor Kit";
    break;
  case 2153:
    spellname = "Handstitched Leather Pants";
    break;
  case 2154:
    spellname = "Journeyman Leatherworking";
    break;
  case 2155:
    spellname = "Apprentice Leatherworking";
    break;
  case 2156:
    spellname = "Light Winter Cloak";
    break;
  case 2157:
    spellname = "Light Winter Boots";
    break;
  case 2158:
    spellname = "Fine Leather Boots";
    break;
  case 2159:
    spellname = "Fine Leather Cloak";
    break;
  case 2160:
    spellname = "Embossed Leather Vest";
    break;
  case 2161:
    spellname = "Embossed Leather Boots";
    break;
  case 2162:
    spellname = "Embossed Leather Cloak";
    break;
  case 2163:
    spellname = "White Leather Jerkin";
    break;
  case 2164:
    spellname = "Fine Leather Gloves";
    break;
  case 2165:
    spellname = "Medium Armor Kit";
    break;
  case 2166:
    spellname = "Toughened Leather Armor";
    break;
  case 2167:
    spellname = "Dark Leather Boots";
    break;
  case 2168:
    spellname = "Dark Leather Cloak";
    break;
  case 2169:
    spellname = "Dark Leather Tunic";
    break;
  case 2259:
    spellname = "Alchemy";
    break;
  case 2275:
    spellname = "Apprentice Alchemist";
    break;
  case 2280:
    spellname = "Journeyman Alchemist";
    break;
  case 2313:
    spellname = "True Fulfillment";
    break;
  case 2329:
    spellname = "Elixir of Lion's Strength";
    break;
  case 2330:
    spellname = "Minor Healing Potion";
    break;
  case 2331:
    spellname = "Minor Mana Potion";
    break;
  case 2332:
    spellname = "Minor Rejuvenation Potion";
    break;
  case 2333:
    spellname = "Elixir of Lesser Agility";
    break;
  case 2334:
    spellname = "Elixir of Minor Fortitude";
    break;
  case 2335:
    spellname = "Swiftness Potion";
    break;
  case 2336:
    spellname = "Elixir of Tongues";
    break;
  case 2337:
    spellname = "Lesser Healing Potion";
    break;
  case 2362:
    spellname = "Create Spellstone";
    break;
  case 2366:
    spellname = "Herb Gathering";
    break;
  case 2367:
    spellname = "Lesser Strength";
    break;
  case 2368:
    spellname = "Herb Gathering";
    break;
  case 2369:
    spellname = "Herb Gathering";
    break;
  case 2370:
    spellname = "Rejuvenation Potion";
    break;
  case 2371:
    spellname = "Herb Gathering";
    break;
  case 2372:
    spellname = "Apprentice Herbalist";
    break;
  case 2373:
    spellname = "Journeyman Herbalist";
    break;
  case 2374:
    spellname = "Lesser Agility";
    break;
  case 2376:
    spellname = "Lesser Intellect";
    break;
  case 2378:
    spellname = "Health";
    break;
  case 2379:
    spellname = "Speed";
    break;
  case 2380:
    spellname = "Resistance";
    break;
  case 2381:
    spellname = "Resistance (OLD)";
    break;
  case 2382:
    spellname = "Generic";
    break;
  case 2383:
    spellname = "Find Herbs";
    break;
  case 2385:
    spellname = "Brown Linen Vest";
    break;
  case 2386:
    spellname = "Linen Boots";
    break;
  case 2387:
    spellname = "Linen Cloak";
    break;
  case 2389:
    spellname = "Red Linen Robe";
    break;
  case 2392:
    spellname = "Red Linen Shirt";
    break;
  case 2393:
    spellname = "White Linen Shirt";
    break;
  case 2394:
    spellname = "Blue Linen Shirt";
    break;
  case 2395:
    spellname = "Barbaric Linen Vest";
    break;
  case 2396:
    spellname = "Green Linen Shirt";
    break;
  case 2397:
    spellname = "Reinforced Linen Cape";
    break;
  case 2399:
    spellname = "Green Woolen Vest";
    break;
  case 2400:
    spellname = "Transfer Power";
    break;
  case 2401:
    spellname = "Woolen Boots";
    break;
  case 2402:
    spellname = "Woolen Cape";
    break;
  case 2403:
    spellname = "Gray Woolen Robe";
    break;
  case 2406:
    spellname = "Gray Woolen Shirt";
    break;
  case 2425:
    spellname = "Spotted";
    break;
  case 2426:
    spellname = "Base Stealth";
    break;
  case 2442:
    spellname = "Smashing Blow";
    break;
  case 2443:
    spellname = "Smashing Blow II";
    break;
  case 2444:
    spellname = "Smashing Blow III";
    break;
  case 2446:
    spellname = "Smashing Blow V";
    break;
  case 2457:
    spellname = "Battle Stance";
    break;
  case 2458:
    spellname = "Berserker Stance";
    break;
  case 2479:
    spellname = "Honorless Target";
    break;
  case 2481:
    spellname = "Find Treasure";
    break;
  case 2484:
    spellname = "Earthbind Totem";
    break;
  case 2538:
    spellname = "Charred Wolf Meat";
    break;
  case 2539:
    spellname = "Spiced Wolf Meat";
    break;
  case 2540:
    spellname = "Roasted Boar Meat";
    break;
  case 2541:
    spellname = "Coyote Steak";
    break;
  case 2542:
    spellname = "Goretusk Liver Pie";
    break;
  case 2543:
    spellname = "Westfall Stew";
    break;
  case 2544:
    spellname = "Crab Cake";
    break;
  case 2545:
    spellname = "Cooked Crab Claw";
    break;
  case 2546:
    spellname = "Dry Pork Ribs";
    break;
  case 2547:
    spellname = "Redridge Goulash";
    break;
  case 2548:
    spellname = "Succulent Pork Ribs";
    break;
  case 2549:
    spellname = "Seasoned Wolf Kabob";
    break;
  case 2550:
    spellname = "Cooking";
    break;
  case 2551:
    spellname = "Apprentice Cook";
    break;
  case 2552:
    spellname = "QA Expert Cook";
    break;
  case 2565:
    spellname = "Shield Block";
    break;
  case 2567:
    spellname = "Thrown";
    break;
  case 2575:
    spellname = "Mining";
    break;
  case 2576:
    spellname = "Mining";
    break;
  case 2580:
    spellname = "Find Minerals";
    break;
  case 2581:
    spellname = "Apprentice Miner";
    break;
  case 2582:
    spellname = "Journeyman Miner";
    break;
  case 2583:
    spellname = "Debug Spell Reflection";
    break;
  case 2584:
    spellname = "Waiting to Resurrect";
    break;
  case 2585:
    spellname = "Eye of Kilrogg Passive (DND)";
    break;
  case 2589:
    spellname = "Backstab";
    break;
  case 2590:
    spellname = "Backstab";
    break;
  case 2591:
    spellname = "Backstab";
    break;
  case 2596:
    spellname = "Touch of the Black Claw";
    break;
  case 2597:
    spellname = "Rejuvenation Potion";
    break;
  case 2598:
    spellname = "Rejuvenation (OLD)";
    break;
  case 2599:
    spellname = "Rejuvenation Potion";
    break;
  case 2600:
    spellname = "Rejuvenation Potion";
    break;
  case 2601:
    spellname = "Fire Shield III";
    break;
  case 2602:
    spellname = "Fire Shield IV";
    break;
  case 2605:
    spellname = "Sharpen Blade";
    break;
  case 2606:
    spellname = "Shock";
    break;
  case 2607:
    spellname = "Shock";
    break;
  case 2608:
    spellname = "Shock";
    break;
  case 2609:
    spellname = "Shock";
    break;
  case 2610:
    spellname = "Shock";
    break;
  case 2626:
    spellname = "Lightning Bolt Proc V";
    break;
  case 2629:
    spellname = "Dagger Strike III (Disabled)";
    break;
  case 2630:
    spellname = "Dagger Strike IV (Disabled)";
    break;
  case 2633:
    spellname = "Dagger Strike III";
    break;
  case 2634:
    spellname = "Dagger Strike IV";
    break;
  case 2636:
    spellname = "Dagger Strike V";
    break;
  case 2637:
    spellname = "Hibernate";
    break;
  case 2639:
    spellname = "Food";
    break;
  case 2641:
    spellname = "Dismiss Pet";
    break;
  case 2643:
    spellname = "Multi-Shot";
    break;
  case 2645:
    spellname = "Ghost Wolf";
    break;
  case 2647:
    spellname = "Freeze III PROC";
    break;
  case 2649:
    spellname = "Growl";
    break;
  case 2650:
    spellname = "Tame Pet (TEST)";
    break;
  case 2651:
    spellname = "Elune's Grace";
    break;
  case 2652:
    spellname = "Touch of Weakness";
    break;
  case 2653:
    spellname = "Damage 100 (TEST)";
    break;
  case 2654:
    spellname = "Summon Tamed (TEST)";
    break;
  case 2656:
    spellname = "Smelting";
    break;
  case 2657:
    spellname = "Smelt Copper";
    break;
  case 2658:
    spellname = "Smelt Silver";
    break;
  case 2659:
    spellname = "Smelt Bronze";
    break;
  case 2660:
    spellname = "Rough Sharpening Stone";
    break;
  case 2661:
    spellname = "Copper Chain Belt";
    break;
  case 2662:
    spellname = "Copper Chain Pants";
    break;
  case 2663:
    spellname = "Copper Bracers";
    break;
  case 2664:
    spellname = "Runed Copper Bracers";
    break;
  case 2665:
    spellname = "Coarse Sharpening Stone";
    break;
  case 2666:
    spellname = "Runed Copper Belt";
    break;
  case 2667:
    spellname = "Runed Copper Breastplate";
    break;
  case 2668:
    spellname = "Rough Bronze Leggings";
    break;
  case 2670:
    spellname = "Rough Bronze Cuirass";
    break;
  case 2671:
    spellname = "Rough Bronze Bracers";
    break;
  case 2672:
    spellname = "Patterned Bronze Bracers";
    break;
  case 2673:
    spellname = "Silvered Bronze Breastplate";
    break;
  case 2674:
    spellname = "Heavy Sharpening Stone";
    break;
  case 2675:
    spellname = "Shining Silver Breastplate";
    break;
  case 2676:
    spellname = "Pulverize";
    break;
  case 2687:
    spellname = "Bloodrage";
    break;
  case 2691:
    spellname = "Mana Burn";
    break;
  case 2737:
    spellname = "Copper Mace";
    break;
  case 2738:
    spellname = "Copper Axe";
    break;
  case 2739:
    spellname = "Copper Shortsword";
    break;
  case 2740:
    spellname = "Bronze Mace";
    break;
  case 2741:
    spellname = "Bronze Axe";
    break;
  case 2742:
    spellname = "Bronze Shortsword";
    break;
  case 2763:
    spellname = "INVIS Only ON";
    break;
  case 2764:
    spellname = "Throw";
    break;
  case 2765:
    spellname = "SHOWLABEL Only ON";
    break;
  case 2766:
    spellname = "KJORDAN (TEST)";
    break;
  case 2767:
    spellname = "Shadow Word: Pain";
    break;
  case 2782:
    spellname = "Remove Curse";
    break;
  case 2791:
    spellname = "Power Word: Fortitude";
    break;
  case 2795:
    spellname = "Beer Basted Boar Ribs";
    break;
  case 2800:
    spellname = "Lay on Hands";
    break;
  case 2812:
    spellname = "Holy Wrath";
    break;
  case 2816:
    spellname = "Bark of Doom";
    break;
  case 2817:
    spellname = "Teach Bark of Doom";
    break;
  case 2818:
    spellname = "Deadly Poison";
    break;
  case 2819:
    spellname = "Deadly Poison II";
    break;
  case 2823:
    spellname = "Deadly Poison";
    break;
  case 2824:
    spellname = "Deadly Poison II";
    break;
  case 2825:
    spellname = "Bloodlust";
    break;
  case 2828:
    spellname = "Sharpen Blade";
    break;
  case 2829:
    spellname = "Sharpen Blade II";
    break;
  case 2830:
    spellname = "Sharpen Blade III";
    break;
  case 2831:
    spellname = "Armor +8";
    break;
  case 2832:
    spellname = "Armor +16";
    break;
  case 2833:
    spellname = "Armor +24";
    break;
  case 2834:
    spellname = "Periodic Thunderclap";
    break;
  case 2835:
    spellname = "Deadly Poison";
    break;
  case 2836:
    spellname = "Detect Traps";
    break;
  case 2837:
    spellname = "Deadly Poison II";
    break;
  case 2842:
    spellname = "Poisons";
    break;
  case 2850:
    spellname = "Parry!";
    break;
  case 2855:
    spellname = "Detect Magic";
    break;
  case 2860:
    spellname = "Chain Lightning";
    break;
  case 2870:
    spellname = "Cure Disease";
    break;
  case 2871:
    spellname = "Nullify Disease";
    break;
  case 2878:
    spellname = "Turn Undead";
    break;
  case 2880:
    spellname = "Stun";
    break;
  case 2881:
    spellname = "Light Leather";
    break;
  case 2882:
    spellname = "Bear Form (PT) (NYI)";
    break;
  case 2893:
    spellname = "Abolish Poison";
    break;
  case 2894:
    spellname = "Fire Elemental Totem";
    break;
  case 2895:
    spellname = "Wrath of Air Totem";
    break;
  case 2908:
    spellname = "Soothe Animal";
    break;
  case 2912:
    spellname = "Starfire";
    break;
  case 2941:
    spellname = "Immolate";
    break;
  case 2943:
    spellname = "Touch of Weakness";
    break;
  case 2944:
    spellname = "Devouring Plague";
    break;
  case 2947:
    spellname = "Fire Shield";
    break;
  case 2948:
    spellname = "Scorch";
    break;
  case 2949:
    spellname = "Fire Shield";
    break;
  case 2950:
    spellname = "Anti-Holy";
    break;
  case 2963:
    spellname = "Bolt of Linen Cloth";
    break;
  case 2964:
    spellname = "Bolt of Woolen Cloth";
    break;
  case 2969:
    spellname = "Aura Leech (PT)";
    break;
  case 2972:
    spellname = "Detect Invisibility";
    break;
  case 2973:
    spellname = "Raptor Strike";
    break;
  case 2974:
    spellname = "Wing Clip";
    break;
  case 2975:
    spellname = "Claw";
    break;
  case 2976:
    spellname = "Claw";
    break;
  case 2977:
    spellname = "Claw";
    break;
  case 2980:
    spellname = "Claw";
    break;
  case 2981:
    spellname = "Claw";
    break;
  case 2982:
    spellname = "Claw";
    break;
  case 2983:
    spellname = "Sprint";
    break;
  case 2995:
    spellname = "Poisons";
    break;
  case 3007:
    spellname = "Longshot III";
    break;
  case 3009:
    spellname = "Claw";
    break;
  case 3010:
    spellname = "Claw";
    break;
  case 3011:
    spellname = "Fire Shot";
    break;
  case 3017:
    spellname = "Immune Effect (TEST)";
    break;
  case 3018:
    spellname = "Shoot";
    break;
  case 3019:
    spellname = "Enrage";
    break;
  case 3023:
    spellname = "Debuff Nature (TEST)";
    break;
  case 3025:
    spellname = "Cat Form (Passive)";
    break;
  case 3026:
    spellname = "Use Soulstone";
    break;
  case 3029:
    spellname = "Claw";
    break;
  case 3034:
    spellname = "Viper Sting";
    break;
  case 3043:
    spellname = "Scorpid Sting";
    break;
  case 3044:
    spellname = "Arcane Shot";
    break;
  case 3045:
    spellname = "Rapid Fire";
    break;
  case 3050:
    spellname = "Detect";
    break;
  case 3052:
    spellname = "Fire Shield Effect";
    break;
  case 3053:
    spellname = "Fire Shield Effect II";
    break;
  case 3054:
    spellname = "Fire Shield Effect III";
    break;
  case 3055:
    spellname = "Fire Shield Effect IV";
    break;
  case 3100:
    spellname = "Blacksmithing";
    break;
  case 3101:
    spellname = "Alchemy";
    break;
  case 3102:
    spellname = "Cooking";
    break;
  case 3104:
    spellname = "Leatherworking";
    break;
  case 3105:
    spellname = "Curse of Stalvan";
    break;
  case 3106:
    spellname = "Aura of Rot";
    break;
  case 3107:
    spellname = "Summon Eliza's Guard";
    break;
  case 3108:
    spellname = "Touch of Death";
    break;
  case 3109:
    spellname = "Presence of Death";
    break;
  case 3110:
    spellname = "Firebolt";
    break;
  case 3111:
    spellname = "Mend Pet";
    break;
  case 3112:
    spellname = "Enhance Blunt Weapon";
    break;
  case 3113:
    spellname = "Enhance Blunt Weapon II";
    break;
  case 3114:
    spellname = "Enhance Blunt Weapon III";
    break;
  case 3115:
    spellname = "Rough Weightstone";
    break;
  case 3116:
    spellname = "Coarse Weightstone";
    break;
  case 3117:
    spellname = "Heavy Weightstone";
    break;
  case 3120:
    spellname = "Sol L";
    break;
  case 3121:
    spellname = "Kev";
    break;
  case 3124:
    spellname = "Parry";
    break;
  case 3127:
    spellname = "Parry";
    break;
  case 3129:
    spellname = "Frost Breath";
    break;
  case 3130:
    spellname = "Ice Claw";
    break;
  case 3131:
    spellname = "Frost Breath";
    break;
  case 3132:
    spellname = "Chilling Breath";
    break;
  case 3136:
    spellname = "Frenzied Command";
    break;
  case 3137:
    spellname = "Abolish Poison Effect";
    break;
  case 3140:
    spellname = "Fireball";
    break;
  case 3143:
    spellname = "Glacial Roar";
    break;
  case 3145:
    spellname = "Icy Grasp";
    break;
  case 3146:
    spellname = "Daunting Growl";
    break;
  case 3147:
    spellname = "Rend Flesh";
    break;
  case 3148:
    spellname = "Head Crack";
    break;
  case 3149:
    spellname = "Furious Howl";
    break;
  case 3150:
    spellname = "Rabies";
    break;
  case 3151:
    spellname = "Crazed Hunger";
    break;
  case 3157:
    spellname = "Lesser Agility";
    break;
  case 3158:
    spellname = "Lesser Agility";
    break;
  case 3159:
    spellname = "Agility";
    break;
  case 3160:
    spellname = "Agility";
    break;
  case 3161:
    spellname = "Lesser Strength";
    break;
  case 3162:
    spellname = "Lesser Strength";
    break;
  case 3163:
    spellname = "Strength";
    break;
  case 3164:
    spellname = "Strength";
    break;
  case 3165:
    spellname = "Lesser Intellect";
    break;
  case 3166:
    spellname = "Lesser Intellect";
    break;
  case 3167:
    spellname = "Intellect";
    break;
  case 3168:
    spellname = "Intellect";
    break;
  case 3169:
    spellname = "Invulnerability";
    break;
  case 3170:
    spellname = "Weak Troll's Blood Potion";
    break;
  case 3171:
    spellname = "Elixir of Wisdom";
    break;
  case 3172:
    spellname = "Minor Magic Resistance Potion";
    break;
  case 3173:
    spellname = "Lesser Mana Potion";
    break;
  case 3174:
    spellname = "Potion of Curing";
    break;
  case 3175:
    spellname = "Limited Invulnerability Potion";
    break;
  case 3176:
    spellname = "Strong Troll's Blood Potion";
    break;
  case 3177:
    spellname = "Elixir of Defense";
    break;
  case 3188:
    spellname = "Elixir of Ogre's Strength";
    break;
  case 3204:
    spellname = "Sapper Explode";
    break;
  case 3205:
    spellname = "Sol M";
    break;
  case 3206:
    spellname = "Sol H";
    break;
  case 3207:
    spellname = "Sol U";
    break;
  case 3219:
    spellname = "Regeneration";
    break;
  case 3220:
    spellname = "Armor";
    break;
  case 3221:
    spellname = "Regeneration";
    break;
  case 3222:
    spellname = "Regeneration";
    break;
  case 3223:
    spellname = "Regeneration";
    break;
  case 3229:
    spellname = "Quick Bloodlust";
    break;
  case 3230:
    spellname = "Elixir of Minor Agility";
    break;
  case 3231:
    spellname = "QAEnchant Cloak +3 Agility";
    break;
  case 3232:
    spellname = "Gouge Stun Test";
    break;
  case 3233:
    spellname = "Evil Eye";
    break;
  case 3234:
    spellname = "Disease Touch";
    break;
  case 3235:
    spellname = "Rancid Blood";
    break;
  case 3237:
    spellname = "Curse of Thule";
    break;
  case 3238:
    spellname = "Nimble Reflexes";
    break;
  case 3240:
    spellname = "Bloody Explosion";
    break;
  case 3242:
    spellname = "Ravage";
    break;
  case 3243:
    spellname = "Life Harvest";
    break;
  case 3245:
    spellname = "Chicken";
    break;
  case 3246:
    spellname = "Chicken Other";
    break;
  case 3247:
    spellname = "Agonizing Pain";
    break;
  case 3248:
    spellname = "Improved Blocking";
    break;
  case 3252:
    spellname = "Shred";
    break;
  case 3256:
    spellname = "Plague Cloud";
    break;
  case 3258:
    spellname = "Savage Rage";
    break;
  case 3260:
    spellname = "Violent Shield Effect";
    break;
  case 3261:
    spellname = "Ignite";
    break;
  case 3263:
    spellname = "Touch of Ravenclaw";
    break;
  case 3264:
    spellname = "Blood Howl";
    break;
  case 3267:
    spellname = "First Aid";
    break;
  case 3268:
    spellname = "First Aid";
    break;
  case 3269:
    spellname = "Blessing of Thule";
    break;
  case 3271:
    spellname = "Fatigued";
    break;
  case 3273:
    spellname = "First Aid";
    break;
  case 3274:
    spellname = "First Aid";
    break;
  case 3275:
    spellname = "Linen Bandage";
    break;
  case 3276:
    spellname = "Heavy Linen Bandage";
    break;
  case 3277:
    spellname = "Wool Bandage";
    break;
  case 3278:
    spellname = "Heavy Wool Bandage";
    break;
  case 3279:
    spellname = "Apprentice First Aid";
    break;
  case 3280:
    spellname = "Journeyman First Aid";
    break;
  case 3284:
    spellname = "Violent Shield";
    break;
  case 3286:
    spellname = "Bind";
    break;
  case 3287:
    spellname = "Ghoul Form";
    break;
  case 3288:
    spellname = "Moss Hide";
    break;
  case 3292:
    spellname = "Heavy Copper Broadsword";
    break;
  case 3293:
    spellname = "Copper Battle Axe";
    break;
  case 3294:
    spellname = "Thick War Axe";
    break;
  case 3295:
    spellname = "Deadly Bronze Poniard";
    break;
  case 3296:
    spellname = "Heavy Bronze Mace";
    break;
  case 3297:
    spellname = "Mighty Iron Hammer";
    break;
  case 3304:
    spellname = "Smelt Tin";
    break;
  case 3307:
    spellname = "Smelt Iron";
    break;
  case 3308:
    spellname = "Smelt Gold";
    break;
  case 3319:
    spellname = "Copper Chain Boots";
    break;
  case 3320:
    spellname = "Rough Grinding Stone";
    break;
  case 3321:
    spellname = "Copper Chain Vest";
    break;
  case 3322:
    spellname = "Rancid Blood";
    break;
  case 3323:
    spellname = "Runed Copper Gauntlets";
    break;
  case 3324:
    spellname = "Runed Copper Pants";
    break;
  case 3325:
    spellname = "Gemmed Copper Gauntlets";
    break;
  case 3326:
    spellname = "Coarse Grinding Stone";
    break;
  case 3328:
    spellname = "Rough Bronze Shoulders";
    break;
  case 3329:
    spellname = "Creature - Frog Form";
    break;
  case 3330:
    spellname = "Silvered Bronze Shoulders";
    break;
  case 3331:
    spellname = "Silvered Bronze Boots";
    break;
  case 3332:
    spellname = "Slow Poison";
    break;
  case 3333:
    spellname = "Silvered Bronze Gauntlets";
    break;
  case 3334:
    spellname = "Green Iron Boots";
    break;
  case 3335:
    spellname = "Dark Sludge";
    break;
  case 3336:
    spellname = "Green Iron Gauntlets";
    break;
  case 3337:
    spellname = "Heavy Grinding Stone";
    break;
  case 3338:
    spellname = "Rancid Ooze";
    break;
  case 3339:
    spellname = "Rancid Ooze Effect";
    break;
  case 3355:
    spellname = "Freezing Trap Effect";
    break;
  case 3356:
    spellname = "Flame Lash";
    break;
  case 3358:
    spellname = "Leech Poison";
    break;
  case 3359:
    spellname = "Drink Potion";
    break;
  case 3360:
    spellname = "Curse of the Eye";
    break;
  case 3361:
    spellname = "Dummy NPC Summon";
    break;
  case 3362:
    spellname = "Dire Wolf (TEST)";
    break;
  case 3363:
    spellname = "Summon Nether Drake";
    break;
  case 3365:
    spellname = "Opening";
    break;
  case 3366:
    spellname = "Opening";
    break;
  case 3368:
    spellname = "Drink Minor Potion";
    break;
  case 3369:
    spellname = "Potion Strength II";
    break;
  case 3370:
    spellname = "Crocolisk Steak";
    break;
  case 3371:
    spellname = "Blood Sausage";
    break;
  case 3372:
    spellname = "Murloc Fin Soup";
    break;
  case 3373:
    spellname = "Crocolisk Gumbo";
    break;
  case 3376:
    spellname = "Curiously Tasty Omelet";
    break;
  case 3377:
    spellname = "Gooey Spider Cake";
    break;
  case 3385:
    spellname = "Boar Charge";
    break;
  case 3387:
    spellname = "Rage of Thule";
    break;
  case 3388:
    spellname = "Deadly Leech Poison";
    break;
  case 3389:
    spellname = "Ward of the Eye";
    break;
  case 3390:
    spellname = "Helcular's Spawn";
    break;
  case 3391:
    spellname = "Thrash";
    break;
  case 3393:
    spellname = "Consume Flesh";
    break;
  case 3394:
    spellname = "Consume Flesh";
    break;
  case 3396:
    spellname = "Corrosive Poison";
    break;
  case 3397:
    spellname = "Big Bear Steak";
    break;
  case 3398:
    spellname = "Hot Lion Chops";
    break;
  case 3399:
    spellname = "Tasty Lion Steak";
    break;
  case 3400:
    spellname = "Soothing Turtle Bisque";
    break;
  case 3405:
    spellname = "Soul Rend";
    break;
  case 3407:
    spellname = "Rune of Opening";
    break;
  case 3408:
    spellname = "Crippling Poison";
    break;
  case 3409:
    spellname = "Crippling Poison";
    break;
  case 3411:
    spellname = "Intervene";
    break;
  case 3412:
    spellname = "Journeyman Cook";
    break;
  case 3413:
    spellname = "Cooking";
    break;
  case 3416:
    spellname = "Fiend Fury";
    break;
  case 3417:
    spellname = "Thrash";
    break;
  case 3418:
    spellname = "Improved Blocking";
    break;
  case 3419:
    spellname = "Improved Blocking";
    break;
  case 3420:
    spellname = "Crippling Poison";
    break;
  case 3421:
    spellname = "Crippling Poison II";
    break;
  case 3424:
    spellname = "Tainted Howl";
    break;
  case 3427:
    spellname = "Infected Wound";
    break;
  case 3428:
    spellname = "Summon Flesh Eating Worms";
    break;
  case 3429:
    spellname = "Plague Mind";
    break;
  case 3436:
    spellname = "Wandering Plague";
    break;
  case 3439:
    spellname = "Wandering Plague";
    break;
  case 3440:
    spellname = "MACESTAFFSPECIAL (DND)";
    break;
  case 3442:
    spellname = "Enslave";
    break;
  case 3443:
    spellname = "Enchanted Quickness";
    break;
  case 3446:
    spellname = "Ravage";
    break;
  case 3447:
    spellname = "Healing Potion";
    break;
  case 3448:
    spellname = "Lesser Invisibility Potion";
    break;
  case 3449:
    spellname = "Shadow Oil";
    break;
  case 3450:
    spellname = "Elixir of Fortitude";
    break;
  case 3451:
    spellname = "Mighty Troll's Blood Potion";
    break;
  case 3452:
    spellname = "Mana Potion";
    break;
  case 3453:
    spellname = "Elixir of Detect Lesser Invisibility";
    break;
  case 3454:
    spellname = "Frost Oil";
    break;
  case 3464:
    spellname = "Alchemy";
    break;
  case 3465:
    spellname = "Expert Alchemist";
    break;
  case 3472:
    spellname = "Holy Light";
    break;
  case 3477:
    spellname = "Spirit Steal";
    break;
  case 3485:
    spellname = "Wail of Nightlash";
    break;
  case 3488:
    spellname = "Felstrom Resurrection";
    break;
  case 3490:
    spellname = "Frenzied Rage";
    break;
  case 3491:
    spellname = "Big Bronze Knife";
    break;
  case 3492:
    spellname = "Hardened Iron Shortsword";
    break;
  case 3493:
    spellname = "Jade Serpentblade";
    break;
  case 3494:
    spellname = "Solid Iron Maul";
    break;
  case 3495:
    spellname = "Golden Iron Destroyer";
    break;
  case 3496:
    spellname = "Moonsteel Broadsword";
    break;
  case 3497:
    spellname = "Frost Tiger Blade";
    break;
  case 3498:
    spellname = "Massive Iron Axe";
    break;
  case 3499:
    spellname = "Summon Sloth";
    break;
  case 3500:
    spellname = "Shadow Crescent Axe";
    break;
  case 3501:
    spellname = "Green Iron Bracers";
    break;
  case 3502:
    spellname = "Green Iron Helm";
    break;
  case 3503:
    spellname = "Golden Scale Coif";
    break;
  case 3504:
    spellname = "Green Iron Shoulders";
    break;
  case 3505:
    spellname = "Golden Scale Shoulders";
    break;
  case 3506:
    spellname = "Green Iron Leggings";
    break;
  case 3507:
    spellname = "Golden Scale Leggings";
    break;
  case 3508:
    spellname = "Green Iron Hauberk";
    break;
  case 3509:
    spellname = "Sloth Passive";
    break;
  case 3510:
    spellname = "Sloth Effect";
    break;
  case 3511:
    spellname = "Golden Scale Cuirass";
    break;
  case 3512:
    spellname = "Sludge Passive";
    break;
  case 3513:
    spellname = "Polished Steel Boots";
    break;
  case 3514:
    spellname = "Sludge";
    break;
  case 3515:
    spellname = "Golden Scale Boots";
    break;
  case 3527:
    spellname = "Summon Sludge";
    break;
  case 3537:
    spellname = "Minions of Malathrom";
    break;
  case 3538:
    spellname = "Blacksmithing";
    break;
  case 3539:
    spellname = "Expert Blacksmith";
    break;
  case 3542:
    spellname = "Naraxis Web";
    break;
  case 3547:
    spellname = "Enraging Memories";
    break;
  case 3551:
    spellname = "Skull Crack";
    break;
  case 3552:
    spellname = "Conjure Mana Jade";
    break;
  case 3561:
    spellname = "Teleport: Stormwind";
    break;
  case 3562:
    spellname = "Teleport: Ironforge";
    break;
  case 3563:
    spellname = "Teleport: Undercity";
    break;
  case 3564:
    spellname = "Mining";
    break;
  case 3565:
    spellname = "Teleport: Darnassus";
    break;
  case 3566:
    spellname = "Teleport: Thunder Bluff";
    break;
  case 3567:
    spellname = "Teleport: Orgrimmar";
    break;
  case 3568:
    spellname = "Expert Miner";
    break;
  case 3569:
    spellname = "Smelt Steel";
    break;
  case 3570:
    spellname = "Herb Gathering";
    break;
  case 3571:
    spellname = "Expert Herbalist";
    break;
  case 3574:
    spellname = "Skin of Rock";
    break;
  case 3582:
    spellname = "Torch Burst";
    break;
  case 3583:
    spellname = "Deadly Poison";
    break;
  case 3584:
    spellname = "Volatile Infection";
    break;
  case 3585:
    spellname = "Volatile Infection";
    break;
  case 3586:
    spellname = "Volatile Infection";
    break;
  case 3587:
    spellname = "Volatile Infection";
    break;
  case 3589:
    spellname = "Deafening Screech";
    break;
  case 3591:
    spellname = "Blessing of the Holy Spring";
    break;
  case 3592:
    spellname = "Cure Ailments";
    break;
  case 3593:
    spellname = "Elixir of Fortitude";
    break;
  case 3594:
    spellname = "Shadow Oil";
    break;
  case 3595:
    spellname = "Frost Oil";
    break;
  case 3599:
    spellname = "Searing Totem";
    break;
  case 3600:
    spellname = "Earthbind";
    break;
  case 3602:
    spellname = "Torch Burst";
    break;
  case 3603:
    spellname = "Distracting Pain";
    break;
  case 3604:
    spellname = "Tendon Rip";
    break;
  case 3605:
    spellname = "Summon Remote-Controlled Golem";
    break;
  case 3606:
    spellname = "Attack";
    break;
  case 3607:
    spellname = "Yenniku's Release";
    break;
  case 3609:
    spellname = "Paralyzing Poison";
    break;
  case 3611:
    spellname = "Minion of Morganth";
    break;
  case 3612:
    spellname = "Bloodscalp Pet";
    break;
  case 3615:
    spellname = "Summon Dalaran Serpent";
    break;
  case 3616:
    spellname = "Poison Proc";
    break;
  case 3618:
    spellname = "Self Stun";
    break;
  case 3621:
    spellname = "Skullsplitter Pet";
    break;
  case 3627:
    spellname = "Rejuvenation";
    break;
  case 3631:
    spellname = "Battle Fury";
    break;
  case 3635:
    spellname = "Crystal Gaze";
    break;
  case 3636:
    spellname = "Crystalline Slumber";
    break;
  case 3637:
    spellname = "Improved Blocking III";
    break;
  case 3639:
    spellname = "Improved Blocking";
    break;
  case 3644:
    spellname = "Speak with Heads";
    break;
  case 3648:
    spellname = "Phase Out";
    break;
  case 3650:
    spellname = "Sling Mud";
    break;
  case 3651:
    spellname = "Shield of Reflection";
    break;
  case 3652:
    spellname = "Summon Spirit of Old";
    break;
  case 3653:
    spellname = "Spirit of Old";
    break;
  case 3655:
    spellname = "Summon Shield Guard";
    break;
  case 3657:
    spellname = "Summon Spell Guard";
    break;
  case 3658:
    spellname = "Summon Theurgist";
    break;
  case 3659:
    spellname = "Mage Sight";
    break;
  case 3660:
    spellname = "Create Soul Gem";
    break;
  case 3661:
    spellname = "Mend Pet";
    break;
  case 3662:
    spellname = "Mend Pet";
    break;
  case 3666:
    spellname = "Claw";
    break;
  case 3667:
    spellname = "Claw";
    break;
  case 3670:
    spellname = "Unlock Maury's Foot";
    break;
  case 3671:
    spellname = "Cracking Stone";
    break;
  case 3672:
    spellname = "Crumbling Stone";
    break;
  case 3673:
    spellname = "Reduced to Rubble";
    break;
  case 3674:
    spellname = "Black Arrow";
    break;
  case 3678:
    spellname = "Focusing";
    break;
  case 3680:
    spellname = "Lesser Invisibility";
    break;
  case 3698:
    spellname = "Health Funnel";
    break;
  case 3699:
    spellname = "Health Funnel";
    break;
  case 3700:
    spellname = "Health Funnel";
    break;
  case 3715:
    spellname = "Dark Ritual II";
    break;
  case 3716:
    spellname = "Torment";
    break;
  case 3718:
    spellname = "Syndicate Bomb";
    break;
  case 3719:
    spellname = "Debuff Holy Resist (TEST)";
    break;
  case 3720:
    spellname = "Throw Syndicate Bomb";
    break;
  case 3721:
    spellname = "Teleport Altar of the Tides";
    break;
  case 3722:
    spellname = "Summon Syndicate Spectre";
    break;
  case 3730:
    spellname = "Initialize Image";
    break;
  case 3738:
    spellname = "Wrath of Air Totem";
    break;
  case 3742:
    spellname = "Static Electricity";
    break;
  case 3747:
    spellname = "Power Word: Shield";
    break;
  case 3753:
    spellname = "Handstitched Leather Belt";
    break;
  case 3755:
    spellname = "Linen Bag";
    break;
  case 3756:
    spellname = "Embossed Leather Gloves";
    break;
  case 3757:
    spellname = "Woolen Bag";
    break;
  case 3758:
    spellname = "Green Woolen Bag";
    break;
  case 3759:
    spellname = "Embossed Leather Pants";
    break;
  case 3760:
    spellname = "Hillman's Cloak";
    break;
  case 3761:
    spellname = "Fine Leather Tunic";
    break;
  case 3762:
    spellname = "Hillman's Leather Vest";
    break;
  case 3763:
    spellname = "Fine Leather Belt";
    break;
  case 3764:
    spellname = "Hillman's Leather Gloves";
    break;
  case 3765:
    spellname = "Dark Leather Gloves";
    break;
  case 3766:
    spellname = "Dark Leather Belt";
    break;
  case 3767:
    spellname = "Hillman's Belt";
    break;
  case 3768:
    spellname = "Hillman's Shoulders";
    break;
  case 3769:
    spellname = "Dark Leather Shoulders";
    break;
  case 3770:
    spellname = "Toughened Leather Gloves";
    break;
  case 3771:
    spellname = "Barbaric Gloves";
    break;
  case 3772:
    spellname = "Green Leather Armor";
    break;
  case 3773:
    spellname = "Guardian Armor";
    break;
  case 3774:
    spellname = "Green Leather Belt";
    break;
  case 3775:
    spellname = "Guardian Belt";
    break;
  case 3776:
    spellname = "Green Leather Bracers";
    break;
  case 3777:
    spellname = "Guardian Leather Bracers";
    break;
  case 3778:
    spellname = "Gem-studded Leather Belt";
    break;
  case 3779:
    spellname = "Barbaric Belt";
    break;
  case 3780:
    spellname = "Heavy Armor Kit";
    break;
  case 3811:
    spellname = "Leatherworking";
    break;
  case 3812:
    spellname = "Expert Leatherworking";
    break;
  case 3813:
    spellname = "Small Silk Pack";
    break;
  case 3815:
    spellname = "Poison Cloud";
    break;
  case 3816:
    spellname = "Cured Light Hide";
    break;
  case 3817:
    spellname = "Cured Medium Hide";
    break;
  case 3818:
    spellname = "Cured Heavy Hide";
    break;
  case 3822:
    spellname = "Proximity Bomb Explode";
    break;
  case 3823:
    spellname = "Throw Proximity Bomb";
    break;
  case 3825:
    spellname = "Ward of Laze Passive";
    break;
  case 3826:
    spellname = "Ward of Laze effect";
    break;
  case 3827:
    spellname = "Ward of Laze";
    break;
  case 3839:
    spellname = "Bolt of Silk Cloth";
    break;
  case 3840:
    spellname = "Heavy Linen Gloves";
    break;
  case 3841:
    spellname = "Green Linen Bracers";
    break;
  case 3842:
    spellname = "Handstitched Linen Britches";
    break;
  case 3843:
    spellname = "Heavy Woolen Gloves";
    break;
  case 3844:
    spellname = "Heavy Woolen Cloak";
    break;
  case 3845:
    spellname = "Soft-soled Linen Boots";
    break;
  case 3847:
    spellname = "Red Woolen Boots";
    break;
  case 3848:
    spellname = "Double-stitched Woolen Shoulders";
    break;
  case 3849:
    spellname = "Reinforced Woolen Shoulders";
    break;
  case 3850:
    spellname = "Heavy Woolen Pants";
    break;
  case 3851:
    spellname = "Phoenix Pants";
    break;
  case 3852:
    spellname = "Gloves of Meditation";
    break;
  case 3854:
    spellname = "Azure Silk Gloves";
    break;
  case 3855:
    spellname = "Spidersilk Boots";
    break;
  case 3856:
    spellname = "Spider Silk Slippers";
    break;
  case 3857:
    spellname = "Enchanter's Cowl";
    break;
  case 3858:
    spellname = "Shadow Hood";
    break;
  case 3859:
    spellname = "Azure Silk Vest";
    break;
  case 3860:
    spellname = "Boots of the Enchanter";
    break;
  case 3861:
    spellname = "Long Silken Cloak";
    break;
  case 3862:
    spellname = "Icy Cloak";
    break;
  case 3863:
    spellname = "Spider Belt";
    break;
  case 3864:
    spellname = "Star Belt";
    break;
  case 3865:
    spellname = "Bolt of Mageweave";
    break;
  case 3866:
    spellname = "Stylish Red Shirt";
    break;
  case 3868:
    spellname = "Phoenix Gloves";
    break;
  case 3869:
    spellname = "Bright Yellow Shirt";
    break;
  case 3870:
    spellname = "Dark Silk Shirt";
    break;
  case 3871:
    spellname = "Formal White Shirt";
    break;
  case 3872:
    spellname = "Rich Purple Silk Shirt";
    break;
  case 3873:
    spellname = "Black Swashbuckler's Shirt";
    break;
  case 3908:
    spellname = "Tailoring";
    break;
  case 3909:
    spellname = "Tailoring";
    break;
  case 3910:
    spellname = "Tailoring";
    break;
  case 3911:
    spellname = "Apprentice Tailor";
    break;
  case 3912:
    spellname = "Journeyman Tailor";
    break;
  case 3913:
    spellname = "Expert Tailor";
    break;
  case 3914:
    spellname = "Brown Linen Pants";
    break;
  case 3915:
    spellname = "Brown Linen Shirt";
    break;
  case 3918:
    spellname = "Rough Blasting Powder";
    break;
  case 3919:
    spellname = "Rough Dynamite";
    break;
  case 3920:
    spellname = "Crafted Light Shot";
    break;
  case 3922:
    spellname = "Handful of Copper Bolts";
    break;
  case 3923:
    spellname = "Rough Copper Bomb";
    break;
  case 3924:
    spellname = "Copper Tube";
    break;
  case 3925:
    spellname = "Rough Boomstick";
    break;
  case 3926:
    spellname = "Copper Modulator";
    break;
  case 3928:
    spellname = "Mechanical Squirrel";
    break;
  case 3929:
    spellname = "Coarse Blasting Powder";
    break;
  case 3930:
    spellname = "Crafted Heavy Shot";
    break;
  case 3931:
    spellname = "Coarse Dynamite";
    break;
  case 3932:
    spellname = "Target Dummy";
    break;
  case 3933:
    spellname = "Small Seaforium Charge";
    break;
  case 3934:
    spellname = "Flying Tiger Goggles";
    break;
  case 3936:
    spellname = "Deadly Blunderbuss";
    break;
  case 3937:
    spellname = "Large Copper Bomb";
    break;
  case 3938:
    spellname = "Bronze Tube";
    break;
  case 3939:
    spellname = "Lovingly Crafted Boomstick";
    break;
  case 3940:
    spellname = "Shadow Goggles";
    break;
  case 3941:
    spellname = "Small Bronze Bomb";
    break;
  case 3942:
    spellname = "Whirring Bronze Gizmo";
    break;
  case 3944:
    spellname = "Flame Deflector";
    break;
  case 3945:
    spellname = "Heavy Blasting Powder";
    break;
  case 3946:
    spellname = "Heavy Dynamite";
    break;
  case 3947:
    spellname = "Crafted Solid Shot";
    break;
  case 3949:
    spellname = "Silver-plated Shotgun";
    break;
  case 3950:
    spellname = "Big Bronze Bomb";
    break;
  case 3952:
    spellname = "Minor Recombobulator";
    break;
  case 3953:
    spellname = "Bronze Framework";
    break;
  case 3954:
    spellname = "Moonsight Rifle";
    break;
  case 3955:
    spellname = "Explosive Sheep";
    break;
  case 3956:
    spellname = "Green Tinted Goggles";
    break;
  case 3957:
    spellname = "Ice Deflector";
    break;
  case 3958:
    spellname = "Iron Strut";
    break;
  case 3959:
    spellname = "Discombobulator Ray";
    break;
  case 3960:
    spellname = "Portable Bronze Mortar";
    break;
  case 3961:
    spellname = "Gyrochronatom";
    break;
  case 3962:
    spellname = "Iron Grenade";
    break;
  case 3963:
    spellname = "Compact Harvest Reaper Kit";
    break;
  case 3965:
    spellname = "Advanced Target Dummy";
    break;
  case 3966:
    spellname = "Craftsman's Monocle";
    break;
  case 3967:
    spellname = "Big Iron Bomb";
    break;
  case 3968:
    spellname = "Goblin Land Mine";
    break;
  case 3969:
    spellname = "Mechanical Dragonling";
    break;
  case 3971:
    spellname = "Gnomish Cloaking Device";
    break;
  case 3972:
    spellname = "Large Seaforium Charge";
    break;
  case 3973:
    spellname = "Silver Contact";
    break;
  case 3974:
    spellname = "Crude Scope";
    break;
  case 3975:
    spellname = "Standard Scope";
    break;
  case 3976:
    spellname = "Accurate Scope";
    break;
  case 3977:
    spellname = "Crude Scope";
    break;
  case 3978:
    spellname = "Standard Scope";
    break;
  case 3979:
    spellname = "Accurate Scope";
    break;
  case 4036:
    spellname = "Engineering";
    break;
  case 4037:
    spellname = "Engineering";
    break;
  case 4038:
    spellname = "Engineering";
    break;
  case 4039:
    spellname = "Apprentice Engineer";
    break;
  case 4040:
    spellname = "Journeyman Engineer";
    break;
  case 4041:
    spellname = "Expert Engineer";
    break;
  case 4042:
    spellname = "Healing Potion";
    break;
  case 4043:
    spellname = "Detonation";
    break;
  case 4044:
    spellname = "Target Dummy Passive";
    break;
  case 4045:
    spellname = "Target Dummy Effect";
    break;
  case 4048:
    spellname = "Advanced Target Dummy Passive";
    break;
  case 4049:
    spellname = "Advanced Target Dummy";
    break;
  case 4050:
    spellname = "Explosive Sheep";
    break;
  case 4052:
    spellname = "Summon Explosive Sheep";
    break;
  case 4054:
    spellname = "Rough Dynamite";
    break;
  case 4055:
    spellname = "Mechanical Squirrel";
    break;
  case 4056:
    spellname = "Small Seaforium Charge";
    break;
  case 4057:
    spellname = "Fire Resistance";
    break;
  case 4058:
    spellname = "Reverse Transformation";
    break;
  case 4060:
    spellname = "Discombobulate";
    break;
  case 4061:
    spellname = "Coarse Dynamite";
    break;
  case 4062:
    spellname = "Heavy Dynamite";
    break;
  case 4063:
    spellname = "Argus Shadow Mage Transform";
    break;
  case 4064:
    spellname = "Rough Copper Bomb";
    break;
  case 4065:
    spellname = "Large Copper Bomb";
    break;
  case 4066:
    spellname = "Small Bronze Bomb";
    break;
  case 4067:
    spellname = "Big Bronze Bomb";
    break;
  case 4068:
    spellname = "Iron Grenade";
    break;
  case 4069:
    spellname = "Big Iron Bomb";
    break;
  case 4070:
    spellname = "Guardian";
    break;
  case 4071:
    spellname = "Target Dummy";
    break;
  case 4072:
    spellname = "Advanced Target Dummy";
    break;
  case 4073:
    spellname = "Mechanical Dragonling";
    break;
  case 4074:
    spellname = "Explosive Sheep";
    break;
  case 4075:
    spellname = "Large Seaforium Charge";
    break;
  case 4077:
    spellname = "Frost Resistance";
    break;
  case 4078:
    spellname = "Compact Harvest Reaper";
    break;
  case 4079:
    spellname = "Cloaking";
    break;
  case 4080:
    spellname = "Frost Resistance";
    break;
  case 4081:
    spellname = "Nature Resistance";
    break;
  case 4083:
    spellname = "Bull Rush";
    break;
  case 4086:
    spellname = "Evasion";
    break;
  case 4089:
    spellname = "Curse of Frailty";
    break;
  case 4090:
    spellname = "Life Tap";
    break;
  case 4091:
    spellname = "Mana Burn";
    break;
  case 4092:
    spellname = "Advanced Target Dummy Spawn Effect";
    break;
  case 4093:
    spellname = "Reconstruction";
    break;
  case 4094:
    spellname = "Barbecued Buzzard Wing";
    break;
  case 4096:
    spellname = "Raptor Hide Harness";
    break;
  case 4097:
    spellname = "Raptor Hide Belt";
    break;
  case 4100:
    spellname = "Goblin Land Mine";
    break;
  case 4101:
    spellname = "Enraging Bite";
    break;
  case 4102:
    spellname = "Gore";
    break;
  case 4104:
    spellname = "Flight of the Peregrine";
    break;
  case 4105:
    spellname = "Rapid Gallop";
    break;
  case 4107:
    spellname = "Tough Shell";
    break;
  case 4108:
    spellname = "Tough Shell";
    break;
  case 4109:
    spellname = "Tough Shell";
    break;
  case 4111:
    spellname = "Tough Shell";
    break;
  case 4112:
    spellname = "Tough Shell";
    break;
  case 4113:
    spellname = "Tough Shell";
    break;
  case 4114:
    spellname = "Tough Shell";
    break;
  case 4115:
    spellname = "Tough Shell";
    break;
  case 4130:
    spellname = "Banish Burning Exile";
    break;
  case 4131:
    spellname = "Banish Cresting Exile";
    break;
  case 4132:
    spellname = "Banish Thundering Exile";
    break;
  case 4133:
    spellname = "Bruise";
    break;
  case 4134:
    spellname = "Bruise";
    break;
  case 4135:
    spellname = "Bruise";
    break;
  case 4136:
    spellname = "Bruise";
    break;
  case 4137:
    spellname = "Bruise";
    break;
  case 4138:
    spellname = "Bruise";
    break;
  case 4139:
    spellname = "Bruise";
    break;
  case 4140:
    spellname = "Bruise";
    break;
  case 4141:
    spellname = "Summon Myzrael";
    break;
  case 4142:
    spellname = "Feast of Prey";
    break;
  case 4143:
    spellname = "Feast of Prey";
    break;
  case 4144:
    spellname = "Spider Poison";
    break;
  case 4146:
    spellname = "Enraged Howl";
    break;
  case 4147:
    spellname = "Enraged Howl";
    break;
  case 4148:
    spellname = "Growl of Fortitude";
    break;
  case 4149:
    spellname = "Toughen Hide";
    break;
  case 4150:
    spellname = "Eye Peck";
    break;
  case 4152:
    spellname = "Detect Elven Gems";
    break;
  case 4153:
    spellname = "Guile of the Raptor";
    break;
  case 4154:
    spellname = "Ferocity";
    break;
  case 4159:
    spellname = "Tight Pinch";
    break;
  case 4160:
    spellname = "Quick Snap";
    break;
  case 4164:
    spellname = "Throw Rock";
    break;
  case 4165:
    spellname = "Throw Rock II";
    break;
  case 4166:
    spellname = "Vulnerable";
    break;
  case 4167:
    spellname = "Web";
    break;
  case 4168:
    spellname = "Web II";
    break;
  case 4169:
    spellname = "Web III";
    break;
  case 4170:
    spellname = "Cannon Ball";
    break;
  case 4187:
    spellname = "Great Stamina";
    break;
  case 4188:
    spellname = "Great Stamina";
    break;
  case 4189:
    spellname = "Great Stamina";
    break;
  case 4190:
    spellname = "Great Stamina";
    break;
  case 4191:
    spellname = "Great Stamina";
    break;
  case 4192:
    spellname = "Great Stamina";
    break;
  case 4193:
    spellname = "Great Stamina";
    break;
  case 4194:
    spellname = "Great Stamina";
    break;
  case 4195:
    spellname = "Great Stamina";
    break;
  case 4196:
    spellname = "Great Stamina";
    break;
  case 4197:
    spellname = "Great Stamina";
    break;
  case 4198:
    spellname = "Great Stamina";
    break;
  case 4199:
    spellname = "Great Stamina";
    break;
  case 4200:
    spellname = "Great Stamina";
    break;
  case 4201:
    spellname = "Great Stamina";
    break;
  case 4202:
    spellname = "Great Stamina";
    break;
  case 4209:
    spellname = "Healing Tongue";
    break;
  case 4221:
    spellname = "Healing Tongue II";
    break;
  case 4238:
    spellname = "Roar of Fortitude";
    break;
  case 4239:
    spellname = "Activating Defenses";
    break;
  case 4240:
    spellname = "Vital Wound";
    break;
  case 4241:
    spellname = "Vital Wound";
    break;
  case 4242:
    spellname = "Pester";
    break;
  case 4243:
    spellname = "Pester Effect";
    break;
  case 4244:
    spellname = "Open Wound Effect";
    break;
  case 4245:
    spellname = "Open Wound";
    break;
  case 4246:
    spellname = "Clenched Pinchers";
    break;
  case 4262:
    spellname = "Physical Prowess";
    break;
  case 4268:
    spellname = "Mental Acuity";
    break;
  case 4270:
    spellname = "Mental Acuity";
    break;
  case 4279:
    spellname = "Consume Flesh";
    break;
  case 4280:
    spellname = "Consume Flesh";
    break;
  case 4281:
    spellname = "Quickness";
    break;
  case 4282:
    spellname = "Stomp";
    break;
  case 4283:
    spellname = "Stomp";
    break;
  case 4284:
    spellname = "Tendon Slice";
    break;
  case 4285:
    spellname = "Tendon Slice";
    break;
  case 4286:
    spellname = "Poisonous Spit";
    break;
  case 4312:
    spellname = "Strider Presence";
    break;
  case 4315:
    spellname = "Rabid Maw";
    break;
  case 4316:
    spellname = "Rabid Maw";
    break;
  case 4317:
    spellname = "Eye Peck";
    break;
  case 4318:
    spellname = "Guile of the Raptor";
    break;
  case 4319:
    spellname = "Enchant Azure Agate";
    break;
  case 4320:
    spellname = "Trelane's Freezing Touch";
    break;
  case 4321:
    spellname = "Stasis Test";
    break;
  case 4352:
    spellname = "Sword Specialization";
    break;
  case 4354:
    spellname = "Sword Specialization";
    break;
  case 4362:
    spellname = "Sword Specialization";
    break;
  case 4421:
    spellname = "2H Sword Power";
    break;
  case 4423:
    spellname = "2H Sword Power";
    break;
  case 4436:
    spellname = "Immolation";
    break;
  case 4443:
    spellname = "2H Axe Specialization";
    break;
  case 4464:
    spellname = "2H Sword Specialization";
    break;
  case 4493:
    spellname = "Staff Specialization";
    break;
  case 4500:
    spellname = "Staff Specialization";
    break;
  case 4504:
    spellname = "Jeff Dummy 1";
    break;
  case 4505:
    spellname = "Jeff Dummy 2";
    break;
  case 4506:
    spellname = "CHU's QUEST SPELL";
    break;
  case 4507:
    spellname = "Target Dummy Spawn Effect";
    break;
  case 4508:
    spellname = "Discolored Healing Potion";
    break;
  case 4511:
    spellname = "Phase Shift";
    break;
  case 4514:
    spellname = "Consuming Rage";
    break;
  case 4520:
    spellname = "Wide Sweep";
    break;
  case 4524:
    spellname = "Demonic Immolation";
    break;
  case 4525:
    spellname = "Demonic Immolation Passive";
    break;
  case 4526:
    spellname = "Mass Dispel";
    break;
  case 4538:
    spellname = "Extract Essence";
    break;
  case 4539:
    spellname = "Strength of the Ages";
    break;
  case 4548:
    spellname = "Nature Resist";
    break;
  case 4629:
    spellname = "Rain of Fire";
    break;
  case 4630:
    spellname = "Phase Shift";
    break;
  case 4651:
    spellname = "Demon Slayer (OLD)";
    break;
  case 4659:
    spellname = "Demon Slayer (OLD)";
    break;
  case 4741:
    spellname = "Open Wound";
    break;
  case 4783:
    spellname = "Web";
    break;
  case 4785:
    spellname = "Web";
    break;
  case 4801:
    spellname = "Teleport";
    break;
  case 4805:
    spellname = "Distracting Spit";
    break;
  case 4806:
    spellname = "Distracting Spit";
    break;
  case 4870:
    spellname = "Frost Specialization";
    break;
  case 4877:
    spellname = "Frost Specialization";
    break;
  case 4900:
    spellname = "Gun Mastery";
    break;
  case 4928:
    spellname = "Summon Cresting Exile";
    break;
  case 4929:
    spellname = "Summon Burning Exile";
    break;
  case 4930:
    spellname = "Summon Thundering Exile";
    break;
  case 4931:
    spellname = "Summon Rumbling Exile";
    break;
  case 4932:
    spellname = "Ward of Myzrael";
    break;
  case 4933:
    spellname = "Prismatic Form: Fire";
    break;
  case 4934:
    spellname = "Prismatic Form: Earth";
    break;
  case 4935:
    spellname = "Prismatic Form: Water";
    break;
  case 4936:
    spellname = "Prismatic Form: Thunder";
    break;
  case 4937:
    spellname = "Summon Prismatic Exiles";
    break;
  case 4938:
    spellname = "Myzrael Earthquake";
    break;
  case 4940:
    spellname = "Spider Poison";
    break;
  case 4941:
    spellname = "Stoneshield";
    break;
  case 4942:
    spellname = "Lesser Stoneshield Potion";
    break;
  case 4945:
    spellname = "Summon Dagun";
    break;
  case 4946:
    spellname = "Summon Tamed Wolf";
    break;
  case 4947:
    spellname = "Magic Backlash";
    break;
  case 4948:
    spellname = "Kinelory's Bear Form";
    break;
  case 4950:
    spellname = "Summon Helcular's Puppets";
    break;
  case 4951:
    spellname = "Helcular's Puppets Passive";
    break;
  case 4954:
    spellname = "Break Tool";
    break;
  case 4955:
    spellname = "Fist of Stone";
    break;
  case 4960:
    spellname = "Create Fervor Potion (New)";
    break;
  case 4961:
    spellname = "Resupply";
    break;
  case 4962:
    spellname = "Encasing Webs";
    break;
  case 4970:
    spellname = "Draw from the Earth";
    break;
  case 4971:
    spellname = "Healing Ward";
    break;
  case 4972:
    spellname = "Healing Ward V Passive";
    break;
  case 4974:
    spellname = "Wither Touch";
    break;
  case 4975:
    spellname = "Cleanse Winterhoof Well";
    break;
  case 4976:
    spellname = "Filling";
    break;
  case 4977:
    spellname = "Cleanse Thunderhorn Well";
    break;
  case 4978:
    spellname = "Cleanse Wildmane Well";
    break;
  case 4979:
    spellname = "Quick Flame Ward";
    break;
  case 4980:
    spellname = "Quick Frost Ward";
    break;
  case 4981:
    spellname = "Inducing Vision";
    break;
  case 4982:
    spellname = "Pillar Delving";
    break;
  case 4983:
    spellname = "Create Cleansing Totem";
    break;
  case 4984:
    spellname = "Hammertoe's Sacrifice";
    break;
  case 4985:
    spellname = "Summon Hammertoe's Spirit";
    break;
  case 4986:
    spellname = "Unseen";
    break;
  case 4987:
    spellname = "Cleanse";
    break;
  case 4996:
    spellname = "[PH] Teleport to Orgrimmar";
    break;
  case 4997:
    spellname = "[PH] Teleport to Booty Bay";
    break;
  case 4998:
    spellname = "[PH] Teleport to Grom'Gol";
    break;
  case 4999:
    spellname = "[PH] Teleport to Ratchet";
    break;
  case 5000:
    spellname = "[PH] Teleport to Undercity";
    break;
  case 5001:
    spellname = "Lotwil's Summoning";
    break;
  case 5002:
    spellname = "Lotwil's Summon Complete";
    break;
  case 5003:
    spellname = "Bunyanize";
    break;
  case 5004:
    spellname = "Food";
    break;
  case 5005:
    spellname = "Food";
    break;
  case 5006:
    spellname = "Food";
    break;
  case 5007:
    spellname = "Food";
    break;
  case 5009:
    spellname = "Wands";
    break;
  case 5010:
    spellname = "Scorch Breath";
    break;
  case 5011:
    spellname = "Crossbows";
    break;
  case 5012:
    spellname = "Rhinag's Poison";
    break;
  case 5016:
    spellname = "Healing Aura";
    break;
  case 5017:
    spellname = "Divining Trance";
    break;
  case 5019:
    spellname = "Shoot";
    break;
  case 5020:
    spellname = "Stormstout";
    break;
  case 5021:
    spellname = "Trogg Ale";
    break;
  case 5024:
    spellname = "Flee";
    break;
  case 5025:
    spellname = "Test Tickle";
    break;
  case 5026:
    spellname = "Create Water of the Seers";
    break;
  case 5041:
    spellname = "Great Stamina";
    break;
  case 5042:
    spellname = "Great Stamina";
    break;
  case 5048:
    spellname = "Great Stamina";
    break;
  case 5049:
    spellname = "Great Stamina";
    break;
  case 5099:
    spellname = "Disruption";
    break;
  case 5100:
    spellname = "Spore Burst";
    break;
  case 5101:
    spellname = "Dazed";
    break;
  case 5102:
    spellname = "Absorb Blow";
    break;
  case 5103:
    spellname = "Trigger Test (PT)";
    break;
  case 5104:
    spellname = "Minor Scorpion Venom";
    break;
  case 5105:
    spellname = "Minor Scorpion Venom Effect";
    break;
  case 5106:
    spellname = "Crystal Flash";
    break;
  case 5107:
    spellname = "Opening Booty Chest";
    break;
  case 5108:
    spellname = "Voidwalker";
    break;
  case 5110:
    spellname = "Summon Living Flame";
    break;
  case 5111:
    spellname = "Living Flame Passive";
    break;
  case 5113:
    spellname = "Living Flames";
    break;
  case 5115:
    spellname = "Battle Command";
    break;
  case 5116:
    spellname = "Concussive Shot";
    break;
  case 5118:
    spellname = "Aspect of the Cheetah";
    break;
  case 5133:
    spellname = "Interrupt (PT)";
    break;
  case 5134:
    spellname = "Flash Bomb";
    break;
  case 5137:
    spellname = "Call of the Grave";
    break;
  case 5138:
    spellname = "Drain Mana";
    break;
  case 5140:
    spellname = "Detonate";
    break;
  case 5141:
    spellname = "Eject Sneed";
    break;
  case 5142:
    spellname = "Trogg Form";
    break;
  case 5143:
    spellname = "Arcane Missiles";
    break;
  case 5144:
    spellname = "Arcane Missiles";
    break;
  case 5145:
    spellname = "Arcane Missiles";
    break;
  case 5149:
    spellname = "Beast Training";
    break;
  case 5154:
    spellname = "Reindeer Transformation";
    break;
  case 5159:
    spellname = "Melt Ore";
    break;
  case 5161:
    spellname = "Revive Dig Rat";
    break;
  case 5162:
    spellname = "Self Explosion";
    break;
  case 5164:
    spellname = "Knockdown";
    break;
  case 5165:
    spellname = "Knockdown /Stun (TEST)";
    break;
  case 5166:
    spellname = "Harvest Silithid Egg";
    break;
  case 5169:
    spellname = "Defias Disguise";
    break;
  case 5171:
    spellname = "Slice and Dice";
    break;
  case 5172:
    spellname = "Bloodsail Companion";
    break;
  case 5174:
    spellname = "Cookie's Cooking";
    break;
  case 5176:
    spellname = "Wrath";
    break;
  case 5177:
    spellname = "Wrath";
    break;
  case 5178:
    spellname = "Wrath";
    break;
  case 5179:
    spellname = "Wrath";
    break;
  case 5180:
    spellname = "Wrath";
    break;
  case 5185:
    spellname = "Healing Touch";
    break;
  case 5186:
    spellname = "Healing Touch";
    break;
  case 5187:
    spellname = "Healing Touch";
    break;
  case 5188:
    spellname = "Healing Touch";
    break;
  case 5189:
    spellname = "Healing Touch";
    break;
  case 5195:
    spellname = "Entangling Roots";
    break;
  case 5196:
    spellname = "Entangling Roots";
    break;
  case 5200:
    spellname = "VanCleef's Allies";
    break;
  case 5201:
    spellname = "Claw";
    break;
  case 5202:
    spellname = "MHTest01";
    break;
  case 5205:
    spellname = "Test - Warrior 40";
    break;
  case 5206:
    spellname = "Plant Seeds";
    break;
  case 5208:
    spellname = "Poisoned Harpoon";
    break;
  case 5209:
    spellname = "Challenging Roar";
    break;
  case 5211:
    spellname = "Bash";
    break;
  case 5213:
    spellname = "Molten Metal";
    break;
  case 5215:
    spellname = "Prowl";
    break;
  case 5217:
    spellname = "Tiger's Fury";
    break;
  case 5219:
    spellname = "Draw of Thistlenettle";
    break;
  case 5220:
    spellname = "Frenzied Capo the Mean";
    break;
  case 5221:
    spellname = "Shred";
    break;
  case 5225:
    spellname = "Track Humanoids";
    break;
  case 5227:
    spellname = "Underwater Breathing";
    break;
  case 5229:
    spellname = "Enrage";
    break;
  case 5232:
    spellname = "Mark of the Wild";
    break;
  case 5234:
    spellname = "Mark of the Wild";
    break;
  case 5242:
    spellname = "Battle Shout";
    break;
  case 5244:
    spellname = "Kodo Hide Bag";
    break;
  case 5246:
    spellname = "Intimidating Shout";
    break;
  case 5249:
    spellname = "Ice Lock";
    break;
  case 5250:
    spellname = "Stromgarde Militia Call";
    break;
  case 5251:
    spellname = "Stromgarde Militia Call Effect";
    break;
  case 5252:
    spellname = "Voidwalker Guardian";
    break;
  case 5255:
    spellname = "Explosion";
    break;
  case 5256:
    spellname = "Claw Cover";
    break;
  case 5257:
    spellname = "Thunderbrew Lager";
    break;
  case 5259:
    spellname = "Disarm (TEST)";
    break;
  case 5260:
    spellname = "Distract (TEST)";
    break;
  case 5262:
    spellname = "Fanatic Blade";
    break;
  case 5263:
    spellname = "Fanatic Blade Effect";
    break;
  case 5264:
    spellname = "South Seas Pirate Disguise";
    break;
  case 5265:
    spellname = "Stonesplinter Trogg Disguise";
    break;
  case 5266:
    spellname = "Syndicate Disguise";
    break;
  case 5267:
    spellname = "Dalaran Wizard Disguise";
    break;
  case 5268:
    spellname = "Dark Iron Dwarf Disguise";
    break;
  case 5271:
    spellname = "Cursed Blade";
    break;
  case 5276:
    spellname = "Freeze";
    break;
  case 5277:
    spellname = "Evasion";
    break;
  case 5280:
    spellname = "Razor Mane";
    break;
  case 5300:
    spellname = "Beast Training";
    break;
  case 5301:
    spellname = "Defensive State (DND)";
    break;
  case 5306:
    spellname = "ImmuneSleep (JEFFTEST)";
    break;
  case 5308:
    spellname = "Execute";
    break;
  case 5316:
    spellname = "Raptor Feather";
    break;
  case 5320:
    spellname = "Echeyakee's Grace";
    break;
  case 5321:
    spellname = "Ishamuhale's Rage";
    break;
  case 5322:
    spellname = "Lakota'mani's Thunder";
    break;
  case 5323:
    spellname = "Speed of Owatanka";
    break;
  case 5324:
    spellname = "Washte Pawne's Resolve";
    break;
  case 5325:
    spellname = "Strength of Isha Awak";
    break;
  case 5337:
    spellname = "Wither Strike";
    break;
  case 5361:
    spellname = "2H Sword Specialization";
    break;
  case 5363:
    spellname = "Thick Skin";
    break;
  case 5364:
    spellname = "Thick Skin";
    break;
  case 5365:
    spellname = "Thick Skin";
    break;
  case 5366:
    spellname = "Thick Skin";
    break;
  case 5367:
    spellname = "Thick Skin";
    break;
  case 5368:
    spellname = "Thick Skin";
    break;
  case 5369:
    spellname = "Thick Skin";
    break;
  case 5370:
    spellname = "Thick Skin";
    break;
  case 5374:
    spellname = "Mutilate";
    break;
  case 5375:
    spellname = "Swiftmend";
    break;
  case 5376:
    spellname = "Hand Snap";
    break;
  case 5377:
    spellname = "Hand Snap";
    break;
  case 5384:
    spellname = "Feign Death";
    break;
  case 5394:
    spellname = "Healing Stream Totem";
    break;
  case 5396:
    spellname = "Healing Stream Totem";
    break;
  case 5401:
    spellname = "Lizard Bolt";
    break;
  case 5403:
    spellname = "Crash of Waves";
    break;
  case 5404:
    spellname = "Gazban Water Form";
    break;
  case 5405:
    spellname = "Replenish Mana";
    break;
  case 5406:
    spellname = "Replenish Mana II";
    break;
  case 5407:
    spellname = "Segra Darkthorn Effect";
    break;
  case 5408:
    spellname = "Quest - Sergra Darkthorn Spell";
    break;
  case 5409:
    spellname = "Quest - Sergra Darkthorn Spell";
    break;
  case 5412:
    spellname = "Balance of Nature Failure";
    break;
  case 5413:
    spellname = "Noxious Catalyst";
    break;
  case 5414:
    spellname = "Balance of Nature";
    break;
  case 5416:
    spellname = "Venom Sting";
    break;
  case 5419:
    spellname = "Travel Form (Passive)";
    break;
  case 5420:
    spellname = "Tree of Life";
    break;
  case 5421:
    spellname = "Aquatic Form (Passive)";
    break;
  case 5422:
    spellname = "Lacerate";
    break;
  case 5424:
    spellname = "Claw Grasp";
    break;
  case 5426:
    spellname = "Quick Sidestep";
    break;
  case 5427:
    spellname = "2H Axe Specialization";
    break;
  case 5480:
    spellname = "Cleave Armor";
    break;
  case 5484:
    spellname = "Howl of Terror";
    break;
  case 5487:
    spellname = "Bear Form";
    break;
  case 5500:
    spellname = "Sense Demons";
    break;
  case 5502:
    spellname = "Sense Undead";
    break;
  case 5503:
    spellname = "Sense Undead";
    break;
  case 5504:
    spellname = "Conjure Water";
    break;
  case 5505:
    spellname = "Conjure Water";
    break;
  case 5506:
    spellname = "Conjure Water";
    break;
  case 5508:
    spellname = "Cleave Armor";
    break;
  case 5512:
    spellname = "Fill Phial";
    break;
  case 5514:
    spellname = "Darken Vision";
    break;
  case 5515:
    spellname = "Savagery";
    break;
  case 5530:
    spellname = "Mace Stun Effect";
    break;
  case 5543:
    spellname = "Fade Out";
    break;
  case 5567:
    spellname = "Miring Mud";
    break;
  case 5568:
    spellname = "Trample";
    break;
  case 5570:
    spellname = "Insect Swarm";
    break;
  case 5573:
    spellname = "Divine Protection";
    break;
  case 5579:
    spellname = "Immune Root/Snare/Stun";
    break;
  case 5581:
    spellname = "Script Test";
    break;
  case 5586:
    spellname = "Dagger Power";
    break;
  case 5588:
    spellname = "Hammer of Justice";
    break;
  case 5589:
    spellname = "Hammer of Justice";
    break;
  case 5595:
    spellname = "Dagger Power";
    break;
  case 5597:
    spellname = "Serious Wound";
    break;
  case 5598:
    spellname = "Serious Wound";
    break;
  case 5599:
    spellname = "Blessing of Protection";
    break;
  case 5605:
    spellname = "Healing Ward";
    break;
  case 5607:
    spellname = "Healing Aura";
    break;
  case 5608:
    spellname = "Healing Ward Passive";
    break;
  case 5614:
    spellname = "Exorcism";
    break;
  case 5615:
    spellname = "Exorcism";
    break;
  case 5627:
    spellname = "Turn Undead";
    break;
  case 5628:
    spellname = "Gnarlpine Vengeance";
    break;
  case 5648:
    spellname = "Stunning Blast";
    break;
  case 5649:
    spellname = "Stunning Blast";
    break;
  case 5665:
    spellname = "Fury of the Bogling";
    break;
  case 5666:
    spellname = "Summon Timberling";
    break;
  case 5672:
    spellname = "Healing Stream";
    break;
  case 5675:
    spellname = "Mana Spring Totem";
    break;
  case 5676:
    spellname = "Searing Pain";
    break;
  case 5677:
    spellname = "Mana Spring";
    break;
  case 5679:
    spellname = "Torch Burn";
    break;
  case 5680:
    spellname = "Torch Burn";
    break;
  case 5696:
    spellname = "Charge (TEST)";
    break;
  case 5697:
    spellname = "Unending Breath";
    break;
  case 5699:
    spellname = "Create Healthstone";
    break;
  case 5703:
    spellname = "Stunning Strike";
    break;
  case 5707:
    spellname = "Lifestone Regeneration";
    break;
  case 5708:
    spellname = "Swoop";
    break;
  case 5720:
    spellname = "Healthstone";
    break;
  case 5723:
    spellname = "Greater Healthstone";
    break;
  case 5726:
    spellname = "Stunning Blow";
    break;
  case 5727:
    spellname = "Stunning Blow";
    break;
  case 5728:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 5729:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 5730:
    spellname = "Stoneclaw Totem";
    break;
  case 5735:
    spellname = "REUSE";
    break;
  case 5739:
    spellname = "Meteor Strike Infernal";
    break;
  case 5740:
    spellname = "Rain of Fire";
    break;
  case 5759:
    spellname = "Cat Form";
    break;
  case 5760:
    spellname = "Mind-numbing Poison";
    break;
  case 5761:
    spellname = "Mind-numbing Poison";
    break;
  case 5763:
    spellname = "Mind-numbing Poison";
    break;
  case 5781:
    spellname = "Threatening Growl";
    break;
  case 5782:
    spellname = "Fear";
    break;
  case 5784:
    spellname = "Summon Felsteed";
    break;
  case 5785:
    spellname = "Teach Summon Felsteed";
    break;
  case 5809:
    spellname = "Create Scrying Bowl";
    break;
  case 5810:
    spellname = "Stone Skin";
    break;
  case 5811:
    spellname = "Stone Skin Passive";
    break;
  case 5857:
    spellname = "Hellfire Effect";
    break;
  case 5858:
    spellname = "Dryad Camouflage";
    break;
  case 5862:
    spellname = "Blessing of Aman";
    break;
  case 5884:
    spellname = "Banshee Curse";
    break;
  case 5888:
    spellname = "Darkshore Frenzy";
    break;
  case 5909:
    spellname = "Watered-down Beer";
    break;
  case 5915:
    spellname = "Crazed";
    break;
  case 5916:
    spellname = "Shadowstalker Stealth";
    break;
  case 5917:
    spellname = "Fumble";
    break;
  case 5918:
    spellname = "Shadowstalker Stab";
    break;
  case 5923:
    spellname = "Holy Power";
    break;
  case 5924:
    spellname = "Holy Power";
    break;
  case 5925:
    spellname = "Holy Power";
    break;
  case 5926:
    spellname = "Holy Power";
    break;
  case 5938:
    spellname = "Shiv";
    break;
  case 5940:
    spellname = "Shiv";
    break;
  case 5951:
    spellname = "Knockdown";
    break;
  case 5967:
    spellname = "Pickpocket (PT)";
    break;
  case 5968:
    spellname = "Summon Ghost Saber";
    break;
  case 5978:
    spellname = "rf";
    break;
  case 5990:
    spellname = "Nimble Reflexes";
    break;
  case 6000:
    spellname = "Open Wound";
    break;
  case 6016:
    spellname = "Pierce Armor";
    break;
  case 6027:
    spellname = "Web";
    break;
  case 6028:
    spellname = "Web";
    break;
  case 6041:
    spellname = "Lightning Bolt";
    break;
  case 6057:
    spellname = "Wand Specialization";
    break;
  case 6060:
    spellname = "Smite";
    break;
  case 6061:
    spellname = "Wave Beam";
    break;
  case 6063:
    spellname = "Heal";
    break;
  case 6064:
    spellname = "Heal";
    break;
  case 6065:
    spellname = "Power Word: Shield";
    break;
  case 6066:
    spellname = "Power Word: Shield";
    break;
  case 6074:
    spellname = "Renew";
    break;
  case 6075:
    spellname = "Renew";
    break;
  case 6076:
    spellname = "Renew";
    break;
  case 6077:
    spellname = "Renew";
    break;
  case 6078:
    spellname = "Renew";
    break;
  case 6084:
    spellname = "Summon Ghost Saber";
    break;
  case 6085:
    spellname = "Wand Specialization";
    break;
  case 6114:
    spellname = "Raptor Punch";
    break;
  case 6115:
    spellname = "Far Sight (PT)";
    break;
  case 6117:
    spellname = "Mage Armor";
    break;
  case 6119:
    spellname = "Combat Swap (DND)";
    break;
  case 6122:
    spellname = "Summon Vekniss Borer";
    break;
  case 6123:
    spellname = "Combat Swap (DND)";
    break;
  case 6127:
    spellname = "Conjure Water";
    break;
  case 6129:
    spellname = "Conjure Food";
    break;
  case 6131:
    spellname = "Frost Nova";
    break;
  case 6136:
    spellname = "Chilled";
    break;
  case 6141:
    spellname = "Blizzard";
    break;
  case 6143:
    spellname = "Frost Ward";
    break;
  case 6145:
    spellname = "Eagle Eye (PT)";
    break;
  case 6146:
    spellname = "Slow";
    break;
  case 6147:
    spellname = "INVIS Only OFF";
    break;
  case 6150:
    spellname = "Quick Shots";
    break;
  case 6178:
    spellname = "Charge";
    break;
  case 6190:
    spellname = "Demoralizing Shout";
    break;
  case 6192:
    spellname = "Battle Shout";
    break;
  case 6195:
    spellname = "Serpentbloom Snake";
    break;
  case 6196:
    spellname = "Far Sight";
    break;
  case 6197:
    spellname = "Eagle Eye";
    break;
  case 6199:
    spellname = "Nostalgia";
    break;
  case 6201:
    spellname = "Create Healthstone";
    break;
  case 6202:
    spellname = "Create Healthstone";
    break;
  case 6205:
    spellname = "Curse of Weakness";
    break;
  case 6213:
    spellname = "Fear";
    break;
  case 6215:
    spellname = "Fear";
    break;
  case 6217:
    spellname = "Curse of Agony";
    break;
  case 6219:
    spellname = "Rain of Fire";
    break;
  case 6222:
    spellname = "Corruption";
    break;
  case 6223:
    spellname = "Corruption";
    break;
  case 6226:
    spellname = "Drain Mana";
    break;
  case 6229:
    spellname = "Shadow Ward";
    break;
  case 6233:
    spellname = "Closing";
    break;
  case 6234:
    spellname = "Incineration";
    break;
  case 6235:
    spellname = "Wisp Summon";
    break;
  case 6236:
    spellname = "Form of the Moonstalker";
    break;
  case 6237:
    spellname = "Wisp Detonate";
    break;
  case 6238:
    spellname = "Speak with Animals";
    break;
  case 6239:
    spellname = "Bloodtooth's Totum";
    break;
  case 6240:
    spellname = "Dispell Bloodtooth";
    break;
  case 6243:
    spellname = "Serpentbloom Snake Passive";
    break;
  case 6245:
    spellname = "Force Target - Salute";
    break;
  case 6246:
    spellname = "Closing";
    break;
  case 6247:
    spellname = "Opening";
    break;
  case 6249:
    spellname = "Opening";
    break;
  case 6250:
    spellname = "Fire Cannon";
    break;
  case 6251:
    spellname = "Summon Crimson Cannon";
    break;
  case 6252:
    spellname = "Southsea Cannon Fire";
    break;
  case 6253:
    spellname = "Backhand";
    break;
  case 6254:
    spellname = "Chained Bolt";
    break;
  case 6255:
    spellname = "Lizard Bolt";
    break;
  case 6257:
    spellname = "Torch Toss";
    break;
  case 6262:
    spellname = "Minor Healthstone";
    break;
  case 6263:
    spellname = "Lesser Healthstone";
    break;
  case 6264:
    spellname = "Nimble Reflexes";
    break;
  case 6266:
    spellname = "Kodo Stomp";
    break;
  case 6268:
    spellname = "Rushing Charge";
    break;
  case 6270:
    spellname = "Serpentine Cleansing";
    break;
  case 6271:
    spellname = "Naralex's Awakening";
    break;
  case 6272:
    spellname = "Eye of Yesmur (PT)";
    break;
  case 6273:
    spellname = "Force Target - Talk";
    break;
  case 6274:
    spellname = "Healing Ward";
    break;
  case 6275:
    spellname = "Healing Aura";
    break;
  case 6276:
    spellname = "Healing Ward IV Passive";
    break;
  case 6277:
    spellname = "Bind Sight (PT)";
    break;
  case 6278:
    spellname = "Creeping Mold";
    break;
  case 6280:
    spellname = "Pet Hardiness";
    break;
  case 6281:
    spellname = "Pet Hardiness";
    break;
  case 6282:
    spellname = "Pet Hardiness";
    break;
  case 6283:
    spellname = "Pet Hardiness";
    break;
  case 6286:
    spellname = "Pet Hardiness";
    break;
  case 6295:
    spellname = "Fiery Enchantment";
    break;
  case 6296:
    spellname = "Enchant: Fiery Blaze";
    break;
  case 6297:
    spellname = "Fiery Blaze";
    break;
  case 6298:
    spellname = "Form of the Moonstalker";
    break;
  case 6304:
    spellname = "Rhahk'Zor Slam";
    break;
  case 6305:
    spellname = "Flame Burst";
    break;
  case 6306:
    spellname = "Acid Splash";
    break;
  case 6307:
    spellname = "Blood Pact";
    break;
  case 6310:
    spellname = "Divining Scroll Spell";
    break;
  case 6311:
    spellname = "Pet Aggression";
    break;
  case 6314:
    spellname = "Pet Aggression";
    break;
  case 6315:
    spellname = "Pet Aggression";
    break;
  case 6316:
    spellname = "Pet Aggression";
    break;
  case 6317:
    spellname = "Pet Aggression";
    break;
  case 6327:
    spellname = "Mana Feed";
    break;
  case 6328:
    spellname = "Pet Recovery";
    break;
  case 6331:
    spellname = "Pet Recovery";
    break;
  case 6332:
    spellname = "Pet Recovery";
    break;
  case 6333:
    spellname = "Pet Recovery";
    break;
  case 6334:
    spellname = "Pet Recovery";
    break;
  case 6343:
    spellname = "Thunder Clap";
    break;
  case 6345:
    spellname = "Polymorphic Explosion";
    break;
  case 6346:
    spellname = "Fear Ward";
    break;
  case 6347:
    spellname = "Feedback";
    break;
  case 6348:
    spellname = "[PH] Teleport to Menethil Harbor";
    break;
  case 6349:
    spellname = "[PH] Teleport to Auberdine";
    break;
  case 6350:
    spellname = "Attack";
    break;
  case 6351:
    spellname = "Attack";
    break;
  case 6352:
    spellname = "Attack";
    break;
  case 6353:
    spellname = "Soul Fire";
    break;
  case 6354:
    spellname = "Venom's Bane";
    break;
  case 6355:
    spellname = "Drink Disease Bottle";
    break;
  case 6356:
    spellname = "Spell Immunity";
    break;
  case 6357:
    spellname = "Spell Immunity";
    break;
  case 6358:
    spellname = "Seduction";
    break;
  case 6359:
    spellname = "Seduction";
    break;
  case 6360:
    spellname = "Soothing Kiss";
    break;
  case 6362:
    spellname = "Soothing Kiss";
    break;
  case 6363:
    spellname = "Searing Totem";
    break;
  case 6364:
    spellname = "Searing Totem";
    break;
  case 6365:
    spellname = "Searing Totem";
    break;
  case 6366:
    spellname = "Create Firestone";
    break;
  case 6371:
    spellname = "Healing Stream";
    break;
  case 6372:
    spellname = "Healing Stream";
    break;
  case 6375:
    spellname = "Healing Stream Totem";
    break;
  case 6377:
    spellname = "Healing Stream Totem";
    break;
  case 6390:
    spellname = "Stoneclaw Totem";
    break;
  case 6391:
    spellname = "Stoneclaw Totem";
    break;
  case 6392:
    spellname = "Stoneclaw Totem";
    break;
  case 6393:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 6394:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 6395:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 6397:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 6398:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 6399:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 6405:
    spellname = "Furbolg Form";
    break;
  case 6408:
    spellname = "Faded";
    break;
  case 6409:
    spellname = "Cheap Shot";
    break;
  case 6410:
    spellname = "Food";
    break;
  case 6411:
    spellname = "Scorpid Poison";
    break;
  case 6412:
    spellname = "Kaldorei Spider Kabob";
    break;
  case 6413:
    spellname = "Scorpid Surprise";
    break;
  case 6414:
    spellname = "Roasted Kodo Meat";
    break;
  case 6415:
    spellname = "Fillet of Frenzy";
    break;
  case 6416:
    spellname = "Strider Stew";
    break;
  case 6417:
    spellname = "Dig Rat Stew";
    break;
  case 6418:
    spellname = "Crispy Lizard Tail";
    break;
  case 6419:
    spellname = "Lean Venison";
    break;
  case 6421:
    spellname = "Ashcrombe's Unlock";
    break;
  case 6422:
    spellname = "Ashcrombe's Teleport";
    break;
  case 6431:
    spellname = "Self Visual - Sleep 30s (DND)";
    break;
  case 6432:
    spellname = "Smite Stomp";
    break;
  case 6433:
    spellname = "Nimble Reflexes III";
    break;
  case 6434:
    spellname = "Slice and Dice";
    break;
  case 6435:
    spellname = "Smite Slam";
    break;
  case 6436:
    spellname = "Smite's Hammer";
    break;
  case 6443:
    spellname = "Pet Resistance";
    break;
  case 6444:
    spellname = "Pet Resistance";
    break;
  case 6445:
    spellname = "Pet Resistance";
    break;
  case 6446:
    spellname = "Pet Resistance";
    break;
  case 6447:
    spellname = "Pet Resistance";
    break;
  case 6458:
    spellname = "Ornate Spyglass";
    break;
  case 6460:
    spellname = "Lockpicking";
    break;
  case 6462:
    spellname = "Pacified";
    break;
  case 6464:
    spellname = "Summon Rusty Chest";
    break;
  case 6465:
    spellname = "Trapped Chest";
    break;
  case 6466:
    spellname = "Axe Toss";
    break;
  case 6468:
    spellname = "Skeletal Miner Berserk";
    break;
  case 6469:
    spellname = "Skeletal Miner Explode";
    break;
  case 6474:
    spellname = "Earthbind Totem Passive";
    break;
  case 6476:
    spellname = "QAEnchant Cloak +10 Shadow Resistance";
    break;
  case 6477:
    spellname = "Opening";
    break;
  case 6478:
    spellname = "Opening";
    break;
  case 6479:
    spellname = "Razormane Wolf";
    break;
  case 6483:
    spellname = "[PH] Teleport to Felwood";
    break;
  case 6484:
    spellname = "[PH] Teleport to Balthule";
    break;
  case 6487:
    spellname = "Ilkrud's Guardians";
    break;
  case 6488:
    spellname = "Sarilus's Elementals Passive";
    break;
  case 6490:
    spellname = "Sarilus's Elementals";
    break;
  case 6495:
    spellname = "Sentry Totem";
    break;
  case 6497:
    spellname = "Feed Sarilus Effect";
    break;
  case 6498:
    spellname = "Feed Sarilus Passive";
    break;
  case 6499:
    spellname = "Boiled Clams";
    break;
  case 6500:
    spellname = "Goblin Deviled Clams";
    break;
  case 6501:
    spellname = "Clam Chowder";
    break;
  case 6507:
    spellname = "Battle Roar";
    break;
  case 6512:
    spellname = "Detect Lesser Invisibility";
    break;
  case 6513:
    spellname = "Resist Poison";
    break;
  case 6514:
    spellname = "Sharp Weapon +2";
    break;
  case 6515:
    spellname = "Sharp Weapon +3";
    break;
  case 6516:
    spellname = "Sharp Weapon +5";
    break;
  case 6517:
    spellname = "Pearl-handled Dagger";
    break;
  case 6518:
    spellname = "Iridescent Hammer";
    break;
  case 6521:
    spellname = "Pearl-clasped Cloak";
    break;
  case 6523:
    spellname = "Phase Out Passive";
    break;
  case 6524:
    spellname = "Ground Tremor";
    break;
  case 6527:
    spellname = "Unlocking";
    break;
  case 6528:
    spellname = "Quest - Purge Visual";
    break;
  case 6529:
    spellname = "Opening Benedict's Chest";
    break;
  case 6530:
    spellname = "Sling Dirt";
    break;
  case 6531:
    spellname = "Overseer's Poison";
    break;
  case 6533:
    spellname = "Net";
    break;
  case 6535:
    spellname = "Lightning Cloud";
    break;
  case 6536:
    spellname = "Summon Deepmoss Matriarch";
    break;
  case 6537:
    spellname = "Call of the Forest";
    break;
  case 6538:
    spellname = "Dig Trap";
    break;
  case 6539:
    spellname = "Dig Trap";
    break;
  case 6542:
    spellname = "Enraged Defense";
    break;
  case 6545:
    spellname = "Leap Target";
    break;
  case 6546:
    spellname = "Rend";
    break;
  case 6547:
    spellname = "Rend";
    break;
  case 6548:
    spellname = "Rend";
    break;
  case 6552:
    spellname = "Pummel";
    break;
  case 6554:
    spellname = "Pummel";
    break;
  case 6558:
    spellname = "Evil Intellect";
    break;
  case 6560:
    spellname = "LeCraft Test Spell";
    break;
  case 6562:
    spellname = "Heroic Presence";
    break;
  case 6572:
    spellname = "Revenge";
    break;
  case 6574:
    spellname = "Revenge";
    break;
  case 6576:
    spellname = "Intimidating Growl";
    break;
  case 6580:
    spellname = "Pierce Ankle";
    break;
  case 6581:
    spellname = "Pierce Ankle";
    break;
  case 6584:
    spellname = "Jin'Zil's Curse";
    break;
  case 6587:
    spellname = "Silithid Creeper Egg";
    break;
  case 6588:
    spellname = "Summon Silithid Grub";
    break;
  case 6589:
    spellname = "Silithid Swarm";
    break;
  case 6590:
    spellname = "Silithid Swarm Passive";
    break;
  case 6595:
    spellname = "Exploit Weakness";
    break;
  case 6598:
    spellname = "Savannah Cub";
    break;
  case 6600:
    spellname = "Salt Flats Racer Speed";
    break;
  case 6601:
    spellname = "Salt Flats Racer Slow";
    break;
  case 6602:
    spellname = "Salt Flats Racer Normal";
    break;
  case 6603:
    spellname = "Attack";
    break;
  case 6605:
    spellname = "Terrifying Screech";
    break;
  case 6606:
    spellname = "Self Visual - Sleep Until Cancelled  (DND)";
    break;
  case 6607:
    spellname = "Lash";
    break;
  case 6608:
    spellname = "Dropped Weapon";
    break;
  case 6609:
    spellname = "Filling";
    break;
  case 6610:
    spellname = "Filling";
    break;
  case 6611:
    spellname = "Filling";
    break;
  case 6612:
    spellname = "Rage";
    break;
  case 6613:
    spellname = "Great Rage";
    break;
  case 6614:
    spellname = "Cowardly Flight";
    break;
  case 6615:
    spellname = "Free Action";
    break;
  case 6617:
    spellname = "Rage Potion";
    break;
  case 6618:
    spellname = "Great Rage Potion";
    break;
  case 6619:
    spellname = "Cowardly Flight Potion";
    break;
  case 6620:
    spellname = "Place Toxic Fogger";
    break;
  case 6624:
    spellname = "Free Action Potion";
    break;
  case 6626:
    spellname = "Set NG-5 Charge (Blue)";
    break;
  case 6627:
    spellname = "Remote Detonate";
    break;
  case 6629:
    spellname = "Summon Deepmoss Baby";
    break;
  case 6630:
    spellname = "Set NG-5 Charge (Red)";
    break;
  case 6634:
    spellname = "Phasing Stealth";
    break;
  case 6636:
    spellname = "Wagon Explode";
    break;
  case 6645:
    spellname = "Snare Poison";
    break;
  case 6647:
    spellname = "Fast Acting Poison";
    break;
  case 6648:
    spellname = "Chestnut Mare";
    break;
  case 6650:
    spellname = "Instant Toxin";
    break;
  case 6653:
    spellname = "Dire Wolf";
    break;
  case 6654:
    spellname = "Brown Wolf";
    break;
  case 6655:
    spellname = "Force Target - Bow";
    break;
  case 6656:
    spellname = "Remote Detonate";
    break;
  case 6657:
    spellname = "Summon Serpent Messenger";
    break;
  case 6658:
    spellname = "Opening";
    break;
  case 6660:
    spellname = "Shoot";
    break;
  case 6661:
    spellname = "Barbaric Harness";
    break;
  case 6664:
    spellname = "Survival Instinct";
    break;
  case 6668:
    spellname = "Red Firework";
    break;
  case 6669:
    spellname = "Survival Instinct";
    break;
  case 6671:
    spellname = "Create Scroll";
    break;
  case 6672:
    spellname = "Toxic Contagion";
    break;
  case 6673:
    spellname = "Battle Shout";
    break;
  case 6677:
    spellname = "Silithid Swarm Call";
    break;
  case 6685:
    spellname = "Piercing Shot";
    break;
  case 6686:
    spellname = "Red Linen Bag";
    break;
  case 6688:
    spellname = "Red Woolen Bag";
    break;
  case 6690:
    spellname = "Lesser Wizard's Robe";
    break;
  case 6692:
    spellname = "Robes of Arcana";
    break;
  case 6693:
    spellname = "Green Silk Pack";
    break;
  case 6695:
    spellname = "Black Silk Pack";
    break;
  case 6700:
    spellname = "Dimensional Portal";
    break;
  case 6702:
    spellname = "Murloc Scale Belt";
    break;
  case 6703:
    spellname = "Murloc Scale Breastplate";
    break;
  case 6704:
    spellname = "Thick Murloc Armor";
    break;
  case 6705:
    spellname = "Murloc Scale Bracers";
    break;
  case 6711:
    spellname = "Pathfinding";
    break;
  case 6713:
    spellname = "Disarm";
    break;
  case 6714:
    spellname = "Test of Faith";
    break;
  case 6716:
    spellname = "Test of Faith";
    break;
  case 6717:
    spellname = "Place Lion Carcass";
    break;
  case 6718:
    spellname = "Phasing Stealth";
    break;
  case 6719:
    spellname = "[PH] Teleport to Theramore";
    break;
  case 6724:
    spellname = "Light of Elune";
    break;
  case 6725:
    spellname = "Flame Spike";
    break;
  case 6726:
    spellname = "Silence";
    break;
  case 6727:
    spellname = "Poison Mushroom";
    break;
  case 6728:
    spellname = "Enveloping Winds";
    break;
  case 6730:
    spellname = "Head Butt";
    break;
  case 6741:
    spellname = "Identify Brood";
    break;
  case 6742:
    spellname = "Bloodlust";
    break;
  case 6743:
    spellname = "Horse Riding";
    break;
  case 6744:
    spellname = "Ram Riding";
    break;
  case 6745:
    spellname = "Tiger Riding";
    break;
  case 6746:
    spellname = "Wolf Riding";
    break;
  case 6747:
    spellname = "Test Combo";
    break;
  case 6748:
    spellname = "Test Finishing";
    break;
  case 6749:
    spellname = "Wide Swipe";
    break;
  case 6750:
    spellname = "Wide Swipe Passive";
    break;
  case 6751:
    spellname = "Weak Poison";
    break;
  case 6752:
    spellname = "Weak Poison Proc";
    break;
  case 6753:
    spellname = "Backhand";
    break;
  case 6754:
    spellname = "Slap!";
    break;
  case 6755:
    spellname = "Tell Joke";
    break;
  case 6756:
    spellname = "Mark of the Wild";
    break;
  case 6757:
    spellname = "Create House (TEST)";
    break;
  case 6758:
    spellname = "Party Fever";
    break;
  case 6759:
    spellname = "Party Fever Effect";
    break;
  case 6760:
    spellname = "Eviscerate";
    break;
  case 6761:
    spellname = "Eviscerate";
    break;
  case 6762:
    spellname = "Eviscerate";
    break;
  case 6766:
    spellname = "Test of Lore";
    break;
  case 6767:
    spellname = "Mark of Shame";
    break;
  case 6768:
    spellname = "Feint";
    break;
  case 6770:
    spellname = "Sap";
    break;
  case 6774:
    spellname = "Slice and Dice";
    break;
  case 6777:
    spellname = "Gray Ram";
    break;
  case 6778:
    spellname = "Healing Touch";
    break;
  case 6780:
    spellname = "Wrath";
    break;
  case 6783:
    spellname = "Prowl";
    break;
  case 6785:
    spellname = "Ravage";
    break;
  case 6787:
    spellname = "Ravage";
    break;
  case 6788:
    spellname = "Weakened Soul";
    break;
  case 6789:
    spellname = "Death Coil";
    break;
  case 6793:
    spellname = "Tiger's Fury";
    break;
  case 6795:
    spellname = "Growl";
    break;
  case 6798:
    spellname = "Bash";
    break;
  case 6800:
    spellname = "Shred";
    break;
  case 6802:
    spellname = "Opening";
    break;
  case 6803:
    spellname = "Filling";
    break;
  case 6805:
    spellname = "Dousing";
    break;
  case 6807:
    spellname = "Maul";
    break;
  case 6808:
    spellname = "Maul";
    break;
  case 6809:
    spellname = "Maul";
    break;
  case 6813:
    spellname = "Coat of Thistlefur";
    break;
  case 6814:
    spellname = "Sludge Toxin";
    break;
  case 6816:
    spellname = "Corrupted Strength";
    break;
  case 6817:
    spellname = "Corrupted Agility";
    break;
  case 6818:
    spellname = "Corrupted Intellect";
    break;
  case 6819:
    spellname = "Corrupted Stamina";
    break;
  case 6820:
    spellname = "Corrupted Agility Passive";
    break;
  case 6821:
    spellname = "Corrupted Strength Passive";
    break;
  case 6822:
    spellname = "Corrupted Stamina Passive";
    break;
  case 6823:
    spellname = "Corrupted Intellect Passive";
    break;
  case 6844:
    spellname = "Self Visual - Stun 10s (DND)";
    break;
  case 6864:
    spellname = "Strength of Stone";
    break;
  case 6866:
    spellname = "Moss Covered Hands";
    break;
  case 6867:
    spellname = "Moss Covered Hands Proc";
    break;
  case 6869:
    spellname = "Fall down";
    break;
  case 6870:
    spellname = "Moss Covered Feet";
    break;
  case 6871:
    spellname = "Moss Covered Feet Proc";
    break;
  case 6873:
    spellname = "Foul Chill";
    break;
  case 6894:
    spellname = "Death Bed";
    break;
  case 6896:
    spellname = "Black Ram";
    break;
  case 6897:
    spellname = "Blue Ram";
    break;
  case 6898:
    spellname = "White Ram";
    break;
  case 6899:
    spellname = "Brown Ram";
    break;
  case 6900:
    spellname = "Create Tuber";
    break;
  case 6902:
    spellname = "Sneezing Fit";
    break;
  case 6903:
    spellname = "Krazek's Drug";
    break;
  case 6905:
    spellname = "Summon Illusionary Nightmare";
    break;
  case 6907:
    spellname = "Diseased Slime";
    break;
  case 6909:
    spellname = "Curse of Thorns";
    break;
  case 6910:
    spellname = "Curse of Thorns";
    break;
  case 6913:
    spellname = "Force of Nature";
    break;
  case 6917:
    spellname = "Venom Spit";
    break;
  case 6918:
    spellname = "Summon Snufflenose";
    break;
  case 6920:
    spellname = "Hide";
    break;
  case 6921:
    spellname = "Shadowhorn Charge";
    break;
  case 6922:
    spellname = "Curse of the Shadowhorn";
    break;
  case 6923:
    spellname = "Growl of Fortitude Proc";
    break;
  case 6924:
    spellname = "Remove Polymorph";
    break;
  case 6925:
    spellname = "Gift of the Xavian";
    break;
  case 6927:
    spellname = "Shadowstalker Slash";
    break;
  case 6940:
    spellname = "Blessing of Sacrifice";
    break;
  case 6942:
    spellname = "Overwhelming Stench";
    break;
  case 6945:
    spellname = "Chest Pains";
    break;
  case 6946:
    spellname = "Curse of the Bleakheart";
    break;
  case 6947:
    spellname = "Curse of the Bleakheart Proc";
    break;
  case 6949:
    spellname = "Weak Frostbolt";
    break;
  case 6950:
    spellname = "Faerie Fire";
    break;
  case 6951:
    spellname = "Decayed Strength";
    break;
  case 6954:
    spellname = "Nalpak (TEST)";
    break;
  case 6955:
    spellname = "Gnome Car Camera";
    break;
  case 6957:
    spellname = "Frostmane Strength";
    break;
  case 6958:
    spellname = "Blood Leech";
    break;
  case 6960:
    spellname = "Lightning Barrier";
    break;
  case 6961:
    spellname = "Knockdown Proc";
    break;
  case 6962:
    spellname = "Pet Summoned";
    break;
  case 6963:
    spellname = "Shadow Bolt Vortex";
    break;
  case 6964:
    spellname = "Echoes of Lordaeron";
    break;
  case 6965:
    spellname = "Polymorphic Ray";
    break;
  case 6966:
    spellname = "Echoes of Lordaeron";
    break;
  case 6974:
    spellname = "Gnome Camera Connection";
    break;
  case 6979:
    spellname = "Fire Shot";
    break;
  case 6980:
    spellname = "Fire Shot";
    break;
  case 6982:
    spellname = "Gust of Wind";
    break;
  case 6984:
    spellname = "Frost Shot";
    break;
  case 6991:
    spellname = "Feed Pet";
    break;
  case 6998:
    spellname = "Echoes of Lordaeron";
    break;
  case 7000:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 7001:
    spellname = "Lightwell Renew";
    break;
  case 7020:
    spellname = "Stoneform";
    break;
  case 7022:
    spellname = "Goblin Car Camera";
    break;
  case 7023:
    spellname = "Goblin Camera Connection";
    break;
  case 7033:
    spellname = "Charm+ (TEST)";
    break;
  case 7035:
    spellname = "Goblin Racer Cheer";
    break;
  case 7036:
    spellname = "Gnome Racer Cheer";
    break;
  case 7038:
    spellname = "Forsaken Skill: Swords";
    break;
  case 7039:
    spellname = "Forsaken Skill: Axes";
    break;
  case 7040:
    spellname = "Forsaken Skill: Daggers";
    break;
  case 7041:
    spellname = "Forsaken Skill: Maces";
    break;
  case 7042:
    spellname = "Forsaken Skill: Staves";
    break;
  case 7043:
    spellname = "Forsaken Skill: Bows";
    break;
  case 7044:
    spellname = "Forsaken Skill: Guns";
    break;
  case 7045:
    spellname = "Forsaken Skill: 2H Axes";
    break;
  case 7046:
    spellname = "Forsaken Skill: 2H Maces";
    break;
  case 7047:
    spellname = "Forsaken Skill: 2H Swords";
    break;
  case 7048:
    spellname = "Forsaken Skill: Defense";
    break;
  case 7049:
    spellname = "Forsaken Skill: Fire";
    break;
  case 7050:
    spellname = "Forsaken Skill: Frost";
    break;
  case 7051:
    spellname = "Forsaken Skill: Holy";
    break;
  case 7053:
    spellname = "Forsaken Skill: Shadow";
    break;
  case 7054:
    spellname = "Forsaken Skills";
    break;
  case 7056:
    spellname = "Pacified";
    break;
  case 7057:
    spellname = "Haunting Spirits";
    break;
  case 7067:
    spellname = "Summon Haunting Spirit";
    break;
  case 7068:
    spellname = "Veil of Shadow";
    break;
  case 7069:
    spellname = "Enraging Aura";
    break;
  case 7072:
    spellname = "Wild Rage";
    break;
  case 7074:
    spellname = "Screams of the Past";
    break;
  case 7076:
    spellname = "Summon Tervosh's Minion";
    break;
  case 7077:
    spellname = "Simple Teleport";
    break;
  case 7078:
    spellname = "Simple Teleport Group";
    break;
  case 7079:
    spellname = "Simple Teleport Other";
    break;
  case 7081:
    spellname = "Encage";
    break;
  case 7082:
    spellname = "Barrel Explode";
    break;
  case 7083:
    spellname = "Quillboar Channeling";
    break;
  case 7084:
    spellname = "Damage Car";
    break;
  case 7090:
    spellname = "Bear Form";
    break;
  case 7092:
    spellname = "Maul";
    break;
  case 7093:
    spellname = "Intimidation";
    break;
  case 7095:
    spellname = "Knockdown Proc";
    break;
  case 7098:
    spellname = "Curse of Mending";
    break;
  case 7099:
    spellname = "Curse of Mending";
    break;
  case 7101:
    spellname = "Flame Blast";
    break;
  case 7102:
    spellname = "Contagion of Rot";
    break;
  case 7103:
    spellname = "Contagion of Rot";
    break;
  case 7104:
    spellname = "Sneak";
    break;
  case 7105:
    spellname = "Fake Shot";
    break;
  case 7106:
    spellname = "Dark Restore";
    break;
  case 7107:
    spellname = "Summon Wolfguard Worg";
    break;
  case 7108:
    spellname = "Moist Towelette";
    break;
  case 7120:
    spellname = "Proudmoore's Defense";
    break;
  case 7121:
    spellname = "Anti-Magic Shield";
    break;
  case 7122:
    spellname = "Blood Tap";
    break;
  case 7124:
    spellname = "Arugal's Gift";
    break;
  case 7125:
    spellname = "Toxic Saliva";
    break;
  case 7126:
    spellname = "Handstitched Leather Vest";
    break;
  case 7127:
    spellname = "Wavering Will";
    break;
  case 7128:
    spellname = "Inner Fire";
    break;
  case 7131:
    spellname = "Illusion Passive";
    break;
  case 7132:
    spellname = "Summon Lupine Delusions";
    break;
  case 7133:
    spellname = "Fine Leather Pants";
    break;
  case 7135:
    spellname = "Dark Leather Pants";
    break;
  case 7136:
    spellname = "Shadow Port";
    break;
  case 7137:
    spellname = "Shadow Charge";
    break;
  case 7139:
    spellname = "Fel Stomp";
    break;
  case 7140:
    spellname = "Expose Weakness";
    break;
  case 7141:
    spellname = "Simple Teleport";
    break;
  case 7143:
    spellname = "Simple Teleport Group";
    break;
  case 7144:
    spellname = "Stone Slumber";
    break;
  case 7145:
    spellname = "Diving Sweep";
    break;
  case 7147:
    spellname = "Guardian Pants";
    break;
  case 7149:
    spellname = "Barbaric Leggings";
    break;
  case 7151:
    spellname = "Barbaric Shoulders";
    break;
  case 7153:
    spellname = "Guardian Cloak";
    break;
  case 7154:
    spellname = "Dark Offering";
    break;
  case 7155:
    spellname = "CreatureSpecial";
    break;
  case 7156:
    spellname = "Guardian Gloves";
    break;
  case 7159:
    spellname = "Backstab";
    break;
  case 7160:
    spellname = "Execute";
    break;
  case 7162:
    spellname = "First Aid";
    break;
  case 7164:
    spellname = "Defensive Stance";
    break;
  case 7165:
    spellname = "Battle Stance";
    break;
  case 7178:
    spellname = "Water Breathing";
    break;
  case 7179:
    spellname = "Elixir of Water Breathing";
    break;
  case 7181:
    spellname = "Greater Healing Potion";
    break;
  case 7183:
    spellname = "Elixir of Minor Defense";
    break;
  case 7184:
    spellname = "Lost Control";
    break;
  case 7211:
    spellname = "Devilsaur Barb";
    break;
  case 7212:
    spellname = "Perceptive";
    break;
  case 7213:
    spellname = "Giant Clam Scorcho";
    break;
  case 7215:
    spellname = "Mithril Spurs";
    break;
  case 7216:
    spellname = "Iron Shield Spike";
    break;
  case 7217:
    spellname = "Weapon Counterweight";
    break;
  case 7218:
    spellname = "Weapon Counterweight";
    break;
  case 7219:
    spellname = "Immune to Disarm";
    break;
  case 7220:
    spellname = "Weapon Chain";
    break;
  case 7221:
    spellname = "Iron Shield Spike";
    break;
  case 7222:
    spellname = "Iron Counterweight";
    break;
  case 7223:
    spellname = "Golden Scale Bracers";
    break;
  case 7224:
    spellname = "Steel Weapon Chain";
    break;
  case 7230:
    spellname = "Fire Protection";
    break;
  case 7231:
    spellname = "Fire Protection";
    break;
  case 7232:
    spellname = "Fire Protection";
    break;
  case 7233:
    spellname = "Fire Protection";
    break;
  case 7234:
    spellname = "Fire Protection";
    break;
  case 7235:
    spellname = "Shadow Protection";
    break;
  case 7236:
    spellname = "Frost Protection";
    break;
  case 7237:
    spellname = "Frost Protection";
    break;
  case 7238:
    spellname = "Frost Protection";
    break;
  case 7239:
    spellname = "Frost Protection";
    break;
  case 7240:
    spellname = "Frost Protection";
    break;
  case 7241:
    spellname = "Shadow Protection";
    break;
  case 7242:
    spellname = "Shadow Protection";
    break;
  case 7243:
    spellname = "Shadow Protection";
    break;
  case 7244:
    spellname = "Shadow Protection";
    break;
  case 7245:
    spellname = "Holy Protection";
    break;
  case 7246:
    spellname = "Holy Protection";
    break;
  case 7247:
    spellname = "Holy Protection";
    break;
  case 7248:
    spellname = "Holy Protection";
    break;
  case 7249:
    spellname = "Holy Protection";
    break;
  case 7250:
    spellname = "Nature Protection";
    break;
  case 7251:
    spellname = "Nature Protection";
    break;
  case 7252:
    spellname = "Nature Protection";
    break;
  case 7253:
    spellname = "Nature Protection";
    break;
  case 7254:
    spellname = "Nature Protection";
    break;
  case 7255:
    spellname = "Holy Protection Potion";
    break;
  case 7256:
    spellname = "Shadow Protection Potion";
    break;
  case 7257:
    spellname = "Fire Protection Potion";
    break;
  case 7258:
    spellname = "Frost Protection Potion";
    break;
  case 7259:
    spellname = "Nature Protection Potion";
    break;
  case 7265:
    spellname = "ABOUT TO SPAWN";
    break;
  case 7266:
    spellname = "Duel";
    break;
  case 7267:
    spellname = "Grovel";
    break;
  case 7268:
    spellname = "Arcane Missile";
    break;
  case 7269:
    spellname = "Arcane Missiles";
    break;
  case 7270:
    spellname = "Arcane Missiles";
    break;
  case 7272:
    spellname = "Dust Cloud";
    break;
  case 7273:
    spellname = "Lightning Hide";
    break;
  case 7276:
    spellname = "Poison Proc";
    break;
  case 7277:
    spellname = "Harvest Swarm";
    break;
  case 7278:
    spellname = "Summon Harvester Swarm";
    break;
  case 7279:
    spellname = "Black Sludge";
    break;
  case 7285:
    spellname = "Blow Maraudine Horn";
    break;
  case 7288:
    spellname = "Immolate Cumulative (TEST)";
    break;
  case 7289:
    spellname = "Shrink";
    break;
  case 7290:
    spellname = "Soul Siphon";
    break;
  case 7291:
    spellname = "Food (TEST)";
    break;
  case 7293:
    spellname = "Zombie Form";
    break;
  case 7294:
    spellname = "Retribution Aura";
    break;
  case 7295:
    spellname = "Soul Drain";
    break;
  case 7300:
    spellname = "Frost Armor";
    break;
  case 7301:
    spellname = "Frost Armor";
    break;
  case 7302:
    spellname = "Ice Armor";
    break;
  case 7320:
    spellname = "Ice Armor";
    break;
  case 7321:
    spellname = "Chilled";
    break;
  case 7322:
    spellname = "Frostbolt";
    break;
  case 7328:
    spellname = "Redemption";
    break;
  case 7329:
    spellname = "Redemption";
    break;
  case 7331:
    spellname = "Healing Aura (TEST)";
    break;
  case 7340:
    spellname = "Language Gnomish";
    break;
  case 7341:
    spellname = "Language Troll";
    break;
  case 7342:
    spellname = "Wide Slash";
    break;
  case 7344:
    spellname = "Recombobulate";
    break;
  case 7353:
    spellname = "Cozy Fire";
    break;
  case 7355:
    spellname = "Stuck";
    break;
  case 7356:
    spellname = "Guard Call";
    break;
  case 7357:
    spellname = "Poisonous Stab";
    break;
  case 7358:
    spellname = "Cozy Fire";
    break;
  case 7359:
    spellname = "Bright Campfire";
    break;
  case 7363:
    spellname = "Fire's Glow";
    break;
  case 7364:
    spellname = "Light Torch";
    break;
  case 7365:
    spellname = "Bottle of Poison";
    break;
  case 7366:
    spellname = "Berserker Stance";
    break;
  case 7367:
    spellname = "Infected Bite";
    break;
  case 7369:
    spellname = "Cleave";
    break;
  case 7370:
    spellname = "Charge";
    break;
  case 7371:
    spellname = "Charge";
    break;
  case 7372:
    spellname = "Hamstring";
    break;
  case 7373:
    spellname = "Hamstring";
    break;
  case 7376:
    spellname = "Defensive Stance Passive";
    break;
  case 7377:
    spellname = "Take Immune Periodic Damage <Not Working>";
    break;
  case 7379:
    spellname = "Revenge";
    break;
  case 7381:
    spellname = "Berserker Stance Passive";
    break;
  case 7383:
    spellname = "Water Bubble";
    break;
  case 7384:
    spellname = "Overpower";
    break;
  case 7386:
    spellname = "Sunder Armor";
    break;
  case 7389:
    spellname = "Attack";
    break;
  case 7393:
    spellname = "Heal Brother";
    break;
  case 7394:
    spellname = "Spinning Slash";
    break;
  case 7395:
    spellname = "Deadmines Dynamite";
    break;
  case 7396:
    spellname = "Fishliver Oil";
    break;
  case 7398:
    spellname = "Birth";
    break;
  case 7399:
    spellname = "Terrify";
    break;
  case 7400:
    spellname = "Mocking Blow";
    break;
  case 7402:
    spellname = "Mocking Blow";
    break;
  case 7405:
    spellname = "Sunder Armor";
    break;
  case 7407:
    spellname = "Test Sharpen Blade";
    break;
  case 7408:
    spellname = "Heavy Copper Maul";
    break;
  case 7411:
    spellname = "Enchanting";
    break;
  case 7412:
    spellname = "Enchanting";
    break;
  case 7413:
    spellname = "Enchanting";
    break;
  case 7414:
    spellname = "Apprentice Enchanting";
    break;
  case 7415:
    spellname = "Journeyman Enchanting";
    break;
  case 7416:
    spellname = "Expert Enchanting";
    break;
  case 7418:
    spellname = "Enchant Bracer - Minor Health";
    break;
  case 7419:
    spellname = "Minor Health";
    break;
  case 7420:
    spellname = "Enchant Chest - Minor Health";
    break;
  case 7421:
    spellname = "Runed Copper Rod";
    break;
  case 7423:
    spellname = "Minor Absorption";
    break;
  case 7426:
    spellname = "Enchant Chest - Minor Absorption";
    break;
  case 7427:
    spellname = "Minor Deflection";
    break;
  case 7428:
    spellname = "Enchant Bracer - Minor Deflection";
    break;
  case 7430:
    spellname = "Arclight Spanner";
    break;
  case 7433:
    spellname = "Minor Beast Slayer";
    break;
  case 7437:
    spellname = "Break Stuff";
    break;
  case 7438:
    spellname = "Minor Resistance";
    break;
  case 7442:
    spellname = "Minor Mana";
    break;
  case 7443:
    spellname = "Enchant Chest - Minor Mana";
    break;
  case 7445:
    spellname = "Minor Absorption";
    break;
  case 7446:
    spellname = "Lesser Absorption";
    break;
  case 7447:
    spellname = "Lesser Absorption";
    break;
  case 7452:
    spellname = "Minor Resistance";
    break;
  case 7454:
    spellname = "Enchant Cloak - Minor Resistance";
    break;
  case 7455:
    spellname = "Minor Stamina";
    break;
  case 7456:
    spellname = "Minor Spirit";
    break;
  case 7457:
    spellname = "Enchant Bracer - Minor Stamina";
    break;
  case 7464:
    spellname = "Increased Strength 01";
    break;
  case 7465:
    spellname = "Increased Strength 02";
    break;
  case 7466:
    spellname = "Increased Strength 03";
    break;
  case 7468:
    spellname = "Increased Intellect 01";
    break;
  case 7469:
    spellname = "Increased Intellect 02";
    break;
  case 7470:
    spellname = "Increased Intellect 03";
    break;
  case 7471:
    spellname = "Increased Agility 01";
    break;
  case 7472:
    spellname = "Increased Agility 02";
    break;
  case 7473:
    spellname = "Increased Agility 03";
    break;
  case 7474:
    spellname = "Increased Spirit 01";
    break;
  case 7475:
    spellname = "Increased Spirit 02";
    break;
  case 7476:
    spellname = "Increased Spirit 03";
    break;
  case 7477:
    spellname = "Increased Stamina 01";
    break;
  case 7478:
    spellname = "Increased Stamina 02";
    break;
  case 7479:
    spellname = "Increased Stamina 03";
    break;
  case 7481:
    spellname = "Howling Rage";
    break;
  case 7482:
    spellname = "dmg";
    break;
  case 7483:
    spellname = "Howling Rage";
    break;
  case 7484:
    spellname = "Howling Rage";
    break;
  case 7485:
    spellname = "Butcher Drain";
    break;
  case 7486:
    spellname = "Butcher Drain";
    break;
  case 7487:
    spellname = "Call Bleak Worg";
    break;
  case 7488:
    spellname = "Call Slavering Worg";
    break;
  case 7489:
    spellname = "Call Lupine Horror";
    break;
  case 7490:
    spellname = "Increased Agility 04";
    break;
  case 7491:
    spellname = "Increased Agility 05";
    break;
  case 7492:
    spellname = "Increased Agility 06";
    break;
  case 7493:
    spellname = "Increased Agility 07";
    break;
  case 7494:
    spellname = "Increased Intellect 04";
    break;
  case 7495:
    spellname = "Increased Intellect 05";
    break;
  case 7496:
    spellname = "Increased Intellect 06";
    break;
  case 7497:
    spellname = "Increased Intellect 07";
    break;
  case 7498:
    spellname = "Increased Spirit 04";
    break;
  case 7499:
    spellname = "Increased Spirit 05";
    break;
  case 7500:
    spellname = "Increased Spirit 06";
    break;
  case 7501:
    spellname = "Increased Spirit 07";
    break;
  case 7502:
    spellname = "Increased Stamina 04";
    break;
  case 7503:
    spellname = "Increased Stamina 05";
    break;
  case 7504:
    spellname = "Increased Stamina 06";
    break;
  case 7505:
    spellname = "Increased Stamina 07";
    break;
  case 7506:
    spellname = "Increased Strength 04";
    break;
  case 7507:
    spellname = "Increased Strength 05";
    break;
  case 7508:
    spellname = "Increased Strength 06";
    break;
  case 7509:
    spellname = "Increased Strength 07";
    break;
  case 7511:
    spellname = "Increased Defense";
    break;
  case 7513:
    spellname = "Increased Defense";
    break;
  case 7514:
    spellname = "Increased Defense";
    break;
  case 7515:
    spellname = "Increased Defense";
    break;
  case 7516:
    spellname = "Increased Defense";
    break;
  case 7517:
    spellname = "Increased Defense";
    break;
  case 7518:
    spellname = "Increased Defense";
    break;
  case 7520:
    spellname = "Increased 1H Sword";
    break;
  case 7523:
    spellname = "Increased 1H Sword";
    break;
  case 7525:
    spellname = "Increased 1H Sword";
    break;
  case 7527:
    spellname = "Increased 1H Sword";
    break;
  case 7529:
    spellname = "Increased 2H Sword";
    break;
  case 7532:
    spellname = "Increased 1H Mace";
    break;
  case 7533:
    spellname = "Increased 2H Mace";
    break;
  case 7534:
    spellname = "Increased Dagger";
    break;
  case 7535:
    spellname = "Increased Bow";
    break;
  case 7536:
    spellname = "Increased Gun";
    break;
  case 7538:
    spellname = "Increased 1H Axe";
    break;
  case 7540:
    spellname = "Increased 1H Axe";
    break;
  case 7544:
    spellname = "Increased 1H Mace";
    break;
  case 7546:
    spellname = "Increased 1H Mace";
    break;
  case 7548:
    spellname = "Increased 1H Mace";
    break;
  case 7549:
    spellname = "Increased 2H Axe";
    break;
  case 7550:
    spellname = "Increased 2H Axe";
    break;
  case 7552:
    spellname = "Increased 2H Axe";
    break;
  case 7554:
    spellname = "Increased 2H Axe";
    break;
  case 7556:
    spellname = "Increased 2H Mace";
    break;
  case 7558:
    spellname = "Increased 2H Mace";
    break;
  case 7560:
    spellname = "Increased 2H Mace";
    break;
  case 7562:
    spellname = "Increased 2H Sword";
    break;
  case 7564:
    spellname = "Increased 2H Sword";
    break;
  case 7566:
    spellname = "Increased 2H Sword";
    break;
  case 7568:
    spellname = "Increased Bow";
    break;
  case 7569:
    spellname = "Increased Bow";
    break;
  case 7570:
    spellname = "Increased Bow";
    break;
  case 7571:
    spellname = "Increased Bow";
    break;
  case 7572:
    spellname = "Increased Bow";
    break;
  case 7573:
    spellname = "Increased Dagger";
    break;
  case 7574:
    spellname = "Increased Dagger";
    break;
  case 7576:
    spellname = "Increased Dagger";
    break;
  case 7578:
    spellname = "Increased Dagger";
    break;
  case 7579:
    spellname = "Increased Gun";
    break;
  case 7580:
    spellname = "Increased Gun";
    break;
  case 7581:
    spellname = "Increased Gun";
    break;
  case 7582:
    spellname = "Increased Gun";
    break;
  case 7583:
    spellname = "Increased Gun";
    break;
  case 7584:
    spellname = "Increased Gun";
    break;
  case 7585:
    spellname = "GGOODMANTEST";
    break;
  case 7586:
    spellname = "Shadow Port";
    break;
  case 7587:
    spellname = "Shadow Port";
    break;
  case 7588:
    spellname = "Void Bolt";
    break;
  case 7590:
    spellname = "Increased Damage - Beast 02";
    break;
  case 7591:
    spellname = "Increased Damage - Beast 04";
    break;
  case 7592:
    spellname = "Increased Damage - Beast 06";
    break;
  case 7593:
    spellname = "Increased Damage - Beast 08";
    break;
  case 7594:
    spellname = "Increased Damage - Beast 10";
    break;
  case 7595:
    spellname = "Increased Damage - Beast 12";
    break;
  case 7596:
    spellname = "Increased Damage - Beast 14";
    break;
  case 7597:
    spellname = "Increased Critical 14";
    break;
  case 7598:
    spellname = "Increased Critical 28";
    break;
  case 7599:
    spellname = "Increased Critical 42";
    break;
  case 7600:
    spellname = "Increased Critical 56";
    break;
  case 7617:
    spellname = "Shadow Bolt";
    break;
  case 7619:
    spellname = "Shadow Bolt";
    break;
  case 7620:
    spellname = "Fishing";
    break;
  case 7621:
    spellname = "Arugal's Curse";
    break;
  case 7623:
    spellname = "Brown Linen Robe";
    break;
  case 7624:
    spellname = "White Linen Robe";
    break;
  case 7629:
    spellname = "Red Linen Vest";
    break;
  case 7630:
    spellname = "Blue Linen Vest";
    break;
  case 7633:
    spellname = "Blue Linen Robe";
    break;
  case 7636:
    spellname = "Green Woolen Robe";
    break;
  case 7638:
    spellname = "Potion Toss";
    break;
  case 7639:
    spellname = "Blue Overalls";
    break;
  case 7641:
    spellname = "Shadow Bolt";
    break;
  case 7643:
    spellname = "Greater Adept's Robe";
    break;
  case 7645:
    spellname = "Dominate Mind";
    break;
  case 7646:
    spellname = "Curse of Weakness";
    break;
  case 7648:
    spellname = "Corruption";
    break;
  case 7651:
    spellname = "Drain Life";
    break;
  case 7655:
    spellname = "Hex of Ravenclaw";
    break;
  case 7656:
    spellname = "Hex of Ravenclaw";
    break;
  case 7657:
    spellname = "Hex of Ravenclaw";
    break;
  case 7658:
    spellname = "Curse of Recklessness";
    break;
  case 7659:
    spellname = "Curse of Recklessness";
    break;
  case 7667:
    spellname = "Foul Odor";
    break;
  case 7668:
    spellname = "Foul Odor";
    break;
  case 7669:
    spellname = "Bethor's Potion";
    break;
  case 7670:
    spellname = "Explode";
    break;
  case 7671:
    spellname = "Transformation";
    break;
  case 7673:
    spellname = "Nether Gem";
    break;
  case 7675:
    spellname = "Increase Healing 2";
    break;
  case 7676:
    spellname = "Increase Healing 4";
    break;
  case 7677:
    spellname = "Increase Healing 7";
    break;
  case 7678:
    spellname = "Increase Healing 9";
    break;
  case 7679:
    spellname = "Increase Healing 11";
    break;
  case 7680:
    spellname = "Increase Healing 13";
    break;
  case 7681:
    spellname = "Increase Healing 15";
    break;
  case 7683:
    spellname = "Increase Fire Dam 1";
    break;
  case 7684:
    spellname = "Increase Fire Dam 3";
    break;
  case 7685:
    spellname = "Increase Fire Dam 4";
    break;
  case 7686:
    spellname = "Increase Fire Dam 6";
    break;
  case 7687:
    spellname = "Increase Fire Dam 7";
    break;
  case 7688:
    spellname = "Increase Fire Dam 9";
    break;
  case 7689:
    spellname = "Increase Fire Dam 10";
    break;
  case 7690:
    spellname = "Increase Nature Dam 1";
    break;
  case 7691:
    spellname = "Increase Nature Dam 3";
    break;
  case 7692:
    spellname = "Increase Nature Dam 4";
    break;
  case 7693:
    spellname = "Increase Nature Dam 6";
    break;
  case 7694:
    spellname = "Increase Nature Dam 7";
    break;
  case 7695:
    spellname = "Increase Nature Dam 9";
    break;
  case 7696:
    spellname = "Increase Nature Dam 10";
    break;
  case 7697:
    spellname = "Increase Frost Dam 1";
    break;
  case 7698:
    spellname = "Increase Frost Dam 3";
    break;
  case 7699:
    spellname = "Increase Frost Dam 4";
    break;
  case 7700:
    spellname = "Increase Frost Dam 6";
    break;
  case 7701:
    spellname = "Increase Frost Dam 7";
    break;
  case 7702:
    spellname = "Increase Frost Dam 9";
    break;
  case 7703:
    spellname = "Increase Frost Dam 10";
    break;
  case 7704:
    spellname = "Increase Shadow Dam 1";
    break;
  case 7705:
    spellname = "Increase Shadow Dam 3";
    break;
  case 7706:
    spellname = "Increase Shadow Dam 4";
    break;
  case 7707:
    spellname = "Increase Shadow Dam 6";
    break;
  case 7708:
    spellname = "Increase Shadow Dam 7";
    break;
  case 7709:
    spellname = "Increase Shadow Dam 10";
    break;
  case 7710:
    spellname = "Increase Shadow Dam 9";
    break;
  case 7711:
    spellname = "Add Fire Dam - Weap 02";
    break;
  case 7712:
    spellname = "Fire Strike";
    break;
  case 7713:
    spellname = "Wailing Dead";
    break;
  case 7714:
    spellname = "Fire Strike";
    break;
  case 7715:
    spellname = "Fire Strike";
    break;
  case 7716:
    spellname = "Fire Strike";
    break;
  case 7717:
    spellname = "Fire Strike";
    break;
  case 7718:
    spellname = "Fire Strike";
    break;
  case 7719:
    spellname = "Fire Strike";
    break;
  case 7720:
    spellname = "Ritual of Summoning Effect";
    break;
  case 7721:
    spellname = "Add Fire Dam - Weap 04";
    break;
  case 7722:
    spellname = "Add Fire Dam - Weap 06";
    break;
  case 7723:
    spellname = "Add Fire Dam - Weap 08";
    break;
  case 7724:
    spellname = "Add Fire Dam - Weap 10";
    break;
  case 7725:
    spellname = "Add Fire Dam - Weap 12";
    break;
  case 7726:
    spellname = "Add Fire Dam - Weap 14";
    break;
  case 7728:
    spellname = "Summon Voidwalker";
    break;
  case 7729:
    spellname = "Summon Succubus";
    break;
  case 7731:
    spellname = "Fishing";
    break;
  case 7732:
    spellname = "Fishing";
    break;
  case 7733:
    spellname = "Apprentice Fishing";
    break;
  case 7734:
    spellname = "Journeyman Fishing";
    break;
  case 7736:
    spellname = "QA Expert Fishing";
    break;
  case 7737:
    spellname = "Food";
    break;
  case 7738:
    spellname = "Fishing Poles";
    break;
  case 7739:
    spellname = "Inferno Shell";
    break;
  case 7741:
    spellname = "Summoned Demon";
    break;
  case 7742:
    spellname = "Frost Visual State";
    break;
  case 7743:
    spellname = "Immunity: Shadow";
    break;
  case 7744:
    spellname = "Will of the Forsaken";
    break;
  case 7745:
    spellname = "Enchant 2H Weapon - Minor Impact";
    break;
  case 7747:
    spellname = "Lesser Health";
    break;
  case 7748:
    spellname = "Enchant Chest - Lesser Health";
    break;
  case 7750:
    spellname = "Consuming Rage";
    break;
  case 7751:
    spellname = "Brilliant Smallfish";
    break;
  case 7752:
    spellname = "Slitherskin Mackerel";
    break;
  case 7753:
    spellname = "Longjaw Mud Snapper";
    break;
  case 7754:
    spellname = "Loch Frenzy Delight";
    break;
  case 7755:
    spellname = "Bristle Whisker Catfish";
    break;
  case 7761:
    spellname = "Shared Bondage";
    break;
  case 7762:
    spellname = "Summon Gunther's Visage";
    break;
  case 7763:
    spellname = "Teach Summon Imp";
    break;
  case 7764:
    spellname = "Wisdom of Agamaggan";
    break;
  case 7765:
    spellname = "Projection";
    break;
  case 7766:
    spellname = "Enchant Bracer - Minor Spirit";
    break;
  case 7771:
    spellname = "Enchant Cloak - Minor Protection";
    break;
  case 7773:
    spellname = "Lesser Mana";
    break;
  case 7776:
    spellname = "Enchant Chest - Lesser Mana";
    break;
  case 7778:
    spellname = "Minor Agility";
    break;
  case 7779:
    spellname = "Enchant Bracer - Minor Agility";
    break;
  case 7780:
    spellname = "Minor Strength";
    break;
  case 7782:
    spellname = "Enchant Bracer - Minor Strength";
    break;
  case 7784:
    spellname = "Beastslayer";
    break;
  case 7786:
    spellname = "Enchant Weapon - Minor Beastslayer";
    break;
  case 7788:
    spellname = "Enchant Weapon - Minor Striking";
    break;
  case 7791:
    spellname = "Teleport";
    break;
  case 7792:
    spellname = "Minor Intellect";
    break;
  case 7793:
    spellname = "Enchant 2H Weapon - Lesser Intellect";
    break;
  case 7794:
    spellname = "Teleport";
    break;
  case 7795:
    spellname = "Runed Silver Rod";
    break;
  case 7799:
    spellname = "Firebolt";
    break;
  case 7800:
    spellname = "Firebolt";
    break;
  case 7801:
    spellname = "Firebolt";
    break;
  case 7802:
    spellname = "Firebolt";
    break;
  case 7803:
    spellname = "Thundershock";
    break;
  case 7804:
    spellname = "Blood Pact";
    break;
  case 7805:
    spellname = "Blood Pact";
    break;
  case 7806:
    spellname = "Flameblade";
    break;
  case 7807:
    spellname = "Flameblade";
    break;
  case 7808:
    spellname = "Flameblade";
    break;
  case 7809:
    spellname = "Torment";
    break;
  case 7810:
    spellname = "Torment";
    break;
  case 7811:
    spellname = "Torment";
    break;
  case 7812:
    spellname = "Sacrifice";
    break;
  case 7813:
    spellname = "Soothing Kiss";
    break;
  case 7814:
    spellname = "Lash of Pain";
    break;
  case 7815:
    spellname = "Lash of Pain";
    break;
  case 7816:
    spellname = "Lash of Pain";
    break;
  case 7817:
    spellname = "Rough Bronze Boots";
    break;
  case 7818:
    spellname = "Silver Rod";
    break;
  case 7821:
    spellname = "Transform Victim";
    break;
  case 7823:
    spellname = "Fishing Skill +5";
    break;
  case 7824:
    spellname = "Blacksmithing Skill +10";
    break;
  case 7825:
    spellname = "Fishing Skill +15";
    break;
  case 7826:
    spellname = "Fishing Skill +20";
    break;
  case 7827:
    spellname = "Rainbow Fin Albacore";
    break;
  case 7828:
    spellname = "Rockscale Cod";
    break;
  case 7829:
    spellname = "Flameblade";
    break;
  case 7832:
    spellname = "Firebolt";
    break;
  case 7833:
    spellname = "Firebolt";
    break;
  case 7834:
    spellname = "Firebolt";
    break;
  case 7835:
    spellname = "Firebolt";
    break;
  case 7836:
    spellname = "Blackmouth Oil";
    break;
  case 7837:
    spellname = "Fire Oil";
    break;
  case 7840:
    spellname = "Swim Speed";
    break;
  case 7841:
    spellname = "Swim Speed Potion";
    break;
  case 7844:
    spellname = "Fire Power";
    break;
  case 7845:
    spellname = "Elixir of Firepower";
    break;
  case 7848:
    spellname = "Absorption";
    break;
  case 7849:
    spellname = "Absorption";
    break;
  case 7850:
    spellname = "Health";
    break;
  case 7851:
    spellname = "Lesser Spirit";
    break;
  case 7852:
    spellname = "Lesser Resistance - Fire";
    break;
  case 7857:
    spellname = "Enchant Chest - Health";
    break;
  case 7859:
    spellname = "Enchant Bracer - Lesser Spirit";
    break;
  case 7861:
    spellname = "Enchant Cloak - Lesser Fire Resistance";
    break;
  case 7863:
    spellname = "Enchant Boots - Minor Stamina";
    break;
  case 7867:
    spellname = "Enchant Boots - Minor Agility";
    break;
  case 7870:
    spellname = "Lesser Invisibility";
    break;
  case 7871:
    spellname = "Blood Pact";
    break;
  case 7872:
    spellname = "Blood Pact";
    break;
  case 7873:
    spellname = "Blood Pact";
    break;
  case 7874:
    spellname = "Flameblade";
    break;
  case 7875:
    spellname = "Flameblade";
    break;
  case 7876:
    spellname = "Lash of Pain";
    break;
  case 7877:
    spellname = "Lash of Pain";
    break;
  case 7878:
    spellname = "Lash of Pain";
    break;
  case 7879:
    spellname = "Soothing Kiss";
    break;
  case 7880:
    spellname = "Lesser Invisibility";
    break;
  case 7881:
    spellname = "Torment";
    break;
  case 7882:
    spellname = "Torment";
    break;
  case 7883:
    spellname = "Torment";
    break;
  case 7884:
    spellname = "Torment";
    break;
  case 7885:
    spellname = "Sacrifice";
    break;
  case 7886:
    spellname = "Firebolt";
    break;
  case 7887:
    spellname = "Overpower";
    break;
  case 7891:
    spellname = "Gift of Ragnaros";
    break;
  case 7892:
    spellname = "Stylish Blue Shirt";
    break;
  case 7893:
    spellname = "Stylish Green Shirt";
    break;
  case 7896:
    spellname = "Exploding Shot";
    break;
  case 7897:
    spellname = "Flames";
    break;
  case 7901:
    spellname = "Decayed Agility";
    break;
  case 7902:
    spellname = "heat";
    break;
  case 7903:
    spellname = "Summon Tamed Bear";
    break;
  case 7904:
    spellname = "Summon Tamed Bird";
    break;
  case 7905:
    spellname = "Summon Tamed Boar";
    break;
  case 7906:
    spellname = "Summon Tamed Cat";
    break;
  case 7907:
    spellname = "Summon Tamed Crab";
    break;
  case 7908:
    spellname = "Summon Tamed Crocilisk";
    break;
  case 7909:
    spellname = "Summon Tamed Gorilla";
    break;
  case 7910:
    spellname = "Summon Tamed Raptor";
    break;
  case 7911:
    spellname = "Summon Tamed Scorpid";
    break;
  case 7912:
    spellname = "Summon Tamed Spider";
    break;
  case 7913:
    spellname = "Summon Tamed Tallstrider";
    break;
  case 7914:
    spellname = "Capture Spirit";
    break;
  case 7915:
    spellname = "Summon Tamed Turtle";
    break;
  case 7916:
    spellname = "Summon Tamed Zhevra";
    break;
  case 7920:
    spellname = "Mebok Smart Drink";
    break;
  case 7922:
    spellname = "Charge Stun";
    break;
  case 7923:
    spellname = "Flight Visual State";
    break;
  case 7924:
    spellname = "First Aid";
    break;
  case 7925:
    spellname = "QA Expert First Aid";
    break;
  case 7926:
    spellname = "First Aid";
    break;
  case 7927:
    spellname = "First Aid";
    break;
  case 7928:
    spellname = "Silk Bandage";
    break;
  case 7929:
    spellname = "Heavy Silk Bandage";
    break;
  case 7932:
    spellname = "Anti-Venom";
    break;
  case 7933:
    spellname = "Strong Anti-Venom";
    break;
  case 7934:
    spellname = "Anti-Venom";
    break;
  case 7935:
    spellname = "Strong Anti-Venom";
    break;
  case 7938:
    spellname = "Fatal Bite";
    break;
  case 7940:
    spellname = "Immunity: Frost";
    break;
  case 7941:
    spellname = "Immunity: Nature";
    break;
  case 7942:
    spellname = "Immunity: Fire";
    break;
  case 7943:
    spellname = "Evolving Ectoplasm (Red)";
    break;
  case 7944:
    spellname = "Evolving Ectoplasm (Blue)";
    break;
  case 7945:
    spellname = "Evolving Ectoplasm (Green)";
    break;
  case 7946:
    spellname = "Evolving Ectoplasm (Black)";
    break;
  case 7947:
    spellname = "Localized Toxin";
    break;
  case 7948:
    spellname = "Wild Regeneration";
    break;
  case 7949:
    spellname = "Summon Viper";
    break;
  case 7950:
    spellname = "Pause";
    break;
  case 7951:
    spellname = "Toxic Spit";
    break;
  case 7952:
    spellname = "Clone";
    break;
  case 7953:
    spellname = "Deviate Scale Cloak";
    break;
  case 7954:
    spellname = "Deviate Scale Gloves";
    break;
  case 7955:
    spellname = "Deviate Scale Belt";
    break;
  case 7960:
    spellname = "Scry on Azrethoc";
    break;
  case 7961:
    spellname = "Azrethoc's Stomp";
    break;
  case 7962:
    spellname = "Break Big Stuff";
    break;
  case 7964:
    spellname = "Smoke Bomb";
    break;
  case 7965:
    spellname = "Cobrahn Serpent Form";
    break;
  case 7966:
    spellname = "Thorns Aura";
    break;
  case 7967:
    spellname = "Naralex's Nightmare";
    break;
  case 7968:
    spellname = "Summon Evolving Ectoplasm";
    break;
  case 7969:
    spellname = "Summon Nightmare Ectoplasm";
    break;
  case 7970:
    spellname = "Summon Deviate Shambler";
    break;
  case 7971:
    spellname = "Summon Deviate Dreadfang";
    break;
  case 7972:
    spellname = "Summon Deviate Venomwing";
    break;
  case 7973:
    spellname = "Summon Deviate Viper";
    break;
  case 7974:
    spellname = "Azrethoc's Flight";
    break;
  case 7975:
    spellname = "Summon Party Bot";
    break;
  case 7976:
    spellname = "Summon Party Bot - summon effect";
    break;
  case 7977:
    spellname = "Party Bot Message - DANCE";
    break;
  case 7978:
    spellname = "Throw Dynamite";
    break;
  case 7979:
    spellname = "Compact Harvest Reaper";
    break;
  case 7992:
    spellname = "Slowing Poison";
    break;
  case 7993:
    spellname = "Summon Treant Ally";
    break;
  case 7994:
    spellname = "Nullify Mana";
    break;
  case 7997:
    spellname = "Sap Might";
    break;
  case 7998:
    spellname = "Soot Covering";
    break;
  case 7999:
    spellname = "Soot Covering";
    break;
  case 8000:
    spellname = "Area Burn";
    break;
  case 8001:
    spellname = "Placing Pendant";
    break;
  case 8004:
    spellname = "Lesser Healing Wave";
    break;
  case 8005:
    spellname = "Healing Wave";
    break;
  case 8008:
    spellname = "Lesser Healing Wave";
    break;
  case 8010:
    spellname = "Lesser Healing Wave";
    break;
  case 8012:
    spellname = "Purge";
    break;
  case 8014:
    spellname = "Tetanus";
    break;
  case 8016:
    spellname = "Spirit Decay";
    break;
  case 8017:
    spellname = "Rockbiter Weapon";
    break;
  case 8018:
    spellname = "Rockbiter Weapon";
    break;
  case 8019:
    spellname = "Rockbiter Weapon";
    break;
  case 8024:
    spellname = "Flametongue Weapon";
    break;
  case 8026:
    spellname = "Flametongue Weapon Proc";
    break;
  case 8027:
    spellname = "Flametongue Weapon";
    break;
  case 8028:
    spellname = "Flametongue Weapon Proc";
    break;
  case 8029:
    spellname = "Flametongue Weapon Proc";
    break;
  case 8030:
    spellname = "Flametongue Weapon";
    break;
  case 8033:
    spellname = "Frostbrand Weapon";
    break;
  case 8034:
    spellname = "Frostbrand Attack";
    break;
  case 8037:
    spellname = "Frostbrand Attack";
    break;
  case 8038:
    spellname = "Frostbrand Weapon";
    break;
  case 8040:
    spellname = "Druid's Slumber";
    break;
  case 8041:
    spellname = "Serpent Form";
    break;
  case 8042:
    spellname = "Earth Shock";
    break;
  case 8044:
    spellname = "Earth Shock";
    break;
  case 8045:
    spellname = "Earth Shock";
    break;
  case 8046:
    spellname = "Earth Shock";
    break;
  case 8050:
    spellname = "Flame Shock";
    break;
  case 8052:
    spellname = "Flame Shock";
    break;
  case 8053:
    spellname = "Flame Shock";
    break;
  case 8056:
    spellname = "Frost Shock";
    break;
  case 8058:
    spellname = "Frost Shock";
    break;
  case 8063:
    spellname = "Deviate Fish";
    break;
  case 8064:
    spellname = "Sleepy";
    break;
  case 8065:
    spellname = "Invigorate";
    break;
  case 8066:
    spellname = "Shrink";
    break;
  case 8067:
    spellname = "Party Time!";
    break;
  case 8068:
    spellname = "Healthy Spirit";
    break;
  case 8070:
    spellname = "Rejuvenation";
    break;
  case 8071:
    spellname = "Stoneskin Totem";
    break;
  case 8072:
    spellname = "Stoneskin";
    break;
  case 8073:
    spellname = "Stoneskin Totem";
    break;
  case 8075:
    spellname = "Strength of Earth Totem";
    break;
  case 8076:
    spellname = "Strength of Earth";
    break;
  case 8078:
    spellname = "Thunderclap";
    break;
  case 8082:
    spellname = "Fishing Skill +25";
    break;
  case 8083:
    spellname = "Fishing Skill +50";
    break;
  case 8084:
    spellname = "Fishing Skill +75";
    break;
  case 8085:
    spellname = "Fishing Skill +100";
    break;
  case 8087:
    spellname = "Shiny Bauble";
    break;
  case 8088:
    spellname = "Nightcrawlers";
    break;
  case 8089:
    spellname = "Aquadynamic Fish Attractor";
    break;
  case 8090:
    spellname = "Bright Baubles";
    break;
  case 8091:
    spellname = "Armor";
    break;
  case 8092:
    spellname = "Mind Blast";
    break;
  case 8094:
    spellname = "Armor";
    break;
  case 8095:
    spellname = "Armor";
    break;
  case 8096:
    spellname = "Intellect";
    break;
  case 8097:
    spellname = "Intellect";
    break;
  case 8098:
    spellname = "Intellect";
    break;
  case 8099:
    spellname = "Stamina";
    break;
  case 8100:
    spellname = "Stamina";
    break;
  case 8101:
    spellname = "Stamina";
    break;
  case 8102:
    spellname = "Mind Blast";
    break;
  case 8103:
    spellname = "Mind Blast";
    break;
  case 8104:
    spellname = "Mind Blast";
    break;
  case 8105:
    spellname = "Mind Blast";
    break;
  case 8106:
    spellname = "Mind Blast";
    break;
  case 8112:
    spellname = "Spirit";
    break;
  case 8113:
    spellname = "Spirit";
    break;
  case 8114:
    spellname = "Spirit";
    break;
  case 8115:
    spellname = "Agility";
    break;
  case 8116:
    spellname = "Agility";
    break;
  case 8117:
    spellname = "Agility";
    break;
  case 8118:
    spellname = "Strength";
    break;
  case 8119:
    spellname = "Strength";
    break;
  case 8120:
    spellname = "Strength";
    break;
  case 8121:
    spellname = "Path of Defense";
    break;
  case 8122:
    spellname = "Psychic Scream";
    break;
  case 8124:
    spellname = "Psychic Scream";
    break;
  case 8129:
    spellname = "Mana Burn";
    break;
  case 8131:
    spellname = "Mana Burn";
    break;
  case 8134:
    spellname = "Lightning Shield";
    break;
  case 8136:
    spellname = "Naralex's Awakening";
    break;
  case 8137:
    spellname = "Silithid Pox";
    break;
  case 8138:
    spellname = "Mirkfallon Fungus";
    break;
  case 8139:
    spellname = "Fevered Fatigue";
    break;
  case 8140:
    spellname = "Befuddlement";
    break;
  case 8141:
    spellname = "Druid's Potion";
    break;
  case 8142:
    spellname = "Grasping Vines";
    break;
  case 8143:
    spellname = "Tremor Totem";
    break;
  case 8145:
    spellname = "Tremor Totem Passive";
    break;
  case 8146:
    spellname = "Tremor Totem Effect";
    break;
  case 8147:
    spellname = "Thunderclap";
    break;
  case 8148:
    spellname = "Thorns Aura";
    break;
  case 8149:
    spellname = "Super Invis";
    break;
  case 8150:
    spellname = "Thundercrack";
    break;
  case 8151:
    spellname = "Surprise Attack";
    break;
  case 8152:
    spellname = "Prowl";
    break;
  case 8153:
    spellname = "Owl Form";
    break;
  case 8154:
    spellname = "Stoneskin Totem";
    break;
  case 8155:
    spellname = "Stoneskin Totem";
    break;
  case 8156:
    spellname = "Stoneskin";
    break;
  case 8157:
    spellname = "Stoneskin";
    break;
  case 8160:
    spellname = "Strength of Earth Totem";
    break;
  case 8161:
    spellname = "Strength of Earth Totem";
    break;
  case 8162:
    spellname = "Strength of Earth";
    break;
  case 8163:
    spellname = "Strength of Earth";
    break;
  case 8166:
    spellname = "Poison Cleansing Totem";
    break;
  case 8167:
    spellname = "Poison Cleansing Totem Passive";
    break;
  case 8168:
    spellname = "Poison Cleansing Totem Effect";
    break;
  case 8170:
    spellname = "Disease Cleansing Totem";
    break;
  case 8171:
    spellname = "Disease Cleansing Totem Effect";
    break;
  case 8172:
    spellname = "Disease Cleansing Totem Passive";
    break;
  case 8176:
    spellname = "Summon Felhunter";
    break;
  case 8177:
    spellname = "Grounding Totem";
    break;
  case 8178:
    spellname = "Grounding Totem Effect";
    break;
  case 8179:
    spellname = "Grounding Totem Passive";
    break;
  case 8181:
    spellname = "Frost Resistance Totem";
    break;
  case 8182:
    spellname = "Frost Resistance";
    break;
  case 8184:
    spellname = "Fire Resistance Totem";
    break;
  case 8185:
    spellname = "Fire Resistance";
    break;
  case 8187:
    spellname = "Magma Totem";
    break;
  case 8188:
    spellname = "Magma Totem Passive";
    break;
  case 8190:
    spellname = "Magma Totem";
    break;
  case 8191:
    spellname = "Zeal";
    break;
  case 8192:
    spellname = "Mind Soothe";
    break;
  case 8195:
    spellname = "Teleport";
    break;
  case 8198:
    spellname = "Thunder Clap";
    break;
  case 8202:
    spellname = "Sapta Sight";
    break;
  case 8203:
    spellname = "Elemental Spirit Invisibility";
    break;
  case 8204:
    spellname = "Thunder Clap";
    break;
  case 8205:
    spellname = "Thunder Clap";
    break;
  case 8208:
    spellname = "Backhand";
    break;
  case 8209:
    spellname = "Explosive Sheep";
    break;
  case 8210:
    spellname = "Savannah Cubs";
    break;
  case 8211:
    spellname = "Chain Burn";
    break;
  case 8212:
    spellname = "Enlarge";
    break;
  case 8213:
    spellname = "Cooked Deviate Fish";
    break;
  case 8215:
    spellname = "Rapid Cast";
    break;
  case 8217:
    spellname = "Owl Companion";
    break;
  case 8218:
    spellname = "Sneak";
    break;
  case 8219:
    spellname = "Flip Out";
    break;
  case 8220:
    spellname = "Flip Out";
    break;
  case 8221:
    spellname = "Yaaarrrr";
    break;
  case 8222:
    spellname = "Yaaarrrr";
    break;
  case 8223:
    spellname = "Oops!";
    break;
  case 8224:
    spellname = "Cowardice";
    break;
  case 8225:
    spellname = "Run Away!";
    break;
  case 8226:
    spellname = "Fake Death";
    break;
  case 8227:
    spellname = "Flametongue Totem";
    break;
  case 8229:
    spellname = "Flametongue Totem Passive";
    break;
  case 8230:
    spellname = "Flametongue Totem Effect";
    break;
  case 8232:
    spellname = "Windfury Weapon";
    break;
  case 8235:
    spellname = "Windfury Weapon";
    break;
  case 8238:
    spellname = "Savory Deviate Delight";
    break;
  case 8240:
    spellname = "Elixir of Giant Growth";
    break;
  case 8242:
    spellname = "Shield Slam";
    break;
  case 8243:
    spellname = "Flash Bomb";
    break;
  case 8245:
    spellname = "Corrosive Acid";
    break;
  case 8246:
    spellname = "Lightning Bolt";
    break;
  case 8247:
    spellname = "Wandering Plague";
    break;
  case 8248:
    spellname = "Flametongue Totem Proc";
    break;
  case 8249:
    spellname = "Flametongue Totem";
    break;
  case 8250:
    spellname = "Flametongue Totem Effect";
    break;
  case 8251:
    spellname = "Flametongue Totem Passive";
    break;
  case 8253:
    spellname = "Flametongue Totem Proc";
    break;
  case 8255:
    spellname = "Strong Cleave";
    break;
  case 8256:
    spellname = "Lethal Toxin";
    break;
  case 8257:
    spellname = "Venom Sting";
    break;
  case 8258:
    spellname = "Devotion Aura";
    break;
  case 8259:
    spellname = "Whirling Barrage";
    break;
  case 8260:
    spellname = "Rushing Charge";
    break;
  case 8262:
    spellname = "Elemental Protection Totem";
    break;
  case 8263:
    spellname = "Elemental Protection Totem Aura";
    break;
  case 8264:
    spellname = "Lava Spout Totem";
    break;
  case 8265:
    spellname = "Lava Spout Totem";
    break;
  case 8266:
    spellname = "Lava Spout Totem Passive";
    break;
  case 8267:
    spellname = "Cursed Blood";
    break;
  case 8268:
    spellname = "Cursed Blood";
    break;
  case 8269:
    spellname = "Enrage";
    break;
  case 8270:
    spellname = "Summon Earth Rumbler";
    break;
  case 8271:
    spellname = "Summon Wind Howler";
    break;
  case 8272:
    spellname = "Mind Tremor";
    break;
  case 8273:
    spellname = "Bonus Dodge";
    break;
  case 8274:
    spellname = "Summon Tamed Battleboar";
    break;
  case 8275:
    spellname = "Poisoned Shot";
    break;
  case 8276:
    spellname = "Summon Tamed Hyena";
    break;
  case 8277:
    spellname = "Voodoo Hex";
    break;
  case 8278:
    spellname = "Invisibility Detection";
    break;
  case 8279:
    spellname = "Stealth Detection";
    break;
  case 8281:
    spellname = "Sonic Burst";
    break;
  case 8282:
    spellname = "Curse of Blood";
    break;
  case 8283:
    spellname = "Snufflenose Command";
    break;
  case 8285:
    spellname = "Rampage";
    break;
  case 8286:
    spellname = "Summon Boar Spirit";
    break;
  case 8288:
    spellname = "Drain Soul";
    break;
  case 8289:
    spellname = "Drain Soul";
    break;
  case 8292:
    spellname = "Chain Bolt";
    break;
  case 8293:
    spellname = "Lightning Cloud";
    break;
  case 8295:
    spellname = "dmg2";
    break;
  case 8299:
    spellname = "Perm. Illusion Slime";
    break;
  case 8312:
    spellname = "Trap";
    break;
  case 8313:
    spellname = "Poison";
    break;
  case 8314:
    spellname = "Rock Skin";
    break;
  case 8315:
    spellname = "Perm. Illusion Succubus";
    break;
  case 8316:
    spellname = "Fire Shield";
    break;
  case 8317:
    spellname = "Fire Shield";
    break;
  case 8318:
    spellname = "Fire Shield";
    break;
  case 8319:
    spellname = "Fire Shield";
    break;
  case 8321:
    spellname = "Perm. Illusion Dreadlord";
    break;
  case 8322:
    spellname = "Moonglow Vest";
    break;
  case 8324:
    spellname = "Perm. Illusion HE Hunter";
    break;
  case 8326:
    spellname = "Ghost";
    break;
  case 8329:
    spellname = "Suicide";
    break;
  case 8331:
    spellname = "Ez-Thro Dynamite";
    break;
  case 8332:
    spellname = "Ez-Thro Dynamite Backfire";
    break;
  case 8333:
    spellname = "Coarse Dynamite";
    break;
  case 8334:
    spellname = "Practice Lock";
    break;
  case 8338:
    spellname = "Defibrillated!";
    break;
  case 8339:
    spellname = "EZ-Thro Dynamite";
    break;
  case 8342:
    spellname = "Defibrillate";
    break;
  case 8344:
    spellname = "Universal Remote";
    break;
  case 8345:
    spellname = "Control Machine";
    break;
  case 8346:
    spellname = "Mobility Malfunction";
    break;
  case 8347:
    spellname = "Target Lock";
    break;
  case 8348:
    spellname = "Julie's Blessing";
    break;
  case 8349:
    spellname = "Fire Nova";
    break;
  case 8350:
    spellname = "Fire Nova";
    break;
  case 8352:
    spellname = "Adjust Attitude";
    break;
  case 8353:
    spellname = "Calm Hostility";
    break;
  case 8354:
    spellname = "Incite Hostility";
    break;
  case 8355:
    spellname = "Exploit Weakness";
    break;
  case 8357:
    spellname = "Perm. Illusion Shade";
    break;
  case 8358:
    spellname = "Mana Spike";
    break;
  case 8359:
    spellname = "Left for Dead";
    break;
  case 8360:
    spellname = "Perm. Illusion Dreaming Whelp";
    break;
  case 8361:
    spellname = "Purity";
    break;
  case 8362:
    spellname = "Renew";
    break;
  case 8363:
    spellname = "Parasite";
    break;
  case 8364:
    spellname = "Blizzard";
    break;
  case 8365:
    spellname = "Enlarge";
    break;
  case 8366:
    spellname = "Ironforge Chain";
    break;
  case 8367:
    spellname = "Ironforge Breastplate";
    break;
  case 8368:
    spellname = "Ironforge Gauntlets";
    break;
  case 8372:
    spellname = "Summon Aqua Guardian";
    break;
  case 8373:
    spellname = "Mana Shield (PT)";
    break;
  case 8374:
    spellname = "Arcing Smash";
    break;
  case 8375:
    spellname = "QAEnchant Gloves +5 Mining";
    break;
  case 8376:
    spellname = "Earthgrab Totem";
    break;
  case 8377:
    spellname = "Earthgrab";
    break;
  case 8379:
    spellname = "Disarm";
    break;
  case 8380:
    spellname = "Sunder Armor";
    break;
  case 8382:
    spellname = "Leech Poison";
    break;
  case 8383:
    spellname = "Burning Tenacity";
    break;
  case 8384:
    spellname = "Pure Water";
    break;
  case 8385:
    spellname = "Swift Wind";
    break;
  case 8386:
    spellname = "Attacking";
    break;
  case 8387:
    spellname = "Find Herbs";
    break;
  case 8388:
    spellname = "Find Minerals";
    break;
  case 8391:
    spellname = "Ravage";
    break;
  case 8393:
    spellname = "Barbs";
    break;
  case 8394:
    spellname = "Striped Frostsaber";
    break;
  case 8395:
    spellname = "Emerald Raptor";
    break;
  case 8396:
    spellname = "Summon Ivory Tallstrider";
    break;
  case 8397:
    spellname = "Uther's Light";
    break;
  case 8398:
    spellname = "Frostbolt Volley";
    break;
  case 8399:
    spellname = "Sleep";
    break;
  case 8400:
    spellname = "Fireball";
    break;
  case 8401:
    spellname = "Fireball";
    break;
  case 8402:
    spellname = "Fireball";
    break;
  case 8406:
    spellname = "Frostbolt";
    break;
  case 8407:
    spellname = "Frostbolt";
    break;
  case 8408:
    spellname = "Frostbolt";
    break;
  case 8412:
    spellname = "Fire Blast";
    break;
  case 8413:
    spellname = "Fire Blast";
    break;
  case 8416:
    spellname = "Arcane Missiles";
    break;
  case 8417:
    spellname = "Arcane Missiles";
    break;
  case 8418:
    spellname = "Arcane Missiles";
    break;
  case 8419:
    spellname = "Arcane Missiles";
    break;
  case 8422:
    spellname = "Flamestrike";
    break;
  case 8423:
    spellname = "Flamestrike";
    break;
  case 8427:
    spellname = "Blizzard";
    break;
  case 8433:
    spellname = "Leech Pulse";
    break;
  case 8434:
    spellname = "Leech Pulse";
    break;
  case 8435:
    spellname = "Forked Lightning";
    break;
  case 8437:
    spellname = "Arcane Explosion";
    break;
  case 8438:
    spellname = "Arcane Explosion";
    break;
  case 8439:
    spellname = "Arcane Explosion";
    break;
  case 8443:
    spellname = "Fire Nova";
    break;
  case 8444:
    spellname = "Scorch";
    break;
  case 8445:
    spellname = "Scorch";
    break;
  case 8446:
    spellname = "Scorch";
    break;
  case 8450:
    spellname = "Dampen Magic";
    break;
  case 8451:
    spellname = "Dampen Magic";
    break;
  case 8455:
    spellname = "Amplify Magic";
    break;
  case 8457:
    spellname = "Fire Ward";
    break;
  case 8458:
    spellname = "Fire Ward";
    break;
  case 8461:
    spellname = "Frost Ward";
    break;
  case 8462:
    spellname = "Frost Ward";
    break;
  case 8465:
    spellname = "Simple Dress";
    break;
  case 8467:
    spellname = "White Woolen Dress";
    break;
  case 8483:
    spellname = "White Swashbuckler's Shirt";
    break;
  case 8489:
    spellname = "Red Swashbuckler's Shirt";
    break;
  case 8492:
    spellname = "Cone of Cold";
    break;
  case 8494:
    spellname = "Mana Shield";
    break;
  case 8495:
    spellname = "Mana Shield";
    break;
  case 8498:
    spellname = "Fire Nova Totem";
    break;
  case 8499:
    spellname = "Fire Nova Totem";
    break;
  case 8502:
    spellname = "Fire Nova";
    break;
  case 8503:
    spellname = "Fire Nova";
    break;
  case 8504:
    spellname = "Fire Nova";
    break;
  case 8505:
    spellname = "Fire Nova";
    break;
  case 8508:
    spellname = "Fire Nova";
    break;
  case 8509:
    spellname = "Fire Nova";
    break;
  case 8510:
    spellname = "Large Seaforium Backfire";
    break;
  case 8511:
    spellname = "Small Seaforium Backfire";
    break;
  case 8512:
    spellname = "Windfury Totem";
    break;
  case 8514:
    spellname = "Windfury Totem Effect";
    break;
  case 8515:
    spellname = "Windfury Totem Passive";
    break;
  case 8516:
    spellname = "Windfury Totem";
    break;
  case 8517:
    spellname = "Opening Strongbox";
    break;
  case 8532:
    spellname = "Aquadynamic Fish Lens";
    break;
  case 8552:
    spellname = "Curse of Weakness";
    break;
  case 8553:
    spellname = "Barleybrew Scalder";
    break;
  case 8554:
    spellname = "Drinking Barleybrew Scalder";
    break;
  case 8555:
    spellname = "Left for Dead";
    break;
  case 8593:
    spellname = "Symbol of Life";
    break;
  case 8594:
    spellname = "Summon Moonstalker Runt";
    break;
  case 8595:
    spellname = "Healing Tongue";
    break;
  case 8596:
    spellname = "Heal Visual (DND)";
    break;
  case 8598:
    spellname = "Lightning Blast";
    break;
  case 8599:
    spellname = "Enrage";
    break;
  case 8600:
    spellname = "Fevered Plague";
    break;
  case 8601:
    spellname = "Slowing Poison";
    break;
  case 8602:
    spellname = "Vengeance";
    break;
  case 8604:
    spellname = "Herb Baked Egg";
    break;
  case 8606:
    spellname = "Summon Cyclonian";
    break;
  case 8607:
    spellname = "Smoked Bear Meat";
    break;
  case 8609:
    spellname = "Cyclone Visual Spawn (DND)";
    break;
  case 8611:
    spellname = "Phase Shift";
    break;
  case 8612:
    spellname = "Phase Shift";
    break;
  case 8613:
    spellname = "Skinning";
    break;
  case 8615:
    spellname = "Apprentice Skinning";
    break;
  case 8616:
    spellname = "Path of the Berserker";
    break;
  case 8617:
    spellname = "Skinning";
    break;
  case 8618:
    spellname = "Skinning";
    break;
  case 8619:
    spellname = "Journeyman Skinning";
    break;
  case 8620:
    spellname = "Expert Skinning";
    break;
  case 8621:
    spellname = "Sinister Strike";
    break;
  case 8623:
    spellname = "Eviscerate";
    break;
  case 8624:
    spellname = "Eviscerate";
    break;
  case 8627:
    spellname = "Backstab (TEST)";
    break;
  case 8629:
    spellname = "Gouge";
    break;
  case 8631:
    spellname = "Garrote";
    break;
  case 8632:
    spellname = "Garrote";
    break;
  case 8633:
    spellname = "Garrote";
    break;
  case 8637:
    spellname = "Feint";
    break;
  case 8639:
    spellname = "Rupture";
    break;
  case 8640:
    spellname = "Rupture";
    break;
  case 8643:
    spellname = "Kidney Shot";
    break;
  case 8645:
    spellname = "Send Fray Combatant";
    break;
  case 8646:
    spellname = "Snap Kick";
    break;
  case 8647:
    spellname = "Expose Armor";
    break;
  case 8649:
    spellname = "Expose Armor";
    break;
  case 8650:
    spellname = "Expose Armor";
    break;
  case 8654:
    spellname = "Fray Spectator Converse";
    break;
  case 8656:
    spellname = "Summon Crawler";
    break;
  case 8672:
    spellname = "Challenger is Dazed";
    break;
  case 8673:
    spellname = "Gain Whirlwind Weapon";
    break;
  case 8674:
    spellname = "Summon Succubus";
    break;
  case 8675:
    spellname = "Warlock Channeling";
    break;
  case 8676:
    spellname = "Ambush";
    break;
  case 8677:
    spellname = "Summon Effect";
    break;
  case 8679:
    spellname = "Instant Poison";
    break;
  case 8680:
    spellname = "Instant Poison";
    break;
  case 8681:
    spellname = "Instant Poison";
    break;
  case 8682:
    spellname = "Fake Shot";
    break;
  case 8685:
    spellname = "Instant Poison II";
    break;
  case 8686:
    spellname = "Instant Poison II";
    break;
  case 8687:
    spellname = "Instant Poison II";
    break;
  case 8688:
    spellname = "Instant Poison III";
    break;
  case 8689:
    spellname = "Instant Poison III";
    break;
  case 8690:
    spellname = "Hearthstone";
    break;
  case 8691:
    spellname = "Instant Poison III";
    break;
  case 8692:
    spellname = "Mind-numbing Poison II";
    break;
  case 8693:
    spellname = "Mind-numbing Poison II";
    break;
  case 8694:
    spellname = "Mind-numbing Poison II";
    break;
  case 8696:
    spellname = "Sprint";
    break;
  case 8699:
    spellname = "Unholy Frenzy";
    break;
  case 8712:
    spellname = "Summon Felhunter";
    break;
  case 8713:
    spellname = "Overwhelming Musk";
    break;
  case 8714:
    spellname = "Overwhelming Musk";
    break;
  case 8715:
    spellname = "Terrifying Howl";
    break;
  case 8716:
    spellname = "Low Swipe";
    break;
  case 8721:
    spellname = "Backstab";
    break;
  case 8722:
    spellname = "Summon Succubus";
    break;
  case 8724:
    spellname = "Ambush";
    break;
  case 8725:
    spellname = "Ambush";
    break;
  case 8732:
    spellname = "Thunderclap";
    break;
  case 8733:
    spellname = "Blessing of Blackfathom";
    break;
  case 8734:
    spellname = "Blackfathom Channeling";
    break;
  case 8735:
    spellname = "Blackfathom Teleport";
    break;
  case 8736:
    spellname = "Conjure Food";
    break;
  case 8737:
    spellname = "Mail";
    break;
  case 8747:
    spellname = "Swimming Speed";
    break;
  case 8758:
    spellname = "Azure Silk Pants";
    break;
  case 8760:
    spellname = "Azure Silk Hood";
    break;
  case 8762:
    spellname = "Silk Headband";
    break;
  case 8764:
    spellname = "Earthen Vest";
    break;
  case 8766:
    spellname = "Azure Silk Belt";
    break;
  case 8768:
    spellname = "Iron Buckle";
    break;
  case 8770:
    spellname = "Robe of Power";
    break;
  case 8772:
    spellname = "Crimson Silk Belt";
    break;
  case 8774:
    spellname = "Green Silken Shoulders";
    break;
  case 8776:
    spellname = "Linen Belt";
    break;
  case 8778:
    spellname = "Boots of Darkness";
    break;
  case 8780:
    spellname = "Hands of Darkness";
    break;
  case 8782:
    spellname = "Truefaith Gloves";
    break;
  case 8784:
    spellname = "Green Silk Armor";
    break;
  case 8786:
    spellname = "Azure Silk Cloak";
    break;
  case 8788:
    spellname = "Lightning Shield";
    break;
  case 8789:
    spellname = "Crimson Silk Cloak";
    break;
  case 8791:
    spellname = "Crimson Silk Vest";
    break;
  case 8793:
    spellname = "Crimson Silk Shoulders";
    break;
  case 8795:
    spellname = "Azure Shoulders";
    break;
  case 8797:
    spellname = "Earthen Silk Belt";
    break;
  case 8799:
    spellname = "Crimson Silk Pantaloons";
    break;
  case 8800:
    spellname = "Dynamite";
    break;
  case 8802:
    spellname = "Crimson Silk Robe";
    break;
  case 8804:
    spellname = "Crimson Silk Gloves";
    break;
  case 8806:
    spellname = "Poisoned Shot";
    break;
  case 8809:
    spellname = "Slave Drain";
    break;
  case 8812:
    spellname = "Heal";
    break;
  case 8813:
    spellname = "Summon Kurzen Mindslave";
    break;
  case 8814:
    spellname = "Flame Spike";
    break;
  case 8816:
    spellname = "Summon Panthers";
    break;
  case 8817:
    spellname = "Smoke Bomb";
    break;
  case 8818:
    spellname = "Garrote";
    break;
  case 8820:
    spellname = "Slam";
    break;
  case 8822:
    spellname = "Stealth";
    break;
  case 8832:
    spellname = "Ward of Zanzil";
    break;
  case 8833:
    spellname = "Ward of Zanzil Passive";
    break;
  case 8834:
    spellname = "Ward of Zanzil Effect";
    break;
  case 8835:
    spellname = "Grace of Air Totem";
    break;
  case 8836:
    spellname = "Grace of Air";
    break;
  case 8852:
    spellname = "Moss Hide";
    break;
  case 8853:
    spellname = "Summon Skeleton";
    break;
  case 8854:
    spellname = "Bending Shinbone";
    break;
  case 8855:
    spellname = "Bending Shinbone";
    break;
  case 8856:
    spellname = "Bending Shinbone";
    break;
  case 8857:
    spellname = "Summon Fen Dweller";
    break;
  case 8858:
    spellname = "Bomb";
    break;
  case 8872:
    spellname = "Perm. Illusion FelGuard";
    break;
  case 8873:
    spellname = "Flame Breath";
    break;
  case 8874:
    spellname = "Stealth (TEST)";
    break;
  case 8875:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 8876:
    spellname = "Thrash";
    break;
  case 8878:
    spellname = "Echoes of Lordaeron UNUSED";
    break;
  case 8880:
    spellname = "Copper Dagger";
    break;
  case 8892:
    spellname = "Goblin Rocket Boots";
    break;
  case 8893:
    spellname = "Rocket Boots Malfunction";
    break;
  case 8895:
    spellname = "Goblin Rocket Boots";
    break;
  case 8897:
    spellname = "Destroy Rocket Boots";
    break;
  case 8898:
    spellname = "Sapta Sight";
    break;
  case 8899:
    spellname = "Sapta Sight";
    break;
  case 8900:
    spellname = "Sapta Sight";
    break;
  case 8901:
    spellname = "Gas Bomb";
    break;
  case 8902:
    spellname = "Gas Bomb";
    break;
  case 8903:
    spellname = "Healing Touch";
    break;
  case 8905:
    spellname = "Wrath";
    break;
  case 8907:
    spellname = "Mark of the Wild";
    break;
  case 8909:
    spellname = "Unholy Shield";
    break;
  case 8910:
    spellname = "Rejuvenation";
    break;
  case 8912:
    spellname = "Forge Verigan's Fist";
    break;
  case 8913:
    spellname = "Sacred Cleansing";
    break;
  case 8914:
    spellname = "Thorns";
    break;
  case 8916:
    spellname = "Remove Unholy Shield";
    break;
  case 8917:
    spellname = "Opening";
    break;
  case 8918:
    spellname = "Tranquility";
    break;
  case 8919:
    spellname = "Fill Jennea's Flask";
    break;
  case 8921:
    spellname = "Moonfire";
    break;
  case 8924:
    spellname = "Moonfire";
    break;
  case 8925:
    spellname = "Moonfire";
    break;
  case 8926:
    spellname = "Moonfire";
    break;
  case 8927:
    spellname = "Moonfire";
    break;
  case 8928:
    spellname = "Moonfire";
    break;
  case 8929:
    spellname = "Moonfire";
    break;
  case 8936:
    spellname = "Regrowth";
    break;
  case 8938:
    spellname = "Regrowth";
    break;
  case 8939:
    spellname = "Regrowth";
    break;
  case 8940:
    spellname = "Regrowth";
    break;
  case 8941:
    spellname = "Regrowth";
    break;
  case 8946:
    spellname = "Cure Poison";
    break;
  case 8947:
    spellname = "Cure Poison";
    break;
  case 8949:
    spellname = "Starfire";
    break;
  case 8950:
    spellname = "Starfire";
    break;
  case 8951:
    spellname = "Starfire";
    break;
  case 8955:
    spellname = "Soothe Animal";
    break;
  case 8972:
    spellname = "Maul";
    break;
  case 8980:
    spellname = "Skeletal Horse";
    break;
  case 8981:
    spellname = "Immolate";
    break;
  case 8983:
    spellname = "Bash";
    break;
  case 8985:
    spellname = "Summon Fire Elemental";
    break;
  case 8986:
    spellname = "Summon Illusionary Phantasm";
    break;
  case 8988:
    spellname = "Silence";
    break;
  case 8989:
    spellname = "Whirlwind";
    break;
  case 8990:
    spellname = "Retribution Aura";
    break;
  case 8992:
    spellname = "Shred";
    break;
  case 8994:
    spellname = "Banish";
    break;
  case 8995:
    spellname = "Shoot";
    break;
  case 8996:
    spellname = "Shoot";
    break;
  case 8997:
    spellname = "Shoot";
    break;
  case 8998:
    spellname = "Cower";
    break;
  case 9000:
    spellname = "Cower";
    break;
  case 9002:
    spellname = "Coarse Dynamite";
    break;
  case 9003:
    spellname = "Coarse Dynamite";
    break;
  case 9004:
    spellname = "Coarse Dynamite";
    break;
  case 9005:
    spellname = "Pounce";
    break;
  case 9007:
    spellname = "Pounce Bleed";
    break;
  case 9008:
    spellname = "Shoot";
    break;
  case 9009:
    spellname = "Coarse Dynamite";
    break;
  case 9010:
    spellname = "Create Filled Containment Coffer";
    break;
  case 9012:
    spellname = "Attract Rift Spawn";
    break;
  case 9032:
    spellname = "Self Stun - 30 seconds";
    break;
  case 9034:
    spellname = "Immolate";
    break;
  case 9035:
    spellname = "Hex of Weakness";
    break;
  case 9036:
    spellname = "Ghost";
    break;
  case 9052:
    spellname = "Fill Deino's Flask";
    break;
  case 9053:
    spellname = "Fireball";
    break;
  case 9055:
    spellname = "Create Witherbark Totem Bundle";
    break;
  case 9056:
    spellname = "Bolt Charge Bramble";
    break;
  case 9057:
    spellname = "Firebolt";
    break;
  case 9058:
    spellname = "Handstitched Leather Cloak";
    break;
  case 9059:
    spellname = "Handstitched Leather Bracers";
    break;
  case 9060:
    spellname = "Light Leather Quiver";
    break;
  case 9062:
    spellname = "Small Leather Ammo Pouch";
    break;
  case 9064:
    spellname = "Rugged Leather Pants";
    break;
  case 9065:
    spellname = "Light Leather Bracers";
    break;
  case 9068:
    spellname = "Light Leather Pants";
    break;
  case 9070:
    spellname = "Black Whelp Cloak";
    break;
  case 9072:
    spellname = "Red Whelp Gloves";
    break;
  case 9074:
    spellname = "Nimble Leather Gloves";
    break;
  case 9077:
    spellname = "Leather";
    break;
  case 9078:
    spellname = "Cloth";
    break;
  case 9079:
    spellname = "Create Rift";
    break;
  case 9080:
    spellname = "Hamstring";
    break;
  case 9081:
    spellname = "Shadow Bolt Volley";
    break;
  case 9082:
    spellname = "Create Containment Coffer";
    break;
  case 9084:
    spellname = "Magic Stone Helmet";
    break;
  case 9092:
    spellname = "Flesh Eating Worm";
    break;
  case 9093:
    spellname = "Rift Spawn Invisibility";
    break;
  case 9095:
    spellname = "Cantation of Manifestation";
    break;
  case 9096:
    spellname = "Rift Spawn Manifestation";
    break;
  case 9097:
    spellname = "Summon Demon of the Orb";
    break;
  case 9098:
    spellname = "Increased Agility 08";
    break;
  case 9099:
    spellname = "Increased Agility 09";
    break;
  case 9100:
    spellname = "Increased Agility 10";
    break;
  case 9101:
    spellname = "Increased Agility 11";
    break;
  case 9102:
    spellname = "Increased Agility 12";
    break;
  case 9103:
    spellname = "Increased Strength 08";
    break;
  case 9104:
    spellname = "Increased Intellect 08";
    break;
  case 9105:
    spellname = "Increased Intellect 09";
    break;
  case 9106:
    spellname = "Increased Intellect 10";
    break;
  case 9107:
    spellname = "Increased Intellect 11";
    break;
  case 9108:
    spellname = "Increased Intellect 12";
    break;
  case 9109:
    spellname = "Increased Spirit 08";
    break;
  case 9110:
    spellname = "Increased Spirit 09";
    break;
  case 9111:
    spellname = "Increased Spirit 10";
    break;
  case 9112:
    spellname = "Increased Spirit 11";
    break;
  case 9113:
    spellname = "Increased Spirit 12";
    break;
  case 9114:
    spellname = "Increased Stamina 08";
    break;
  case 9115:
    spellname = "Increased Stamina 09";
    break;
  case 9116:
    spellname = "Shield";
    break;
  case 9117:
    spellname = "Increased Stamina 10";
    break;
  case 9118:
    spellname = "Increased Stamina 11";
    break;
  case 9119:
    spellname = "Increased Stamina 12";
    break;
  case 9120:
    spellname = "Increased Strength 09";
    break;
  case 9121:
    spellname = "Increased Strength 10";
    break;
  case 9122:
    spellname = "Increased Strength 11";
    break;
  case 9123:
    spellname = "Increased Strength 12";
    break;
  case 9125:
    spellname = "Generic";
    break;
  case 9128:
    spellname = "Battle Shout";
    break;
  case 9132:
    spellname = "Increased Critical 14";
    break;
  case 9133:
    spellname = "Lockpicking 5";
    break;
  case 9134:
    spellname = "Herbalism";
    break;
  case 9136:
    spellname = "Attack Power 02";
    break;
  case 9137:
    spellname = "Attack Power 04";
    break;
  case 9138:
    spellname = "Attack Power 06";
    break;
  case 9139:
    spellname = "Attack Power 08";
    break;
  case 9140:
    spellname = "Attack Power 10";
    break;
  case 9141:
    spellname = "Attack Power 12";
    break;
  case 9142:
    spellname = "Attack Power 14";
    break;
  case 9143:
    spellname = "Bomb";
    break;
  case 9145:
    spellname = "Fletcher's Gloves";
    break;
  case 9146:
    spellname = "Herbalist's Gloves";
    break;
  case 9147:
    spellname = "Earthen Leather Shoulders";
    break;
  case 9148:
    spellname = "Pilferer's Gloves";
    break;
  case 9149:
    spellname = "Heavy Earthen Gloves";
    break;
  case 9156:
    spellname = "Create Mage's Orb";
    break;
  case 9157:
    spellname = "Create Mage's Robe";
    break;
  case 9159:
    spellname = "Sleep";
    break;
  case 9160:
    spellname = "Sleep";
    break;
  case 9163:
    spellname = "Heal Self";
    break;
  case 9172:
    spellname = "Lift Seal";
    break;
  case 9174:
    spellname = "Rage";
    break;
  case 9175:
    spellname = "Running Speed";
    break;
  case 9176:
    spellname = "Holy Sunder";
    break;
  case 9177:
    spellname = "Tigule and Foror's Strawberry Ice Cream";
    break;
  case 9178:
    spellname = "Brain Freeze";
    break;
  case 9179:
    spellname = "Stun";
    break;
  case 9192:
    spellname = "Plucky Resumes Human Form";
    break;
  case 9193:
    spellname = "Heavy Quiver";
    break;
  case 9194:
    spellname = "Heavy Leather Ammo Pouch";
    break;
  case 9195:
    spellname = "Dusky Leather Leggings";
    break;
  case 9196:
    spellname = "Dusky Leather Armor";
    break;
  case 9197:
    spellname = "Green Whelp Armor";
    break;
  case 9198:
    spellname = "Frost Leather Cloak";
    break;
  case 9199:
    spellname = "Attack Power %";
    break;
  case 9200:
    spellname = "Create Sapta";
    break;
  case 9201:
    spellname = "Dusky Bracers";
    break;
  case 9202:
    spellname = "Green Whelp Bracers";
    break;
  case 9206:
    spellname = "Dusky Belt";
    break;
  case 9207:
    spellname = "Dusky Boots";
    break;
  case 9208:
    spellname = "Swift Boots";
    break;
  case 9220:
    spellname = "Plucky Resumes Chicken Form";
    break;
  case 9221:
    spellname = "Summon Voidwalker";
    break;
  case 9222:
    spellname = "Summon Voidwalker";
    break;
  case 9223:
    spellname = "Summon Succubus";
    break;
  case 9224:
    spellname = "Summon Succubus";
    break;
  case 9232:
    spellname = "Scarlet Resurrection";
    break;
  case 9233:
    spellname = "Firebolt";
    break;
  case 9234:
    spellname = "Armor Debuff (TEST)";
    break;
  case 9235:
    spellname = "Scarlet Resurrected";
    break;
  case 9252:
    spellname = "Replenish Mana I";
    break;
  case 9253:
    spellname = "Replenish Mana II";
    break;
  case 9256:
    spellname = "Deep Sleep";
    break;
  case 9257:
    spellname = "Lay on Hands";
    break;
  case 9258:
    spellname = "Increased Agility 13";
    break;
  case 9259:
    spellname = "Increased Agility 14";
    break;
  case 9260:
    spellname = "Increased Intellect 13";
    break;
  case 9261:
    spellname = "Increased Intellect 14";
    break;
  case 9262:
    spellname = "Increased Spirit 13";
    break;
  case 9263:
    spellname = "Increased Spirit 14";
    break;
  case 9264:
    spellname = "Increased Stamina 13";
    break;
  case 9265:
    spellname = "Increased Stamina 14";
    break;
  case 9266:
    spellname = "Increased Strength 13";
    break;
  case 9267:
    spellname = "Increased Strength 14";
    break;
  case 9268:
    spellname = "Teleport to Darnassus - Event";
    break;
  case 9269:
    spellname = "Gnomish Universal Remote";
    break;
  case 9271:
    spellname = "Aquadynamic Fish Attractor";
    break;
  case 9273:
    spellname = "Goblin Jumper Cables";
    break;
  case 9275:
    spellname = "Immolate";
    break;
  case 9276:
    spellname = "Immolate";
    break;
  case 9294:
    spellname = "Increase Fire Dam 16";
    break;
  case 9295:
    spellname = "Increase Fire Dam 17";
    break;
  case 9296:
    spellname = "Increase Fire Dam 19";
    break;
  case 9297:
    spellname = "Increase Fire Dam 20";
    break;
  case 9298:
    spellname = "Increase Fire Dam 21";
    break;
  case 9304:
    spellname = "Increase Frost Dam 16";
    break;
  case 9305:
    spellname = "Increase Frost Dam 17";
    break;
  case 9306:
    spellname = "Increase Frost Dam 19";
    break;
  case 9307:
    spellname = "Increase Frost Dam 20";
    break;
  case 9308:
    spellname = "Increase Frost Dam 21";
    break;
  case 9314:
    spellname = "Increase Healing 24";
    break;
  case 9315:
    spellname = "Increase Healing 26";
    break;
  case 9316:
    spellname = "Increase Healing 29";
    break;
  case 9317:
    spellname = "Increase Healing 31";
    break;
  case 9318:
    spellname = "Increase Healing 33";
    break;
  case 9324:
    spellname = "Increase Shadow Dam 16";
    break;
  case 9325:
    spellname = "Increase Shadow Dam 17";
    break;
  case 9326:
    spellname = "Increase Shadow Dam 19";
    break;
  case 9327:
    spellname = "Increase Shadow Dam 20";
    break;
  case 9328:
    spellname = "Increase Shadow Dam 21";
    break;
  case 9329:
    spellname = "Attack Power 16";
    break;
  case 9330:
    spellname = "Attack Power 18";
    break;
  case 9331:
    spellname = "Attack Power 20";
    break;
  case 9332:
    spellname = "Attack Power 22";
    break;
  case 9333:
    spellname = "Attack Power 48";
    break;
  case 9334:
    spellname = "Attack Power 26";
    break;
  case 9335:
    spellname = "Attack Power 28";
    break;
  case 9336:
    spellname = "Attack Power 30";
    break;
  case 9342:
    spellname = "Increase Spell Dam 13";
    break;
  case 9343:
    spellname = "Increase Spell Dam 14";
    break;
  case 9344:
    spellname = "Increase Spell Dam 15";
    break;
  case 9345:
    spellname = "Increase Spell Dam 16";
    break;
  case 9346:
    spellname = "Increase Spell Dam 18";
    break;
  case 9347:
    spellname = "Mortal Strike";
    break;
  case 9357:
    spellname = "Increase Nature Dam 16";
    break;
  case 9358:
    spellname = "Increase Nature Dam 17";
    break;
  case 9359:
    spellname = "Increase Nature Dam 19";
    break;
  case 9360:
    spellname = "Increase Nature Dam 20";
    break;
  case 9361:
    spellname = "Increase Nature Dam 21";
    break;
  case 9373:
    spellname = "Soul Siphon";
    break;
  case 9392:
    spellname = "Increase Spell Dam 1";
    break;
  case 9393:
    spellname = "Increase Spell Dam 2";
    break;
  case 9394:
    spellname = "Increase Spell Dam 4";
    break;
  case 9395:
    spellname = "Increase Spell Dam 5";
    break;
  case 9396:
    spellname = "Increase Spell Dam 6";
    break;
  case 9397:
    spellname = "Increase Spell Dam 7";
    break;
  case 9398:
    spellname = "Increase Spell Dam 8";
    break;
  case 9399:
    spellname = "Increase Fire Dam 11";
    break;
  case 9400:
    spellname = "Increase Fire Dam 13";
    break;
  case 9401:
    spellname = "Increase Fire Dam 14";
    break;
  case 9402:
    spellname = "Increase Frost Dam 11";
    break;
  case 9403:
    spellname = "Increase Frost Dam 13";
    break;
  case 9404:
    spellname = "Increase Frost Dam 14";
    break;
  case 9405:
    spellname = "Increased Critical 70";
    break;
  case 9406:
    spellname = "Increase Healing 18";
    break;
  case 9407:
    spellname = "Increase Healing 20";
    break;
  case 9408:
    spellname = "Increase Healing 22";
    break;
  case 9409:
    spellname = "Increase Nature Dam 11";
    break;
  case 9410:
    spellname = "Increase Nature Dam 13";
    break;
  case 9411:
    spellname = "Increase Nature Dam 14";
    break;
  case 9412:
    spellname = "Increase Shadow Dam 11";
    break;
  case 9413:
    spellname = "Increase Shadow Dam 13";
    break;
  case 9414:
    spellname = "Increase Shadow Dam 14";
    break;
  case 9415:
    spellname = "Increase Spell Dam 9";
    break;
  case 9416:
    spellname = "Increase Spell Dam 11";
    break;
  case 9417:
    spellname = "Increase Spell Dam 12";
    break;
  case 9433:
    spellname = "Arcane Explosion";
    break;
  case 9435:
    spellname = "Detonation";
    break;
  case 9436:
    spellname = "Invisibility Detection";
    break;
  case 9437:
    spellname = "Placing Bear Trap";
    break;
  case 9438:
    spellname = "Arcane Bubble";
    break;
  case 9452:
    spellname = "Vindication";
    break;
  case 9453:
    spellname = "Unyielding Faith";
    break;
  case 9454:
    spellname = "Freeze";
    break;
  case 9455:
    spellname = "Thistle Bear Death Touch";
    break;
  case 9456:
    spellname = "Tharnariun Cure 1";
    break;
  case 9457:
    spellname = "Tharnariun's Heal";
    break;
  case 9458:
    spellname = "Smoke Cloud";
    break;
  case 9459:
    spellname = "Corrosive Ooze";
    break;
  case 9460:
    spellname = "Corrosive Ooze";
    break;
  case 9461:
    spellname = "Summon Swamp Ooze";
    break;
  case 9462:
    spellname = "Mirefin Fungus";
    break;
  case 9463:
    spellname = "Mirefin Fungus";
    break;
  case 9464:
    spellname = "Barbs";
    break;
  case 9472:
    spellname = "Flash Heal";
    break;
  case 9473:
    spellname = "Flash Heal";
    break;
  case 9474:
    spellname = "Flash Heal";
    break;
  case 9478:
    spellname = "Invis Placing Bear Trap";
    break;
  case 9481:
    spellname = "Holy Smite";
    break;
  case 9482:
    spellname = "Amplify Flames";
    break;
  case 9483:
    spellname = "Boulder";
    break;
  case 9484:
    spellname = "Shackle Undead";
    break;
  case 9485:
    spellname = "Shackle Undead";
    break;
  case 9487:
    spellname = "Fireball";
    break;
  case 9488:
    spellname = "Fireball";
    break;
  case 9489:
    spellname = "Create Scrying Bowl";
    break;
  case 9490:
    spellname = "Demoralizing Roar";
    break;
  case 9492:
    spellname = "Rip";
    break;
  case 9493:
    spellname = "Rip";
    break;
  case 9512:
    spellname = "Restore Energy";
    break;
  case 9513:
    spellname = "Thistle Tea";
    break;
  case 9515:
    spellname = "Summon Tracking Hound";
    break;
  case 9532:
    spellname = "Lightning Bolt";
    break;
  case 9552:
    spellname = "Searing Flames";
    break;
  case 9572:
    spellname = "Onin's Camouflage";
    break;
  case 9573:
    spellname = "Flame Breath";
    break;
  case 9574:
    spellname = "Flame Buffet";
    break;
  case 9575:
    spellname = "Self Detonation";
    break;
  case 9576:
    spellname = "Lock Down";
    break;
  case 9577:
    spellname = "Uldaman Key Staff";
    break;
  case 9578:
    spellname = "Fade";
    break;
  case 9579:
    spellname = "Fade";
    break;
  case 9582:
    spellname = "Filling";
    break;
  case 9583:
    spellname = "Water Sample";
    break;
  case 9584:
    spellname = "Water Sample";
    break;
  case 9586:
    spellname = "Water Sample";
    break;
  case 9587:
    spellname = "Magic Potion";
    break;
  case 9590:
    spellname = "Stealth 1";
    break;
  case 9591:
    spellname = "Acid Spit";
    break;
  case 9592:
    spellname = "Fade";
    break;
  case 9594:
    spellname = "Attach Medallion to Shaft";
    break;
  case 9595:
    spellname = "Attach Shaft to Medallion";
    break;
  case 9612:
    spellname = "Ink Spray";
    break;
  case 9613:
    spellname = "Shadow Bolt";
    break;
  case 9614:
    spellname = "Rift Beacon";
    break;
  case 9615:
    spellname = "Summon Rift Traveler";
    break;
  case 9616:
    spellname = "Wild Regeneration";
    break;
  case 9617:
    spellname = "Ghost Visual";
    break;
  case 9632:
    spellname = "Bladestorm";
    break;
  case 9633:
    spellname = "Whirlwind";
    break;
  case 9634:
    spellname = "Dire Bear Form";
    break;
  case 9635:
    spellname = "Dire Bear Form (Passive)";
    break;
  case 9636:
    spellname = "Summon Swamp Spirit";
    break;
  case 9653:
    spellname = "Summon Gelkis Rumbler";
    break;
  case 9654:
    spellname = "Jumping Lightning";
    break;
  case 9657:
    spellname = "Shadow Shell";
    break;
  case 9658:
    spellname = "Flame Buffet";
    break;
  case 9672:
    spellname = "Frostbolt";
    break;
  case 9712:
    spellname = "Thaumaturgy Channel";
    break;
  case 9733:
    spellname = "Arantir's Anger";
    break;
  case 9734:
    spellname = "Holy Smite";
    break;
  case 9735:
    spellname = "Sapta Sight";
    break;
  case 9736:
    spellname = "Arantir's Deception";
    break;
  case 9737:
    spellname = "Arantir's Anger Effect";
    break;
  case 9738:
    spellname = "Rift Spawn Becomes Visible";
    break;
  case 9739:
    spellname = "Wrath";
    break;
  case 9740:
    spellname = "Arantir's Deception";
    break;
  case 9741:
    spellname = "Arantir's Rage";
    break;
  case 9743:
    spellname = "Delete Me";
    break;
  case 9744:
    spellname = "Jarkal's Translation";
    break;
  case 9745:
    spellname = "Maul";
    break;
  case 9747:
    spellname = "Demoralizing Roar";
    break;
  case 9749:
    spellname = "Faerie Fire";
    break;
  case 9750:
    spellname = "Regrowth";
    break;
  case 9752:
    spellname = "Rip";
    break;
  case 9754:
    spellname = "Swipe";
    break;
  case 9756:
    spellname = "Thorns";
    break;
  case 9758:
    spellname = "Healing Touch";
    break;
  case 9760:
    spellname = "Increased Armor 10";
    break;
  case 9761:
    spellname = "Increased Armor 20";
    break;
  case 9762:
    spellname = "Increased Armor 30";
    break;
  case 9763:
    spellname = "Increased Armor 40";
    break;
  case 9764:
    spellname = "Increased Armor 50";
    break;
  case 9765:
    spellname = "Increased Armor 60";
    break;
  case 9766:
    spellname = "Increased Armor 70";
    break;
  case 9767:
    spellname = "Increased Armor 80";
    break;
  case 9768:
    spellname = "Increased Armor 90";
    break;
  case 9769:
    spellname = "Radiation";
    break;
  case 9770:
    spellname = "Radiation";
    break;
  case 9771:
    spellname = "Radiation Bolt";
    break;
  case 9773:
    spellname = "Defias Tower II";
    break;
  case 9774:
    spellname = "Freedom";
    break;
  case 9775:
    spellname = "Irradiated";
    break;
  case 9776:
    spellname = "Irradiated";
    break;
  case 9777:
    spellname = "Self Healing";
    break;
  case 9778:
    spellname = "Proc Self Heal 22";
    break;
  case 9779:
    spellname = "Defias Tower III";
    break;
  case 9781:
    spellname = "Mithril Shield Spike";
    break;
  case 9782:
    spellname = "Mithril Shield Spike";
    break;
  case 9783:
    spellname = "Mithril Spurs";
    break;
  case 9784:
    spellname = "Iron Shield Spike";
    break;
  case 9785:
    spellname = "Blacksmithing";
    break;
  case 9786:
    spellname = "Artisan Blacksmith";
    break;
  case 9787:
    spellname = "Weaponsmith";
    break;
  case 9788:
    spellname = "Armorsmith";
    break;
  case 9789:
    spellname = "Weaponsmith";
    break;
  case 9790:
    spellname = "Armorsmith";
    break;
  case 9791:
    spellname = "Head Crack";
    break;
  case 9795:
    spellname = "Talvash's Necklace Repair";
    break;
  case 9796:
    spellname = "Blight";
    break;
  case 9798:
    spellname = "Radiation";
    break;
  case 9799:
    spellname = "Eye for an Eye";
    break;
  case 9800:
    spellname = "Holy Shield";
    break;
  case 9806:
    spellname = "Phantom Strike";
    break;
  case 9810:
    spellname = "Touch of Zanzil";
    break;
  case 9811:
    spellname = "Barbaric Iron Shoulders";
    break;
  case 9813:
    spellname = "Barbaric Iron Breastplate";
    break;
  case 9814:
    spellname = "Barbaric Iron Helm";
    break;
  case 9818:
    spellname = "Barbaric Iron Boots";
    break;
  case 9820:
    spellname = "Barbaric Iron Gloves";
    break;
  case 9821:
    spellname = "Dash";
    break;
  case 9823:
    spellname = "Pounce";
    break;
  case 9824:
    spellname = "Pounce Bleed";
    break;
  case 9826:
    spellname = "Pounce Bleed";
    break;
  case 9827:
    spellname = "Pounce";
    break;
  case 9829:
    spellname = "Shred";
    break;
  case 9830:
    spellname = "Shred";
    break;
  case 9833:
    spellname = "Moonfire";
    break;
  case 9834:
    spellname = "Moonfire";
    break;
  case 9835:
    spellname = "Moonfire";
    break;
  case 9839:
    spellname = "Rejuvenation";
    break;
  case 9840:
    spellname = "Rejuvenation";
    break;
  case 9841:
    spellname = "Rejuvenation";
    break;
  case 9845:
    spellname = "Tiger's Fury";
    break;
  case 9846:
    spellname = "Tiger's Fury";
    break;
  case 9849:
    spellname = "Claw";
    break;
  case 9850:
    spellname = "Claw";
    break;
  case 9852:
    spellname = "Entangling Roots";
    break;
  case 9853:
    spellname = "Entangling Roots";
    break;
  case 9856:
    spellname = "Regrowth";
    break;
  case 9857:
    spellname = "Regrowth";
    break;
  case 9858:
    spellname = "Regrowth";
    break;
  case 9862:
    spellname = "Tranquility";
    break;
  case 9863:
    spellname = "Tranquility";
    break;
  case 9866:
    spellname = "Ravage";
    break;
  case 9867:
    spellname = "Ravage";
    break;
  case 9874:
    spellname = "Self Destruct";
    break;
  case 9875:
    spellname = "Starfire";
    break;
  case 9876:
    spellname = "Starfire";
    break;
  case 9879:
    spellname = "Self Destruct";
    break;
  case 9880:
    spellname = "Maul";
    break;
  case 9881:
    spellname = "Maul";
    break;
  case 9884:
    spellname = "Mark of the Wild";
    break;
  case 9885:
    spellname = "Mark of the Wild";
    break;
  case 9888:
    spellname = "Healing Touch";
    break;
  case 9889:
    spellname = "Healing Touch";
    break;
  case 9892:
    spellname = "Cower";
    break;
  case 9894:
    spellname = "Rip";
    break;
  case 9896:
    spellname = "Rip";
    break;
  case 9898:
    spellname = "Demoralizing Roar";
    break;
  case 9900:
    spellname = "Sharpen Blade IV";
    break;
  case 9901:
    spellname = "Soothe Animal";
    break;
  case 9903:
    spellname = "Enhance Blunt Weapon IV";
    break;
  case 9904:
    spellname = "Rake";
    break;
  case 9906:
    spellname = "Reflection";
    break;
  case 9907:
    spellname = "Faerie Fire";
    break;
  case 9908:
    spellname = "Swipe";
    break;
  case 9910:
    spellname = "Thorns";
    break;
  case 9912:
    spellname = "Wrath";
    break;
  case 9913:
    spellname = "Prowl";
    break;
  case 9915:
    spellname = "Frost Nova";
    break;
  case 9916:
    spellname = "Steel Breastplate";
    break;
  case 9918:
    spellname = "Solid Sharpening Stone";
    break;
  case 9920:
    spellname = "Solid Grinding Stone";
    break;
  case 9921:
    spellname = "Solid Weightstone";
    break;
  case 9926:
    spellname = "Heavy Mithril Shoulder";
    break;
  case 9928:
    spellname = "Heavy Mithril Gauntlet";
    break;
  case 9930:
    spellname = "Empathy of Stone";
    break;
  case 9931:
    spellname = "Mithril Scale Pants";
    break;
  case 9933:
    spellname = "Heavy Mithril Pants";
    break;
  case 9935:
    spellname = "Steel Plate Helm";
    break;
  case 9937:
    spellname = "Mithril Scale Bracers";
    break;
  case 9939:
    spellname = "Mithril Shield Spike";
    break;
  case 9941:
    spellname = "Spell Reflection";
    break;
  case 9942:
    spellname = "Mithril Scale Gloves";
    break;
  case 9943:
    spellname = "Spell Reflection";
    break;
  case 9945:
    spellname = "Ornate Mithril Pants";
    break;
  case 9949:
    spellname = "Thieves' Tool Rack Conjure";
    break;
  case 9950:
    spellname = "Ornate Mithril Gloves";
    break;
  case 9952:
    spellname = "Ornate Mithril Shoulder";
    break;
  case 9954:
    spellname = "Truesilver Gauntlets";
    break;
  case 9956:
    spellname = "Drink Potion";
    break;
  case 9957:
    spellname = "Orcish War Leggings";
    break;
  case 9959:
    spellname = "Heavy Mithril Breastplate";
    break;
  case 9961:
    spellname = "Mithril Coif";
    break;
  case 9964:
    spellname = "Mithril Spurs";
    break;
  case 9966:
    spellname = "Mithril Scale Shoulders";
    break;
  case 9968:
    spellname = "Heavy Mithril Boots";
    break;
  case 9970:
    spellname = "Heavy Mithril Helm";
    break;
  case 9972:
    spellname = "Ornate Mithril Breastplate";
    break;
  case 9974:
    spellname = "Truesilver Breastplate";
    break;
  case 9976:
    spellname = "Polly Eats the E.C.A.C.";
    break;
  case 9977:
    spellname = "Conjure E.C.A.C";
    break;
  case 9979:
    spellname = "Ornate Mithril Boots";
    break;
  case 9980:
    spellname = "Ornate Mithril Helm";
    break;
  case 9983:
    spellname = "Copper Claymore";
    break;
  case 9985:
    spellname = "Bronze Warhammer";
    break;
  case 9986:
    spellname = "Bronze Greatsword";
    break;
  case 9987:
    spellname = "Bronze Battle Axe";
    break;
  case 9991:
    spellname = "Touch of Zanzil";
    break;
  case 9992:
    spellname = "Dizzy";
    break;
  case 9993:
    spellname = "Heavy Mithril Axe";
    break;
  case 9995:
    spellname = "Blue Glittering Axe";
    break;
  case 9997:
    spellname = "Wicked Mithril Blade";
    break;
  case 9998:
    spellname = "Summon Polly Jr.";
    break;
  case 9999:
    spellname = "Touch of Zanzil Cure";
    break;
  case 10001:
    spellname = "Big Black Mace";
    break;
  case 10003:
    spellname = "The Shatterer";
    break;
  case 10005:
    spellname = "Dazzling Mithril Rapier";
    break;
  case 10007:
    spellname = "Phantom Blade";
    break;
  case 10009:
    spellname = "Runed Mithril Hammer";
    break;
  case 10011:
    spellname = "Blight";
    break;
  case 10013:
    spellname = "Ebon Shiv";
    break;
  case 10015:
    spellname = "Truesilver Champion";
    break;
  case 10017:
    spellname = "Frost Hold";
    break;
  case 10018:
    spellname = "Rat Nova";
    break;
  case 10021:
    spellname = "100% Block";
    break;
  case 10022:
    spellname = "Deadly Poison";
    break;
  case 10032:
    spellname = "Uber Stealth";
    break;
  case 10052:
    spellname = "Replenish Mana";
    break;
  case 10053:
    spellname = "Conjure Mana Citrine";
    break;
  case 10054:
    spellname = "Conjure Mana Ruby";
    break;
  case 10057:
    spellname = "Replenish Mana";
    break;
  case 10058:
    spellname = "Replenish Mana";
    break;
  case 10059:
    spellname = "Portal: Stormwind";
    break;
  case 10060:
    spellname = "Power Infusion";
    break;
  case 10061:
    spellname = "Summon Obsidian Shard";
    break;
  case 10072:
    spellname = "Splintered Obsidian";
    break;
  case 10073:
    spellname = "dmg3";
    break;
  case 10074:
    spellname = "Spell Reflection";
    break;
  case 10092:
    spellname = "Sand Storm";
    break;
  case 10093:
    spellname = "Harsh Winds";
    break;
  case 10094:
    spellname = "Sand Storms";
    break;
  case 10096:
    spellname = "Shrink";
    break;
  case 10097:
    spellname = "Smelt Mithril";
    break;
  case 10098:
    spellname = "Smelt Truesilver";
    break;
  case 10101:
    spellname = "Knock Away";
    break;
  case 10113:
    spellname = "Flare";
    break;
  case 10132:
    spellname = "Sand Storms";
    break;
  case 10134:
    spellname = "Sand Storm";
    break;
  case 10136:
    spellname = "Magenta Cap Sickness";
    break;
  case 10137:
    spellname = "Fizzule's Folly";
    break;
  case 10138:
    spellname = "Conjure Water";
    break;
  case 10139:
    spellname = "Conjure Water";
    break;
  case 10140:
    spellname = "Conjure Water";
    break;
  case 10143:
    spellname = "Conjure Water";
    break;
  case 10144:
    spellname = "Conjure Food";
    break;
  case 10145:
    spellname = "Conjure Food";
    break;
  case 10148:
    spellname = "Fireball";
    break;
  case 10149:
    spellname = "Fireball";
    break;
  case 10150:
    spellname = "Fireball";
    break;
  case 10151:
    spellname = "Fireball";
    break;
  case 10156:
    spellname = "Arcane Intellect";
    break;
  case 10157:
    spellname = "Arcane Intellect";
    break;
  case 10159:
    spellname = "Cone of Cold";
    break;
  case 10160:
    spellname = "Cone of Cold";
    break;
  case 10161:
    spellname = "Cone of Cold";
    break;
  case 10165:
    spellname = "Khadgar's Unlocking";
    break;
  case 10166:
    spellname = "Khadgar's Unlocking";
    break;
  case 10169:
    spellname = "Amplify Magic";
    break;
  case 10170:
    spellname = "Amplify Magic";
    break;
  case 10173:
    spellname = "Dampen Magic";
    break;
  case 10174:
    spellname = "Dampen Magic";
    break;
  case 10177:
    spellname = "Frost Ward";
    break;
  case 10179:
    spellname = "Frostbolt";
    break;
  case 10180:
    spellname = "Frostbolt";
    break;
  case 10181:
    spellname = "Frostbolt";
    break;
  case 10185:
    spellname = "Blizzard";
    break;
  case 10186:
    spellname = "Blizzard";
    break;
  case 10187:
    spellname = "Blizzard";
    break;
  case 10191:
    spellname = "Mana Shield";
    break;
  case 10192:
    spellname = "Mana Shield";
    break;
  case 10193:
    spellname = "Mana Shield";
    break;
  case 10197:
    spellname = "Fire Blast";
    break;
  case 10199:
    spellname = "Fire Blast";
    break;
  case 10201:
    spellname = "Arcane Explosion";
    break;
  case 10202:
    spellname = "Arcane Explosion";
    break;
  case 10205:
    spellname = "Scorch";
    break;
  case 10206:
    spellname = "Scorch";
    break;
  case 10207:
    spellname = "Scorch";
    break;
  case 10211:
    spellname = "Arcane Missiles";
    break;
  case 10212:
    spellname = "Arcane Missiles";
    break;
  case 10215:
    spellname = "Flamestrike";
    break;
  case 10216:
    spellname = "Flamestrike";
    break;
  case 10219:
    spellname = "Ice Armor";
    break;
  case 10220:
    spellname = "Ice Armor";
    break;
  case 10223:
    spellname = "Fire Ward";
    break;
  case 10225:
    spellname = "Fire Ward";
    break;
  case 10227:
    spellname = "Beast Tracking";
    break;
  case 10230:
    spellname = "Frost Nova";
    break;
  case 10239:
    spellname = "Demon Tracking";
    break;
  case 10244:
    spellname = "Dragon Tracking";
    break;
  case 10245:
    spellname = "Elemental Tracking";
    break;
  case 10246:
    spellname = "Undead Tracking";
    break;
  case 10247:
    spellname = "Summon Zul'Farrak Zombies";
    break;
  case 10248:
    spellname = "Mining";
    break;
  case 10249:
    spellname = "Artisan Miner";
    break;
  case 10250:
    spellname = "Drink";
    break;
  case 10251:
    spellname = "Biletoad Infection";
    break;
  case 10252:
    spellname = "Awaken Earthen Guardians";
    break;
  case 10253:
    spellname = "Chemical Peel";
    break;
  case 10254:
    spellname = "Stone Dwarf Awaken Visual";
    break;
  case 10255:
    spellname = "Stoned";
    break;
  case 10256:
    spellname = "Food";
    break;
  case 10257:
    spellname = "Food";
    break;
  case 10258:
    spellname = "Awaken Vault Warder";
    break;
  case 10259:
    spellname = "Awaken Earthen Dwarf";
    break;
  case 10260:
    spellname = "Reconstruct";
    break;
  case 10263:
    spellname = "Self Visual - Sleep 90s (DND)";
    break;
  case 10265:
    spellname = "Juggler Vein Rupture";
    break;
  case 10266:
    spellname = "Lung Puncture";
    break;
  case 10267:
    spellname = "Slush";
    break;
  case 10268:
    spellname = "Decimate";
    break;
  case 10270:
    spellname = "Fel Suppression";
    break;
  case 10273:
    spellname = "Arcane Missiles";
    break;
  case 10274:
    spellname = "Arcane Missiles";
    break;
  case 10277:
    spellname = "Throw";
    break;
  case 10278:
    spellname = "Blessing of Protection";
    break;
  case 10290:
    spellname = "Devotion Aura";
    break;
  case 10291:
    spellname = "Devotion Aura";
    break;
  case 10292:
    spellname = "Devotion Aura";
    break;
  case 10293:
    spellname = "Devotion Aura";
    break;
  case 10298:
    spellname = "Retribution Aura";
    break;
  case 10299:
    spellname = "Retribution Aura";
    break;
  case 10300:
    spellname = "Retribution Aura";
    break;
  case 10301:
    spellname = "Retribution Aura";
    break;
  case 10308:
    spellname = "Hammer of Justice";
    break;
  case 10310:
    spellname = "Lay on Hands";
    break;
  case 10312:
    spellname = "Exorcism";
    break;
  case 10313:
    spellname = "Exorcism";
    break;
  case 10314:
    spellname = "Exorcism";
    break;
  case 10318:
    spellname = "Holy Wrath";
    break;
  case 10321:
    spellname = "Judgement";
    break;
  case 10322:
    spellname = "Redemption";
    break;
  case 10324:
    spellname = "Redemption";
    break;
  case 10326:
    spellname = "Turn Evil";
    break;
  case 10328:
    spellname = "Holy Light";
    break;
  case 10329:
    spellname = "Holy Light";
    break;
  case 10340:
    spellname = "Uldaman Boss Agro";
    break;
  case 10341:
    spellname = "Radiation Cloud";
    break;
  case 10342:
    spellname = "Guardian Effect";
    break;
  case 10344:
    spellname = "Armor +32";
    break;
  case 10345:
    spellname = "Rebuild";
    break;
  case 10346:
    spellname = "Machine Gun";
    break;
  case 10347:
    spellname = "Archaedas Awaken Visual (DND)";
    break;
  case 10348:
    spellname = "Tune Up";
    break;
  case 10351:
    spellname = "Basilisk Skin";
    break;
  case 10368:
    spellname = "Uther's Light Effect";
    break;
  case 10369:
    spellname = "Scooby Snack Effect";
    break;
  case 10370:
    spellname = "Lacerations";
    break;
  case 10371:
    spellname = "Slow";
    break;
  case 10373:
    spellname = "Fatal Wound";
    break;
  case 10387:
    spellname = "Lightning Surge";
    break;
  case 10388:
    spellname = "Summon Prismatic Exile";
    break;
  case 10389:
    spellname = "Spawn Smoke";
    break;
  case 10390:
    spellname = "Gate Failure";
    break;
  case 10391:
    spellname = "Lightning Bolt";
    break;
  case 10392:
    spellname = "Lightning Bolt";
    break;
  case 10395:
    spellname = "Healing Wave";
    break;
  case 10396:
    spellname = "Healing Wave";
    break;
  case 10399:
    spellname = "Rockbiter Weapon";
    break;
  case 10403:
    spellname = "Stoneskin";
    break;
  case 10404:
    spellname = "Stoneskin";
    break;
  case 10405:
    spellname = "Stoneskin";
    break;
  case 10406:
    spellname = "Stoneskin Totem";
    break;
  case 10407:
    spellname = "Stoneskin Totem";
    break;
  case 10408:
    spellname = "Stoneskin Totem";
    break;
  case 10412:
    spellname = "Earth Shock";
    break;
  case 10413:
    spellname = "Earth Shock";
    break;
  case 10414:
    spellname = "Earth Shock";
    break;
  case 10418:
    spellname = "Arugal spawn-in spell";
    break;
  case 10423:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 10424:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 10425:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 10426:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 10427:
    spellname = "Stoneclaw Totem";
    break;
  case 10428:
    spellname = "Stoneclaw Totem";
    break;
  case 10431:
    spellname = "Lightning Shield";
    break;
  case 10432:
    spellname = "Lightning Shield";
    break;
  case 10435:
    spellname = "Attack";
    break;
  case 10436:
    spellname = "Attack";
    break;
  case 10437:
    spellname = "Searing Totem";
    break;
  case 10438:
    spellname = "Searing Totem";
    break;
  case 10441:
    spellname = "Strength of Earth";
    break;
  case 10442:
    spellname = "Strength of Earth Totem";
    break;
  case 10444:
    spellname = "Flametongue Attack";
    break;
  case 10445:
    spellname = "Flametongue Weapon Proc";
    break;
  case 10447:
    spellname = "Flame Shock";
    break;
  case 10448:
    spellname = "Flame Shock";
    break;
  case 10451:
    spellname = "Implosion";
    break;
  case 10452:
    spellname = "Flame Buffet";
    break;
  case 10454:
    spellname = "Into the Rift";
    break;
  case 10455:
    spellname = "Minor Tremor";
    break;
  case 10456:
    spellname = "Frostbrand Weapon";
    break;
  case 10458:
    spellname = "Frostbrand Attack";
    break;
  case 10459:
    spellname = "Sacrifice Spinneret";
    break;
  case 10460:
    spellname = "Healing Stream";
    break;
  case 10461:
    spellname = "Healing Stream";
    break;
  case 10462:
    spellname = "Healing Stream Totem";
    break;
  case 10463:
    spellname = "Healing Stream Totem";
    break;
  case 10466:
    spellname = "Lesser Healing Wave";
    break;
  case 10467:
    spellname = "Lesser Healing Wave";
    break;
  case 10468:
    spellname = "Lesser Healing Wave";
    break;
  case 10472:
    spellname = "Frost Shock";
    break;
  case 10473:
    spellname = "Frost Shock";
    break;
  case 10476:
    spellname = "Frost Resistance";
    break;
  case 10477:
    spellname = "Frost Resistance";
    break;
  case 10478:
    spellname = "Frost Resistance Totem";
    break;
  case 10479:
    spellname = "Frost Resistance Totem";
    break;
  case 10482:
    spellname = "Cured Thick Hide";
    break;
  case 10486:
    spellname = "Windfury Weapon";
    break;
  case 10487:
    spellname = "Thick Armor Kit";
    break;
  case 10490:
    spellname = "Comfortable Leather Hat";
    break;
  case 10491:
    spellname = "Mana Spring";
    break;
  case 10493:
    spellname = "Mana Spring";
    break;
  case 10494:
    spellname = "Mana Spring";
    break;
  case 10495:
    spellname = "Mana Spring Totem";
    break;
  case 10496:
    spellname = "Mana Spring Totem";
    break;
  case 10497:
    spellname = "Mana Spring Totem";
    break;
  case 10499:
    spellname = "Nightscape Tunic";
    break;
  case 10507:
    spellname = "Nightscape Headband";
    break;
  case 10509:
    spellname = "Turtle Scale Gloves";
    break;
  case 10511:
    spellname = "Turtle Scale Breastplate";
    break;
  case 10516:
    spellname = "Nightscape Shoulders";
    break;
  case 10518:
    spellname = "Turtle Scale Bracers";
    break;
  case 10520:
    spellname = "Big Voodoo Robe";
    break;
  case 10521:
    spellname = "Flametongue Totem Effect";
    break;
  case 10523:
    spellname = "Flametongue Totem Proc";
    break;
  case 10524:
    spellname = "Flametongue Totem Passive";
    break;
  case 10525:
    spellname = "Tough Scorpid Breastplate";
    break;
  case 10526:
    spellname = "Flametongue Totem";
    break;
  case 10529:
    spellname = "Wild Leather Shoulders";
    break;
  case 10531:
    spellname = "Big Voodoo Mask";
    break;
  case 10533:
    spellname = "Tough Scorpid Bracers";
    break;
  case 10534:
    spellname = "Fire Resistance";
    break;
  case 10535:
    spellname = "Fire Resistance";
    break;
  case 10537:
    spellname = "Fire Resistance Totem";
    break;
  case 10538:
    spellname = "Fire Resistance Totem";
    break;
  case 10542:
    spellname = "Tough Scorpid Gloves";
    break;
  case 10544:
    spellname = "Wild Leather Vest";
    break;
  case 10546:
    spellname = "Wild Leather Helmet";
    break;
  case 10548:
    spellname = "Nightscape Pants";
    break;
  case 10550:
    spellname = "Nightscape Cloak";
    break;
  case 10552:
    spellname = "Turtle Scale Helm";
    break;
  case 10554:
    spellname = "Tough Scorpid Boots";
    break;
  case 10556:
    spellname = "Turtle Scale Leggings";
    break;
  case 10558:
    spellname = "Nightscape Boots";
    break;
  case 10560:
    spellname = "Big Voodoo Pants";
    break;
  case 10562:
    spellname = "Big Voodoo Cloak";
    break;
  case 10564:
    spellname = "Tough Scorpid Shoulders";
    break;
  case 10566:
    spellname = "Wild Leather Boots";
    break;
  case 10568:
    spellname = "Tough Scorpid Leggings";
    break;
  case 10570:
    spellname = "Tough Scorpid Helm";
    break;
  case 10572:
    spellname = "Wild Leather Leggings";
    break;
  case 10574:
    spellname = "Wild Leather Cloak";
    break;
  case 10576:
    spellname = "Piercing Howl";
    break;
  case 10577:
    spellname = "Heal";
    break;
  case 10578:
    spellname = "Fireball";
    break;
  case 10579:
    spellname = "Magma Totem";
    break;
  case 10580:
    spellname = "Magma Totem";
    break;
  case 10581:
    spellname = "Magma Totem";
    break;
  case 10582:
    spellname = "Magma Totem Passive";
    break;
  case 10583:
    spellname = "Magma Totem Passive";
    break;
  case 10584:
    spellname = "Magma Totem Passive";
    break;
  case 10585:
    spellname = "Magma Totem";
    break;
  case 10586:
    spellname = "Magma Totem";
    break;
  case 10587:
    spellname = "Magma Totem";
    break;
  case 10595:
    spellname = "Nature Resistance Totem";
    break;
  case 10596:
    spellname = "Nature Resistance";
    break;
  case 10598:
    spellname = "Nature Resistance";
    break;
  case 10599:
    spellname = "Nature Resistance";
    break;
  case 10600:
    spellname = "Nature Resistance Totem";
    break;
  case 10601:
    spellname = "Nature Resistance Totem";
    break;
  case 10604:
    spellname = "Destroy Earthen Guards";
    break;
  case 10605:
    spellname = "Chain Lightning";
    break;
  case 10607:
    spellname = "Windfury Totem Effect";
    break;
  case 10608:
    spellname = "Windfury Totem";
    break;
  case 10609:
    spellname = "Windfury Totem Passive";
    break;
  case 10610:
    spellname = "Windfury Totem";
    break;
  case 10611:
    spellname = "Windfury Totem Effect";
    break;
  case 10612:
    spellname = "Windfury Totem Passive";
    break;
  case 10613:
    spellname = "Windfury Totem";
    break;
  case 10614:
    spellname = "Windfury Totem";
    break;
  case 10617:
    spellname = "Release Rageclaw";
    break;
  case 10618:
    spellname = "Elemental Protection";
    break;
  case 10619:
    spellname = "Dragonscale Gauntlets";
    break;
  case 10621:
    spellname = "Wolfshead Helm";
    break;
  case 10622:
    spellname = "Chain Heal";
    break;
  case 10623:
    spellname = "Chain Heal";
    break;
  case 10626:
    spellname = "Grace of Air";
    break;
  case 10627:
    spellname = "Grace of Air Totem";
    break;
  case 10630:
    spellname = "Gauntlets of the Sea";
    break;
  case 10632:
    spellname = "Helm of Fire";
    break;
  case 10647:
    spellname = "Feathered Breastplate";
    break;
  case 10650:
    spellname = "Dragonscale Breastplate";
    break;
  case 10651:
    spellname = "Curse of the Eye";
    break;
  case 10653:
    spellname = "Curse of the Eye";
    break;
  case 10654:
    spellname = "TEST - DBUCKLER";
    break;
  case 10656:
    spellname = "Dragonscale Leatherworking";
    break;
  case 10657:
    spellname = "Dragonscale Leatherworking";
    break;
  case 10658:
    spellname = "Elemental Leatherworking";
    break;
  case 10659:
    spellname = "Elemental Leatherworking";
    break;
  case 10660:
    spellname = "Tribal Leatherworking";
    break;
  case 10661:
    spellname = "Tribal Leatherworking";
    break;
  case 10662:
    spellname = "Leatherworking";
    break;
  case 10663:
    spellname = "Artisan Leatherworking";
    break;
  case 10665:
    spellname = "Water Walk";
    break;
  case 10666:
    spellname = "Earthen Guards Destroyed";
    break;
  case 10667:
    spellname = "Rage of Ages";
    break;
  case 10668:
    spellname = "Spirit of Boar";
    break;
  case 10669:
    spellname = "Strike of the Scorpok";
    break;
  case 10670:
    spellname = "Rage of Ages";
    break;
  case 10671:
    spellname = "Spirit of Boar";
    break;
  case 10672:
    spellname = "Strike of the Scorpok";
    break;
  case 10673:
    spellname = "Summon Bombay";
    break;
  case 10674:
    spellname = "Summon Cornish Rex";
    break;
  case 10675:
    spellname = "Summon Maine Coon";
    break;
  case 10676:
    spellname = "Summon Orange Tabby";
    break;
  case 10677:
    spellname = "Summon Siamese";
    break;
  case 10678:
    spellname = "Summon Silver Tabby";
    break;
  case 10679:
    spellname = "Summon White Kitten";
    break;
  case 10680:
    spellname = "Summon Cockatiel";
    break;
  case 10681:
    spellname = "Summon Cockatoo";
    break;
  case 10682:
    spellname = "Summon Hyacinth Macaw";
    break;
  case 10683:
    spellname = "Summon Green Wing Macaw";
    break;
  case 10684:
    spellname = "Summon Senegal";
    break;
  case 10685:
    spellname = "Summon Ancona";
    break;
  case 10686:
    spellname = "Summon Prairie Chicken";
    break;
  case 10687:
    spellname = "Summon White Plymouth Rock";
    break;
  case 10688:
    spellname = "Summon Cockroach";
    break;
  case 10689:
    spellname = "Knockback";
    break;
  case 10690:
    spellname = "Infallible Mind";
    break;
  case 10691:
    spellname = "Spiritual Domination";
    break;
  case 10692:
    spellname = "Infallible Mind";
    break;
  case 10693:
    spellname = "Spiritual Domination";
    break;
  case 10694:
    spellname = "Disenchant (PT)";
    break;
  case 10695:
    spellname = "Summon Dark Whelpling";
    break;
  case 10696:
    spellname = "Summon Azure Whelpling";
    break;
  case 10697:
    spellname = "Summon Crimson Whelpling";
    break;
  case 10698:
    spellname = "Summon Emerald Whelpling";
    break;
  case 10699:
    spellname = "Summon Bronze Whelpling";
    break;
  case 10700:
    spellname = "Summon Faeling";
    break;
  case 10701:
    spellname = "Summon Dart Frog";
    break;
  case 10702:
    spellname = "Summon Island Frog";
    break;
  case 10703:
    spellname = "Summon Wood Frog";
    break;
  case 10704:
    spellname = "Summon Tree Frog";
    break;
  case 10705:
    spellname = "Summon Eagle Owl";
    break;
  case 10706:
    spellname = "Summon Hawk Owl";
    break;
  case 10707:
    spellname = "Summon Great Horned Owl";
    break;
  case 10708:
    spellname = "Summon Snowy Owl";
    break;
  case 10709:
    spellname = "Summon Prairie Dog";
    break;
  case 10710:
    spellname = "Summon Cottontail Rabbit";
    break;
  case 10711:
    spellname = "Summon Snowshoe Rabbit";
    break;
  case 10712:
    spellname = "Summon Spotted Rabbit";
    break;
  case 10713:
    spellname = "Summon Albino Snake";
    break;
  case 10714:
    spellname = "Summon Black Kingsnake";
    break;
  case 10715:
    spellname = "Summon Blue Racer";
    break;
  case 10716:
    spellname = "Summon Brown Snake";
    break;
  case 10717:
    spellname = "Summon Crimson Snake";
    break;
  case 10718:
    spellname = "Summon Green Water Snake";
    break;
  case 10719:
    spellname = "Summon Ribbon Snake";
    break;
  case 10720:
    spellname = "Summon Scarlet Snake";
    break;
  case 10721:
    spellname = "Summon Elven Wisp";
    break;
  case 10722:
    spellname = "Silithid Swarm";
    break;
  case 10723:
    spellname = "Touch of Zanzil Cure";
    break;
  case 10729:
    spellname = "Feather Fall";
    break;
  case 10730:
    spellname = "Pacify";
    break;
  case 10732:
    spellname = "Supercharge";
    break;
  case 10733:
    spellname = "Flame Spray";
    break;
  case 10734:
    spellname = "Hail Storm";
    break;
  case 10737:
    spellname = "Hail Storm";
    break;
  case 10738:
    spellname = "Unlocking";
    break;
  case 10747:
    spellname = "Announce Zul'Farrak Zombie";
    break;
  case 10767:
    spellname = "Rising Spirit";
    break;
  case 10768:
    spellname = "Skinning";
    break;
  case 10769:
    spellname = "Artisan Skinning";
    break;
  case 10770:
    spellname = "Create Weegli's Barrel";
    break;
  case 10771:
    spellname = "Soul Shatter";
    break;
  case 10772:
    spellname = "Create Weegli's Barrel";
    break;
  case 10787:
    spellname = "Panther";
    break;
  case 10788:
    spellname = "Leopard";
    break;
  case 10789:
    spellname = "Spotted Frostsaber";
    break;
  case 10790:
    spellname = "Tiger";
    break;
  case 10792:
    spellname = "Spotted Panther";
    break;
  case 10793:
    spellname = "Striped Nightsaber";
    break;
  case 10794:
    spellname = "Spirit Shock";
    break;
  case 10795:
    spellname = "Ivory Raptor";
    break;
  case 10796:
    spellname = "Turquoise Raptor";
    break;
  case 10797:
    spellname = "Starshards";
    break;
  case 10798:
    spellname = "Obsidian Raptor";
    break;
  case 10799:
    spellname = "Violet Raptor";
    break;
  case 10800:
    spellname = "Summon Brown Tallstrider";
    break;
  case 10801:
    spellname = "Summon Gray Tallstrider";
    break;
  case 10802:
    spellname = "Summon Pink Tallstrider";
    break;
  case 10803:
    spellname = "Summon Purple Tallstrider";
    break;
  case 10804:
    spellname = "Summon Turquoise Tallstrider";
    break;
  case 10805:
    spellname = "Shackle Shatter";
    break;
  case 10807:
    spellname = "Ghost Dance";
    break;
  case 10828:
    spellname = "Soul Explosion";
    break;
  case 10831:
    spellname = "Reflection Field";
    break;
  case 10832:
    spellname = "Mass Nullify";
    break;
  case 10833:
    spellname = "Arcane Blast";
    break;
  case 10834:
    spellname = "Shackle Shatter";
    break;
  case 10835:
    spellname = "Shackle Shatter";
    break;
  case 10836:
    spellname = "Shackle Shatter";
    break;
  case 10837:
    spellname = "Goblin Land Mine";
    break;
  case 10838:
    spellname = "First Aid";
    break;
  case 10839:
    spellname = "First Aid";
    break;
  case 10840:
    spellname = "Mageweave Bandage";
    break;
  case 10841:
    spellname = "Heavy Mageweave Bandage";
    break;
  case 10843:
    spellname = "Heavy Mageweave Bandage";
    break;
  case 10844:
    spellname = "Powerful Smelling Salts";
    break;
  case 10846:
    spellname = "First Aid";
    break;
  case 10847:
    spellname = "Artisan First Aid";
    break;
  case 10848:
    spellname = "Shroud of Death";
    break;
  case 10849:
    spellname = "Form of the Moonstalker (no invis)";
    break;
  case 10850:
    spellname = "Powerful Smelling Salts";
    break;
  case 10851:
    spellname = "Grab Weapon";
    break;
  case 10852:
    spellname = "Battle Net";
    break;
  case 10853:
    spellname = "Spirit of Kirith";
    break;
  case 10854:
    spellname = "Flames of Chaos";
    break;
  case 10855:
    spellname = "Lag";
    break;
  case 10856:
    spellname = "Link Dead";
    break;
  case 10857:
    spellname = "Flames of Chaos";
    break;
  case 10858:
    spellname = "Summon Dupe Bug";
    break;
  case 10859:
    spellname = "Create Divino-matic Rod";
    break;
  case 10860:
    spellname = "Patch";
    break;
  case 10861:
    spellname = "Raptor Riding";
    break;
  case 10863:
    spellname = "Raptor Riding";
    break;
  case 10864:
    spellname = "Razelikh's Tear I";
    break;
  case 10865:
    spellname = "Call of Ilifar";
    break;
  case 10866:
    spellname = "Razelikh's Tear II";
    break;
  case 10867:
    spellname = "Call of Felcular";
    break;
  case 10869:
    spellname = "Summon Embers";
    break;
  case 10870:
    spellname = "Summon Burning Servant";
    break;
  case 10872:
    spellname = "Abolish Disease Effect";
    break;
  case 10873:
    spellname = "Red Mechanostrider";
    break;
  case 10874:
    spellname = "Mana Burn";
    break;
  case 10875:
    spellname = "Mana Burn";
    break;
  case 10876:
    spellname = "Mana Burn";
    break;
  case 10880:
    spellname = "Resurrection";
    break;
  case 10881:
    spellname = "Resurrection";
    break;
  case 10887:
    spellname = "Crowd Pummel";
    break;
  case 10888:
    spellname = "Psychic Scream";
    break;
  case 10890:
    spellname = "Psychic Scream";
    break;
  case 10892:
    spellname = "Shadow Word: Pain";
    break;
  case 10893:
    spellname = "Shadow Word: Pain";
    break;
  case 10894:
    spellname = "Shadow Word: Pain";
    break;
  case 10898:
    spellname = "Power Word: Shield";
    break;
  case 10899:
    spellname = "Power Word: Shield";
    break;
  case 10900:
    spellname = "Power Word: Shield";
    break;
  case 10901:
    spellname = "Power Word: Shield";
    break;
  case 10906:
    spellname = "Undead Horsemanship";
    break;
  case 10907:
    spellname = "Mechanostrider Piloting";
    break;
  case 10908:
    spellname = "Mechanostrider Piloting";
    break;
  case 10909:
    spellname = "Mind Vision";
    break;
  case 10911:
    spellname = "Mind Control";
    break;
  case 10912:
    spellname = "Mind Control";
    break;
  case 10915:
    spellname = "Flash Heal";
    break;
  case 10916:
    spellname = "Flash Heal";
    break;
  case 10917:
    spellname = "Flash Heal";
    break;
  case 10921:
    spellname = "Skeletal Horse Riding";
    break;
  case 10927:
    spellname = "Renew";
    break;
  case 10928:
    spellname = "Renew";
    break;
  case 10929:
    spellname = "Renew";
    break;
  case 10933:
    spellname = "Smite";
    break;
  case 10934:
    spellname = "Smite";
    break;
  case 10937:
    spellname = "Power Word: Fortitude";
    break;
  case 10938:
    spellname = "Power Word: Fortitude";
    break;
  case 10941:
    spellname = "Fade";
    break;
  case 10942:
    spellname = "Fade";
    break;
  case 10945:
    spellname = "Mind Blast";
    break;
  case 10946:
    spellname = "Mind Blast";
    break;
  case 10947:
    spellname = "Mind Blast";
    break;
  case 10951:
    spellname = "Inner Fire";
    break;
  case 10952:
    spellname = "Inner Fire";
    break;
  case 10953:
    spellname = "Mind Soothe";
    break;
  case 10955:
    spellname = "Shackle Undead";
    break;
  case 10957:
    spellname = "Shadow Protection";
    break;
  case 10958:
    spellname = "Shadow Protection";
    break;
  case 10960:
    spellname = "Prayer of Healing";
    break;
  case 10961:
    spellname = "Prayer of Healing";
    break;
  case 10963:
    spellname = "Greater Heal";
    break;
  case 10964:
    spellname = "Greater Heal";
    break;
  case 10965:
    spellname = "Greater Heal";
    break;
  case 10966:
    spellname = "Uppercut";
    break;
  case 10967:
    spellname = "Echoing Roar";
    break;
  case 10968:
    spellname = "Demoralizing Roar";
    break;
  case 10969:
    spellname = "Blue Mechanostrider";
    break;
  case 10987:
    spellname = "Geyser";
    break;
  case 11007:
    spellname = "Weak Alcohol";
    break;
  case 11008:
    spellname = "Standard Alcohol";
    break;
  case 11009:
    spellname = "Strong Alcohol";
    break;
  case 11010:
    spellname = "Hover";
    break;
  case 11011:
    spellname = "Stone Watcher of Norgannon Passive";
    break;
  case 11012:
    spellname = "Stone Watcher of Norgannon Spawn";
    break;
  case 11013:
    spellname = "Sneak";
    break;
  case 11014:
    spellname = "Flow of the Northspring";
    break;
  case 11015:
    spellname = "Blood Leech";
    break;
  case 11016:
    spellname = "Soul Bite";
    break;
  case 11017:
    spellname = "Summon Witherbark Felhunter";
    break;
  case 11018:
    spellname = "Summon Witherbark Bloodlings";
    break;
  case 11019:
    spellname = "Wing Flap";
    break;
  case 11020:
    spellname = "Petrify";
    break;
  case 11021:
    spellname = "Flamespit";
    break;
  case 11023:
    spellname = "Summon Hazzali Parasites";
    break;
  case 11024:
    spellname = "Call of Thund";
    break;
  case 11027:
    spellname = "Knockback 500";
    break;
  case 11048:
    spellname = "Perm. Illusion Bishop Tyriona";
    break;
  case 11067:
    spellname = "Perm. Illusion Tyrion";
    break;
  case 11068:
    spellname = "Frost Focus";
    break;
  case 11069:
    spellname = "Improved Fireball";
    break;
  case 11070:
    spellname = "Improved Frostbolt";
    break;
  case 11071:
    spellname = "Frostbite";
    break;
  case 11078:
    spellname = "Improved Fire Blast";
    break;
  case 11080:
    spellname = "Improved Fire Blast";
    break;
  case 11082:
    spellname = "Megavolt";
    break;
  case 11083:
    spellname = "Burning Soul";
    break;
  case 11084:
    spellname = "Shock";
    break;
  case 11085:
    spellname = "Chain Bolt";
    break;
  case 11086:
    spellname = "Ward of Zum'rah";
    break;
  case 11087:
    spellname = "Ward of Zum'rah Passive";
    break;
  case 11088:
    spellname = "Ward of Zum'rah";
    break;
  case 11089:
    spellname = "Theka Transform";
    break;
  case 11094:
    spellname = "Molten Shields";
    break;
  case 11095:
    spellname = "Improved Scorch";
    break;
  case 11100:
    spellname = "Flame Throwing";
    break;
  case 11103:
    spellname = "Impact";
    break;
  case 11108:
    spellname = "Improved Flamestrike";
    break;
  case 11113:
    spellname = "Blast Wave";
    break;
  case 11115:
    spellname = "Critical Mass";
    break;
  case 11119:
    spellname = "Ignite";
    break;
  case 11120:
    spellname = "Ignite";
    break;
  case 11124:
    spellname = "Fire Power";
    break;
  case 11129:
    spellname = "Combustion";
    break;
  case 11130:
    spellname = "Knock Away";
    break;
  case 11131:
    spellname = "Icicle";
    break;
  case 11132:
    spellname = "Teach Orcish War Leggings";
    break;
  case 11147:
    spellname = "Blessed Anvil";
    break;
  case 11151:
    spellname = "Piercing Ice";
    break;
  case 11160:
    spellname = "Frost Channeling";
    break;
  case 11165:
    spellname = "Improved Frost Nova";
    break;
  case 11170:
    spellname = "Shatter";
    break;
  case 11175:
    spellname = "Permafrost";
    break;
  case 11180:
    spellname = "Winter's Chill";
    break;
  case 11185:
    spellname = "Improved Blizzard";
    break;
  case 11189:
    spellname = "Frost Warding";
    break;
  case 11190:
    spellname = "Improved Cone of Cold";
    break;
  case 11195:
    spellname = "Blow Zul'Farrak Door";
    break;
  case 11196:
    spellname = "Recently Bandaged";
    break;
  case 11197:
    spellname = "Expose Armor";
    break;
  case 11198:
    spellname = "Expose Armor";
    break;
  case 11201:
    spellname = "Crippling Poison";
    break;
  case 11202:
    spellname = "Crippling Poison";
    break;
  case 11203:
    spellname = "Teach Ornate Mithril Helm";
    break;
  case 11204:
    spellname = "Teach Ornate Mithril Boots";
    break;
  case 11205:
    spellname = "Teach Ornate Mithril Breastplate";
    break;
  case 11206:
    spellname = "Uldaman Boss Object Visual";
    break;
  case 11207:
    spellname = "Ice Shards";
    break;
  case 11209:
    spellname = "Summon Smithing Hammer";
    break;
  case 11210:
    spellname = "Arcane Subtlety";
    break;
  case 11213:
    spellname = "Arcane Concentration";
    break;
  case 11222:
    spellname = "Arcane Focus";
    break;
  case 11232:
    spellname = "Arcane Mind";
    break;
  case 11237:
    spellname = "Improved Arcane Missiles";
    break;
  case 11242:
    spellname = "Arcane Impact";
    break;
  case 11247:
    spellname = "Magic Attunement";
    break;
  case 11252:
    spellname = "Improved Mana Shield";
    break;
  case 11255:
    spellname = "Improved Counterspell";
    break;
  case 11264:
    spellname = "Ice Blast";
    break;
  case 11267:
    spellname = "Ambush";
    break;
  case 11268:
    spellname = "Ambush";
    break;
  case 11269:
    spellname = "Ambush";
    break;
  case 11273:
    spellname = "Rupture";
    break;
  case 11274:
    spellname = "Rupture";
    break;
  case 11275:
    spellname = "Rupture";
    break;
  case 11279:
    spellname = "Backstab";
    break;
  case 11280:
    spellname = "Backstab";
    break;
  case 11281:
    spellname = "Backstab";
    break;
  case 11285:
    spellname = "Gouge";
    break;
  case 11286:
    spellname = "Gouge";
    break;
  case 11289:
    spellname = "Garrote";
    break;
  case 11290:
    spellname = "Garrote";
    break;
  case 11293:
    spellname = "Sinister Strike";
    break;
  case 11294:
    spellname = "Sinister Strike";
    break;
  case 11297:
    spellname = "Sap";
    break;
  case 11299:
    spellname = "Eviscerate";
    break;
  case 11300:
    spellname = "Eviscerate";
    break;
  case 11303:
    spellname = "Feint";
    break;
  case 11305:
    spellname = "Sprint";
    break;
  case 11306:
    spellname = "Fire Nova";
    break;
  case 11307:
    spellname = "Fire Nova";
    break;
  case 11310:
    spellname = "Fire Nova";
    break;
  case 11311:
    spellname = "Fire Nova";
    break;
  case 11312:
    spellname = "Fire Nova";
    break;
  case 11313:
    spellname = "Fire Nova";
    break;
  case 11314:
    spellname = "Fire Nova Totem";
    break;
  case 11315:
    spellname = "Fire Nova Totem";
    break;
  case 11319:
    spellname = "Water Walking";
    break;
  case 11327:
    spellname = "Vanish";
    break;
  case 11328:
    spellname = "Agility";
    break;
  case 11329:
    spellname = "Vanish";
    break;
  case 11330:
    spellname = "Agility";
    break;
  case 11331:
    spellname = "Strength";
    break;
  case 11332:
    spellname = "Great Strength";
    break;
  case 11333:
    spellname = "Greater Agility";
    break;
  case 11334:
    spellname = "Greater Agility";
    break;
  case 11335:
    spellname = "Instant Poison IV";
    break;
  case 11336:
    spellname = "Instant Poison V";
    break;
  case 11337:
    spellname = "Instant Poison VI";
    break;
  case 11338:
    spellname = "Instant Poison IV";
    break;
  case 11339:
    spellname = "Instant Poison V";
    break;
  case 11340:
    spellname = "Instant Poison VI";
    break;
  case 11341:
    spellname = "Instant Poison IV";
    break;
  case 11342:
    spellname = "Instant Poison V";
    break;
  case 11343:
    spellname = "Instant Poison VI";
    break;
  case 11348:
    spellname = "Greater Armor";
    break;
  case 11349:
    spellname = "Armor";
    break;
  case 11350:
    spellname = "Fire Shield";
    break;
  case 11351:
    spellname = "Fire Shield";
    break;
  case 11352:
    spellname = "Red Firework for trap";
    break;
  case 11353:
    spellname = "Deadly Poison III";
    break;
  case 11354:
    spellname = "Deadly Poison IV";
    break;
  case 11355:
    spellname = "Deadly Poison III";
    break;
  case 11356:
    spellname = "Deadly Poison IV";
    break;
  case 11357:
    spellname = "Deadly Poison III";
    break;
  case 11358:
    spellname = "Deadly Poison IV";
    break;
  case 11359:
    spellname = "Restoration";
    break;
  case 11362:
    spellname = "Teleport to Gnomeregan";
    break;
  case 11363:
    spellname = "Resistance";
    break;
  case 11364:
    spellname = "Resistance";
    break;
  case 11365:
    spellname = "Bly's Band's Escape";
    break;
  case 11366:
    spellname = "Pyroblast";
    break;
  case 11367:
    spellname = "Critical Mass";
    break;
  case 11368:
    spellname = "Critical Mass";
    break;
  case 11371:
    spellname = "Gift of Arthas";
    break;
  case 11374:
    spellname = "Gift of Arthas";
    break;
  case 11387:
    spellname = "Wildvine Potion";
    break;
  case 11389:
    spellname = "Detect Undead";
    break;
  case 11390:
    spellname = "Arcane Elixir";
    break;
  case 11391:
    spellname = "Roach Shift";
    break;
  case 11392:
    spellname = "Invisibility";
    break;
  case 11393:
    spellname = "Intellect";
    break;
  case 11394:
    spellname = "Greater Intellect";
    break;
  case 11395:
    spellname = "Greater Intellect";
    break;
  case 11396:
    spellname = "Greater Intellect";
    break;
  case 11397:
    spellname = "Diseased Shot";
    break;
  case 11398:
    spellname = "Mind-numbing Poison III";
    break;
  case 11399:
    spellname = "Mind-numbing Poison III";
    break;
  case 11400:
    spellname = "Mind-numbing Poison III";
    break;
  case 11402:
    spellname = "Shay's Bell";
    break;
  case 11403:
    spellname = "Dream Vision";
    break;
  case 11404:
    spellname = "Great Strength";
    break;
  case 11405:
    spellname = "Elixir of the Giants";
    break;
  case 11406:
    spellname = "Elixir of Demonslaying";
    break;
  case 11407:
    spellname = "Detect Demon";
    break;
  case 11409:
    spellname = "Teleport to Booty Bay";
    break;
  case 11410:
    spellname = "Whirling Barrage";
    break;
  case 11412:
    spellname = "Nether Shell";
    break;
  case 11413:
    spellname = "Echoes of Lordaeron";
    break;
  case 11414:
    spellname = "Echoes of Lordaeron";
    break;
  case 11415:
    spellname = "Echoes of Lordaeron";
    break;
  case 11416:
    spellname = "Portal: Ironforge";
    break;
  case 11417:
    spellname = "Portal: Orgrimmar";
    break;
  case 11418:
    spellname = "Portal: Undercity";
    break;
  case 11419:
    spellname = "Portal: Darnassus";
    break;
  case 11420:
    spellname = "Portal: Thunder Bluff";
    break;
  case 11426:
    spellname = "Ice Barrier";
    break;
  case 11428:
    spellname = "Knockdown";
    break;
  case 11430:
    spellname = "Slam";
    break;
  case 11431:
    spellname = "Healing Touch";
    break;
  case 11433:
    spellname = "Death & Decay";
    break;
  case 11434:
    spellname = "Gong Zul'Farrak Gong";
    break;
  case 11435:
    spellname = "Create Mallet of Zul'Farrak";
    break;
  case 11436:
    spellname = "Slow";
    break;
  case 11437:
    spellname = "Opening Chest";
    break;
  case 11438:
    spellname = "Join Map Fragments";
    break;
  case 11440:
    spellname = "Quest - Blow Pirate Ship";
    break;
  case 11441:
    spellname = "Withered Touch";
    break;
  case 11442:
    spellname = "Withered Touch";
    break;
  case 11443:
    spellname = "Cripple";
    break;
  case 11444:
    spellname = "Shackle Undead";
    break;
  case 11445:
    spellname = "Bone Armor";
    break;
  case 11446:
    spellname = "Mind Control";
    break;
  case 11447:
    spellname = "Elixir of Waterwalking";
    break;
  case 11448:
    spellname = "Greater Mana Potion";
    break;
  case 11449:
    spellname = "Elixir of Agility";
    break;
  case 11450:
    spellname = "Elixir of Greater Defense";
    break;
  case 11451:
    spellname = "Oil of Immolation";
    break;
  case 11452:
    spellname = "Restorative Potion";
    break;
  case 11453:
    spellname = "Magic Resistance Potion";
    break;
  case 11454:
    spellname = "Inlaid Mithril Cylinder";
    break;
  case 11456:
    spellname = "Goblin Rocket Fuel";
    break;
  case 11457:
    spellname = "Superior Healing Potion";
    break;
  case 11458:
    spellname = "Wildvine Potion";
    break;
  case 11459:
    spellname = "Philosopher's Stone";
    break;
  case 11460:
    spellname = "Elixir of Detect Undead";
    break;
  case 11461:
    spellname = "Arcane Elixir";
    break;
  case 11462:
    spellname = "Summon Pirate Treasure and Trigger Mob";
    break;
  case 11463:
    spellname = "Summon Treasure Hunting Pirate";
    break;
  case 11464:
    spellname = "Invisibility Potion";
    break;
  case 11465:
    spellname = "Elixir of Greater Intellect";
    break;
  case 11466:
    spellname = "Gift of Arthas";
    break;
  case 11467:
    spellname = "Elixir of Greater Agility";
    break;
  case 11468:
    spellname = "Elixir of Dream Vision";
    break;
  case 11469:
    spellname = "Deadly Toxin IV";
    break;
  case 11470:
    spellname = "Deadly Toxin III";
    break;
  case 11471:
    spellname = "Deadly Toxin II";
    break;
  case 11472:
    spellname = "Elixir of Giants";
    break;
  case 11473:
    spellname = "Ghost Dye";
    break;
  case 11474:
    spellname = "Shadow Power";
    break;
  case 11476:
    spellname = "Elixir of Shadow Power";
    break;
  case 11477:
    spellname = "Elixir of Demonslaying";
    break;
  case 11478:
    spellname = "Elixir of Detect Demon";
    break;
  case 11479:
    spellname = "Transmute: Iron to Gold";
    break;
  case 11480:
    spellname = "Transmute: Mithril to Truesilver";
    break;
  case 11481:
    spellname = "TWEEP";
    break;
  case 11485:
    spellname = "Summon Treasure Hunting Bucanneer";
    break;
  case 11487:
    spellname = "Summon Treasure Hunting Swashbuckler";
    break;
  case 11504:
    spellname = "Walking Bomb Effect";
    break;
  case 11511:
    spellname = "Activate Bomb A";
    break;
  case 11512:
    spellname = "Create Yellow Punch Card";
    break;
  case 11513:
    spellname = "Empty Phial";
    break;
  case 11518:
    spellname = "Activate Bomb 01";
    break;
  case 11519:
    spellname = "Teach Summon Succubus";
    break;
  case 11520:
    spellname = "Teach Summon Voidwalker";
    break;
  case 11521:
    spellname = "Activate Bomb 02";
    break;
  case 11522:
    spellname = "Restorative Potion";
    break;
  case 11524:
    spellname = "Activate Bomb 04";
    break;
  case 11525:
    spellname = "Create Blue Punch Card";
    break;
  case 11526:
    spellname = "Activate Bomb 05";
    break;
  case 11527:
    spellname = "Activate Bomb 06";
    break;
  case 11528:
    spellname = "Create Red Punch Card";
    break;
  case 11534:
    spellname = "Leper Cure!";
    break;
  case 11535:
    spellname = "Opening Safe";
    break;
  case 11537:
    spellname = "Charge Stave of Equinex";
    break;
  case 11538:
    spellname = "Frostbolt";
    break;
  case 11539:
    spellname = "Deadly Toxin";
    break;
  case 11540:
    spellname = "Blue Firework";
    break;
  case 11541:
    spellname = "Green Firework";
    break;
  case 11542:
    spellname = "Red Streaks Firework";
    break;
  case 11543:
    spellname = "Red";
    break;
  case 11544:
    spellname = "Yellow Rose Firework";
    break;
  case 11545:
    spellname = "Create Prismatic Punch Card";
    break;
  case 11547:
    spellname = "Drive Nimboya's Laden Pike";
    break;
  case 11548:
    spellname = "Summon Spider God";
    break;
  case 11549:
    spellname = "Battle Shout";
    break;
  case 11550:
    spellname = "Battle Shout";
    break;
  case 11551:
    spellname = "Battle Shout";
    break;
  case 11554:
    spellname = "Demoralizing Shout";
    break;
  case 11555:
    spellname = "Demoralizing Shout";
    break;
  case 11556:
    spellname = "Demoralizing Shout";
    break;
  case 11564:
    spellname = "Heroic Strike";
    break;
  case 11565:
    spellname = "Heroic Strike";
    break;
  case 11566:
    spellname = "Heroic Strike";
    break;
  case 11567:
    spellname = "Heroic Strike";
    break;
  case 11568:
    spellname = "Uldaman Sub-Boss Agro";
    break;
  case 11572:
    spellname = "Rend";
    break;
  case 11573:
    spellname = "Rend";
    break;
  case 11574:
    spellname = "Rend";
    break;
  case 11578:
    spellname = "Charge";
    break;
  case 11580:
    spellname = "Thunder Clap";
    break;
  case 11581:
    spellname = "Thunder Clap";
    break;
  case 11584:
    spellname = "Overpower";
    break;
  case 11585:
    spellname = "Overpower";
    break;
  case 11591:
    spellname = "Share Twin Information";
    break;
  case 11593:
    spellname = "Wyatt Test";
    break;
  case 11595:
    spellname = "Discombobulator Ray";
    break;
  case 11596:
    spellname = "Sunder Armor";
    break;
  case 11597:
    spellname = "Sunder Armor";
    break;
  case 11600:
    spellname = "Revenge";
    break;
  case 11601:
    spellname = "Revenge";
    break;
  case 11604:
    spellname = "Slam";
    break;
  case 11605:
    spellname = "Slam";
    break;
  case 11608:
    spellname = "Cleave";
    break;
  case 11609:
    spellname = "Cleave";
    break;
  case 11610:
    spellname = "Gammerita Turtle Camera";
    break;
  case 11611:
    spellname = "Alchemy";
    break;
  case 11612:
    spellname = "Artisan Alchemist";
    break;
  case 11629:
    spellname = "Potent Alcohol";
    break;
  case 11637:
    spellname = "Empty Heavy Phial";
    break;
  case 11638:
    spellname = "Radiation Poisoning";
    break;
  case 11639:
    spellname = "Shadow Word: Pain";
    break;
  case 11640:
    spellname = "Renew";
    break;
  case 11641:
    spellname = "Hex";
    break;
  case 11642:
    spellname = "Heal";
    break;
  case 11643:
    spellname = "Golden Scale Gauntlets";
    break;
  case 11647:
    spellname = "Power Word: Shield";
    break;
  case 11649:
    spellname = "Detect Invisibility";
    break;
  case 11650:
    spellname = "Head Butt";
    break;
  case 11654:
    spellname = "Call of Sul'thraze";
    break;
  case 11657:
    spellname = "Jang'thraze";
    break;
  case 11658:
    spellname = "Sul'thraze";
    break;
  case 11659:
    spellname = "Shadow Bolt";
    break;
  case 11660:
    spellname = "Shadow Bolt";
    break;
  case 11661:
    spellname = "Shadow Bolt";
    break;
  case 11665:
    spellname = "Immolate";
    break;
  case 11667:
    spellname = "Immolate";
    break;
  case 11668:
    spellname = "Immolate";
    break;
  case 11671:
    spellname = "Corruption";
    break;
  case 11672:
    spellname = "Corruption";
    break;
  case 11675:
    spellname = "Drain Soul";
    break;
  case 11677:
    spellname = "Rain of Fire";
    break;
  case 11678:
    spellname = "Rain of Fire";
    break;
  case 11681:
    spellname = "Hellfire Effect";
    break;
  case 11682:
    spellname = "Hellfire Effect";
    break;
  case 11683:
    spellname = "Hellfire";
    break;
  case 11684:
    spellname = "Hellfire";
    break;
  case 11687:
    spellname = "Life Tap";
    break;
  case 11688:
    spellname = "Life Tap";
    break;
  case 11689:
    spellname = "Life Tap";
    break;
  case 11693:
    spellname = "Health Funnel";
    break;
  case 11694:
    spellname = "Health Funnel";
    break;
  case 11695:
    spellname = "Health Funnel";
    break;
  case 11699:
    spellname = "Drain Life";
    break;
  case 11700:
    spellname = "Drain Life";
    break;
  case 11703:
    spellname = "Drain Mana";
    break;
  case 11704:
    spellname = "Drain Mana";
    break;
  case 11707:
    spellname = "Curse of Weakness";
    break;
  case 11708:
    spellname = "Curse of Weakness";
    break;
  case 11711:
    spellname = "Curse of Agony";
    break;
  case 11712:
    spellname = "Curse of Agony";
    break;
  case 11713:
    spellname = "Curse of Agony";
    break;
  case 11717:
    spellname = "Curse of Recklessness";
    break;
  case 11719:
    spellname = "Curse of Tongues";
    break;
  case 11721:
    spellname = "Curse of the Elements";
    break;
  case 11722:
    spellname = "Curse of the Elements";
    break;
  case 11725:
    spellname = "Enslave Demon";
    break;
  case 11726:
    spellname = "Enslave Demon";
    break;
  case 11729:
    spellname = "Create Healthstone";
    break;
  case 11730:
    spellname = "Create Healthstone";
    break;
  case 11732:
    spellname = "Major Healthstone";
    break;
  case 11733:
    spellname = "Demon Armor";
    break;
  case 11734:
    spellname = "Demon Armor";
    break;
  case 11735:
    spellname = "Demon Armor";
    break;
  case 11739:
    spellname = "Shadow Ward";
    break;
  case 11740:
    spellname = "Shadow Ward";
    break;
  case 11757:
    spellname = "Digging for Cobalt";
    break;
  case 11758:
    spellname = "Dowsing";
    break;
  case 11759:
    spellname = "Basilisk Sample";
    break;
  case 11760:
    spellname = "Hyena Sample";
    break;
  case 11761:
    spellname = "Scorpid Sample";
    break;
  case 11762:
    spellname = "Firebolt";
    break;
  case 11763:
    spellname = "Firebolt";
    break;
  case 11764:
    spellname = "Firebolt";
    break;
  case 11765:
    spellname = "Firebolt";
    break;
  case 11766:
    spellname = "Blood Pact";
    break;
  case 11767:
    spellname = "Blood Pact";
    break;
  case 11768:
    spellname = "Blood Pact";
    break;
  case 11769:
    spellname = "Blood Pact";
    break;
  case 11770:
    spellname = "Fire Shield";
    break;
  case 11771:
    spellname = "Fire Shield";
    break;
  case 11772:
    spellname = "Fire Shield";
    break;
  case 11773:
    spellname = "Fire Shield";
    break;
  case 11774:
    spellname = "Torment";
    break;
  case 11775:
    spellname = "Torment";
    break;
  case 11776:
    spellname = "Torment";
    break;
  case 11777:
    spellname = "Torment";
    break;
  case 11778:
    spellname = "Lash of Pain";
    break;
  case 11779:
    spellname = "Lash of Pain";
    break;
  case 11780:
    spellname = "Lash of Pain";
    break;
  case 11781:
    spellname = "Lash of Pain";
    break;
  case 11782:
    spellname = "Lash of Pain";
    break;
  case 11783:
    spellname = "Lash of Pain";
    break;
  case 11784:
    spellname = "Soothing Kiss";
    break;
  case 11785:
    spellname = "Soothing Kiss";
    break;
  case 11786:
    spellname = "Soothing Kiss";
    break;
  case 11787:
    spellname = "Soothing Kiss";
    break;
  case 11789:
    spellname = "Water Breathing";
    break;
  case 11790:
    spellname = "Poison Cloud";
    break;
  case 11791:
    spellname = "Puncture Armor";
    break;
  case 11792:
    spellname = "Opening Cage";
    break;
  case 11795:
    spellname = "Activate Bomb B";
    break;
  case 11798:
    spellname = "Activate Bomb 03B";
    break;
  case 11802:
    spellname = "Dark Iron Land Mine";
    break;
  case 11815:
    spellname = "Detonation";
    break;
  case 11816:
    spellname = "Land Mine Arming";
    break;
  case 11817:
    spellname = "Land Mine Arming";
    break;
  case 11818:
    spellname = "Spell Reflection";
    break;
  case 11820:
    spellname = "Electrified Net";
    break;
  case 11821:
    spellname = "dmg4";
    break;
  case 11824:
    spellname = "Shock";
    break;
  case 11825:
    spellname = "Electrified Net";
    break;
  case 11826:
    spellname = "Electromagnetic Gigaflux Reactivator";
    break;
  case 11828:
    spellname = "Forked Lighting";
    break;
  case 11829:
    spellname = "Flamestrike";
    break;
  case 11831:
    spellname = "Frost Nova";
    break;
  case 11835:
    spellname = "Power Word: Shield";
    break;
  case 11836:
    spellname = "Freeze Solid";
    break;
  case 11837:
    spellname = "Wide Slash";
    break;
  case 11839:
    spellname = "Fireball";
    break;
  case 11840:
    spellname = "Summon Edana Hatetalon";
    break;
  case 11841:
    spellname = "Static Barrier";
    break;
  case 11876:
    spellname = "War Stomp";
    break;
  case 11877:
    spellname = "Capture Treant";
    break;
  case 11879:
    spellname = "Disarm";
    break;
  case 11884:
    spellname = "Create Treant Muisak";
    break;
  case 11885:
    spellname = "Capture Treant";
    break;
  case 11886:
    spellname = "Capture Wildkin";
    break;
  case 11887:
    spellname = "Capture Hippogryph";
    break;
  case 11888:
    spellname = "Capture Faerie Dragon";
    break;
  case 11889:
    spellname = "Capture Mountain Giant";
    break;
  case 11890:
    spellname = "Antu'sul's Salvation";
    break;
  case 11891:
    spellname = "Antu'sul Blast";
    break;
  case 11892:
    spellname = "Shrink";
    break;
  case 11893:
    spellname = "Warder Despawn";
    break;
  case 11894:
    spellname = "Antu'sul's Minion";
    break;
  case 11895:
    spellname = "Healing Wave of Antu'sul";
    break;
  case 11898:
    spellname = "Blood Leech";
    break;
  case 11899:
    spellname = "Healing Ward";
    break;
  case 11900:
    spellname = "Healing Aura";
    break;
  case 11901:
    spellname = "Healing Ward V Passive";
    break;
  case 11902:
    spellname = "Gahz'rilla Slam";
    break;
  case 11903:
    spellname = "Restore Mana";
    break;
  case 11918:
    spellname = "Poison";
    break;
  case 11919:
    spellname = "Poison Proc";
    break;
  case 11920:
    spellname = "Net Guard";
    break;
  case 11921:
    spellname = "Fireball";
    break;
  case 11922:
    spellname = "Entangling Roots";
    break;
  case 11923:
    spellname = "Repair the Blade of Heroes";
    break;
  case 11939:
    spellname = "Summon Imp";
    break;
  case 11958:
    spellname = "Cold Snap";
    break;
  case 11959:
    spellname = "Poison Proc";
    break;
  case 11960:
    spellname = "Curse of the Dreadmaul";
    break;
  case 11962:
    spellname = "Immolate";
    break;
  case 11963:
    spellname = "Enfeeble";
    break;
  case 11964:
    spellname = "Fevered Fatigue";
    break;
  case 11968:
    spellname = "Fire Shield";
    break;
  case 11969:
    spellname = "Fire Nova";
    break;
  case 11970:
    spellname = "Fire Nova";
    break;
  case 11971:
    spellname = "Sunder Armor";
    break;
  case 11972:
    spellname = "Shield Bash";
    break;
  case 11974:
    spellname = "Power Word: Shield";
    break;
  case 11975:
    spellname = "Arcane Explosion";
    break;
  case 11976:
    spellname = "Strike";
    break;
  case 11977:
    spellname = "Rend";
    break;
  case 11978:
    spellname = "Kick";
    break;
  case 11980:
    spellname = "Curse of Weakness";
    break;
  case 11981:
    spellname = "Mana Burn";
    break;
  case 11983:
    spellname = "Steam Jet";
    break;
  case 11984:
    spellname = "Immolate";
    break;
  case 11985:
    spellname = "Fireball";
    break;
  case 11986:
    spellname = "Healing Wave";
    break;
  case 11988:
    spellname = "Fireball Volley";
    break;
  case 11989:
    spellname = "Fireball Volley";
    break;
  case 11990:
    spellname = "Rain of Fire";
    break;
  case 11992:
    spellname = "Detect Gahz'ridian";
    break;
  case 11993:
    spellname = "Herb Gathering";
    break;
  case 11994:
    spellname = "Artisan Herbalist";
    break;
  case 11998:
    spellname = "Strike";
    break;
  case 12001:
    spellname = "Plague Cloud";
    break;
  case 12018:
    spellname = "Summon Oozeling";
    break;
  case 12019:
    spellname = "Increase Spell Dam 18 Random";
    break;
  case 12020:
    spellname = "Call of the Grave";
    break;
  case 12021:
    spellname = "Fixate";
    break;
  case 12022:
    spellname = "Admiral's Hat";
    break;
  case 12023:
    spellname = "Web";
    break;
  case 12024:
    spellname = "Net";
    break;
  case 12039:
    spellname = "Heal";
    break;
  case 12040:
    spellname = "Shadow Shield";
    break;
  case 12042:
    spellname = "Arcane Power";
    break;
  case 12043:
    spellname = "Presence of Mind";
    break;
  case 12044:
    spellname = "Simple Linen Pants";
    break;
  case 12045:
    spellname = "Simple Linen Boots";
    break;
  case 12046:
    spellname = "Simple Kilt";
    break;
  case 12047:
    spellname = "Colorful Kilt";
    break;
  case 12048:
    spellname = "Black Mageweave Vest";
    break;
  case 12049:
    spellname = "Black Mageweave Leggings";
    break;
  case 12050:
    spellname = "Black Mageweave Robe";
    break;
  case 12051:
    spellname = "Evocation";
    break;
  case 12052:
    spellname = "Shadoweave Pants";
    break;
  case 12053:
    spellname = "Black Mageweave Gloves";
    break;
  case 12054:
    spellname = "Rend";
    break;
  case 12055:
    spellname = "Shadoweave Robe";
    break;
  case 12056:
    spellname = "Red Mageweave Vest";
    break;
  case 12057:
    spellname = "Strike";
    break;
  case 12058:
    spellname = "Chain Lightning";
    break;
  case 12059:
    spellname = "White Bandit Mask";
    break;
  case 12060:
    spellname = "Red Mageweave Pants";
    break;
  case 12061:
    spellname = "Orange Mageweave Shirt";
    break;
  case 12062:
    spellname = "Stormcloth Pants";
    break;
  case 12063:
    spellname = "Stormcloth Gloves";
    break;
  case 12064:
    spellname = "Orange Martial Shirt";
    break;
  case 12065:
    spellname = "Mageweave Bag";
    break;
  case 12066:
    spellname = "Red Mageweave Gloves";
    break;
  case 12067:
    spellname = "Dreamweave Gloves";
    break;
  case 12068:
    spellname = "Stormcloth Vest";
    break;
  case 12069:
    spellname = "Cindercloth Robe";
    break;
  case 12070:
    spellname = "Dreamweave Vest";
    break;
  case 12071:
    spellname = "Shadoweave Gloves";
    break;
  case 12072:
    spellname = "Black Mageweave Headband";
    break;
  case 12073:
    spellname = "Black Mageweave Boots";
    break;
  case 12074:
    spellname = "Black Mageweave Shoulders";
    break;
  case 12075:
    spellname = "Lavender Mageweave Shirt";
    break;
  case 12076:
    spellname = "Shadoweave Shoulders";
    break;
  case 12077:
    spellname = "Simple Black Dress";
    break;
  case 12078:
    spellname = "Red Mageweave Shoulders";
    break;
  case 12079:
    spellname = "Red Mageweave Bag";
    break;
  case 12080:
    spellname = "Pink Mageweave Shirt";
    break;
  case 12081:
    spellname = "Admiral's Hat";
    break;
  case 12082:
    spellname = "Shadoweave Boots";
    break;
  case 12083:
    spellname = "Stormcloth Headband";
    break;
  case 12084:
    spellname = "Red Mageweave Headband";
    break;
  case 12085:
    spellname = "Tuxedo Shirt";
    break;
  case 12086:
    spellname = "Shadoweave Mask";
    break;
  case 12087:
    spellname = "Stormcloth Shoulders";
    break;
  case 12088:
    spellname = "Cindercloth Boots";
    break;
  case 12089:
    spellname = "Tuxedo Pants";
    break;
  case 12090:
    spellname = "Stormcloth Boots";
    break;
  case 12091:
    spellname = "White Wedding Dress";
    break;
  case 12092:
    spellname = "Dreamweave Circlet";
    break;
  case 12093:
    spellname = "Tuxedo Jacket";
    break;
  case 12095:
    spellname = "Summon Atal'ai Deathwalker's Spirit";
    break;
  case 12096:
    spellname = "Fear";
    break;
  case 12097:
    spellname = "Pierce Armor";
    break;
  case 12098:
    spellname = "Sleep";
    break;
  case 12099:
    spellname = "Shield Spike";
    break;
  case 12118:
    spellname = "Simple Linen Pants";
    break;
  case 12127:
    spellname = "Tuxedo Shirt";
    break;
  case 12128:
    spellname = "Shadoweave Mask";
    break;
  case 12130:
    spellname = "Tuxedo Pants";
    break;
  case 12131:
    spellname = "White Wedding Dress";
    break;
  case 12134:
    spellname = "Atal'ai Corpse Eat";
    break;
  case 12139:
    spellname = "Consume Corpse";
    break;
  case 12151:
    spellname = "Summon Atal'ai Skeleton";
    break;
  case 12158:
    spellname = "Explosion";
    break;
  case 12159:
    spellname = "Explosion";
    break;
  case 12160:
    spellname = "Rejuvenation";
    break;
  case 12161:
    spellname = "Maul";
    break;
  case 12162:
    spellname = "Deep Wounds";
    break;
  case 12163:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 12166:
    spellname = "Muscle Tear";
    break;
  case 12167:
    spellname = "Lightning Bolt";
    break;
  case 12168:
    spellname = "Dark Iron Steelshifter Surprise";
    break;
  case 12169:
    spellname = "Shield Block";
    break;
  case 12170:
    spellname = "Revenge";
    break;
  case 12174:
    spellname = "Agility";
    break;
  case 12175:
    spellname = "Armor";
    break;
  case 12176:
    spellname = "Intellect";
    break;
  case 12177:
    spellname = "Spirit";
    break;
  case 12178:
    spellname = "Stamina";
    break;
  case 12179:
    spellname = "Strength";
    break;
  case 12180:
    spellname = "Tailoring";
    break;
  case 12181:
    spellname = "Artisan Tailor";
    break;
  case 12187:
    spellname = "Disease Cloud";
    break;
  case 12188:
    spellname = "Disease Cloud";
    break;
  case 12189:
    spellname = "Summon Echeyakee";
    break;
  case 12198:
    spellname = "Marksman Hit";
    break;
  case 12199:
    spellname = "Summon Ishamuhale";
    break;
  case 12218:
    spellname = "Man Down!";
    break;
  case 12241:
    spellname = "Twin Colossals Teleport";
    break;
  case 12242:
    spellname = "Twin Colossals Teleport";
    break;
  case 12243:
    spellname = "Summon Mechanical Chicken";
    break;
  case 12244:
    spellname = "Poof";
    break;
  case 12245:
    spellname = "Infected Spine";
    break;
  case 12246:
    spellname = "Infected Spine";
    break;
  case 12248:
    spellname = "Amplify Damage";
    break;
  case 12250:
    spellname = "Summon Oozeling";
    break;
  case 12251:
    spellname = "Virulent Poison";
    break;
  case 12252:
    spellname = "Web Spray";
    break;
  case 12253:
    spellname = "Dowse Eternal Flame";
    break;
  case 12254:
    spellname = "Virulent Poison Proc";
    break;
  case 12255:
    spellname = "Curse of Tuten'kash";
    break;
  case 12256:
    spellname = "Add Moogly Radius (PT)";
    break;
  case 12257:
    spellname = "Breath of Fire";
    break;
  case 12258:
    spellname = "Summon Shadowcaster";
    break;
  case 12259:
    spellname = "Silvered Bronze Leggings";
    break;
  case 12260:
    spellname = "Rough Copper Vest";
    break;
  case 12278:
    spellname = "Breath of Fire";
    break;
  case 12279:
    spellname = "Curse of Blood";
    break;
  case 12280:
    spellname = "Acid of Hakkar";
    break;
  case 12281:
    spellname = "Sword Specialization";
    break;
  case 12282:
    spellname = "Improved Heroic Strike";
    break;
  case 12283:
    spellname = "Xiggs Signal Flare";
    break;
  case 12284:
    spellname = "Mace Specialization";
    break;
  case 12285:
    spellname = "Improved Charge";
    break;
  case 12286:
    spellname = "Improved Rend";
    break;
  case 12287:
    spellname = "Improved Thunder Clap";
    break;
  case 12289:
    spellname = "Improved Hamstring";
    break;
  case 12290:
    spellname = "Improved Overpower";
    break;
  case 12292:
    spellname = "Death Wish";
    break;
  case 12294:
    spellname = "Mortal Strike";
    break;
  case 12295:
    spellname = "Tactical Mastery";
    break;
  case 12296:
    spellname = "Anger Management";
    break;
  case 12297:
    spellname = "Anticipation";
    break;
  case 12298:
    spellname = "Shield Specialization";
    break;
  case 12299:
    spellname = "Toughness";
    break;
  case 12300:
    spellname = "Iron Will";
    break;
  case 12301:
    spellname = "Improved Bloodrage";
    break;
  case 12302:
    spellname = "Improved Taunt";
    break;
  case 12303:
    spellname = "Defiance";
    break;
  case 12304:
    spellname = "Drawing Kit";
    break;
  case 12308:
    spellname = "Improved Sunder Armor";
    break;
  case 12310:
    spellname = "Combat Endurance";
    break;
  case 12311:
    spellname = "Improved Shield Bash";
    break;
  case 12312:
    spellname = "Improved Shield Wall";
    break;
  case 12313:
    spellname = "Improved Disarm";
    break;
  case 12317:
    spellname = "Enrage";
    break;
  case 12318:
    spellname = "Commanding Presence";
    break;
  case 12319:
    spellname = "Flurry";
    break;
  case 12320:
    spellname = "Cruelty";
    break;
  case 12321:
    spellname = "Booming Voice";
    break;
  case 12322:
    spellname = "Unbridled Wrath";
    break;
  case 12323:
    spellname = "Piercing Howl";
    break;
  case 12324:
    spellname = "Improved Demoralizing Shout";
    break;
  case 12325:
    spellname = "Improved Inner Rage";
    break;
  case 12327:
    spellname = "Improved Challenging Shout";
    break;
  case 12328:
    spellname = "Sweeping Strikes";
    break;
  case 12329:
    spellname = "Improved Cleave";
    break;
  case 12330:
    spellname = "Improved Slam";
    break;
  case 12332:
    spellname = "Lathoric the Black";
    break;
  case 12338:
    spellname = "Improved Fireball";
    break;
  case 12339:
    spellname = "Improved Fireball";
    break;
  case 12340:
    spellname = "Improved Fireball";
    break;
  case 12341:
    spellname = "Improved Fireball";
    break;
  case 12342:
    spellname = "Improved Fire Blast";
    break;
  case 12346:
    spellname = "Awaken the Soulflayer";
    break;
  case 12347:
    spellname = "Raze Attack";
    break;
  case 12348:
    spellname = "Atal'ai Altar Light Visual (DND)";
    break;
  case 12349:
    spellname = "Improved Flamestrike";
    break;
  case 12350:
    spellname = "Improved Flamestrike";
    break;
  case 12351:
    spellname = "Burning Soul";
    break;
  case 12353:
    spellname = "Flame Throwing";
    break;
  case 12354:
    spellname = "Flame of Hakkar";
    break;
  case 12355:
    spellname = "Impact";
    break;
  case 12357:
    spellname = "Impact";
    break;
  case 12358:
    spellname = "Impact";
    break;
  case 12359:
    spellname = "Impact";
    break;
  case 12360:
    spellname = "Impact";
    break;
  case 12378:
    spellname = "Fire Power";
    break;
  case 12379:
    spellname = "Scorch Talent Test (PT)";
    break;
  case 12380:
    spellname = "Shadow Channeling";
    break;
  case 12398:
    spellname = "Fire Power";
    break;
  case 12399:
    spellname = "Fire Power";
    break;
  case 12400:
    spellname = "Fire Power";
    break;
  case 12418:
    spellname = "Stealth Detection";
    break;
  case 12419:
    spellname = "Solid Dynamite";
    break;
  case 12420:
    spellname = "Summon Skeletal Servant";
    break;
  case 12421:
    spellname = "Mithril Frag Bomb";
    break;
  case 12438:
    spellname = "Slow Fall";
    break;
  case 12458:
    spellname = "Evil God Counterspell";
    break;
  case 12459:
    spellname = "Deadly Scope";
    break;
  case 12460:
    spellname = "Sniper Scope";
    break;
  case 12461:
    spellname = "Backhand";
    break;
  case 12463:
    spellname = "Improved Arcane Missiles";
    break;
  case 12464:
    spellname = "Improved Arcane Missiles";
    break;
  case 12466:
    spellname = "Fireball";
    break;
  case 12467:
    spellname = "Arcane Impact";
    break;
  case 12468:
    spellname = "Flamestrike";
    break;
  case 12469:
    spellname = "Arcane Impact";
    break;
  case 12470:
    spellname = "Fire Nova";
    break;
  case 12471:
    spellname = "Shadow Bolt";
    break;
  case 12472:
    spellname = "Icy Veins";
    break;
  case 12473:
    spellname = "Improved Frostbolt";
    break;
  case 12475:
    spellname = "Improved Frost Nova";
    break;
  case 12479:
    spellname = "Hex of Jammal'an";
    break;
  case 12480:
    spellname = "Hex of Jammal'an";
    break;
  case 12484:
    spellname = "Chilled";
    break;
  case 12485:
    spellname = "Chilled";
    break;
  case 12486:
    spellname = "Chilled";
    break;
  case 12487:
    spellname = "Improved Blizzard";
    break;
  case 12488:
    spellname = "Improved Blizzard";
    break;
  case 12489:
    spellname = "Improved Cone of Cold";
    break;
  case 12490:
    spellname = "Improved Cone of Cold";
    break;
  case 12491:
    spellname = "Healing Wave";
    break;
  case 12492:
    spellname = "Healing Wave";
    break;
  case 12493:
    spellname = "Curse of Weakness";
    break;
  case 12494:
    spellname = "Frostbite";
    break;
  case 12495:
    spellname = "Eranikus the Chained Invisiibility";
    break;
  case 12496:
    spellname = "Frostbite";
    break;
  case 12497:
    spellname = "Frostbite";
    break;
  case 12500:
    spellname = "Arcane Mind";
    break;
  case 12501:
    spellname = "Arcane Mind";
    break;
  case 12502:
    spellname = "Arcane Mind";
    break;
  case 12503:
    spellname = "Arcane Mind";
    break;
  case 12504:
    spellname = "Summon Atal'ai Skeleton";
    break;
  case 12505:
    spellname = "Pyroblast";
    break;
  case 12506:
    spellname = "Atal'ai Skeleton Totem";
    break;
  case 12508:
    spellname = "Water Channeling";
    break;
  case 12509:
    spellname = "Teleport to Azshara Tower";
    break;
  case 12510:
    spellname = "Teleport to Azshara Tower";
    break;
  case 12511:
    spellname = "Torch Combine";
    break;
  case 12512:
    spellname = "Kalaran Conjures Torch";
    break;
  case 12518:
    spellname = "Frost Channeling";
    break;
  case 12519:
    spellname = "Frost Channeling";
    break;
  case 12520:
    spellname = "Teleport from Azshara Tower";
    break;
  case 12521:
    spellname = "Teleport from Azshara Tower";
    break;
  case 12522:
    spellname = "Pyroblast";
    break;
  case 12523:
    spellname = "Pyroblast";
    break;
  case 12524:
    spellname = "Pyroblast";
    break;
  case 12525:
    spellname = "Pyroblast";
    break;
  case 12526:
    spellname = "Pyroblast";
    break;
  case 12528:
    spellname = "Silence";
    break;
  case 12529:
    spellname = "Chilling Touch";
    break;
  case 12530:
    spellname = "Frailty";
    break;
  case 12531:
    spellname = "Chilling Touch";
    break;
  case 12533:
    spellname = "Acid Breath";
    break;
  case 12534:
    spellname = "Flames of Retribution";
    break;
  case 12535:
    spellname = "Shade of Eranikus Passive Visual";
    break;
  case 12536:
    spellname = "Clearcasting";
    break;
  case 12537:
    spellname = "Quest - Summon Treant";
    break;
  case 12538:
    spellname = "Ravenous Claw";
    break;
  case 12539:
    spellname = "Ghoul Rot";
    break;
  case 12540:
    spellname = "Gouge";
    break;
  case 12541:
    spellname = "Ghoul Rot";
    break;
  case 12542:
    spellname = "Fear";
    break;
  case 12543:
    spellname = "Hi-Explosive Bomb";
    break;
  case 12544:
    spellname = "Frost Armor";
    break;
  case 12545:
    spellname = "Spitelash";
    break;
  case 12548:
    spellname = "Frost Shock";
    break;
  case 12549:
    spellname = "Forked Lightning";
    break;
  case 12550:
    spellname = "Lightning Shield";
    break;
  case 12551:
    spellname = "Frost Shot";
    break;
  case 12553:
    spellname = "Shock";
    break;
  case 12554:
    spellname = "Summon Treasure Horde";
    break;
  case 12555:
    spellname = "Pummel";
    break;
  case 12556:
    spellname = "Frost Armor";
    break;
  case 12557:
    spellname = "Cone of Cold";
    break;
  case 12560:
    spellname = "Mining";
    break;
  case 12561:
    spellname = "Fire Protection";
    break;
  case 12562:
    spellname = "The Big One";
    break;
  case 12564:
    spellname = "Summon Treasure Horde Visual";
    break;
  case 12565:
    spellname = "Wyatt Test";
    break;
  case 12569:
    spellname = "Permafrost";
    break;
  case 12571:
    spellname = "Permafrost";
    break;
  case 12574:
    spellname = "Arcane Concentration";
    break;
  case 12575:
    spellname = "Arcane Concentration";
    break;
  case 12576:
    spellname = "Arcane Concentration";
    break;
  case 12577:
    spellname = "Arcane Concentration";
    break;
  case 12578:
    spellname = "Create Oathstone of Ysera's Dragonflight";
    break;
  case 12579:
    spellname = "Winter's Chill";
    break;
  case 12584:
    spellname = "Gold Power Core";
    break;
  case 12585:
    spellname = "Solid Blasting Powder";
    break;
  case 12586:
    spellname = "Solid Dynamite";
    break;
  case 12587:
    spellname = "Bright-Eye Goggles";
    break;
  case 12589:
    spellname = "Mithril Tube";
    break;
  case 12590:
    spellname = "Gyromatic Micro-Adjustor";
    break;
  case 12591:
    spellname = "Unstable Trigger";
    break;
  case 12592:
    spellname = "Arcane Subtlety";
    break;
  case 12594:
    spellname = "Fire Goggles";
    break;
  case 12595:
    spellname = "Mithril Blunderbuss";
    break;
  case 12596:
    spellname = "Hi-Impact Mithril Slugs";
    break;
  case 12597:
    spellname = "Deadly Scope";
    break;
  case 12598:
    spellname = "Improved Counterspell";
    break;
  case 12599:
    spellname = "Mithril Casing";
    break;
  case 12603:
    spellname = "Mithril Frag Bomb";
    break;
  case 12605:
    spellname = "Improved Mana Shield";
    break;
  case 12606:
    spellname = "Magic Attunement";
    break;
  case 12607:
    spellname = "Catseye Ultra Goggles";
    break;
  case 12608:
    spellname = "Stealth Detection";
    break;
  case 12609:
    spellname = "Catseye Elixir";
    break;
  case 12611:
    spellname = "Cone of Cold";
    break;
  case 12612:
    spellname = "Stomp";
    break;
  case 12613:
    spellname = "Dark Iron Taskmaster Death";
    break;
  case 12614:
    spellname = "Mithril Heavy-bore Rifle";
    break;
  case 12615:
    spellname = "Spellpower Goggles Xtreme";
    break;
  case 12616:
    spellname = "Parachute Cloak";
    break;
  case 12617:
    spellname = "Deepdive Helmet";
    break;
  case 12618:
    spellname = "Rose Colored Goggles";
    break;
  case 12619:
    spellname = "Hi-Explosive Bomb";
    break;
  case 12620:
    spellname = "Sniper Scope";
    break;
  case 12621:
    spellname = "Mithril Gyro-Shot";
    break;
  case 12622:
    spellname = "Green Lens";
    break;
  case 12623:
    spellname = "Suppression";
    break;
  case 12624:
    spellname = "Mithril Mechanical Dragonling";
    break;
  case 12625:
    spellname = "Disease Cloud";
    break;
  case 12626:
    spellname = "Disease Cloud";
    break;
  case 12627:
    spellname = "Disease Cloud";
    break;
  case 12639:
    spellname = "Summon Hakkar";
    break;
  case 12642:
    spellname = "Summon Frost Spectres";
    break;
  case 12654:
    spellname = "Ignite";
    break;
  case 12655:
    spellname = "Enlightenment";
    break;
  case 12656:
    spellname = "Engineering";
    break;
  case 12657:
    spellname = "Artisan Engineer";
    break;
  case 12658:
    spellname = "Improved Rend";
    break;
  case 12659:
    spellname = "Improved Rend";
    break;
  case 12663:
    spellname = "Improved Heroic Strike";
    break;
  case 12664:
    spellname = "Improved Heroic Strike";
    break;
  case 12665:
    spellname = "Improved Thunder Clap";
    break;
  case 12666:
    spellname = "Improved Thunder Clap";
    break;
  case 12667:
    spellname = "Soul Consumption";
    break;
  case 12668:
    spellname = "Improved Hamstring";
    break;
  case 12670:
    spellname = "Summon Frost Spectres";
    break;
  case 12671:
    spellname = "Summon Frost Spectres";
    break;
  case 12672:
    spellname = "Ice Shards";
    break;
  case 12674:
    spellname = "Frost Nova";
    break;
  case 12675:
    spellname = "Frostbolt";
    break;
  case 12676:
    spellname = "Tactical Mastery";
    break;
  case 12677:
    spellname = "Tactical Mastery";
    break;
  case 12678:
    spellname = "Stance Mastery";
    break;
  case 12684:
    spellname = "Kadrak's Flag";
    break;
  case 12685:
    spellname = "Fade";
    break;
  case 12686:
    spellname = "Enrage";
    break;
  case 12693:
    spellname = "Drain Life";
    break;
  case 12695:
    spellname = "Charge Rage Bonus Effect";
    break;
  case 12696:
    spellname = "Charge Rage Bonus Effect";
    break;
  case 12697:
    spellname = "Improved Charge";
    break;
  case 12699:
    spellname = "Summon Screecher Spirit";
    break;
  case 12700:
    spellname = "Poleaxe Specialization";
    break;
  case 12701:
    spellname = "Mace Specialization";
    break;
  case 12702:
    spellname = "Mace Specialization";
    break;
  case 12703:
    spellname = "Mace Specialization";
    break;
  case 12704:
    spellname = "Mace Specialization";
    break;
  case 12705:
    spellname = "Long Daze";
    break;
  case 12709:
    spellname = "Collecting Fallout";
    break;
  case 12710:
    spellname = "Gem Explosion";
    break;
  case 12711:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 12712:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 12713:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 12714:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 12715:
    spellname = "Goblin Rocket Fuel Recipe";
    break;
  case 12716:
    spellname = "Goblin Mortar";
    break;
  case 12717:
    spellname = "Goblin Mining Helmet";
    break;
  case 12718:
    spellname = "Goblin Construction Helmet";
    break;
  case 12719:
    spellname = "Explosive Arrow";
    break;
  case 12720:
    spellname = "Goblin Boom Box";
    break;
  case 12721:
    spellname = "Deep Wound";
    break;
  case 12722:
    spellname = "Goblin Radio";
    break;
  case 12723:
    spellname = "Sweeping Strikes";
    break;
  case 12724:
    spellname = "Shield Specialization";
    break;
  case 12725:
    spellname = "Shield Specialization";
    break;
  case 12726:
    spellname = "Shield Specialization";
    break;
  case 12727:
    spellname = "Shield Specialization";
    break;
  case 12731:
    spellname = "Strength of Stone";
    break;
  case 12732:
    spellname = "Shard of Afrasa";
    break;
  case 12733:
    spellname = "Fearless";
    break;
  case 12734:
    spellname = "Ground Smash";
    break;
  case 12735:
    spellname = "Fill the Egg of Hakkar";
    break;
  case 12736:
    spellname = "Summon Mithril Dragonling";
    break;
  case 12737:
    spellname = "Frostbolt";
    break;
  case 12738:
    spellname = "Amplify Damage";
    break;
  case 12739:
    spellname = "Shadow Bolt";
    break;
  case 12740:
    spellname = "Summon Infernal Servant";
    break;
  case 12741:
    spellname = "Curse of Weakness";
    break;
  case 12742:
    spellname = "Immolate";
    break;
  case 12744:
    spellname = "Immolation";
    break;
  case 12745:
    spellname = "Mana Burn";
    break;
  case 12746:
    spellname = "Summon Voidwalker";
    break;
  case 12747:
    spellname = "Entangling Roots";
    break;
  case 12748:
    spellname = "Frost Nova";
    break;
  case 12749:
    spellname = "Mithril Mechanical Dragonling";
    break;
  case 12750:
    spellname = "Anticipation";
    break;
  case 12751:
    spellname = "Anticipation";
    break;
  case 12752:
    spellname = "Anticipation";
    break;
  case 12753:
    spellname = "Anticipation";
    break;
  case 12754:
    spellname = "The Big One";
    break;
  case 12755:
    spellname = "Goblin Bomb Dispenser";
    break;
  case 12758:
    spellname = "Goblin Rocket Helmet";
    break;
  case 12759:
    spellname = "Gnomish Death Ray";
    break;
  case 12760:
    spellname = "Goblin Sapper Charge";
    break;
  case 12761:
    spellname = "Toughness";
    break;
  case 12762:
    spellname = "Toughness";
    break;
  case 12763:
    spellname = "Toughness";
    break;
  case 12764:
    spellname = "Toughness";
    break;
  case 12765:
    spellname = "Improved Taunt";
    break;
  case 12766:
    spellname = "Poison Cloud";
    break;
  case 12768:
    spellname = "Goblin Mortar";
    break;
  case 12774:
    spellname = "(DND) Belnistrasz Idol Shutdown Visual";
    break;
  case 12781:
    spellname = "Poleaxe Specialization";
    break;
  case 12782:
    spellname = "Shield Spike";
    break;
  case 12783:
    spellname = "Poleaxe Specialization";
    break;
  case 12784:
    spellname = "Poleaxe Specialization";
    break;
  case 12785:
    spellname = "Poleaxe Specialization";
    break;
  case 12787:
    spellname = "Thrash";
    break;
  case 12788:
    spellname = "Defiance";
    break;
  case 12789:
    spellname = "Defiance";
    break;
  case 12790:
    spellname = "Hukku's Guardians";
    break;
  case 12795:
    spellname = "Enrage";
    break;
  case 12796:
    spellname = "Flames";
    break;
  case 12797:
    spellname = "Improved Revenge";
    break;
  case 12798:
    spellname = "Revenge Stun";
    break;
  case 12799:
    spellname = "Improved Revenge";
    break;
  case 12800:
    spellname = "Improved Revenge";
    break;
  case 12802:
    spellname = "Getting Tide Pool Sample #1";
    break;
  case 12803:
    spellname = "Improved Shield Wall";
    break;
  case 12804:
    spellname = "Improved Disarm";
    break;
  case 12805:
    spellname = "Getting Tide Pool Sample #2";
    break;
  case 12806:
    spellname = "Getting Tide Pool Sample #3";
    break;
  case 12807:
    spellname = "Improved Disarm";
    break;
  case 12808:
    spellname = "Getting Tide Pool Sample #4";
    break;
  case 12809:
    spellname = "Concussion Blow";
    break;
  case 12810:
    spellname = "Improved Sunder Armor";
    break;
  case 12811:
    spellname = "Improved Sunder Armor";
    break;
  case 12812:
    spellname = "Sword Specialization";
    break;
  case 12813:
    spellname = "Sword Specialization";
    break;
  case 12814:
    spellname = "Sword Specialization";
    break;
  case 12815:
    spellname = "Sword Specialization";
    break;
  case 12816:
    spellname = "Idom Rool Camera Shake";
    break;
  case 12818:
    spellname = "Improved Bloodrage";
    break;
  case 12821:
    spellname = "Plainsrunning";
    break;
  case 12822:
    spellname = "Demon Slaying 18";
    break;
  case 12823:
    spellname = "Demon Slaying 36";
    break;
  case 12824:
    spellname = "Polymorph";
    break;
  case 12825:
    spellname = "Polymorph";
    break;
  case 12826:
    spellname = "Polymorph";
    break;
  case 12834:
    spellname = "Deep Wounds";
    break;
  case 12835:
    spellname = "Booming Voice";
    break;
  case 12836:
    spellname = "Booming Voice";
    break;
  case 12837:
    spellname = "Booming Voice";
    break;
  case 12838:
    spellname = "Booming Voice";
    break;
  case 12839:
    spellname = "Arcane Focus";
    break;
  case 12840:
    spellname = "Arcane Focus";
    break;
  case 12841:
    spellname = "Arcane Focus";
    break;
  case 12842:
    spellname = "Arcane Focus";
    break;
  case 12843:
    spellname = "Mordresh's Shield";
    break;
  case 12845:
    spellname = "Lesser Invisibility";
    break;
  case 12846:
    spellname = "Ignite";
    break;
  case 12847:
    spellname = "Ignite";
    break;
  case 12848:
    spellname = "Ignite";
    break;
  case 12849:
    spellname = "Deep Wounds";
    break;
  case 12850:
    spellname = "Deep Wounds";
    break;
  case 12851:
    spellname = "Release the Hounds";
    break;
  case 12852:
    spellname = "Cruelty";
    break;
  case 12853:
    spellname = "Cruelty";
    break;
  case 12854:
    spellname = "Spell Focus";
    break;
  case 12855:
    spellname = "Cruelty";
    break;
  case 12856:
    spellname = "Cruelty";
    break;
  case 12857:
    spellname = "Commanding Presence";
    break;
  case 12858:
    spellname = "Commanding Presence";
    break;
  case 12860:
    spellname = "Commanding Presence";
    break;
  case 12861:
    spellname = "Commanding Presence";
    break;
  case 12862:
    spellname = "Improved Slam";
    break;
  case 12863:
    spellname = "Improved Inner Rage";
    break;
  case 12864:
    spellname = "Improved Inner Rage";
    break;
  case 12865:
    spellname = "Improved Inner Rage";
    break;
  case 12866:
    spellname = "Improved Inner Rage";
    break;
  case 12867:
    spellname = "Deep Wounds";
    break;
  case 12868:
    spellname = "Deep Wounds";
    break;
  case 12872:
    spellname = "Improved Scorch";
    break;
  case 12873:
    spellname = "Improved Scorch";
    break;
  case 12876:
    spellname = "Improved Demoralizing Shout";
    break;
  case 12877:
    spellname = "Improved Demoralizing Shout";
    break;
  case 12878:
    spellname = "Improved Demoralizing Shout";
    break;
  case 12879:
    spellname = "Improved Demoralizing Shout";
    break;
  case 12880:
    spellname = "Enrage";
    break;
  case 12881:
    spellname = "Poison State";
    break;
  case 12882:
    spellname = "Wing Flap";
    break;
  case 12883:
    spellname = "Longsight";
    break;
  case 12884:
    spellname = "Acid Breath";
    break;
  case 12885:
    spellname = "Teleport to Razelikh";
    break;
  case 12886:
    spellname = "Improved Challenging Shout";
    break;
  case 12887:
    spellname = "Sweeping Slam";
    break;
  case 12888:
    spellname = "Cause Insanity";
    break;
  case 12889:
    spellname = "Curse of Tongues";
    break;
  case 12890:
    spellname = "Deep Slumber";
    break;
  case 12891:
    spellname = "Acid Breath";
    break;
  case 12895:
    spellname = "Inlaid Mithril Cylinder Plans";
    break;
  case 12896:
    spellname = "Helboar";
    break;
  case 12897:
    spellname = "Gnomish Goggles";
    break;
  case 12898:
    spellname = "Smoke Aura Visual";
    break;
  case 12899:
    spellname = "Gnomish Shrink Ray";
    break;
  case 12900:
    spellname = "Mobile Alarm";
    break;
  case 12902:
    spellname = "Gnomish Net-o-Matic Projector";
    break;
  case 12903:
    spellname = "Gnomish Harm Prevention Belt";
    break;
  case 12904:
    spellname = "Gnomish Ham Radio";
    break;
  case 12905:
    spellname = "Gnomish Rocket Boots";
    break;
  case 12906:
    spellname = "Gnomish Battle Chicken";
    break;
  case 12907:
    spellname = "Gnomish Mind Control Cap";
    break;
  case 12908:
    spellname = "Goblin Dragon Gun";
    break;
  case 12938:
    spellname = "Fel Curse";
    break;
  case 12941:
    spellname = "Fel Curse Effect";
    break;
  case 12942:
    spellname = "Fell Curse Effect";
    break;
  case 12943:
    spellname = "Fell Curse Effect";
    break;
  case 12945:
    spellname = "Improved Shield Block";
    break;
  case 12946:
    spellname = "Putrid Stench";
    break;
  case 12947:
    spellname = "Withered Touch";
    break;
  case 12948:
    spellname = "Avatar of Hakkar is summoned";
    break;
  case 12950:
    spellname = "Improved Cleave";
    break;
  case 12952:
    spellname = "Piercing Ice";
    break;
  case 12953:
    spellname = "Piercing Ice";
    break;
  case 12954:
    spellname = "Piercing Ice";
    break;
  case 12956:
    spellname = "Demon Armor";
    break;
  case 12957:
    spellname = "Piercing Ice";
    break;
  case 12958:
    spellname = "Improved Shield Bash";
    break;
  case 12959:
    spellname = "Iron Will";
    break;
  case 12960:
    spellname = "Iron Will";
    break;
  case 12961:
    spellname = "Iron Will";
    break;
  case 12962:
    spellname = "Iron Will";
    break;
  case 12963:
    spellname = "Improved Overpower";
    break;
  case 12964:
    spellname = "Unbridled Wrath";
    break;
  case 12966:
    spellname = "Flurry";
    break;
  case 12967:
    spellname = "Flurry";
    break;
  case 12968:
    spellname = "Flurry";
    break;
  case 12969:
    spellname = "Flurry";
    break;
  case 12970:
    spellname = "Flurry";
    break;
  case 12971:
    spellname = "Flurry";
    break;
  case 12972:
    spellname = "Flurry";
    break;
  case 12973:
    spellname = "Flurry";
    break;
  case 12974:
    spellname = "Flurry";
    break;
  case 12975:
    spellname = "Last Stand";
    break;
  case 12976:
    spellname = "Last Stand";
    break;
  case 12980:
    spellname = "Simple Teleport";
    break;
  case 12981:
    spellname = "Undead Slayer 39";
    break;
  case 12982:
    spellname = "Shatter";
    break;
  case 12983:
    spellname = "Shatter";
    break;
  case 12984:
    spellname = "Shatter";
    break;
  case 12985:
    spellname = "Shatter";
    break;
  case 12998:
    spellname = "Create Yeh'kinya's Scroll";
    break;
  case 12999:
    spellname = "Unbridled Wrath";
    break;
  case 13000:
    spellname = "Unbridled Wrath";
    break;
  case 13001:
    spellname = "Unbridled Wrath";
    break;
  case 13002:
    spellname = "Unbridled Wrath";
    break;
  case 13003:
    spellname = "Shrink Ray";
    break;
  case 13004:
    spellname = "Grow";
    break;
  case 13005:
    spellname = "Hammer of Justice";
    break;
  case 13006:
    spellname = "Shrink Ray";
    break;
  case 13007:
    spellname = "Divine Protection";
    break;
  case 13008:
    spellname = "Retribution Aura";
    break;
  case 13009:
    spellname = "Amnennar's Wrath";
    break;
  case 13010:
    spellname = "Shrink";
    break;
  case 13013:
    spellname = "Dissolve Armor";
    break;
  case 13018:
    spellname = "Blast Wave";
    break;
  case 13019:
    spellname = "Blast Wave";
    break;
  case 13020:
    spellname = "Blast Wave";
    break;
  case 13021:
    spellname = "Blast Wave";
    break;
  case 13022:
    spellname = "Fire and Arcane Reflect";
    break;
  case 13028:
    spellname = "Goldthorn Tea";
    break;
  case 13029:
    spellname = "Goldthorn Tea";
    break;
  case 13030:
    spellname = "Mighty Troll's Blood Potion";
    break;
  case 13031:
    spellname = "Ice Barrier";
    break;
  case 13032:
    spellname = "Ice Barrier";
    break;
  case 13033:
    spellname = "Ice Barrier";
    break;
  case 13043:
    spellname = "Molten Shields";
    break;
  case 13044:
    spellname = "Teleport to Ground";
    break;
  case 13045:
    spellname = "Enrage";
    break;
  case 13046:
    spellname = "Enrage";
    break;
  case 13047:
    spellname = "Enrage";
    break;
  case 13048:
    spellname = "Enrage";
    break;
  case 13049:
    spellname = "Dragon's Call";
    break;
  case 13099:
    spellname = "Net-o-Matic";
    break;
  case 13119:
    spellname = "Net-o-Matic";
    break;
  case 13120:
    spellname = "Net-o-Matic";
    break;
  case 13138:
    spellname = "Net-o-Matic";
    break;
  case 13139:
    spellname = "Net-o-Matic";
    break;
  case 13140:
    spellname = "Fireball";
    break;
  case 13141:
    spellname = "Gnomish Rocket Boots";
    break;
  case 13142:
    spellname = "Teleport to Razelikh";
    break;
  case 13143:
    spellname = "Summon Razelikh";
    break;
  case 13158:
    spellname = "Rocket Boots Malfunction";
    break;
  case 13159:
    spellname = "Aspect of the Pack";
    break;
  case 13161:
    spellname = "Aspect of the Beast";
    break;
  case 13163:
    spellname = "Aspect of the Monkey";
    break;
  case 13165:
    spellname = "Aspect of the Hawk";
    break;
  case 13166:
    spellname = "Battle Chicken";
    break;
  case 13168:
    spellname = "Chicken Fury";
    break;
  case 13180:
    spellname = "Gnomish Mind Control Cap";
    break;
  case 13181:
    spellname = "Gnomish Mind Control Cap";
    break;
  case 13183:
    spellname = "Goblin Dragon Gun";
    break;
  case 13184:
    spellname = "Goblin Dragon Gun";
    break;
  case 13198:
    spellname = "Increased Strength 15";
    break;
  case 13218:
    spellname = "Wound Poison";
    break;
  case 13219:
    spellname = "Wound Poison";
    break;
  case 13220:
    spellname = "Wound Poison";
    break;
  case 13222:
    spellname = "Wound Poison";
    break;
  case 13223:
    spellname = "Wound Poison";
    break;
  case 13224:
    spellname = "Wound Poison";
    break;
  case 13225:
    spellname = "Wound Poison";
    break;
  case 13226:
    spellname = "Wound Poison";
    break;
  case 13227:
    spellname = "Wound Poison";
    break;
  case 13228:
    spellname = "Wound Poison II";
    break;
  case 13229:
    spellname = "Wound Poison III";
    break;
  case 13230:
    spellname = "Wound Poison IV";
    break;
  case 13234:
    spellname = "Harm Prevention Belt";
    break;
  case 13235:
    spellname = "Forcefield Collapse";
    break;
  case 13236:
    spellname = "Nature Channeling";
    break;
  case 13237:
    spellname = "Goblin Mortar";
    break;
  case 13238:
    spellname = "Goblin Mortar";
    break;
  case 13239:
    spellname = "Reload Explode";
    break;
  case 13240:
    spellname = "The Mortar: Reloaded";
    break;
  case 13241:
    spellname = "Goblin Sapper Charge";
    break;
  case 13258:
    spellname = "Summon Goblin Bomb";
    break;
  case 13259:
    spellname = "Explosion";
    break;
  case 13261:
    spellname = "Malfunction Explosion";
    break;
  case 13262:
    spellname = "Disenchant";
    break;
  case 13278:
    spellname = "Gnomish Death Ray";
    break;
  case 13279:
    spellname = "Gnomish Death Ray";
    break;
  case 13280:
    spellname = "Gnomish Death Ray";
    break;
  case 13281:
    spellname = "Earth Shock";
    break;
  case 13298:
    spellname = "Poison";
    break;
  case 13299:
    spellname = "Poison Proc";
    break;
  case 13318:
    spellname = "Rend";
    break;
  case 13319:
    spellname = "Malfunction";
    break;
  case 13321:
    spellname = "Mana Burn";
    break;
  case 13322:
    spellname = "Frostbolt";
    break;
  case 13323:
    spellname = "Polymorph";
    break;
  case 13325:
    spellname = "Transponder Summon";
    break;
  case 13326:
    spellname = "Arcane Intellect";
    break;
  case 13327:
    spellname = "Reckless Charge";
    break;
  case 13338:
    spellname = "Curse of Tongues";
    break;
  case 13339:
    spellname = "Fire Blast";
    break;
  case 13340:
    spellname = "Fire Blast";
    break;
  case 13341:
    spellname = "Fire Blast";
    break;
  case 13342:
    spellname = "Fire Blast";
    break;
  case 13358:
    spellname = "Defensive State (DND)";
    break;
  case 13360:
    spellname = "Knockdown";
    break;
  case 13361:
    spellname = "Greater Magic Essence";
    break;
  case 13362:
    spellname = "Lesser Magic Essence";
    break;
  case 13363:
    spellname = "Lesser Intellect";
    break;
  case 13364:
    spellname = "Lesser Agility";
    break;
  case 13365:
    spellname = "Agility";
    break;
  case 13366:
    spellname = "Intellect";
    break;
  case 13368:
    spellname = "Spirit";
    break;
  case 13369:
    spellname = "Lesser Stamina";
    break;
  case 13370:
    spellname = "Stamina";
    break;
  case 13371:
    spellname = "Lesser Strength";
    break;
  case 13372:
    spellname = "Strength";
    break;
  case 13374:
    spellname = "Fire Blast";
    break;
  case 13375:
    spellname = "Fireball";
    break;
  case 13376:
    spellname = "Fire Shield";
    break;
  case 13378:
    spellname = "Enchant Shield - Minor Stamina";
    break;
  case 13380:
    spellname = "Enchant 2H Weapon - Lesser Spirit";
    break;
  case 13381:
    spellname = "Torch";
    break;
  case 13382:
    spellname = "Torch";
    break;
  case 13383:
    spellname = "Increased Defense";
    break;
  case 13384:
    spellname = "Increased Defense";
    break;
  case 13385:
    spellname = "Increased Defense";
    break;
  case 13386:
    spellname = "Increased Defense";
    break;
  case 13387:
    spellname = "Increased Defense";
    break;
  case 13388:
    spellname = "Increased Defense";
    break;
  case 13389:
    spellname = "Increased Defense";
    break;
  case 13390:
    spellname = "Increased Defense";
    break;
  case 13398:
    spellname = "Throw Wrench";
    break;
  case 13399:
    spellname = "Cultivate Packet of Seeds";
    break;
  case 13418:
    spellname = "Minor Stealth";
    break;
  case 13419:
    spellname = "Enchant Cloak - Minor Agility";
    break;
  case 13421:
    spellname = "Enchant Cloak - Lesser Protection";
    break;
  case 13424:
    spellname = "Faerie Fire";
    break;
  case 13438:
    spellname = "Fireball";
    break;
  case 13439:
    spellname = "Frostbolt";
    break;
  case 13440:
    spellname = "Shadow Bolt";
    break;
  case 13441:
    spellname = "Firebolt";
    break;
  case 13442:
    spellname = "Firebolt";
    break;
  case 13443:
    spellname = "Rend";
    break;
  case 13444:
    spellname = "Sunder Armor";
    break;
  case 13445:
    spellname = "Rend";
    break;
  case 13446:
    spellname = "Strike";
    break;
  case 13459:
    spellname = "Decimate";
    break;
  case 13461:
    spellname = "Go Home";
    break;
  case 13462:
    spellname = "Minor Blocking";
    break;
  case 13463:
    spellname = "Summon Bloodpetal Mini Pests";
    break;
  case 13464:
    spellname = "Enchant Shield - Lesser Protection";
    break;
  case 13466:
    spellname = "Goblin Dragon Gun";
    break;
  case 13478:
    spellname = "Opening Relic Coffer";
    break;
  case 13479:
    spellname = "Goblin Dragon Gun";
    break;
  case 13480:
    spellname = "Shadow Bolt";
    break;
  case 13481:
    spellname = "Tame Beast";
    break;
  case 13482:
    spellname = "Lightning Bolt";
    break;
  case 13484:
    spellname = "Plant Gor'tesh Head";
    break;
  case 13485:
    spellname = "Enchant Shield - Lesser Spirit";
    break;
  case 13486:
    spellname = "Wound";
    break;
  case 13487:
    spellname = "Create Relic Coffer Chest";
    break;
  case 13488:
    spellname = "Firegut Fear Storm";
    break;
  case 13489:
    spellname = "Burning Spirit";
    break;
  case 13490:
    spellname = "Howling Blade";
    break;
  case 13491:
    spellname = "Pummel";
    break;
  case 13492:
    spellname = "Beast Slaying 63";
    break;
  case 13493:
    spellname = "Gnomish Death Ray";
    break;
  case 13494:
    spellname = "Haste";
    break;
  case 13496:
    spellname = "Dazed";
    break;
  case 13497:
    spellname = "Greater Astral Essence";
    break;
  case 13498:
    spellname = "Lesser Astral Essence";
    break;
  case 13500:
    spellname = "Increased 1H Axe";
    break;
  case 13501:
    spellname = "Enchant Bracer - Lesser Stamina";
    break;
  case 13503:
    spellname = "Enchant Weapon - Lesser Striking";
    break;
  case 13518:
    spellname = "Poison";
    break;
  case 13519:
    spellname = "Holy Smite";
    break;
  case 13520:
    spellname = "Quiet Suicide (Frost)";
    break;
  case 13522:
    spellname = "Enchant Cloak - Lesser Shadow Resistance";
    break;
  case 13523:
    spellname = "Lesser Resistance - Shadow";
    break;
  case 13524:
    spellname = "Curse of Stalvan";
    break;
  case 13526:
    spellname = "Corrosive Poison";
    break;
  case 13527:
    spellname = "Lightning Bolt";
    break;
  case 13528:
    spellname = "Decayed Strength";
    break;
  case 13529:
    spellname = "Enchant 2H Weapon - Lesser Impact";
    break;
  case 13530:
    spellname = "Corruption";
    break;
  case 13532:
    spellname = "Thunder Clap";
    break;
  case 13533:
    spellname = "Haste";
    break;
  case 13534:
    spellname = "Disarm";
    break;
  case 13536:
    spellname = "Enchant Bracer - Lesser Strength";
    break;
  case 13538:
    spellname = "Enchant Chest - Lesser Absorption";
    break;
  case 13540:
    spellname = "Green Channeling";
    break;
  case 13541:
    spellname = "Knockback 500 Triggers";
    break;
  case 13542:
    spellname = "Mend Pet";
    break;
  case 13543:
    spellname = "Mend Pet";
    break;
  case 13544:
    spellname = "Mend Pet";
    break;
  case 13548:
    spellname = "Summon Farm Chicken";
    break;
  case 13549:
    spellname = "Serpent Sting";
    break;
  case 13550:
    spellname = "Serpent Sting";
    break;
  case 13551:
    spellname = "Serpent Sting";
    break;
  case 13552:
    spellname = "Serpent Sting";
    break;
  case 13553:
    spellname = "Serpent Sting";
    break;
  case 13554:
    spellname = "Serpent Sting";
    break;
  case 13555:
    spellname = "Serpent Sting";
    break;
  case 13563:
    spellname = "Summon Chicken Egg";
    break;
  case 13564:
    spellname = "Opening Dark Coffer";
    break;
  case 13565:
    spellname = "Opening Secure Safe";
    break;
  case 13566:
    spellname = "Knockback 500 Triggers";
    break;
  case 13567:
    spellname = "Dummy Trigger";
    break;
  case 13578:
    spellname = "Jadefire";
    break;
  case 13579:
    spellname = "Gouge";
    break;
  case 13582:
    spellname = "Deadly Poison";
    break;
  case 13583:
    spellname = "Curse of the Deadwood";
    break;
  case 13584:
    spellname = "Strike";
    break;
  case 13585:
    spellname = "Lightning Shield";
    break;
  case 13586:
    spellname = "Aqua Jet";
    break;
  case 13587:
    spellname = "Mount Speed";
    break;
  case 13589:
    spellname = "Haste Aura";
    break;
  case 13590:
    spellname = "Increase Arcane Dam 1";
    break;
  case 13591:
    spellname = "Increase Arcane Dam 3";
    break;
  case 13592:
    spellname = "Increase Arcane Dam 4";
    break;
  case 13593:
    spellname = "Increase Arcane Dam 6";
    break;
  case 13594:
    spellname = "Increase Arcane Dam 7";
    break;
  case 13595:
    spellname = "Increase Arcane Dam 9";
    break;
  case 13596:
    spellname = "Increase Arcane Dam 10";
    break;
  case 13597:
    spellname = "Increase Arcane Dam 11";
    break;
  case 13598:
    spellname = "Increase Arcane Dam 13";
    break;
  case 13599:
    spellname = "Increase Arcane Dam 14";
    break;
  case 13601:
    spellname = "Increase Arcane Dam 16";
    break;
  case 13602:
    spellname = "Increase Arcane Dam 17";
    break;
  case 13603:
    spellname = "Increase Arcane Dam 19";
    break;
  case 13604:
    spellname = "Increase Arcane Dam 20";
    break;
  case 13605:
    spellname = "Increase Arcane Dam 21";
    break;
  case 13606:
    spellname = "Mana";
    break;
  case 13607:
    spellname = "Enchant Chest - Mana";
    break;
  case 13608:
    spellname = "Hooked Net";
    break;
  case 13611:
    spellname = "Mining";
    break;
  case 13612:
    spellname = "Enchant Gloves - Mining";
    break;
  case 13614:
    spellname = "Herbalism";
    break;
  case 13615:
    spellname = "Fishing";
    break;
  case 13616:
    spellname = "Wracking Pains Proc";
    break;
  case 13617:
    spellname = "Enchant Gloves - Herbalism";
    break;
  case 13619:
    spellname = "Wracking Pains";
    break;
  case 13620:
    spellname = "Enchant Gloves - Fishing";
    break;
  case 13622:
    spellname = "Enchant Bracer - Lesser Intellect";
    break;
  case 13624:
    spellname = "Minor Stats";
    break;
  case 13625:
    spellname = "Lesser Stats";
    break;
  case 13626:
    spellname = "Enchant Chest - Minor Stats";
    break;
  case 13628:
    spellname = "Runed Golden Rod";
    break;
  case 13630:
    spellname = "Scraping";
    break;
  case 13631:
    spellname = "Enchant Shield - Lesser Stamina";
    break;
  case 13632:
    spellname = "Greater Mystic Essence";
    break;
  case 13633:
    spellname = "Lesser Mystic Essence";
    break;
  case 13635:
    spellname = "Enchant Cloak - Defense";
    break;
  case 13637:
    spellname = "Enchant Boots - Lesser Agility";
    break;
  case 13639:
    spellname = "Greater Health";
    break;
  case 13640:
    spellname = "Enchant Chest - Greater Health";
    break;
  case 13642:
    spellname = "Enchant Bracer - Spirit";
    break;
  case 13644:
    spellname = "Enchant Boots - Lesser Stamina";
    break;
  case 13646:
    spellname = "Enchant Bracer - Lesser Deflection";
    break;
  case 13648:
    spellname = "Enchant Bracer - Stamina";
    break;
  case 13650:
    spellname = "Lesser Beast Slayer";
    break;
  case 13651:
    spellname = "Lesser Elemental Slayer";
    break;
  case 13652:
    spellname = "Resistance - Fire";
    break;
  case 13653:
    spellname = "Enchant Weapon - Lesser Beastslayer";
    break;
  case 13655:
    spellname = "Enchant Weapon - Lesser Elemental Slayer";
    break;
  case 13657:
    spellname = "Enchant Cloak - Fire Resistance";
    break;
  case 13659:
    spellname = "Enchant Shield - Spirit";
    break;
  case 13661:
    spellname = "Enchant Bracer - Strength";
    break;
  case 13663:
    spellname = "Enchant Chest - Greater Mana";
    break;
  case 13664:
    spellname = "Greater Mana";
    break;
  case 13665:
    spellname = "Increased Parry 20";
    break;
  case 13667:
    spellname = "Increased Parry 40";
    break;
  case 13668:
    spellname = "Increased Parry 60";
    break;
  case 13669:
    spellname = "Increased Dodge 12";
    break;
  case 13670:
    spellname = "Increased Dodge 24";
    break;
  case 13671:
    spellname = "Increased Dodge 36";
    break;
  case 13672:
    spellname = "Increased Dodge 48";
    break;
  case 13673:
    spellname = "Increased Dodge 60";
    break;
  case 13674:
    spellname = "Increased Block 5";
    break;
  case 13675:
    spellname = "Increased Block 10";
    break;
  case 13676:
    spellname = "Increased Block 15";
    break;
  case 13677:
    spellname = "Increased Block 20";
    break;
  case 13678:
    spellname = "Increased Block 25";
    break;
  case 13687:
    spellname = "Enchant Boots - Lesser Spirit";
    break;
  case 13689:
    spellname = "Enchant Shield - Lesser Block";
    break;
  case 13690:
    spellname = "Lesser Blocking";
    break;
  case 13692:
    spellname = "Dire Growl";
    break;
  case 13693:
    spellname = "Enchant Weapon - Striking";
    break;
  case 13695:
    spellname = "Enchant 2H Weapon - Impact";
    break;
  case 13697:
    spellname = "Skinning";
    break;
  case 13698:
    spellname = "Enchant Gloves - Skinning";
    break;
  case 13700:
    spellname = "Enchant Chest - Lesser Stats";
    break;
  case 13702:
    spellname = "Runed Truesilver Rod";
    break;
  case 13704:
    spellname = "Psychic Scream";
    break;
  case 13705:
    spellname = "Precision";
    break;
  case 13706:
    spellname = "Dagger Specialization";
    break;
  case 13707:
    spellname = "Fist Weapon Specialization";
    break;
  case 13709:
    spellname = "Mace Specialization";
    break;
  case 13712:
    spellname = "Lightning Reflexes";
    break;
  case 13713:
    spellname = "Deflection";
    break;
  case 13714:
    spellname = "Create Samophlange Manual";
    break;
  case 13715:
    spellname = "Dual Wield Specialization";
    break;
  case 13716:
    spellname = "AOD";
    break;
  case 13727:
    spellname = "Break Samophlange";
    break;
  case 13728:
    spellname = "Earth Shock";
    break;
  case 13729:
    spellname = "Flame Shock";
    break;
  case 13730:
    spellname = "Demoralizing Shout";
    break;
  case 13732:
    spellname = "Improved Sinister Strike";
    break;
  case 13733:
    spellname = "Puncturing Wounds";
    break;
  case 13735:
    spellname = "Increased Agility 15";
    break;
  case 13736:
    spellname = "Whirlwind";
    break;
  case 13737:
    spellname = "Mortal Strike";
    break;
  case 13738:
    spellname = "Rend";
    break;
  case 13739:
    spellname = "Greater Nether Essence";
    break;
  case 13740:
    spellname = "Lesser Nether Essence";
    break;
  case 13741:
    spellname = "Improved Gouge";
    break;
  case 13742:
    spellname = "Endurance";
    break;
  case 13743:
    spellname = "Improved Sprint";
    break;
  case 13744:
    spellname = "Blazing Emblem";
    break;
  case 13745:
    spellname = "Arcane Explosion";
    break;
  case 13746:
    spellname = "Enchant Cloak - Greater Defense";
    break;
  case 13747:
    spellname = "Slow";
    break;
  case 13748:
    spellname = "Arcane Bolt";
    break;
  case 13750:
    spellname = "Adrenaline Rush";
    break;
  case 13752:
    spellname = "Faerie Fire";
    break;
  case 13754:
    spellname = "Improved Kick";
    break;
  case 13787:
    spellname = "Demon Armor";
    break;
  case 13788:
    spellname = "Lightning Reflexes";
    break;
  case 13789:
    spellname = "Lightning Reflexes";
    break;
  case 13790:
    spellname = "Lightning Reflexes";
    break;
  case 13791:
    spellname = "Lightning Reflexes";
    break;
  case 13792:
    spellname = "Improved Gouge";
    break;
  case 13793:
    spellname = "Improved Gouge";
    break;
  case 13794:
    spellname = "Enchant Cloak - Resistance";
    break;
  case 13795:
    spellname = "Immolation Trap";
    break;
  case 13796:
    spellname = "Resistance";
    break;
  case 13797:
    spellname = "Immolation Trap Effect";
    break;
  case 13800:
    spellname = "Mace Specialization";
    break;
  case 13801:
    spellname = "Mace Specialization";
    break;
  case 13802:
    spellname = "Mace Specialization";
    break;
  case 13803:
    spellname = "Mace Specialization";
    break;
  case 13804:
    spellname = "Dagger Specialization";
    break;
  case 13805:
    spellname = "Dagger Specialization";
    break;
  case 13806:
    spellname = "Dagger Specialization";
    break;
  case 13807:
    spellname = "Dagger Specialization";
    break;
  case 13808:
    spellname = "M73 Frag Grenade";
    break;
  case 13809:
    spellname = "Frost Trap";
    break;
  case 13810:
    spellname = "Frost Trap Aura";
    break;
  case 13812:
    spellname = "Explosive Trap Effect";
    break;
  case 13813:
    spellname = "Explosive Trap";
    break;
  case 13815:
    spellname = "Enchant Gloves - Agility";
    break;
  case 13817:
    spellname = "Enchant Shield - Stamina";
    break;
  case 13819:
    spellname = "Summon Warhorse";
    break;
  case 13820:
    spellname = "Summon Warhorse";
    break;
  case 13821:
    spellname = "Goblin Rocket Helmet";
    break;
  case 13822:
    spellname = "Enchant Bracer - Intellect";
    break;
  case 13823:
    spellname = "Greater Agility";
    break;
  case 13824:
    spellname = "Stats";
    break;
  case 13825:
    spellname = "Greater Intellect";
    break;
  case 13826:
    spellname = "Greater Spirit";
    break;
  case 13827:
    spellname = "Greater Stamina";
    break;
  case 13828:
    spellname = "Greater Strength";
    break;
  case 13830:
    spellname = "Increase Fire Dam 29";
    break;
  case 13831:
    spellname = "Increase Frost Dam 29";
    break;
  case 13832:
    spellname = "Precision";
    break;
  case 13836:
    spellname = "Enchant Boots - Stamina";
    break;
  case 13838:
    spellname = "Advanced Mining";
    break;
  case 13839:
    spellname = "Advanced Herbalism";
    break;
  case 13840:
    spellname = "Lesser Stealth";
    break;
  case 13841:
    spellname = "Enchant Gloves - Advanced Mining";
    break;
  case 13843:
    spellname = "Precision";
    break;
  case 13844:
    spellname = "Precision";
    break;
  case 13845:
    spellname = "Precision";
    break;
  case 13846:
    spellname = "Enchant Bracer - Greater Spirit";
    break;
  case 13847:
    spellname = "Recklessness";
    break;
  case 13848:
    spellname = "Dual Wield Specialization";
    break;
  case 13849:
    spellname = "Dual Wield Specialization";
    break;
  case 13851:
    spellname = "Dual Wield Specialization";
    break;
  case 13852:
    spellname = "Dual Wield Specialization";
    break;
  case 13853:
    spellname = "Deflection";
    break;
  case 13854:
    spellname = "Deflection";
    break;
  case 13855:
    spellname = "Deflection";
    break;
  case 13856:
    spellname = "Deflection";
    break;
  case 13857:
    spellname = "Prayer of Healing";
    break;
  case 13858:
    spellname = "Enchant Chest - Superior Health";
    break;
  case 13860:
    spellname = "Mind Blast";
    break;
  case 13862:
    spellname = "Superior Health";
    break;
  case 13863:
    spellname = "Improved Sinister Strike";
    break;
  case 13864:
    spellname = "Power Word: Fortitude";
    break;
  case 13865:
    spellname = "Puncturing Wounds";
    break;
  case 13866:
    spellname = "Puncturing Wounds";
    break;
  case 13867:
    spellname = "Improved Kick";
    break;
  case 13868:
    spellname = "Enchant Gloves - Advanced Herbalism";
    break;
  case 13872:
    spellname = "Endurance";
    break;
  case 13874:
    spellname = "Divine Shield";
    break;
  case 13875:
    spellname = "Improved Sprint";
    break;
  case 13877:
    spellname = "Blade Flurry";
    break;
  case 13878:
    spellname = "Scorch";
    break;
  case 13879:
    spellname = "Magma Splash";
    break;
  case 13880:
    spellname = "Magma Splash";
    break;
  case 13881:
    spellname = "Increase Spell Dam 29";
    break;
  case 13882:
    spellname = "Enchant Cloak - Lesser Agility";
    break;
  case 13884:
    spellname = "Withering Poison";
    break;
  case 13886:
    spellname = "Withering Poison Proc";
    break;
  case 13887:
    spellname = "Enchant Gloves - Strength";
    break;
  case 13889:
    spellname = "Minor Speed";
    break;
  case 13890:
    spellname = "Enchant Boots - Minor Speed";
    break;
  case 13895:
    spellname = "Summon Spawn of Bael'Gar";
    break;
  case 13896:
    spellname = "Feedback";
    break;
  case 13897:
    spellname = "Fiery Weapon";
    break;
  case 13898:
    spellname = "Enchant Weapon - Fiery Weapon";
    break;
  case 13899:
    spellname = "Fire Storm";
    break;
  case 13900:
    spellname = "Fiery Burst";
    break;
  case 13901:
    spellname = "Arcane Bolt";
    break;
  case 13902:
    spellname = "Fist of Ragnaros";
    break;
  case 13903:
    spellname = "Seal of Sacrifice";
    break;
  case 13905:
    spellname = "Enchant Shield - Greater Spirit";
    break;
  case 13907:
    spellname = "Smite Demon";
    break;
  case 13908:
    spellname = "Desperate Prayer";
    break;
  case 13910:
    spellname = "Force Create Elemental Totem";
    break;
  case 13912:
    spellname = "Princess Summons Portal";
    break;
  case 13913:
    spellname = "Blazerunner's Aura";
    break;
  case 13914:
    spellname = "Blazerunner's Aura";
    break;
  case 13915:
    spellname = "Enchant Weapon - Demonslaying";
    break;
  case 13917:
    spellname = "Enchant Chest - Superior Mana";
    break;
  case 13918:
    spellname = "Superior Mana";
    break;
  case 13920:
    spellname = "Enchanting";
    break;
  case 13921:
    spellname = "Artisan Enchanting";
    break;
  case 13922:
    spellname = "Deflection";
    break;
  case 13923:
    spellname = "Frost Resistance";
    break;
  case 13927:
    spellname = "Minor Mount Speed";
    break;
  case 13928:
    spellname = "Minor Haste";
    break;
  case 13930:
    spellname = "Lesser Deflection";
    break;
  case 13931:
    spellname = "Enchant Bracer - Deflection";
    break;
  case 13933:
    spellname = "Enchant Shield - Frost Resistance";
    break;
  case 13935:
    spellname = "Enchant Boots - Agility";
    break;
  case 13937:
    spellname = "Enchant 2H Weapon - Greater Impact";
    break;
  case 13939:
    spellname = "Enchant Bracer - Greater Strength";
    break;
  case 13941:
    spellname = "Enchant Chest - Stats";
    break;
  case 13943:
    spellname = "Enchant Weapon - Greater Striking";
    break;
  case 13945:
    spellname = "Enchant Bracer - Greater Stamina";
    break;
  case 13947:
    spellname = "Enchant Gloves - Riding Skill";
    break;
  case 13948:
    spellname = "Enchant Gloves - Minor Haste";
    break;
  case 13951:
    spellname = "Rebuild";
    break;
  case 13952:
    spellname = "Holy Light";
    break;
  case 13953:
    spellname = "Holy Strike";
    break;
  case 13954:
    spellname = "NPC PORT TEST";
    break;
  case 13958:
    spellname = "Master of Deception";
    break;
  case 13959:
    spellname = "Electrostatic Charge";
    break;
  case 13960:
    spellname = "Sword Specialization";
    break;
  case 13961:
    spellname = "Sword Specialization";
    break;
  case 13962:
    spellname = "Sword Specialization";
    break;
  case 13963:
    spellname = "Sword Specialization";
    break;
  case 13964:
    spellname = "Sword Specialization";
    break;
  case 13965:
    spellname = "Create Krom'zar's Banner";
    break;
  case 13966:
    spellname = "Fist Weapon Specialization";
    break;
  case 13967:
    spellname = "Fist Weapon Specialization";
    break;
  case 13968:
    spellname = "Fist Weapon Specialization";
    break;
  case 13969:
    spellname = "Fist Weapon Specialization";
    break;
  case 13970:
    spellname = "Master of Deception";
    break;
  case 13971:
    spellname = "Master of Deception";
    break;
  case 13972:
    spellname = "Master of Deception";
    break;
  case 13973:
    spellname = "Master of Deception";
    break;
  case 13975:
    spellname = "Camouflage";
    break;
  case 13976:
    spellname = "Initiative";
    break;
  case 13977:
    spellname = "Initiative";
    break;
  case 13978:
    spellname = "Summon Aquementas";
    break;
  case 13979:
    spellname = "Initiative";
    break;
  case 13980:
    spellname = "Initiative";
    break;
  case 13981:
    spellname = "Elusiveness";
    break;
  case 13982:
    spellname = "Bael'Gar's Fiery Essence";
    break;
  case 13983:
    spellname = "Setup";
    break;
  case 14008:
    spellname = "Miblon's Bait";
    break;
  case 14027:
    spellname = "Attack Power 24";
    break;
  case 14030:
    spellname = "Hooked Net";
    break;
  case 14032:
    spellname = "Shadow Word: Pain";
    break;
  case 14033:
    spellname = "Mana Burn";
    break;
  case 14034:
    spellname = "Fireball";
    break;
  case 14047:
    spellname = "Increase Spell Dam 23";
    break;
  case 14048:
    spellname = "Increased 1H Axe";
    break;
  case 14049:
    spellname = "Attack Power 40";
    break;
  case 14050:
    spellname = "Quest Suicide";
    break;
  case 14051:
    spellname = "Increased Dagger";
    break;
  case 14052:
    spellname = "Attack Power 60";
    break;
  case 14053:
    spellname = "Heal";
    break;
  case 14054:
    spellname = "Increase Spell Dam 27";
    break;
  case 14055:
    spellname = "Increase Spell Dam 35";
    break;
  case 14056:
    spellname = "Attack Power 50";
    break;
  case 14057:
    spellname = "Opportunity";
    break;
  case 14062:
    spellname = "Camouflage";
    break;
  case 14063:
    spellname = "Camouflage";
    break;
  case 14064:
    spellname = "Camouflage";
    break;
  case 14065:
    spellname = "Camouflage";
    break;
  case 14066:
    spellname = "Elusiveness";
    break;
  case 14070:
    spellname = "Setup";
    break;
  case 14071:
    spellname = "Setup";
    break;
  case 14072:
    spellname = "Opportunity";
    break;
  case 14073:
    spellname = "Opportunity";
    break;
  case 14074:
    spellname = "Opportunity";
    break;
  case 14075:
    spellname = "Opportunity";
    break;
  case 14076:
    spellname = "Dirty Tricks";
    break;
  case 14079:
    spellname = "Improved Ambush";
    break;
  case 14080:
    spellname = "Improved Ambush";
    break;
  case 14081:
    spellname = "Improved Ambush";
    break;
  case 14082:
    spellname = "Dirty Deeds";
    break;
  case 14083:
    spellname = "Dirty Deeds";
    break;
  case 14087:
    spellname = "Rend";
    break;
  case 14089:
    spellname = "Attack Power 36";
    break;
  case 14093:
    spellname = "Vanished";
    break;
  case 14094:
    spellname = "Dirty Tricks";
    break;
  case 14097:
    spellname = "Demon Slaying 45";
    break;
  case 14098:
    spellname = "Demon Slaying 117";
    break;
  case 14099:
    spellname = "Mighty Blow";
    break;
  case 14100:
    spellname = "Terrifying Roar";
    break;
  case 14102:
    spellname = "Head Smash";
    break;
  case 14103:
    spellname = "Firebolt";
    break;
  case 14104:
    spellname = "Spikes";
    break;
  case 14105:
    spellname = "Frost Blast";
    break;
  case 14106:
    spellname = "Shadow Bolt";
    break;
  case 14108:
    spellname = "Venomhide Poison";
    break;
  case 14109:
    spellname = "Lightning Bolt";
    break;
  case 14110:
    spellname = "Bloodpetal Poison";
    break;
  case 14111:
    spellname = "Bloodpetal Poison Proc";
    break;
  case 14112:
    spellname = "Flaying Vine";
    break;
  case 14113:
    spellname = "Improved Poisons";
    break;
  case 14114:
    spellname = "Improved Poisons";
    break;
  case 14115:
    spellname = "Improved Poisons";
    break;
  case 14116:
    spellname = "Improved Poisons";
    break;
  case 14117:
    spellname = "Improved Poisons";
    break;
  case 14118:
    spellname = "Rend";
    break;
  case 14119:
    spellname = "Lightning Bolt";
    break;
  case 14120:
    spellname = "Tunneler Acid";
    break;
  case 14121:
    spellname = "Increased 1H Sword";
    break;
  case 14122:
    spellname = "Shadow Bolt";
    break;
  case 14124:
    spellname = "Increased 2H Mace";
    break;
  case 14125:
    spellname = "Opening Secret Safe";
    break;
  case 14126:
    spellname = "Wound";
    break;
  case 14127:
    spellname = "Increase Spell Dam 28";
    break;
  case 14128:
    spellname = "Lethality";
    break;
  case 14129:
    spellname = "Item - Purify";
    break;
  case 14130:
    spellname = "Muculent Fever";
    break;
  case 14132:
    spellname = "Lethality";
    break;
  case 14133:
    spellname = "Muculent Fever Proc";
    break;
  case 14134:
    spellname = "Item - Purify";
    break;
  case 14135:
    spellname = "Lethality";
    break;
  case 14136:
    spellname = "Lethality";
    break;
  case 14137:
    spellname = "Lethality";
    break;
  case 14138:
    spellname = "Malice";
    break;
  case 14139:
    spellname = "Malice";
    break;
  case 14140:
    spellname = "Malice";
    break;
  case 14141:
    spellname = "Malice";
    break;
  case 14142:
    spellname = "Malice";
    break;
  case 14143:
    spellname = "Remorseless";
    break;
  case 14144:
    spellname = "Remorseless Attacks";
    break;
  case 14145:
    spellname = "Fire Blast";
    break;
  case 14146:
    spellname = "Clone";
    break;
  case 14147:
    spellname = "Acid Slime";
    break;
  case 14148:
    spellname = "Remorseless Attacks";
    break;
  case 14149:
    spellname = "Remorseless";
    break;
  case 14156:
    spellname = "Ruthlessness";
    break;
  case 14157:
    spellname = "Ruthlessness";
    break;
  case 14158:
    spellname = "Murder";
    break;
  case 14159:
    spellname = "Murder";
    break;
  case 14160:
    spellname = "Ruthlessness";
    break;
  case 14161:
    spellname = "Ruthlessness";
    break;
  case 14162:
    spellname = "Improved Eviscerate";
    break;
  case 14163:
    spellname = "Improved Eviscerate";
    break;
  case 14164:
    spellname = "Improved Eviscerate";
    break;
  case 14165:
    spellname = "Improved Slice and Dice";
    break;
  case 14166:
    spellname = "Improved Slice and Dice";
    break;
  case 14167:
    spellname = "Improved Slice and Dice";
    break;
  case 14168:
    spellname = "Improved Expose Armor";
    break;
  case 14169:
    spellname = "Improved Expose Armor";
    break;
  case 14171:
    spellname = "Serrated Blades";
    break;
  case 14172:
    spellname = "Serrated Blades";
    break;
  case 14173:
    spellname = "Serrated Blades";
    break;
  case 14174:
    spellname = "Improved Kidney Shot";
    break;
  case 14175:
    spellname = "Improved Kidney Shot";
    break;
  case 14176:
    spellname = "Improved Kidney Shot";
    break;
  case 14177:
    spellname = "Cold Blood";
    break;
  case 14178:
    spellname = "Sticky Tar";
    break;
  case 14179:
    spellname = "Relentless Strikes";
    break;
  case 14180:
    spellname = "Sticky Tar";
    break;
  case 14181:
    spellname = "Relentless Strikes Effect";
    break;
  case 14183:
    spellname = "Premeditation";
    break;
  case 14185:
    spellname = "Preparation";
    break;
  case 14186:
    spellname = "Seal Fate";
    break;
  case 14189:
    spellname = "Seal Fate";
    break;
  case 14190:
    spellname = "Seal Fate";
    break;
  case 14193:
    spellname = "Seal Fate";
    break;
  case 14194:
    spellname = "Seal Fate";
    break;
  case 14195:
    spellname = "Seal Fate";
    break;
  case 14198:
    spellname = "Beast Slaying 27";
    break;
  case 14199:
    spellname = "Create Samophlange Manual";
    break;
  case 14200:
    spellname = "Chained Bolt";
    break;
  case 14201:
    spellname = "Enrage";
    break;
  case 14202:
    spellname = "Enrage";
    break;
  case 14203:
    spellname = "Enrage";
    break;
  case 14204:
    spellname = "Enrage";
    break;
  case 14205:
    spellname = "Gorishi Egg";
    break;
  case 14206:
    spellname = "Summon Gorishi Grub";
    break;
  case 14208:
    spellname = "JD Explosion";
    break;
  case 14209:
    spellname = "Signing";
    break;
  case 14210:
    spellname = "Signing";
    break;
  case 14227:
    spellname = "Signing";
    break;
  case 14247:
    spellname = "Blazerunner Dispel";
    break;
  case 14248:
    spellname = "Increase Spell Dam 21";
    break;
  case 14249:
    spellname = "Increased Defense";
    break;
  case 14250:
    spellname = "Capture Grark";
    break;
  case 14251:
    spellname = "Riposte";
    break;
  case 14253:
    spellname = "Abolish Poison";
    break;
  case 14254:
    spellname = "Increase Spell Dam 19";
    break;
  case 14260:
    spellname = "Raptor Strike";
    break;
  case 14261:
    spellname = "Raptor Strike";
    break;
  case 14262:
    spellname = "Raptor Strike";
    break;
  case 14263:
    spellname = "Raptor Strike";
    break;
  case 14264:
    spellname = "Raptor Strike";
    break;
  case 14265:
    spellname = "Raptor Strike";
    break;
  case 14266:
    spellname = "Raptor Strike";
    break;
  case 14267:
    spellname = "Wing Clip";
    break;
  case 14268:
    spellname = "Wing Clip";
    break;
  case 14269:
    spellname = "Mongoose Bite";
    break;
  case 14270:
    spellname = "Mongoose Bite";
    break;
  case 14271:
    spellname = "Mongoose Bite";
    break;
  case 14272:
    spellname = "Disengage";
    break;
  case 14273:
    spellname = "Disengage";
    break;
  case 14274:
    spellname = "Distracting Shot";
    break;
  case 14278:
    spellname = "Ghostly Strike";
    break;
  case 14279:
    spellname = "Viper Sting";
    break;
  case 14280:
    spellname = "Viper Sting";
    break;
  case 14281:
    spellname = "Arcane Shot";
    break;
  case 14282:
    spellname = "Arcane Shot";
    break;
  case 14283:
    spellname = "Arcane Shot";
    break;
  case 14284:
    spellname = "Arcane Shot";
    break;
  case 14285:
    spellname = "Arcane Shot";
    break;
  case 14286:
    spellname = "Arcane Shot";
    break;
  case 14287:
    spellname = "Arcane Shot";
    break;
  case 14288:
    spellname = "Multi-Shot";
    break;
  case 14289:
    spellname = "Multi-Shot";
    break;
  case 14290:
    spellname = "Multi-Shot";
    break;
  case 14292:
    spellname = "Fling Torch";
    break;
  case 14293:
    spellname = "Lesser Magic Wand";
    break;
  case 14294:
    spellname = "Volley";
    break;
  case 14295:
    spellname = "Volley";
    break;
  case 14296:
    spellname = "Black Arrow";
    break;
  case 14297:
    spellname = "Shadow Storm";
    break;
  case 14298:
    spellname = "Immolation Trap Effect";
    break;
  case 14299:
    spellname = "Immolation Trap Effect";
    break;
  case 14300:
    spellname = "Immolation Trap Effect";
    break;
  case 14301:
    spellname = "Immolation Trap Effect";
    break;
  case 14302:
    spellname = "Immolation Trap";
    break;
  case 14303:
    spellname = "Immolation Trap";
    break;
  case 14304:
    spellname = "Immolation Trap";
    break;
  case 14305:
    spellname = "Immolation Trap";
    break;
  case 14308:
    spellname = "Freezing Trap Effect";
    break;
  case 14309:
    spellname = "Freezing Trap Effect";
    break;
  case 14310:
    spellname = "Freezing Trap";
    break;
  case 14311:
    spellname = "Freezing Trap";
    break;
  case 14314:
    spellname = "Explosive Trap Effect";
    break;
  case 14315:
    spellname = "Explosive Trap Effect";
    break;
  case 14316:
    spellname = "Explosive Trap";
    break;
  case 14317:
    spellname = "Explosive Trap";
    break;
  case 14318:
    spellname = "Aspect of the Hawk";
    break;
  case 14319:
    spellname = "Aspect of the Hawk";
    break;
  case 14320:
    spellname = "Aspect of the Hawk";
    break;
  case 14321:
    spellname = "Aspect of the Hawk";
    break;
  case 14322:
    spellname = "Aspect of the Hawk";
    break;
  case 14323:
    spellname = "Hunter's Mark";
    break;
  case 14324:
    spellname = "Hunter's Mark";
    break;
  case 14325:
    spellname = "Hunter's Mark";
    break;
  case 14326:
    spellname = "Scare Beast";
    break;
  case 14327:
    spellname = "Scare Beast";
    break;
  case 14330:
    spellname = "Increased Agility 16";
    break;
  case 14331:
    spellname = "Vicious Rend";
    break;
  case 14369:
    spellname = "Increased Agility 17";
    break;
  case 14371:
    spellname = "Increased Agility 18";
    break;
  case 14379:
    spellname = "Golden Rod";
    break;
  case 14380:
    spellname = "Truesilver Rod";
    break;
  case 14383:
    spellname = "Increased Agility 19";
    break;
  case 14384:
    spellname = "Increased Agility 20";
    break;
  case 14385:
    spellname = "Increased Agility 21";
    break;
  case 14386:
    spellname = "Increased Agility 22";
    break;
  case 14387:
    spellname = "Increased Agility 23";
    break;
  case 14388:
    spellname = "Increased Agility 24";
    break;
  case 14389:
    spellname = "Increased Agility 25";
    break;
  case 14390:
    spellname = "Increased Agility 26";
    break;
  case 14391:
    spellname = "Increased Agility 27";
    break;
  case 14392:
    spellname = "Increased Agility 28";
    break;
  case 14393:
    spellname = "Increased Agility 29";
    break;
  case 14394:
    spellname = "Increased Agility 30";
    break;
  case 14395:
    spellname = "Increased Agility 31";
    break;
  case 14396:
    spellname = "Increased Agility 32";
    break;
  case 14397:
    spellname = "Increased Agility 33";
    break;
  case 14398:
    spellname = "Increased Agility 34";
    break;
  case 14399:
    spellname = "Increased Agility 35";
    break;
  case 14400:
    spellname = "Increased Agility 36";
    break;
  case 14401:
    spellname = "Increased Agility 37";
    break;
  case 14402:
    spellname = "Increased Agility 38";
    break;
  case 14403:
    spellname = "Increased Agility 39";
    break;
  case 14404:
    spellname = "Increased Agility 40";
    break;
  case 14405:
    spellname = "Increased Intellect 15";
    break;
  case 14406:
    spellname = "Increased Intellect 16";
    break;
  case 14407:
    spellname = "Increased Intellect 17";
    break;
  case 14408:
    spellname = "Increased Intellect 18";
    break;
  case 14409:
    spellname = "Increased Intellect 19";
    break;
  case 14410:
    spellname = "Increased Intellect 20";
    break;
  case 14411:
    spellname = "Increased Intellect 21";
    break;
  case 14412:
    spellname = "Increased Intellect 22";
    break;
  case 14413:
    spellname = "Increased Intellect 23";
    break;
  case 14414:
    spellname = "Increased Intellect 24";
    break;
  case 14415:
    spellname = "Increased Intellect 25";
    break;
  case 14416:
    spellname = "Increased Intellect 26";
    break;
  case 14417:
    spellname = "Increased Intellect 27";
    break;
  case 14418:
    spellname = "Increased Intellect 28";
    break;
  case 14419:
    spellname = "Increased Intellect 29";
    break;
  case 14420:
    spellname = "Increased Intellect 30";
    break;
  case 14421:
    spellname = "Increased Intellect 31";
    break;
  case 14422:
    spellname = "Increased Intellect 32";
    break;
  case 14423:
    spellname = "Increased Intellect 33";
    break;
  case 14424:
    spellname = "Increased Intellect 34";
    break;
  case 14425:
    spellname = "Increased Intellect 35";
    break;
  case 14426:
    spellname = "Increased Intellect 36";
    break;
  case 14427:
    spellname = "Increased Intellect 37";
    break;
  case 14428:
    spellname = "Increased Intellect 38";
    break;
  case 14429:
    spellname = "Increased Intellect 39";
    break;
  case 14430:
    spellname = "Increased Intellect 40";
    break;
  case 14433:
    spellname = "Increased Spirit 15";
    break;
  case 14435:
    spellname = "Increased Spirit 16";
    break;
  case 14436:
    spellname = "Increased Spirit 17";
    break;
  case 14437:
    spellname = "Increased Spirit 18";
    break;
  case 14438:
    spellname = "Increased Spirit 19";
    break;
  case 14439:
    spellname = "Increased Spirit 20";
    break;
  case 14440:
    spellname = "Increased Spirit 21";
    break;
  case 14441:
    spellname = "Increased Spirit 22";
    break;
  case 14442:
    spellname = "Increased Spirit 23";
    break;
  case 14443:
    spellname = "Multi-Shot";
    break;
  case 14444:
    spellname = "Increased Spirit 24";
    break;
  case 14447:
    spellname = "Increased Spirit 25";
    break;
  case 14448:
    spellname = "Increased Spirit 26";
    break;
  case 14449:
    spellname = "Increased Spirit 27";
    break;
  case 14450:
    spellname = "Increased Spirit 28";
    break;
  case 14451:
    spellname = "Increased Spirit 29";
    break;
  case 14452:
    spellname = "Increased Spirit 30";
    break;
  case 14453:
    spellname = "Increased Spirit 31";
    break;
  case 14454:
    spellname = "Increased Spirit 32";
    break;
  case 14455:
    spellname = "Increased Spirit 33";
    break;
  case 14456:
    spellname = "Increased Spirit 34";
    break;
  case 14457:
    spellname = "Increased Spirit 36";
    break;
  case 14458:
    spellname = "Increased Spirit 37";
    break;
  case 14459:
    spellname = "Increased Spirit 38";
    break;
  case 14460:
    spellname = "Increased Spirit 39";
    break;
  case 14461:
    spellname = "Increased Spirit 40";
    break;
  case 14462:
    spellname = "Increased Stamina 15";
    break;
  case 14463:
    spellname = "Increased Stamina 16";
    break;
  case 14464:
    spellname = "Increased Stamina 17";
    break;
  case 14465:
    spellname = "Increased Stamina 18";
    break;
  case 14466:
    spellname = "Increased Stamina 19";
    break;
  case 14467:
    spellname = "Increased Stamina 20";
    break;
  case 14468:
    spellname = "Increased Stamina 21";
    break;
  case 14469:
    spellname = "Increased Stamina 22";
    break;
  case 14470:
    spellname = "Increased Stamina 23";
    break;
  case 14471:
    spellname = "Increased Stamina 24";
    break;
  case 14472:
    spellname = "Increased Stamina 25";
    break;
  case 14473:
    spellname = "Increased Stamina 26";
    break;
  case 14474:
    spellname = "Increased Stamina 27";
    break;
  case 14475:
    spellname = "Increased Stamina 28";
    break;
  case 14476:
    spellname = "Increased Stamina 29";
    break;
  case 14477:
    spellname = "Increased Stamina 30";
    break;
  case 14478:
    spellname = "Increased Stamina 31";
    break;
  case 14479:
    spellname = "Increased Stamina 32";
    break;
  case 14480:
    spellname = "Increased Stamina 33";
    break;
  case 14481:
    spellname = "Increased Stamina 34";
    break;
  case 14482:
    spellname = "Increased Stamina 35";
    break;
  case 14483:
    spellname = "Increased Stamina 36";
    break;
  case 14484:
    spellname = "Increased Stamina 37";
    break;
  case 14485:
    spellname = "Increased Stamina 38";
    break;
  case 14486:
    spellname = "Increased Stamina 39";
    break;
  case 14487:
    spellname = "Increased Stamina 40";
    break;
  case 14488:
    spellname = "Increased Strength 16";
    break;
  case 14489:
    spellname = "Increased Strength 17";
    break;
  case 14490:
    spellname = "Increased Strength 18";
    break;
  case 14491:
    spellname = "Increased Strength 19";
    break;
  case 14492:
    spellname = "Increased Strength 20";
    break;
  case 14493:
    spellname = "Increased Strength 21";
    break;
  case 14494:
    spellname = "Increased Strength 22";
    break;
  case 14495:
    spellname = "Increased Strength 23";
    break;
  case 14496:
    spellname = "Increased Strength 24";
    break;
  case 14497:
    spellname = "Increased Strength 25";
    break;
  case 14498:
    spellname = "Increased Strength 26";
    break;
  case 14499:
    spellname = "Increased Strength 27";
    break;
  case 14500:
    spellname = "Increased Strength 28";
    break;
  case 14501:
    spellname = "Increased Strength 29";
    break;
  case 14502:
    spellname = "Increased Strength 30";
    break;
  case 14503:
    spellname = "Increased Strength 31";
    break;
  case 14504:
    spellname = "Increased Strength 32";
    break;
  case 14505:
    spellname = "Increased Strength 33";
    break;
  case 14506:
    spellname = "Increased Strength 34";
    break;
  case 14507:
    spellname = "Increased Strength 35";
    break;
  case 14508:
    spellname = "Increased Strength 36";
    break;
  case 14509:
    spellname = "Increased Strength 37";
    break;
  case 14510:
    spellname = "Increased Strength 38";
    break;
  case 14511:
    spellname = "Increased Strength 39";
    break;
  case 14512:
    spellname = "Increased Strength 40";
    break;
  case 14514:
    spellname = "Blink";
    break;
  case 14515:
    spellname = "Dominate Mind";
    break;
  case 14516:
    spellname = "Strike";
    break;
  case 14517:
    spellname = "Crusader Strike";
    break;
  case 14518:
    spellname = "Crusader Strike";
    break;
  case 14520:
    spellname = "Mental Agility";
    break;
  case 14521:
    spellname = "Meditation";
    break;
  case 14522:
    spellname = "Unbreakable Will";
    break;
  case 14523:
    spellname = "Silent Resolve";
    break;
  case 14524:
    spellname = "Wand Specialization";
    break;
  case 14525:
    spellname = "Wand Specialization";
    break;
  case 14526:
    spellname = "Wand Specialization";
    break;
  case 14527:
    spellname = "Wand Specialization";
    break;
  case 14528:
    spellname = "Wand Specialization";
    break;
  case 14530:
    spellname = "Speed";
    break;
  case 14531:
    spellname = "Martyrdom";
    break;
  case 14532:
    spellname = "Creeper Venom";
    break;
  case 14533:
    spellname = "Disjunction";
    break;
  case 14534:
    spellname = "Barbed Sting";
    break;
  case 14535:
    spellname = "Dredge Sickness";
    break;
  case 14537:
    spellname = "Six Demon Bag";
    break;
  case 14538:
    spellname = "Aural Shock";
    break;
  case 14539:
    spellname = "Putrid Enzyme";
    break;
  case 14540:
    spellname = "Increased Fire Resist 01";
    break;
  case 14541:
    spellname = "Increased Frost Resist 01";
    break;
  case 14542:
    spellname = "Increased Frost Resist 02";
    break;
  case 14543:
    spellname = "Increased Frost Resist 06";
    break;
  case 14544:
    spellname = "Increased Frost Resist 03";
    break;
  case 14545:
    spellname = "Increased Frost Resist 04";
    break;
  case 14546:
    spellname = "Increased Frost Resist 05";
    break;
  case 14547:
    spellname = "Increased Frost Resist 07";
    break;
  case 14548:
    spellname = "Increased Frost Resist 08";
    break;
  case 14549:
    spellname = "Increased Frost Resist 09";
    break;
  case 14550:
    spellname = "Increased Frost Resist 10";
    break;
  case 14551:
    spellname = "Increased Frost Resist 11";
    break;
  case 14552:
    spellname = "Increased Frost Resist 12";
    break;
  case 14553:
    spellname = "Increased Frost Resist 14";
    break;
  case 14554:
    spellname = "Increased Frost Resist 13";
    break;
  case 14555:
    spellname = "Increased Frost Resist 15";
    break;
  case 14556:
    spellname = "Increased Frost Resist 16";
    break;
  case 14557:
    spellname = "Increased Frost Resist 17";
    break;
  case 14558:
    spellname = "Increased Frost Resist 19";
    break;
  case 14559:
    spellname = "Increased Frost Resist 20";
    break;
  case 14560:
    spellname = "Increased Frost Resist 21";
    break;
  case 14561:
    spellname = "Increased Frost Resist 22";
    break;
  case 14562:
    spellname = "Increased Frost Resist 23";
    break;
  case 14563:
    spellname = "Increased Frost Resist 25";
    break;
  case 14564:
    spellname = "Increased Frost Resist 26";
    break;
  case 14565:
    spellname = "Beast Slaying 30";
    break;
  case 14566:
    spellname = "Increased Frost Resist 27";
    break;
  case 14567:
    spellname = "Increased Frost Resist 28";
    break;
  case 14568:
    spellname = "Increased Frost Resist 29";
    break;
  case 14569:
    spellname = "Increased Frost Resist 30";
    break;
  case 14570:
    spellname = "Increased Frost Resist 31";
    break;
  case 14571:
    spellname = "Increased Frost Resist 32";
    break;
  case 14572:
    spellname = "Increased Frost Resist 33";
    break;
  case 14573:
    spellname = "Increased Frost Resist 34";
    break;
  case 14574:
    spellname = "Increased Frost Resist 35";
    break;
  case 14575:
    spellname = "Increased Frost Resist 36";
    break;
  case 14576:
    spellname = "Increased Frost Resist 37";
    break;
  case 14577:
    spellname = "Increased Frost Resist 38";
    break;
  case 14578:
    spellname = "Increased Frost Resist 39";
    break;
  case 14579:
    spellname = "Increased Frost Resist 40";
    break;
  case 14580:
    spellname = "Increased Frost Resist 18";
    break;
  case 14581:
    spellname = "Increased Frost Resist 24";
    break;
  case 14582:
    spellname = "Increased Fire Resist 02";
    break;
  case 14583:
    spellname = "Increased Fire Resist 03";
    break;
  case 14584:
    spellname = "Increased Fire Resist 04";
    break;
  case 14585:
    spellname = "Increased Fire Resist 05";
    break;
  case 14586:
    spellname = "Increased Fire Resist 06";
    break;
  case 14587:
    spellname = "Increased Fire Resist 07";
    break;
  case 14588:
    spellname = "Increased Fire Resist 08";
    break;
  case 14589:
    spellname = "Increased Fire Resist 09";
    break;
  case 14590:
    spellname = "Increased Fire Resist 10";
    break;
  case 14591:
    spellname = "Increased Fire Resist 11";
    break;
  case 14592:
    spellname = "Increased Fire Resist 12";
    break;
  case 14593:
    spellname = "Increased Fire Resist 13";
    break;
  case 14594:
    spellname = "Increased Fire Resist 14";
    break;
  case 14595:
    spellname = "Increased Fire Resist 15";
    break;
  case 14596:
    spellname = "Increased Fire Resist 16";
    break;
  case 14597:
    spellname = "Increased Fire Resist 17";
    break;
  case 14598:
    spellname = "Increased Fire Resist 18";
    break;
  case 14599:
    spellname = "Increased Fire Resist 19";
    break;
  case 14600:
    spellname = "Increased Fire Resist 20";
    break;
  case 14601:
    spellname = "Increased Fire Resist 21";
    break;
  case 14602:
    spellname = "Increased Fire Resist 22";
    break;
  case 14603:
    spellname = "Increased Fire Resist 23";
    break;
  case 14604:
    spellname = "Increased Fire Resist 24";
    break;
  case 14605:
    spellname = "Increased Fire Resist 25";
    break;
  case 14606:
    spellname = "Increased Fire Resist 26";
    break;
  case 14607:
    spellname = "Increased Fire Resist 27";
    break;
  case 14608:
    spellname = "Increased Fire Resist 28";
    break;
  case 14609:
    spellname = "Increased Fire Resist 29";
    break;
  case 14610:
    spellname = "Increased Fire Resist 30";
    break;
  case 14611:
    spellname = "Increased Fire Resist 31";
    break;
  case 14612:
    spellname = "Increased Fire Resist 32";
    break;
  case 14613:
    spellname = "Increased Fire Resist 33";
    break;
  case 14614:
    spellname = "Increased Fire Resist 34";
    break;
  case 14615:
    spellname = "Increased Fire Resist 35";
    break;
  case 14616:
    spellname = "Increased Fire Resist 36";
    break;
  case 14617:
    spellname = "Increased Fire Resist 37";
    break;
  case 14618:
    spellname = "Increased Fire Resist 38";
    break;
  case 14619:
    spellname = "Increased Fire Resist 39";
    break;
  case 14620:
    spellname = "Increased Fire Resist 40";
    break;
  case 14621:
    spellname = "Polymorph";
    break;
  case 14622:
    spellname = "Increased Nature Resist 01";
    break;
  case 14623:
    spellname = "Increased Nature Resist 02";
    break;
  case 14624:
    spellname = "Increased Nature Resist 03";
    break;
  case 14625:
    spellname = "Increased Nature Resist 04";
    break;
  case 14626:
    spellname = "Increased Nature Resist 05";
    break;
  case 14627:
    spellname = "Increased Nature Resist 07";
    break;
  case 14628:
    spellname = "Increased Nature Resist 08";
    break;
  case 14629:
    spellname = "Increased Nature Resist 09";
    break;
  case 14630:
    spellname = "Increased Nature Resist 10";
    break;
  case 14631:
    spellname = "Increased Nature Resist 06";
    break;
  case 14632:
    spellname = "Increased Nature Resist 11";
    break;
  case 14633:
    spellname = "Increased Nature Resist 12";
    break;
  case 14634:
    spellname = "Increased Nature Resist 13";
    break;
  case 14635:
    spellname = "Increased Nature Resist 14";
    break;
  case 14636:
    spellname = "Increased Nature Resist 15";
    break;
  case 14637:
    spellname = "Increased Nature Resist 16";
    break;
  case 14638:
    spellname = "Increased Nature Resist 17";
    break;
  case 14639:
    spellname = "Increased Nature Resist 18";
    break;
  case 14640:
    spellname = "Increased Nature Resist 19";
    break;
  case 14641:
    spellname = "Increased Nature Resist 20";
    break;
  case 14642:
    spellname = "Summon Felhound Minion";
    break;
  case 14643:
    spellname = "Increased Nature Resist 21";
    break;
  case 14644:
    spellname = "Increased Nature Resist 22";
    break;
  case 14645:
    spellname = "Increased Nature Resist 23";
    break;
  case 14646:
    spellname = "Increased Nature Resist 24";
    break;
  case 14647:
    spellname = "Increased Nature Resist 25";
    break;
  case 14648:
    spellname = "Increased Nature Resist 26";
    break;
  case 14649:
    spellname = "Increased Nature Resist 27";
    break;
  case 14650:
    spellname = "Increased Nature Resist 28";
    break;
  case 14651:
    spellname = "Increased Nature Resist 29";
    break;
  case 14652:
    spellname = "Increased Nature Resist 30";
    break;
  case 14653:
    spellname = "Increased Nature Resist 31";
    break;
  case 14654:
    spellname = "Increased Nature Resist 32";
    break;
  case 14655:
    spellname = "Increased Nature Resist 33";
    break;
  case 14656:
    spellname = "Increased Nature Resist 34";
    break;
  case 14657:
    spellname = "Increased Nature Resist 35";
    break;
  case 14658:
    spellname = "Increased Nature Resist 36";
    break;
  case 14659:
    spellname = "Increased Nature Resist 37";
    break;
  case 14660:
    spellname = "Increased Nature Resist 38";
    break;
  case 14661:
    spellname = "Increased Nature Resist 39";
    break;
  case 14662:
    spellname = "Increased Nature Resist 40";
    break;
  case 14663:
    spellname = "Increased Shadow Resist 01";
    break;
  case 14664:
    spellname = "Increased Arcane Resist 01";
    break;
  case 14665:
    spellname = "Increased Shadow Resist 02";
    break;
  case 14666:
    spellname = "Increased Shadow Resist 03";
    break;
  case 14667:
    spellname = "Increased Shadow Resist 04";
    break;
  case 14668:
    spellname = "Increased Shadow Resist 05";
    break;
  case 14669:
    spellname = "Increased Shadow Resist 06";
    break;
  case 14670:
    spellname = "Increased Shadow Resist 07";
    break;
  case 14671:
    spellname = "Increased Shadow Resist 08";
    break;
  case 14672:
    spellname = "Increased Shadow Resist 09";
    break;
  case 14673:
    spellname = "Increased Shadow Resist 10";
    break;
  case 14674:
    spellname = "Increased Shadow Resist 11";
    break;
  case 14675:
    spellname = "Increased Shadow Resist 12";
    break;
  case 14676:
    spellname = "Increased Shadow Resist 13";
    break;
  case 14677:
    spellname = "Increased Shadow Resist 14";
    break;
  case 14678:
    spellname = "Increased Shadow Resist 15";
    break;
  case 14679:
    spellname = "Increased Shadow Resist 16";
    break;
  case 14680:
    spellname = "Increased Shadow Resist 17";
    break;
  case 14681:
    spellname = "Increased Shadow Resist 18";
    break;
  case 14682:
    spellname = "Increased Shadow Resist 19";
    break;
  case 14683:
    spellname = "Increased Shadow Resist 20";
    break;
  case 14684:
    spellname = "Increased Shadow Resist 21";
    break;
  case 14685:
    spellname = "Increased Shadow Resist 22";
    break;
  case 14686:
    spellname = "Increased Shadow Resist 23";
    break;
  case 14687:
    spellname = "Increased Shadow Resist 24";
    break;
  case 14688:
    spellname = "Increased Shadow Resist 25";
    break;
  case 14689:
    spellname = "Increased Shadow Resist 26";
    break;
  case 14690:
    spellname = "Increased Shadow Resist 27";
    break;
  case 14691:
    spellname = "Increased Shadow Resist 28";
    break;
  case 14692:
    spellname = "Increased Shadow Resist 29";
    break;
  case 14693:
    spellname = "Increased Shadow Resist 30";
    break;
  case 14694:
    spellname = "Increased Shadow Resist 31";
    break;
  case 14695:
    spellname = "Increased Shadow Resist 32";
    break;
  case 14696:
    spellname = "Increased Shadow Resist 33";
    break;
  case 14697:
    spellname = "Increased Shadow Resist 35";
    break;
  case 14698:
    spellname = "Increased Shadow Resist 36";
    break;
  case 14699:
    spellname = "Increased Shadow Resist 37";
    break;
  case 14700:
    spellname = "Increased Shadow Resist 38";
    break;
  case 14701:
    spellname = "Increased Shadow Resist 39";
    break;
  case 14702:
    spellname = "Increased Shadow Resist 40";
    break;
  case 14703:
    spellname = "Increased Shadow Resist 34";
    break;
  case 14704:
    spellname = "Increased Arcane Resist 02";
    break;
  case 14705:
    spellname = "Increased Arcane Resist 03";
    break;
  case 14706:
    spellname = "Increased Arcane Resist 04";
    break;
  case 14707:
    spellname = "Increased Arcane Resist 05";
    break;
  case 14708:
    spellname = "Increased Arcane Resist 06";
    break;
  case 14709:
    spellname = "Increased Arcane Resist 07";
    break;
  case 14710:
    spellname = "Increased Arcane Resist 08";
    break;
  case 14711:
    spellname = "Increased Arcane Resist 09";
    break;
  case 14712:
    spellname = "Increased Arcane Resist 10";
    break;
  case 14713:
    spellname = "Increased Arcane Resist 11";
    break;
  case 14714:
    spellname = "Increased Arcane Resist 12";
    break;
  case 14715:
    spellname = "Increased Arcane Resist 13";
    break;
  case 14716:
    spellname = "Increased Arcane Resist 14";
    break;
  case 14717:
    spellname = "Increased Arcane Resist 15";
    break;
  case 14718:
    spellname = "Increased Arcane Resist 16";
    break;
  case 14719:
    spellname = "Increased Arcane Resist 17";
    break;
  case 14720:
    spellname = "Increased Arcane Resist 18";
    break;
  case 14721:
    spellname = "Increased Arcane Resist 19";
    break;
  case 14722:
    spellname = "Increased Arcane Resist 20";
    break;
  case 14723:
    spellname = "Increased Arcane Resist 21";
    break;
  case 14724:
    spellname = "Increased Arcane Resist 22";
    break;
  case 14725:
    spellname = "Increased Arcane Resist 23";
    break;
  case 14726:
    spellname = "Increased Arcane Resist 24";
    break;
  case 14727:
    spellname = "Increased Arcane Resist 25";
    break;
  case 14728:
    spellname = "Increased Arcane Resist 26";
    break;
  case 14729:
    spellname = "Increased Arcane Resist 27";
    break;
  case 14730:
    spellname = "Increased Arcane Resist 28";
    break;
  case 14731:
    spellname = "Increased Arcane Resist 29";
    break;
  case 14732:
    spellname = "Increased Arcane Resist 30";
    break;
  case 14733:
    spellname = "Increased Arcane Resist 31";
    break;
  case 14734:
    spellname = "Increased Arcane Resist 32";
    break;
  case 14735:
    spellname = "Increased Arcane Resist 33";
    break;
  case 14736:
    spellname = "Increased Arcane Resist 34";
    break;
  case 14737:
    spellname = "Increased Arcane Resist 35";
    break;
  case 14738:
    spellname = "Increased Arcane Resist 36";
    break;
  case 14739:
    spellname = "Increased Arcane Resist 37";
    break;
  case 14740:
    spellname = "Increased Arcane Resist 38";
    break;
  case 14741:
    spellname = "Increased Arcane Resist 39";
    break;
  case 14742:
    spellname = "Increased Arcane Resist 40";
    break;
  case 14743:
    spellname = "Focused Casting";
    break;
  case 14744:
    spellname = "Burning Spirit";
    break;
  case 14747:
    spellname = "Improved Inner Fire";
    break;
  case 14748:
    spellname = "Improved Power Word: Shield";
    break;
  case 14749:
    spellname = "Improved Power Word: Fortitude";
    break;
  case 14750:
    spellname = "Improved Mana Burn";
    break;
  case 14751:
    spellname = "Inner Focus";
    break;
  case 14752:
    spellname = "Divine Spirit";
    break;
  case 14767:
    spellname = "Improved Power Word: Fortitude";
    break;
  case 14768:
    spellname = "Improved Power Word: Shield";
    break;
  case 14769:
    spellname = "Improved Power Word: Shield";
    break;
  case 14770:
    spellname = "Improved Inner Fire";
    break;
  case 14771:
    spellname = "Improved Inner Fire";
    break;
  case 14772:
    spellname = "Improved Mana Burn";
    break;
  case 14774:
    spellname = "Martyrdom";
    break;
  case 14775:
    spellname = "Stilled";
    break;
  case 14776:
    spellname = "Meditation";
    break;
  case 14777:
    spellname = "Meditation";
    break;
  case 14780:
    spellname = "Mental Agility";
    break;
  case 14781:
    spellname = "Mental Agility";
    break;
  case 14782:
    spellname = "Mental Agility";
    break;
  case 14783:
    spellname = "Mental Agility";
    break;
  case 14784:
    spellname = "Silent Resolve";
    break;
  case 14785:
    spellname = "Silent Resolve";
    break;
  case 14786:
    spellname = "Silent Resolve";
    break;
  case 14787:
    spellname = "Silent Resolve";
    break;
  case 14788:
    spellname = "Unbreakable Will";
    break;
  case 14789:
    spellname = "Unbreakable Will";
    break;
  case 14790:
    spellname = "Unbreakable Will";
    break;
  case 14791:
    spellname = "Unbreakable Will";
    break;
  case 14792:
    spellname = "Venomhide Poison";
    break;
  case 14793:
    spellname = "Increase Shadow Dam 23";
    break;
  case 14794:
    spellname = "Increase Shadow Dam 24";
    break;
  case 14795:
    spellname = "Venomhide Poison";
    break;
  case 14796:
    spellname = "Burning Tar";
    break;
  case 14797:
    spellname = "Burning Tar";
    break;
  case 14798:
    spellname = "Increase Spell Dam 30";
    break;
  case 14799:
    spellname = "Increase Spell Dam 20";
    break;
  case 14803:
    spellname = "Increased Armor 200";
    break;
  case 14806:
    spellname = "Bloodpetal Zapper";
    break;
  case 14807:
    spellname = "Greater Magic Wand";
    break;
  case 14809:
    spellname = "Lesser Mystic Wand";
    break;
  case 14810:
    spellname = "Greater Mystic Wand";
    break;
  case 14813:
    spellname = "Dark Iron Drunk Mug";
    break;
  case 14814:
    spellname = "Throw Dark Iron Ale";
    break;
  case 14816:
    spellname = "Empathy";
    break;
  case 14817:
    spellname = "Increased 2H Axe";
    break;
  case 14818:
    spellname = "Divine Spirit";
    break;
  case 14819:
    spellname = "Divine Spirit";
    break;
  case 14821:
    spellname = "Self Stun - 15 seconds";
    break;
  case 14822:
    spellname = "Drunken Rage";
    break;
  case 14823:
    spellname = "Drinking";
    break;
  case 14824:
    spellname = "Haste";
    break;
  case 14825:
    spellname = "Haste";
    break;
  case 14826:
    spellname = "Haste";
    break;
  case 14827:
    spellname = "Haste";
    break;
  case 14828:
    spellname = "Haste";
    break;
  case 14829:
    spellname = "Haste";
    break;
  case 14847:
    spellname = "Test Enchant Fire Weapon";
    break;
  case 14867:
    spellname = "Untalent Visual Effect";
    break;
  case 14868:
    spellname = "Curse of Agony";
    break;
  case 14869:
    spellname = "Drunken Stupor";
    break;
  case 14870:
    spellname = "Drunken Stupor";
    break;
  case 14871:
    spellname = "Shadow Bolt Misfire";
    break;
  case 14872:
    spellname = "Drunken Rage";
    break;
  case 14873:
    spellname = "Sinister Strike";
    break;
  case 14874:
    spellname = "Rupture";
    break;
  case 14875:
    spellname = "Curse of Agony";
    break;
  case 14887:
    spellname = "Shadow Bolt Volley";
    break;
  case 14888:
    spellname = "Arei Transform";
    break;
  case 14889:
    spellname = "Holy Specialization";
    break;
  case 14890:
    spellname = "Dismounting Blow";
    break;
  case 14891:
    spellname = "Smelt Dark Iron";
    break;
  case 14892:
    spellname = "Inspiration";
    break;
  case 14893:
    spellname = "Inspiration";
    break;
  case 14894:
    spellname = "Smelt Dark Iron";
    break;
  case 14895:
    spellname = "Overpower";
    break;
  case 14897:
    spellname = "Slowing Poison";
    break;
  case 14898:
    spellname = "Spiritual Healing";
    break;
  case 14900:
    spellname = "Chain Heal";
    break;
  case 14901:
    spellname = "Spiritual Guidance";
    break;
  case 14902:
    spellname = "Cheap Shot";
    break;
  case 14903:
    spellname = "Rupture";
    break;
  case 14904:
    spellname = "Master Healer";
    break;
  case 14907:
    spellname = "Frost Nova";
    break;
  case 14908:
    spellname = "Improved Renew";
    break;
  case 14909:
    spellname = "Searing Light";
    break;
  case 14910:
    spellname = "Shadow Resilience";
    break;
  case 14911:
    spellname = "Healing Prayers";
    break;
  case 14912:
    spellname = "Improved Healing";
    break;
  case 14913:
    spellname = "Healing Focus";
    break;
  case 14914:
    spellname = "Holy Fire";
    break;
  case 14915:
    spellname = "Self Visual - Sleep Until Cancelled (DND)";
    break;
  case 14916:
    spellname = "Growl";
    break;
  case 14917:
    spellname = "Growl";
    break;
  case 14918:
    spellname = "Growl";
    break;
  case 14919:
    spellname = "Growl";
    break;
  case 14920:
    spellname = "Growl";
    break;
  case 14921:
    spellname = "Growl";
    break;
  case 14922:
    spellname = "Growl";
    break;
  case 14923:
    spellname = "Growl";
    break;
  case 14924:
    spellname = "Growl";
    break;
  case 14925:
    spellname = "Growl";
    break;
  case 14926:
    spellname = "Growl";
    break;
  case 14927:
    spellname = "Growl";
    break;
  case 14928:
    spellname = "Nagmara's Love Potion";
    break;
  case 14929:
    spellname = "Fill Nagmara's Vial";
    break;
  case 14930:
    spellname = "Quickdraw Quiver";
    break;
  case 14932:
    spellname = "Thick Leather Ammo Pouch";
    break;
  case 14934:
    spellname = "Increased Spirit 35";
    break;
  case 14935:
    spellname = "Increased Agility 41";
    break;
  case 14936:
    spellname = "Increased Agility 42";
    break;
  case 14937:
    spellname = "Increased Agility 43";
    break;
  case 14938:
    spellname = "Increased Agility 44";
    break;
  case 14939:
    spellname = "Increased Agility 45";
    break;
  case 14940:
    spellname = "Increased Agility 46";
    break;
  case 14941:
    spellname = "Increased Intellect 41";
    break;
  case 14942:
    spellname = "Increased Intellect 42";
    break;
  case 14943:
    spellname = "Increased Intellect 43";
    break;
  case 14944:
    spellname = "Increased Intellect 44";
    break;
  case 14945:
    spellname = "Increased Intellect 45";
    break;
  case 14946:
    spellname = "Increased Intellect 46";
    break;
  case 14947:
    spellname = "Increased Spirit 41";
    break;
  case 14948:
    spellname = "Increased Spirit 42";
    break;
  case 14949:
    spellname = "Increased Spirit 43";
    break;
  case 14950:
    spellname = "Increased Spirit 44";
    break;
  case 14951:
    spellname = "Increased Spirit 45";
    break;
  case 14952:
    spellname = "Increased Spirit 46";
    break;
  case 14953:
    spellname = "Increased Stamina 41";
    break;
  case 14954:
    spellname = "Increased Stamina 42";
    break;
  case 14955:
    spellname = "Increased Stamina 43";
    break;
  case 14956:
    spellname = "Increased Stamina 44";
    break;
  case 14957:
    spellname = "Increased Stamina 45";
    break;
  case 14958:
    spellname = "Increased Stamina 46";
    break;
  case 14959:
    spellname = "Increased Strength 41";
    break;
  case 14960:
    spellname = "Increased Strength 42";
    break;
  case 14961:
    spellname = "Increased Strength 43";
    break;
  case 14962:
    spellname = "Increased Strength 44";
    break;
  case 14963:
    spellname = "Increased Strength 45";
    break;
  case 14964:
    spellname = "Increased Strength 46";
    break;
  case 14965:
    spellname = "Increased Arcane Resist 41";
    break;
  case 14966:
    spellname = "Increased Arcane Resist 42";
    break;
  case 14967:
    spellname = "Increased Arcane Resist 43";
    break;
  case 14968:
    spellname = "Increased Arcane Resist 44";
    break;
  case 14969:
    spellname = "Increased Arcane Resist 45";
    break;
  case 14970:
    spellname = "Increased Arcane Resist 46";
    break;
  case 14971:
    spellname = "Increased Fire Resist 41";
    break;
  case 14972:
    spellname = "Increased Fire Resist 42";
    break;
  case 14973:
    spellname = "Increased Fire Resist 43";
    break;
  case 14974:
    spellname = "Increased Fire Resist 44";
    break;
  case 14975:
    spellname = "Increased Fire Resist 45";
    break;
  case 14976:
    spellname = "Increased Fire Resist 46";
    break;
  case 14977:
    spellname = "Increased Frost Resist 41";
    break;
  case 14978:
    spellname = "Increased Frost Resist 42";
    break;
  case 14979:
    spellname = "Increased Frost Resist 43";
    break;
  case 14980:
    spellname = "Increased Frost Resist 44";
    break;
  case 14981:
    spellname = "Increased Frost Resist 45";
    break;
  case 14982:
    spellname = "Increased Frost Resist 46";
    break;
  case 14983:
    spellname = "Vigor";
    break;
  case 14984:
    spellname = "Increased Nature Resist 41";
    break;
  case 14985:
    spellname = "Increased Nature Resist 42";
    break;
  case 14986:
    spellname = "Increased Nature Resist 43";
    break;
  case 14987:
    spellname = "Increased Nature Resist 44";
    break;
  case 14988:
    spellname = "Increased Nature Resist 45";
    break;
  case 14989:
    spellname = "Increased Nature Resist 46";
    break;
  case 14990:
    spellname = "Increased Shadow Resist 41";
    break;
  case 14991:
    spellname = "Increased Shadow Resist 42";
    break;
  case 14992:
    spellname = "Increased Shadow Resist 43";
    break;
  case 14993:
    spellname = "Increased Shadow Resist 44";
    break;
  case 14994:
    spellname = "Increased Shadow Resist 45";
    break;
  case 14995:
    spellname = "Increased Shadow Resist 46";
    break;
  case 15007:
    spellname = "Resurrection Sickness";
    break;
  case 15008:
    spellname = "Holy Specialization";
    break;
  case 15009:
    spellname = "Holy Specialization";
    break;
  case 15010:
    spellname = "Holy Specialization";
    break;
  case 15011:
    spellname = "Holy Specialization";
    break;
  case 15012:
    spellname = "Healing Focus";
    break;
  case 15013:
    spellname = "Improved Healing";
    break;
  case 15014:
    spellname = "Improved Healing";
    break;
  case 15017:
    spellname = "Searing Light";
    break;
  case 15018:
    spellname = "Healing Prayers";
    break;
  case 15020:
    spellname = "Improved Renew";
    break;
  case 15024:
    spellname = "Master Healer";
    break;
  case 15025:
    spellname = "Master Healer";
    break;
  case 15026:
    spellname = "Master Healer";
    break;
  case 15027:
    spellname = "Master Healer";
    break;
  case 15028:
    spellname = "Spiritual Guidance";
    break;
  case 15029:
    spellname = "Spiritual Guidance";
    break;
  case 15030:
    spellname = "Spiritual Guidance";
    break;
  case 15031:
    spellname = "Spiritual Guidance";
    break;
  case 15033:
    spellname = "Summon Ancient Spirits";
    break;
  case 15036:
    spellname = "Flametongue Totem Effect";
    break;
  case 15037:
    spellname = "Attack";
    break;
  case 15038:
    spellname = "Scorching Totem";
    break;
  case 15039:
    spellname = "Flame Shock";
    break;
  case 15040:
    spellname = "Molten Blast";
    break;
  case 15041:
    spellname = "Fire Ward";
    break;
  case 15042:
    spellname = "Curse of Blood";
    break;
  case 15043:
    spellname = "Frostbolt";
    break;
  case 15044:
    spellname = "Frost Ward";
    break;
  case 15047:
    spellname = "Ice Shards";
    break;
  case 15048:
    spellname = "Summon Bomb";
    break;
  case 15049:
    spellname = "Summon Robot";
    break;
  case 15050:
    spellname = "Psychometry";
    break;
  case 15051:
    spellname = "Distract Move";
    break;
  case 15052:
    spellname = "Ice Shards";
    break;
  case 15053:
    spellname = "Ice Shards";
    break;
  case 15054:
    spellname = "Distract Test";
    break;
  case 15055:
    spellname = "Distract Test";
    break;
  case 15056:
    spellname = "Distract Move";
    break;
  case 15057:
    spellname = "Mechanical Patch Kit";
    break;
  case 15058:
    spellname = "Arcane Instability";
    break;
  case 15059:
    spellname = "Arcane Instability";
    break;
  case 15060:
    spellname = "Arcane Instability";
    break;
  case 15061:
    spellname = "Enrage";
    break;
  case 15062:
    spellname = "Shield Wall";
    break;
  case 15063:
    spellname = "Frost Nova";
    break;
  case 15064:
    spellname = "Nagmara + Rocknot";
    break;
  case 15065:
    spellname = "Create Tablet Transcript";
    break;
  case 15066:
    spellname = "Create PX83-Enigmatron";
    break;
  case 15067:
    spellname = "Summon Sprite Darter Hatchling";
    break;
  case 15068:
    spellname = "TEST Heal Self";
    break;
  case 15087:
    spellname = "Evasion";
    break;
  case 15088:
    spellname = "Flurry";
    break;
  case 15089:
    spellname = "Frost Shock";
    break;
  case 15090:
    spellname = "Dispel Magic";
    break;
  case 15091:
    spellname = "Blast Wave";
    break;
  case 15092:
    spellname = "Summon Voidwalkers";
    break;
  case 15093:
    spellname = "Summon Voidwalkers";
    break;
  case 15094:
    spellname = "Summon Voidwalkers";
    break;
  case 15095:
    spellname = "Molten Blast";
    break;
  case 15096:
    spellname = "Flame Shock";
    break;
  case 15097:
    spellname = "Enrage";
    break;
  case 15107:
    spellname = "Windwall Totem";
    break;
  case 15108:
    spellname = "Windwall";
    break;
  case 15109:
    spellname = "Windwall";
    break;
  case 15110:
    spellname = "Windwall";
    break;
  case 15111:
    spellname = "Windwall Totem";
    break;
  case 15112:
    spellname = "Windwall Totem";
    break;
  case 15114:
    spellname = "Summon Illusionary Dreamwatchers";
    break;
  case 15117:
    spellname = "Chain Lightning";
    break;
  case 15118:
    spellname = "Place Threshadon Carcass";
    break;
  case 15119:
    spellname = "Apply Seduction Gland";
    break;
  case 15120:
    spellname = "Cenarion Beacon";
    break;
  case 15122:
    spellname = "Counterspell";
    break;
  case 15123:
    spellname = "Resist Fire";
    break;
  case 15124:
    spellname = "Arcane Bolt";
    break;
  case 15125:
    spellname = "Scarshield Portal";
    break;
  case 15126:
    spellname = "Summon Burning Imp";
    break;
  case 15128:
    spellname = "Mark of Flames";
    break;
  case 15167:
    spellname = "Windsor's Frenzy";
    break;
  case 15187:
    spellname = "Create Sparkling Stone";
    break;
  case 15207:
    spellname = "Lightning Bolt";
    break;
  case 15208:
    spellname = "Lightning Bolt";
    break;
  case 15211:
    spellname = "Create Pylon User's Manual";
    break;
  case 15228:
    spellname = "Fireball";
    break;
  case 15229:
    spellname = "Crystal Restore";
    break;
  case 15230:
    spellname = "Arcane Bolt";
    break;
  case 15231:
    spellname = "Crystal Force";
    break;
  case 15232:
    spellname = "Shadow Bolt";
    break;
  case 15233:
    spellname = "Crystal Ward";
    break;
  case 15234:
    spellname = "Lightning Bolt";
    break;
  case 15235:
    spellname = "Crystal Yield";
    break;
  case 15236:
    spellname = "Shock";
    break;
  case 15237:
    spellname = "Holy Nova";
    break;
  case 15238:
    spellname = "Holy Smite";
    break;
  case 15239:
    spellname = "Crystal Charge";
    break;
  case 15241:
    spellname = "Scorch";
    break;
  case 15242:
    spellname = "Fireball";
    break;
  case 15243:
    spellname = "Fireball Volley";
    break;
  case 15244:
    spellname = "Cone of Cold";
    break;
  case 15245:
    spellname = "Shadow Bolt Volley";
    break;
  case 15247:
    spellname = "Conjure Fel Salve";
    break;
  case 15248:
    spellname = "Shank";
    break;
  case 15249:
    spellname = "Machine Gun";
    break;
  case 15250:
    spellname = "Setup";
    break;
  case 15252:
    spellname = "Keg Trap";
    break;
  case 15253:
    spellname = "Arcane Explosion";
    break;
  case 15254:
    spellname = "Arcane Bolt";
    break;
  case 15255:
    spellname = "Mechanical Repair Kit";
    break;
  case 15257:
    spellname = "Shadow Weaving";
    break;
  case 15258:
    spellname = "Shadow Vulnerability";
    break;
  case 15259:
    spellname = "Darkness";
    break;
  case 15260:
    spellname = "Shadow Focus";
    break;
  case 15261:
    spellname = "Holy Fire";
    break;
  case 15262:
    spellname = "Holy Fire";
    break;
  case 15263:
    spellname = "Holy Fire";
    break;
  case 15264:
    spellname = "Holy Fire";
    break;
  case 15265:
    spellname = "Holy Fire";
    break;
  case 15266:
    spellname = "Holy Fire";
    break;
  case 15267:
    spellname = "Holy Fire";
    break;
  case 15268:
    spellname = "Blackout";
    break;
  case 15269:
    spellname = "Blackout";
    break;
  case 15270:
    spellname = "Spirit Tap";
    break;
  case 15271:
    spellname = "Spirit Tap";
    break;
  case 15272:
    spellname = "Shadow Affinity";
    break;
  case 15273:
    spellname = "Improved Mind Blast";
    break;
  case 15274:
    spellname = "Improved Fade";
    break;
  case 15275:
    spellname = "Improved Shadow Word: Pain";
    break;
  case 15276:
    spellname = "Opening Bar Door";
    break;
  case 15277:
    spellname = "Seal of Reckoning";
    break;
  case 15278:
    spellname = "Seal of Reckoning Effect";
    break;
  case 15279:
    spellname = "Crystal Spire";
    break;
  case 15280:
    spellname = "Cleave Armor";
    break;
  case 15281:
    spellname = "Encage Emberseer";
    break;
  case 15282:
    spellname = "Encaged Emberseer";
    break;
  case 15283:
    spellname = "Stunning Blow";
    break;
  case 15284:
    spellname = "Cleave";
    break;
  case 15285:
    spellname = "Fireball Volley";
    break;
  case 15286:
    spellname = "Vampiric Embrace";
    break;
  case 15288:
    spellname = "Fury of Ragnaros";
    break;
  case 15290:
    spellname = "Vampiric Embrace";
    break;
  case 15292:
    spellname = "Dark Iron Pulverizer";
    break;
  case 15293:
    spellname = "Dark Iron Mail";
    break;
  case 15294:
    spellname = "Dark Iron Sunderer";
    break;
  case 15295:
    spellname = "Dark Iron Shoulders";
    break;
  case 15296:
    spellname = "Dark Iron Plate";
    break;
  case 15303:
    spellname = "DEBUG Create Samophlange Manual";
    break;
  case 15304:
    spellname = "DEBUG Create Samophlange Manual";
    break;
  case 15305:
    spellname = "Chain Lightning";
    break;
  case 15306:
    spellname = "Shock";
    break;
  case 15307:
    spellname = "Darkness";
    break;
  case 15308:
    spellname = "Darkness";
    break;
  case 15309:
    spellname = "Darkness";
    break;
  case 15310:
    spellname = "Darkness";
    break;
  case 15311:
    spellname = "Improved Fade";
    break;
  case 15312:
    spellname = "Improved Mind Blast";
    break;
  case 15313:
    spellname = "Improved Mind Blast";
    break;
  case 15314:
    spellname = "Improved Mind Blast";
    break;
  case 15316:
    spellname = "Improved Mind Blast";
    break;
  case 15317:
    spellname = "Improved Shadow Word: Pain";
    break;
  case 15318:
    spellname = "Shadow Affinity";
    break;
  case 15320:
    spellname = "Shadow Affinity";
    break;
  case 15323:
    spellname = "Blackout";
    break;
  case 15324:
    spellname = "Blackout";
    break;
  case 15325:
    spellname = "Blackout";
    break;
  case 15326:
    spellname = "Blackout";
    break;
  case 15327:
    spellname = "Shadow Focus";
    break;
  case 15328:
    spellname = "Shadow Focus";
    break;
  case 15329:
    spellname = "Shadow Focus";
    break;
  case 15330:
    spellname = "Shadow Focus";
    break;
  case 15331:
    spellname = "Shadow Weaving";
    break;
  case 15332:
    spellname = "Shadow Weaving";
    break;
  case 15333:
    spellname = "Shadow Weaving";
    break;
  case 15334:
    spellname = "Shadow Weaving";
    break;
  case 15335:
    spellname = "Spirit Tap";
    break;
  case 15336:
    spellname = "Spirit Tap";
    break;
  case 15337:
    spellname = "Spirit Tap";
    break;
  case 15338:
    spellname = "Spirit Tap";
    break;
  case 15340:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15341:
    spellname = "Nagmara's Vanish";
    break;
  case 15342:
    spellname = "Create Windblossom Berries";
    break;
  case 15343:
    spellname = "Create Whipper Root Tubers";
    break;
  case 15344:
    spellname = "Create Night Dragon's Breath";
    break;
  case 15345:
    spellname = "Item +Mana Leg R1";
    break;
  case 15346:
    spellname = "Seal of Reckoning";
    break;
  case 15347:
    spellname = "Seal of Reckoning Effect";
    break;
  case 15349:
    spellname = "Spiritual Healing";
    break;
  case 15354:
    spellname = "Spiritual Healing";
    break;
  case 15355:
    spellname = "Spiritual Healing";
    break;
  case 15356:
    spellname = "Spiritual Healing";
    break;
  case 15357:
    spellname = "Inspiration";
    break;
  case 15359:
    spellname = "Inspiration";
    break;
  case 15362:
    spellname = "Inspiration";
    break;
  case 15363:
    spellname = "Inspiration";
    break;
  case 15366:
    spellname = "Songflower Serenade";
    break;
  case 15367:
    spellname = "Increased Armor 130";
    break;
  case 15388:
    spellname = "Item +HP Leg R1";
    break;
  case 15389:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15390:
    spellname = "Item +AC Leg R1";
    break;
  case 15391:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15392:
    spellname = "Improved Psychic Scream";
    break;
  case 15393:
    spellname = "Item +FR Leg R1";
    break;
  case 15394:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15396:
    spellname = "Item +STR Leg R1";
    break;
  case 15397:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15398:
    spellname = "Psychic Scream";
    break;
  case 15399:
    spellname = "Item +STA Leg R1";
    break;
  case 15400:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15401:
    spellname = "Item +AGI Leg R1";
    break;
  case 15402:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15403:
    spellname = "Item +INT Leg R1";
    break;
  case 15404:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15405:
    spellname = "Item +SPI Leg R1";
    break;
  case 15406:
    spellname = "Lesser Arcane Amalgamation";
    break;
  case 15407:
    spellname = "Mind Flay";
    break;
  case 15408:
    spellname = "Item +MANA/FR Leg R2";
    break;
  case 15427:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15428:
    spellname = "Item +HP/FR Leg R2";
    break;
  case 15429:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15430:
    spellname = "Holy Nova";
    break;
  case 15431:
    spellname = "Holy Nova";
    break;
  case 15437:
    spellname = "Item +AC/FR Leg R2";
    break;
  case 15438:
    spellname = "Thorns";
    break;
  case 15439:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15440:
    spellname = "Item +STR/FR Leg R2";
    break;
  case 15441:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15442:
    spellname = "Item +STA/FR Leg R2";
    break;
  case 15444:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15445:
    spellname = "Item +AGI/FR Leg R2";
    break;
  case 15446:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15447:
    spellname = "Item +INT/FR Leg R2";
    break;
  case 15448:
    spellname = "Improved Psychic Scream";
    break;
  case 15449:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15450:
    spellname = "Improved Psychic Scream";
    break;
  case 15451:
    spellname = "Arcane Bolt";
    break;
  case 15453:
    spellname = "Arcane Explosion";
    break;
  case 15456:
    spellname = "Item +SPI/FR Leg R2";
    break;
  case 15458:
    spellname = "Greater Arcane Amalgamation";
    break;
  case 15461:
    spellname = "Item +STR/STA Leg R3";
    break;
  case 15462:
    spellname = "Item +AC/FR Leg R3";
    break;
  case 15463:
    spellname = "Legendary Arcane Amalgamation";
    break;
  case 15464:
    spellname = "Increased Hit Rating 10";
    break;
  case 15465:
    spellname = "Increased Hit Rating 20";
    break;
  case 15466:
    spellname = "Increased Hit Rating 30";
    break;
  case 15467:
    spellname = "Increased Hit Rating 40";
    break;
  case 15468:
    spellname = "Increased Hit Rating 50";
    break;
  case 15470:
    spellname = "Curse of Tongues";
    break;
  case 15471:
    spellname = "Enveloping Web";
    break;
  case 15472:
    spellname = "Shadow Bolt";
    break;
  case 15473:
    spellname = "Shadowform";
    break;
  case 15474:
    spellname = "Web Explosion";
    break;
  case 15475:
    spellname = "Baneful Poison";
    break;
  case 15487:
    spellname = "Silence";
    break;
  case 15488:
    spellname = "Item +MANA/FR Leg R3";
    break;
  case 15489:
    spellname = "Item +INT/SPI Leg R3";
    break;
  case 15490:
    spellname = "Legendary Arcane Amalgamation";
    break;
  case 15491:
    spellname = "Collect Blessed Water";
    break;
  case 15493:
    spellname = "Holy Light";
    break;
  case 15494:
    spellname = "Fury of Forgewright";
    break;
  case 15495:
    spellname = "Explosive Shot";
    break;
  case 15496:
    spellname = "Cleave";
    break;
  case 15497:
    spellname = "Frostbolt";
    break;
  case 15498:
    spellname = "Holy Smite";
    break;
  case 15499:
    spellname = "Frost Shock";
    break;
  case 15500:
    spellname = "Shock";
    break;
  case 15501:
    spellname = "Earth Shock";
    break;
  case 15502:
    spellname = "Sunder Armor";
    break;
  case 15503:
    spellname = "Drink Healing Potion";
    break;
  case 15504:
    spellname = "Drink Healing Potion";
    break;
  case 15505:
    spellname = "Immolate";
    break;
  case 15506:
    spellname = "Immolate";
    break;
  case 15507:
    spellname = "Lightning Shield";
    break;
  case 15508:
    spellname = "Increased Armor 120";
    break;
  case 15529:
    spellname = "Gout of Flame";
    break;
  case 15530:
    spellname = "Frostbolt";
    break;
  case 15531:
    spellname = "Frost Nova";
    break;
  case 15532:
    spellname = "Frost Nova";
    break;
  case 15533:
    spellname = "Stoned - Channel Cast Visual";
    break;
  case 15534:
    spellname = "Polymorph";
    break;
  case 15535:
    spellname = "Enveloping Winds";
    break;
  case 15536:
    spellname = "Fireball";
    break;
  case 15537:
    spellname = "Shadow Bolt";
    break;
  case 15538:
    spellname = "Gout of Flame";
    break;
  case 15539:
    spellname = "Conjure Staff of Command";
    break;
  case 15547:
    spellname = "Shoot";
    break;
  case 15548:
    spellname = "Thunderclap";
    break;
  case 15549:
    spellname = "Chained Bolt";
    break;
  case 15550:
    spellname = "Trample";
    break;
  case 15570:
    spellname = "Immolate";
    break;
  case 15571:
    spellname = "Dazed";
    break;
  case 15572:
    spellname = "Sunder Armor";
    break;
  case 15573:
    spellname = "Fire Blast";
    break;
  case 15574:
    spellname = "Fire Blast";
    break;
  case 15575:
    spellname = "Flame Cannon";
    break;
  case 15576:
    spellname = "Whirlwind";
    break;
  case 15577:
    spellname = "Whirlwind";
    break;
  case 15578:
    spellname = "Whirlwind";
    break;
  case 15580:
    spellname = "Strike";
    break;
  case 15581:
    spellname = "Sinister Strike";
    break;
  case 15582:
    spellname = "Backstab";
    break;
  case 15583:
    spellname = "Rupture";
    break;
  case 15585:
    spellname = "Prayer of Healing";
    break;
  case 15586:
    spellname = "Heal";
    break;
  case 15587:
    spellname = "Mind Blast";
    break;
  case 15588:
    spellname = "Thunderclap";
    break;
  case 15589:
    spellname = "Whirlwind";
    break;
  case 15590:
    spellname = "Fist Weapons";
    break;
  case 15591:
    spellname = "Revive Ringo";
    break;
  case 15592:
    spellname = "Firebolt";
    break;
  case 15593:
    spellname = "War Stomp";
    break;
  case 15594:
    spellname = "Force of Will";
    break;
  case 15595:
    spellname = "Force of Will";
    break;
  case 15596:
    spellname = "Smoking Heart of the Mountain";
    break;
  case 15598:
    spellname = "Firebolt";
    break;
  case 15599:
    spellname = "Firebolt";
    break;
  case 15600:
    spellname = "Hand of Justice";
    break;
  case 15601:
    spellname = "Hand of Justice";
    break;
  case 15602:
    spellname = "Lord General's Sword";
    break;
  case 15603:
    spellname = "Healer Trinket";
    break;
  case 15604:
    spellname = "Second Wind";
    break;
  case 15605:
    spellname = "Shock";
    break;
  case 15607:
    spellname = "Throw";
    break;
  case 15608:
    spellname = "Ravenous Claw";
    break;
  case 15609:
    spellname = "Hooked Net";
    break;
  case 15610:
    spellname = "Kick";
    break;
  case 15611:
    spellname = "Lizard Bolt";
    break;
  case 15612:
    spellname = "Lizard Bolt";
    break;
  case 15614:
    spellname = "Kick";
    break;
  case 15615:
    spellname = "Pummel";
    break;
  case 15616:
    spellname = "Flame Shock";
    break;
  case 15617:
    spellname = "Shank";
    break;
  case 15618:
    spellname = "Snap Kick";
    break;
  case 15619:
    spellname = "Throw Wrench";
    break;
  case 15620:
    spellname = "Shoot";
    break;
  case 15621:
    spellname = "Skull Crack";
    break;
  case 15627:
    spellname = "Applying the Lure";
    break;
  case 15628:
    spellname = "Pet Bombling";
    break;
  case 15629:
    spellname = "Distracting Shot";
    break;
  case 15630:
    spellname = "Distracting Shot";
    break;
  case 15631:
    spellname = "Distracting Shot";
    break;
  case 15632:
    spellname = "Distracting Shot";
    break;
  case 15633:
    spellname = "Lil' Smoky";
    break;
  case 15636:
    spellname = "Avatar of Flame";
    break;
  case 15641:
    spellname = "Ironfoe";
    break;
  case 15642:
    spellname = "Ironfoe";
    break;
  case 15643:
    spellname = "Flames";
    break;
  case 15646:
    spellname = "Burst of Knowledge";
    break;
  case 15647:
    spellname = "Summon Common Kitten";
    break;
  case 15648:
    spellname = "Summon Corrupted Kitten";
    break;
  case 15649:
    spellname = "Collect Corrupted Water";
    break;
  case 15651:
    spellname = "Flame Attack Visual Effect";
    break;
  case 15652:
    spellname = "Head Smash";
    break;
  case 15653:
    spellname = "Acid Spit";
    break;
  case 15654:
    spellname = "Shadow Word: Pain";
    break;
  case 15655:
    spellname = "Shield Slam";
    break;
  case 15656:
    spellname = "Poisonous Stab";
    break;
  case 15657:
    spellname = "Backstab";
    break;
  case 15658:
    spellname = "Wake Up Princess";
    break;
  case 15659:
    spellname = "Chain Lightning";
    break;
  case 15660:
    spellname = "Princess Saved";
    break;
  case 15661:
    spellname = "Immolate";
    break;
  case 15662:
    spellname = "Fireball";
    break;
  case 15664:
    spellname = "Venom Spit";
    break;
  case 15665:
    spellname = "Fireball";
    break;
  case 15666:
    spellname = "Increased Armor 100";
    break;
  case 15667:
    spellname = "Sinister Strike";
    break;
  case 15668:
    spellname = "Fiery Burst";
    break;
  case 15687:
    spellname = "Increased Armor 250";
    break;
  case 15688:
    spellname = "Beast Slaying 42";
    break;
  case 15689:
    spellname = "Beast Slaying 105";
    break;
  case 15690:
    spellname = "Mind Control";
    break;
  case 15691:
    spellname = "Eviscerate";
    break;
  case 15692:
    spellname = "Eviscerate";
    break;
  case 15693:
    spellname = "Increased Armor 150";
    break;
  case 15694:
    spellname = "Increased 1H Mace";
    break;
  case 15695:
    spellname = "Mana Drain";
    break;
  case 15696:
    spellname = "Increase Healing 53";
    break;
  case 15698:
    spellname = "Filling Empty Jar";
    break;
  case 15699:
    spellname = "Filling Empty Jar";
    break;
  case 15700:
    spellname = "Whipper Root Tuber";
    break;
  case 15701:
    spellname = "Night Dragon's Breath";
    break;
  case 15702:
    spellname = "Filling Empty Jar";
    break;
  case 15708:
    spellname = "Mortal Strike";
    break;
  case 15709:
    spellname = "Cowardice";
    break;
  case 15710:
    spellname = "Summon Flamekin Torcher";
    break;
  case 15711:
    spellname = "Summon Flamekin Rager";
    break;
  case 15712:
    spellname = "Linken's Boomerang";
    break;
  case 15713:
    spellname = "Boomerang";
    break;
  case 15714:
    spellname = "Increase Spell Dam 22";
    break;
  case 15715:
    spellname = "Increase Spell Dam 25";
    break;
  case 15716:
    spellname = "Enrage";
    break;
  case 15717:
    spellname = "Increased Dagger";
    break;
  case 15727:
    spellname = "Demoralizing Roar";
    break;
  case 15728:
    spellname = "Plague Cloud";
    break;
  case 15729:
    spellname = "Remove Curse";
    break;
  case 15730:
    spellname = "Curse of Mending";
    break;
  case 15732:
    spellname = "Immolate";
    break;
  case 15733:
    spellname = "Immolate";
    break;
  case 15734:
    spellname = "Summon";
    break;
  case 15735:
    spellname = "Arcane Missiles";
    break;
  case 15736:
    spellname = "Arcane Missiles";
    break;
  case 15737:
    spellname = "Arena Flash";
    break;
  case 15739:
    spellname = "Arena Flash";
    break;
  case 15740:
    spellname = "Arena Flash";
    break;
  case 15741:
    spellname = "Arena Flash";
    break;
  case 15742:
    spellname = "Ashcrombe's Teleport";
    break;
  case 15743:
    spellname = "Flamecrack";
    break;
  case 15744:
    spellname = "Blast Wave";
    break;
  case 15745:
    spellname = "Summon Rookery Whelp";
    break;
  case 15746:
    spellname = "Hatch Rookery Egg";
    break;
  case 15748:
    spellname = "Freeze Rookery Egg";
    break;
  case 15749:
    spellname = "Shield Charge";
    break;
  case 15750:
    spellname = "Rookery Whelp Spawn-in Spell";
    break;
  case 15752:
    spellname = "Disarm";
    break;
  case 15753:
    spellname = "Knockdown";
    break;
  case 15758:
    spellname = "Increased 1H Axe";
    break;
  case 15759:
    spellname = "Increased 1H Axe";
    break;
  case 15760:
    spellname = "Increased 1H Mace";
    break;
  case 15761:
    spellname = "Increased 1H Mace";
    break;
  case 15762:
    spellname = "Increased 1H Mace";
    break;
  case 15763:
    spellname = "Increased 1H Sword";
    break;
  case 15764:
    spellname = "Increased 1H Sword";
    break;
  case 15765:
    spellname = "Increased 1H Sword";
    break;
  case 15766:
    spellname = "Increased 2H Axe";
    break;
  case 15767:
    spellname = "Increased 2H Axe";
    break;
  case 15768:
    spellname = "Increased 2H Axe";
    break;
  case 15769:
    spellname = "Increased 2H Sword";
    break;
  case 15770:
    spellname = "Increased 2H Sword";
    break;
  case 15771:
    spellname = "Increased 2H Sword";
    break;
  case 15772:
    spellname = "Increased 2H Sword";
    break;
  case 15773:
    spellname = "Increased 2H Mace";
    break;
  case 15774:
    spellname = "Increased 2H Mace";
    break;
  case 15775:
    spellname = "Increased 2H Mace";
    break;
  case 15776:
    spellname = "Increased Dagger";
    break;
  case 15777:
    spellname = "Increased Dagger";
    break;
  case 15778:
    spellname = "Increased Dagger";
    break;
  case 15779:
    spellname = "White Mechanostrider";
    break;
  case 15780:
    spellname = "Green Mechanostrider";
    break;
  case 15781:
    spellname = "Steel Mechanostrider";
    break;
  case 15783:
    spellname = "Blizzard";
    break;
  case 15784:
    spellname = "Frost Armor";
    break;
  case 15785:
    spellname = "Mana Burn";
    break;
  case 15786:
    spellname = "Earthbind Totem";
    break;
  case 15787:
    spellname = "Moonflare Totem";
    break;
  case 15788:
    spellname = "Moonflare";
    break;
  case 15789:
    spellname = "Moonflare";
    break;
  case 15790:
    spellname = "Arcane Missiles";
    break;
  case 15791:
    spellname = "Arcane Missiles";
    break;
  case 15792:
    spellname = "Summon Blackhand Veteran";
    break;
  case 15793:
    spellname = "Maul";
    break;
  case 15794:
    spellname = "Summon Blackhand Dreadweaver";
    break;
  case 15795:
    spellname = "Throw";
    break;
  case 15797:
    spellname = "Lightning Breath";
    break;
  case 15798:
    spellname = "Moonfire";
    break;
  case 15799:
    spellname = "Chain Heal";
    break;
  case 15800:
    spellname = "Mana Burn";
    break;
  case 15801:
    spellname = "Lightning Bolt";
    break;
  case 15802:
    spellname = "Shrink";
    break;
  case 15804:
    spellname = "Increased Defense";
    break;
  case 15805:
    spellname = "Increased Armor 1000";
    break;
  case 15806:
    spellname = "Attack Power 34";
    break;
  case 15807:
    spellname = "Attack Power 32";
    break;
  case 15808:
    spellname = "Attack Power 38";
    break;
  case 15809:
    spellname = "Attack Power 42";
    break;
  case 15810:
    spellname = "Attack Power 44";
    break;
  case 15811:
    spellname = "Attack Power 46";
    break;
  case 15812:
    spellname = "Attack Power 52";
    break;
  case 15813:
    spellname = "Attack Power 54";
    break;
  case 15814:
    spellname = "Attack Power 56";
    break;
  case 15815:
    spellname = "Attack Power 58";
    break;
  case 15816:
    spellname = "Attack Power 62";
    break;
  case 15817:
    spellname = "Attack Power 64";
    break;
  case 15818:
    spellname = "Attack Power 66";
    break;
  case 15819:
    spellname = "Attack Power 68";
    break;
  case 15820:
    spellname = "Attack Power 70";
    break;
  case 15821:
    spellname = "Attack Power 72";
    break;
  case 15822:
    spellname = "Dreamless Sleep";
    break;
  case 15823:
    spellname = "Attack Power 74";
    break;
  case 15824:
    spellname = "Attack Power 76";
    break;
  case 15825:
    spellname = "Attack Power 78";
    break;
  case 15826:
    spellname = "Attack Power 80";
    break;
  case 15827:
    spellname = "Attack Power 82";
    break;
  case 15828:
    spellname = "Attack Power 84";
    break;
  case 15829:
    spellname = "Attack Power 86";
    break;
  case 15830:
    spellname = "Attack Power 88";
    break;
  case 15831:
    spellname = "Attack Power 90";
    break;
  case 15832:
    spellname = "Attack Power 92";
    break;
  case 15833:
    spellname = "Dreamless Sleep Potion";
    break;
  case 15847:
    spellname = "Tail Sweep";
    break;
  case 15848:
    spellname = "Festering Rash";
    break;
  case 15849:
    spellname = "Chill Wind";
    break;
  case 15850:
    spellname = "Chilled";
    break;
  case 15851:
    spellname = "Dragonbreath Chili";
    break;
  case 15852:
    spellname = "Dragonbreath Chili";
    break;
  case 15853:
    spellname = "Lean Wolf Steak";
    break;
  case 15855:
    spellname = "Roast Raptor";
    break;
  case 15856:
    spellname = "Hot Wolf Ribs";
    break;
  case 15859:
    spellname = "Dominate Mind";
    break;
  case 15860:
    spellname = "Impale";
    break;
  case 15861:
    spellname = "Jungle Stew";
    break;
  case 15863:
    spellname = "Carrion Surprise";
    break;
  case 15865:
    spellname = "Mystery Stew";
    break;
  case 15867:
    spellname = "Flame Buffet Totem";
    break;
  case 15869:
    spellname = "Superior Healing Ward";
    break;
  case 15870:
    spellname = "Healing Aura";
    break;
  case 15871:
    spellname = "Increased 1H Axe";
    break;
  case 15872:
    spellname = "Superior Healing Ward Passive";
    break;
  case 15873:
    spellname = "Increased 1H Axe";
    break;
  case 15874:
    spellname = "Increased 1H Axe";
    break;
  case 15875:
    spellname = "Increased 1H Axe";
    break;
  case 15876:
    spellname = "Ice Blast";
    break;
  case 15877:
    spellname = "Increased 1H Axe";
    break;
  case 15878:
    spellname = "Ice Blast";
    break;
  case 15879:
    spellname = "Increased 1H Axe";
    break;
  case 15880:
    spellname = "Increased 1H Axe";
    break;
  case 15881:
    spellname = "Increased 1H Axe";
    break;
  case 15882:
    spellname = "Increased 1H Axe";
    break;
  case 15883:
    spellname = "Increased 1H Axe";
    break;
  case 15884:
    spellname = "Increased 1H Axe";
    break;
  case 15885:
    spellname = "Increased 1H Axe";
    break;
  case 15886:
    spellname = "Increased 1H Mace";
    break;
  case 15887:
    spellname = "Increased 1H Mace";
    break;
  case 15888:
    spellname = "Increased 1H Mace";
    break;
  case 15889:
    spellname = "Increased 1H Mace";
    break;
  case 15890:
    spellname = "Increased 1H Mace";
    break;
  case 15891:
    spellname = "Increased 1H Mace";
    break;
  case 15892:
    spellname = "Increased 1H Mace";
    break;
  case 15893:
    spellname = "Increased 1H Mace";
    break;
  case 15894:
    spellname = "Increased 1H Mace";
    break;
  case 15895:
    spellname = "Increased 1H Mace";
    break;
  case 15896:
    spellname = "Increased 1H Sword";
    break;
  case 15897:
    spellname = "Increased 1H Sword";
    break;
  case 15898:
    spellname = "Increased 1H Sword";
    break;
  case 15899:
    spellname = "Increased 1H Sword";
    break;
  case 15900:
    spellname = "Increased 1H Sword";
    break;
  case 15901:
    spellname = "Increased 1H Sword";
    break;
  case 15902:
    spellname = "Increased 1H Sword";
    break;
  case 15903:
    spellname = "Increased 1H Sword";
    break;
  case 15904:
    spellname = "Increased 1H Sword";
    break;
  case 15905:
    spellname = "Increased 1H Sword";
    break;
  case 15906:
    spellname = "Dragonbreath Chili";
    break;
  case 15907:
    spellname = "Increased 2H Axe";
    break;
  case 15909:
    spellname = "Increased 2H Axe";
    break;
  case 15910:
    spellname = "Heavy Kodo Stew";
    break;
  case 15912:
    spellname = "Increased 2H Axe";
    break;
  case 15913:
    spellname = "Increased 2H Axe";
    break;
  case 15914:
    spellname = "Increased 2H Axe";
    break;
  case 15915:
    spellname = "Spiced Chili Crab";
    break;
  case 15916:
    spellname = "Increased 2H Axe";
    break;
  case 15917:
    spellname = "Increased 2H Axe";
    break;
  case 15919:
    spellname = "Increased 2H Axe";
    break;
  case 15920:
    spellname = "Increased 2H Axe";
    break;
  case 15921:
    spellname = "Increased 2H Axe";
    break;
  case 15922:
    spellname = "Increased 2H Mace";
    break;
  case 15923:
    spellname = "Increased 2H Mace";
    break;
  case 15924:
    spellname = "Increased 2H Mace";
    break;
  case 15925:
    spellname = "Increased 2H Mace";
    break;
  case 15926:
    spellname = "Increased 2H Mace";
    break;
  case 15927:
    spellname = "Increased 2H Mace";
    break;
  case 15928:
    spellname = "Increased 2H Mace";
    break;
  case 15929:
    spellname = "Increased 2H Mace";
    break;
  case 15930:
    spellname = "Increased 2H Mace";
    break;
  case 15931:
    spellname = "Increased 2H Mace";
    break;
  case 15933:
    spellname = "Monster Omelet";
    break;
  case 15935:
    spellname = "Crispy Bat Wing";
    break;
  case 15937:
    spellname = "Increased 2H Sword";
    break;
  case 15938:
    spellname = "Increased 2H Sword";
    break;
  case 15939:
    spellname = "Increased 2H Sword";
    break;
  case 15940:
    spellname = "Increased 2H Sword";
    break;
  case 15941:
    spellname = "Increased 2H Sword";
    break;
  case 15942:
    spellname = "Increased 2H Sword";
    break;
  case 15943:
    spellname = "Increased 2H Sword";
    break;
  case 15944:
    spellname = "Increased 2H Sword";
    break;
  case 15945:
    spellname = "Increased 2H Sword";
    break;
  case 15946:
    spellname = "Increased 2H Sword";
    break;
  case 15947:
    spellname = "Increased Bow";
    break;
  case 15948:
    spellname = "Increased Dagger";
    break;
  case 15949:
    spellname = "Increased Dagger";
    break;
  case 15950:
    spellname = "Increased Dagger";
    break;
  case 15951:
    spellname = "Increased Dagger";
    break;
  case 15952:
    spellname = "Increased Dagger";
    break;
  case 15953:
    spellname = "Increased Dagger";
    break;
  case 15954:
    spellname = "Increased Dagger";
    break;
  case 15955:
    spellname = "Increased Dagger";
    break;
  case 15956:
    spellname = "Fishing Skill +3";
    break;
  case 15957:
    spellname = "Increased Armor 300";
    break;
  case 15958:
    spellname = "Collect Rookery Egg";
    break;
  case 15967:
    spellname = "Increased Magic Resist 10";
    break;
  case 15968:
    spellname = "Lash of Pain";
    break;
  case 15969:
    spellname = "Tormenting Lash";
    break;
  case 15970:
    spellname = "Sleep";
    break;
  case 15971:
    spellname = "Demoralizing Roar";
    break;
  case 15972:
    spellname = "Glinting Steel Dagger";
    break;
  case 15973:
    spellname = "Searing Golden Blade";
    break;
  case 15976:
    spellname = "Puncture";
    break;
  case 15978:
    spellname = "Puncture";
    break;
  case 15979:
    spellname = "Arcane Bolt";
    break;
  case 15980:
    spellname = "Mana Burn";
    break;
  case 15981:
    spellname = "Rejuvenation";
    break;
  case 15982:
    spellname = "Healing Wave";
    break;
  case 15993:
    spellname = "Bijou Vanish";
    break;
  case 15998:
    spellname = "Capture Worg Pup";
    break;
  case 15999:
    spellname = "Summon Worg Pup";
    break;
  case 16000:
    spellname = "Throw";
    break;
  case 16001:
    spellname = "Impale";
    break;
  case 16002:
    spellname = "Summon Burning Felhound";
    break;
  case 16003:
    spellname = "Immolate Visual Passive";
    break;
  case 16004:
    spellname = "Summon Burning Felguard";
    break;
  case 16005:
    spellname = "Rain of Fire";
    break;
  case 16006:
    spellname = "Chain Lightning";
    break;
  case 16007:
    spellname = "Draco-Incarcinatrix 900";
    break;
  case 16027:
    spellname = "Create Broodling Essence";
    break;
  case 16028:
    spellname = "Freeze Rookery Egg - Prototype";
    break;
  case 16029:
    spellname = "Create Eggscilliscope";
    break;
  case 16031:
    spellname = "Releasing Corrupt Ooze";
    break;
  case 16032:
    spellname = "Merging Oozes";
    break;
  case 16033:
    spellname = "Chain Lightning";
    break;
  case 16034:
    spellname = "Shock";
    break;
  case 16035:
    spellname = "Concussion";
    break;
  case 16037:
    spellname = "Mind Probe";
    break;
  case 16038:
    spellname = "Call of Flame";
    break;
  case 16039:
    spellname = "Convection";
    break;
  case 16040:
    spellname = "Reverberation";
    break;
  case 16041:
    spellname = "Call of Thunder";
    break;
  case 16043:
    spellname = "Earth's Grasp";
    break;
  case 16044:
    spellname = "Cleave";
    break;
  case 16045:
    spellname = "Encage";
    break;
  case 16046:
    spellname = "Blast Wave";
    break;
  case 16047:
    spellname = "Emberseer Full Strength";
    break;
  case 16048:
    spellname = "Emberseer Growing";
    break;
  case 16049:
    spellname = "Emberseer Growing";
    break;
  case 16050:
    spellname = "Slowing Ooze";
    break;
  case 16051:
    spellname = "Barrier of Light";
    break;
  case 16052:
    spellname = "Emberseer Transform";
    break;
  case 16053:
    spellname = "Dominion of Soul";
    break;
  case 16054:
    spellname = "Flames of the Black Flight";
    break;
  case 16055:
    spellname = "Nightsaber";
    break;
  case 16056:
    spellname = "Frostsaber";
    break;
  case 16057:
    spellname = "Place Unforged Seal";
    break;
  case 16058:
    spellname = "Primal Leopard";
    break;
  case 16059:
    spellname = "Tawny Sabercat";
    break;
  case 16060:
    spellname = "Golden Sabercat";
    break;
  case 16067:
    spellname = "Arcane Blast";
    break;
  case 16068:
    spellname = "Encage";
    break;
  case 16069:
    spellname = "Nefarius Attack 001";
    break;
  case 16070:
    spellname = "Nefarius Attack 000";
    break;
  case 16071:
    spellname = "Curse of the Firebrand";
    break;
  case 16072:
    spellname = "Purify and Place Food";
    break;
  case 16073:
    spellname = "Filling";
    break;
  case 16074:
    spellname = "Burning Felguard Spawn";
    break;
  case 16075:
    spellname = "Throw Axe";
    break;
  case 16077:
    spellname = "Filling";
    break;
  case 16078:
    spellname = "Emberseer Despawn";
    break;
  case 16079:
    spellname = "Fire Nova";
    break;
  case 16080:
    spellname = "Red Wolf";
    break;
  case 16081:
    spellname = "Arctic Wolf";
    break;
  case 16082:
    spellname = "Palomino Stallion";
    break;
  case 16083:
    spellname = "White Stallion";
    break;
  case 16084:
    spellname = "Mottled Red Raptor";
    break;
  case 16086:
    spellname = "Improved Fire Totems";
    break;
  case 16089:
    spellname = "Elemental Fury";
    break;
  case 16092:
    spellname = "Defensive State (DND)";
    break;
  case 16093:
    spellname = "Self Visual - Sleep Until Cancelled (DND)";
    break;
  case 16094:
    spellname = "Frost Breath";
    break;
  case 16095:
    spellname = "Vicious Rend";
    break;
  case 16096:
    spellname = "Cowering Roar";
    break;
  case 16097:
    spellname = "Hex";
    break;
  case 16098:
    spellname = "Curse of Blood";
    break;
  case 16099:
    spellname = "Frost Breath";
    break;
  case 16100:
    spellname = "Shoot";
    break;
  case 16101:
    spellname = "Fireball";
    break;
  case 16102:
    spellname = "Flamestrike";
    break;
  case 16103:
    spellname = "Summon Spire Spiderling";
    break;
  case 16104:
    spellname = "Crystallize";
    break;
  case 16105:
    spellname = "Concussion";
    break;
  case 16106:
    spellname = "Concussion";
    break;
  case 16107:
    spellname = "Concussion";
    break;
  case 16108:
    spellname = "Concussion";
    break;
  case 16109:
    spellname = "Convection";
    break;
  case 16110:
    spellname = "Convection";
    break;
  case 16111:
    spellname = "Convection";
    break;
  case 16112:
    spellname = "Convection";
    break;
  case 16113:
    spellname = "Reverberation";
    break;
  case 16114:
    spellname = "Reverberation";
    break;
  case 16115:
    spellname = "Reverberation";
    break;
  case 16116:
    spellname = "Reverberation";
    break;
  case 16117:
    spellname = "Call of Thunder";
    break;
  case 16118:
    spellname = "Call of Thunder";
    break;
  case 16119:
    spellname = "Call of Thunder";
    break;
  case 16120:
    spellname = "Call of Thunder";
    break;
  case 16121:
    spellname = "Phasing";
    break;
  case 16122:
    spellname = "Phasing";
    break;
  case 16128:
    spellname = "Infected Bite";
    break;
  case 16130:
    spellname = "Earth's Grasp";
    break;
  case 16136:
    spellname = "Summoning Portal";
    break;
  case 16138:
    spellname = "Sharpen Blade V";
    break;
  case 16139:
    spellname = "Summoning Portal";
    break;
  case 16141:
    spellname = "Exploding Cadaver";
    break;
  case 16142:
    spellname = "Cadaver Worms";
    break;
  case 16143:
    spellname = "Cadaver Worms";
    break;
  case 16144:
    spellname = "Fire Blast";
    break;
  case 16145:
    spellname = "Sunder Armor";
    break;
  case 16146:
    spellname = "Burning Ravaged Cadaver";
    break;
  case 16147:
    spellname = "Burning Flesh";
    break;
  case 16153:
    spellname = "Smelt Thorium";
    break;
  case 16160:
    spellname = "Call of Flame";
    break;
  case 16161:
    spellname = "Call of Flame";
    break;
  case 16162:
    spellname = "Call of Flame";
    break;
  case 16163:
    spellname = "Call of Flame";
    break;
  case 16164:
    spellname = "Elemental Focus";
    break;
  case 16166:
    spellname = "Elemental Mastery";
    break;
  case 16167:
    spellname = "Rend Blackhand Mounts";
    break;
  case 16168:
    spellname = "Flame Buffet";
    break;
  case 16169:
    spellname = "Arcing Smash";
    break;
  case 16170:
    spellname = "Bloodlust";
    break;
  case 16171:
    spellname = "Empower Will";
    break;
  case 16172:
    spellname = "Head Crack";
    break;
  case 16173:
    spellname = "Totemic Focus";
    break;
  case 16176:
    spellname = "Ancestral Healing";
    break;
  case 16177:
    spellname = "Ancestral Fortitude";
    break;
  case 16178:
    spellname = "Purification";
    break;
  case 16179:
    spellname = "Tidal Focus";
    break;
  case 16180:
    spellname = "Nature's Guidance";
    break;
  case 16181:
    spellname = "Healing Focus";
    break;
  case 16182:
    spellname = "Improved Healing Wave";
    break;
  case 16184:
    spellname = "Improved Reincarnation";
    break;
  case 16186:
    spellname = "Fevered Plague";
    break;
  case 16187:
    spellname = "Restorative Totems";
    break;
  case 16188:
    spellname = "Nature's Swiftness";
    break;
  case 16189:
    spellname = "Totemic Mastery";
    break;
  case 16190:
    spellname = "Mana Tide Totem";
    break;
  case 16191:
    spellname = "Mana Tide";
    break;
  case 16194:
    spellname = "Tidal Mastery";
    break;
  case 16195:
    spellname = "Create Knucklebone Pouch";
    break;
  case 16196:
    spellname = "Nature's Guidance";
    break;
  case 16197:
    spellname = "Empty Charm Pouch";
    break;
  case 16198:
    spellname = "Nature's Guidance";
    break;
  case 16205:
    spellname = "Restorative Totems";
    break;
  case 16206:
    spellname = "Restorative Totems";
    break;
  case 16207:
    spellname = "Restorative Totems";
    break;
  case 16208:
    spellname = "Restorative Totems";
    break;
  case 16209:
    spellname = "Improved Reincarnation";
    break;
  case 16210:
    spellname = "Purification";
    break;
  case 16211:
    spellname = "Purification";
    break;
  case 16212:
    spellname = "Purification";
    break;
  case 16213:
    spellname = "Purification";
    break;
  case 16214:
    spellname = "Tidal Focus";
    break;
  case 16215:
    spellname = "Tidal Focus";
    break;
  case 16216:
    spellname = "Tidal Focus";
    break;
  case 16217:
    spellname = "Tidal Focus";
    break;
  case 16218:
    spellname = "Tidal Mastery";
    break;
  case 16219:
    spellname = "Tidal Mastery";
    break;
  case 16220:
    spellname = "Tidal Mastery";
    break;
  case 16221:
    spellname = "Tidal Mastery";
    break;
  case 16222:
    spellname = "Totemic Focus";
    break;
  case 16223:
    spellname = "Totemic Focus";
    break;
  case 16224:
    spellname = "Totemic Focus";
    break;
  case 16225:
    spellname = "Totemic Focus";
    break;
  case 16226:
    spellname = "Improved Healing Wave";
    break;
  case 16227:
    spellname = "Improved Healing Wave";
    break;
  case 16228:
    spellname = "Improved Healing Wave";
    break;
  case 16229:
    spellname = "Improved Healing Wave";
    break;
  case 16230:
    spellname = "Healing Focus";
    break;
  case 16231:
    spellname = "Curse of Recklessness";
    break;
  case 16232:
    spellname = "Healing Focus";
    break;
  case 16233:
    spellname = "Healing Focus";
    break;
  case 16234:
    spellname = "Healing Focus";
    break;
  case 16235:
    spellname = "Ancestral Healing";
    break;
  case 16236:
    spellname = "Ancestral Fortitude";
    break;
  case 16237:
    spellname = "Ancestral Fortitude";
    break;
  case 16240:
    spellname = "Ancestral Healing";
    break;
  case 16243:
    spellname = "Ribbon of Souls";
    break;
  case 16244:
    spellname = "Demoralizing Shout";
    break;
  case 16245:
    spellname = "Freeze Anim";
    break;
  case 16246:
    spellname = "Clearcasting";
    break;
  case 16247:
    spellname = "Curse of Thorns";
    break;
  case 16248:
    spellname = "Curse of Thorns";
    break;
  case 16249:
    spellname = "Frostbolt";
    break;
  case 16250:
    spellname = "Fireball Volley";
    break;
  case 16252:
    spellname = "Toughness";
    break;
  case 16253:
    spellname = "Shield Specialization";
    break;
  case 16254:
    spellname = "Anticipation";
    break;
  case 16255:
    spellname = "Thundering Strikes";
    break;
  case 16256:
    spellname = "Flurry";
    break;
  case 16257:
    spellname = "Flurry";
    break;
  case 16258:
    spellname = "Guardian Totems";
    break;
  case 16259:
    spellname = "Enhancing Totems";
    break;
  case 16261:
    spellname = "Improved Lightning Shield";
    break;
  case 16262:
    spellname = "Improved Ghost Wolf";
    break;
  case 16266:
    spellname = "Elemental Weapons";
    break;
  case 16268:
    spellname = "Spirit Weapons";
    break;
  case 16271:
    spellname = "Anticipation";
    break;
  case 16272:
    spellname = "Anticipation";
    break;
  case 16273:
    spellname = "Anticipation";
    break;
  case 16274:
    spellname = "Anticipation";
    break;
  case 16277:
    spellname = "Flurry";
    break;
  case 16278:
    spellname = "Flurry";
    break;
  case 16279:
    spellname = "Flurry";
    break;
  case 16280:
    spellname = "Flurry";
    break;
  case 16281:
    spellname = "Flurry";
    break;
  case 16282:
    spellname = "Flurry";
    break;
  case 16283:
    spellname = "Flurry";
    break;
  case 16284:
    spellname = "Flurry";
    break;
  case 16287:
    spellname = "Improved Ghost Wolf";
    break;
  case 16290:
    spellname = "Improved Lightning Shield";
    break;
  case 16291:
    spellname = "Improved Lightning Shield";
    break;
  case 16293:
    spellname = "Guardian Totems";
    break;
  case 16295:
    spellname = "Enhancing Totems";
    break;
  case 16298:
    spellname = "Shield Specialization";
    break;
  case 16299:
    spellname = "Shield Specialization";
    break;
  case 16300:
    spellname = "Shield Specialization";
    break;
  case 16301:
    spellname = "Shield Specialization";
    break;
  case 16302:
    spellname = "Thundering Strikes";
    break;
  case 16303:
    spellname = "Thundering Strikes";
    break;
  case 16304:
    spellname = "Thundering Strikes";
    break;
  case 16305:
    spellname = "Thundering Strikes";
    break;
  case 16306:
    spellname = "Toughness";
    break;
  case 16307:
    spellname = "Toughness";
    break;
  case 16308:
    spellname = "Toughness";
    break;
  case 16309:
    spellname = "Toughness";
    break;
  case 16310:
    spellname = "Cadaver Stun";
    break;
  case 16314:
    spellname = "Rockbiter Weapon";
    break;
  case 16315:
    spellname = "Rockbiter Weapon";
    break;
  case 16316:
    spellname = "Rockbiter Weapon";
    break;
  case 16319:
    spellname = "Touch of Vaelastrasz";
    break;
  case 16321:
    spellname = "Juju Escape";
    break;
  case 16322:
    spellname = "Juju Flurry";
    break;
  case 16323:
    spellname = "Juju Power";
    break;
  case 16324:
    spellname = "Summon Broken Cadaver";
    break;
  case 16325:
    spellname = "Juju Chill";
    break;
  case 16326:
    spellname = "Juju Ember";
    break;
  case 16327:
    spellname = "Juju Guile";
    break;
  case 16328:
    spellname = "Summon Rend Blackhand";
    break;
  case 16329:
    spellname = "Juju Might";
    break;
  case 16332:
    spellname = "Divine Touch of Vaelastrasz";
    break;
  case 16333:
    spellname = "Debilitating Touch";
    break;
  case 16334:
    spellname = "Summon Spiteful Phantom";
    break;
  case 16335:
    spellname = "Summon Wrath Phantom";
    break;
  case 16336:
    spellname = "Haunting Phantoms";
    break;
  case 16337:
    spellname = "Chromatic Chaos";
    break;
  case 16339:
    spellname = "Flametongue Weapon";
    break;
  case 16340:
    spellname = "Frost Breath";
    break;
  case 16341:
    spellname = "Flametongue Weapon";
    break;
  case 16342:
    spellname = "Flametongue Weapon";
    break;
  case 16343:
    spellname = "Flametongue Weapon Proc";
    break;
  case 16344:
    spellname = "Flametongue Weapon Proc";
    break;
  case 16345:
    spellname = "Disease Cloud";
    break;
  case 16346:
    spellname = "Disease Cloud";
    break;
  case 16349:
    spellname = "Call of Vaelastrasz";
    break;
  case 16350:
    spellname = "Freeze";
    break;
  case 16351:
    spellname = "Create Cache of Mau'ari";
    break;
  case 16352:
    spellname = "Frostbrand Attack";
    break;
  case 16353:
    spellname = "Frostbrand Attack";
    break;
  case 16354:
    spellname = "Vaelastrasz Spawn";
    break;
  case 16355:
    spellname = "Frostbrand Weapon";
    break;
  case 16356:
    spellname = "Frostbrand Weapon";
    break;
  case 16359:
    spellname = "Corrosive Acid Breath";
    break;
  case 16362:
    spellname = "Windfury Weapon";
    break;
  case 16366:
    spellname = "Enlarge";
    break;
  case 16367:
    spellname = "Chain Heal";
    break;
  case 16368:
    spellname = "Flametongue Attack";
    break;
  case 16372:
    spellname = "Chromatic Protection";
    break;
  case 16373:
    spellname = "Chromatic Protection: Fire";
    break;
  case 16375:
    spellname = "Drain Life";
    break;
  case 16378:
    spellname = "Temperature Reading";
    break;
  case 16379:
    spellname = "Ozzie Explodes";
    break;
  case 16380:
    spellname = "Greater Invisibility";
    break;
  case 16381:
    spellname = "Summon Rockwing Gargoyles";
    break;
  case 16387:
    spellname = "Flametongue Totem";
    break;
  case 16388:
    spellname = "Flametongue Totem Passive";
    break;
  case 16389:
    spellname = "Flametongue Totem Proc";
    break;
  case 16390:
    spellname = "Flame Breath";
    break;
  case 16391:
    spellname = "Chromatic Protection: Nature";
    break;
  case 16392:
    spellname = "Chromatic Protection: Frost";
    break;
  case 16393:
    spellname = "Rend";
    break;
  case 16396:
    spellname = "Flame Breath";
    break;
  case 16400:
    spellname = "Poison";
    break;
  case 16401:
    spellname = "Poison";
    break;
  case 16402:
    spellname = "Corruption";
    break;
  case 16403:
    spellname = "Rend";
    break;
  case 16404:
    spellname = "Banishment of Scale";
    break;
  case 16405:
    spellname = "Wound";
    break;
  case 16406:
    spellname = "Rend";
    break;
  case 16407:
    spellname = "Frost Blast";
    break;
  case 16408:
    spellname = "Shadow Bolt";
    break;
  case 16409:
    spellname = "Shadow Bolt";
    break;
  case 16410:
    spellname = "Shadow Bolt";
    break;
  case 16411:
    spellname = "Fatal Wound";
    break;
  case 16412:
    spellname = "Fireball";
    break;
  case 16413:
    spellname = "Fireball";
    break;
  case 16414:
    spellname = "Drain Life";
    break;
  case 16415:
    spellname = "Fireball";
    break;
  case 16416:
    spellname = "Summon Spire Spiderling";
    break;
  case 16418:
    spellname = "Crypt Scarabs";
    break;
  case 16419:
    spellname = "Flamestrike";
    break;
  case 16421:
    spellname = "Vaelastrasz Dragon Form";
    break;
  case 16427:
    spellname = "Virulent Poison";
    break;
  case 16428:
    spellname = "Virulent Poison Proc";
    break;
  case 16429:
    spellname = "Piercing Shadow";
    break;
  case 16430:
    spellname = "Soul Tap";
    break;
  case 16431:
    spellname = "Bone Armor";
    break;
  case 16432:
    spellname = "Plague Mist";
    break;
  case 16433:
    spellname = "Wound";
    break;
  case 16447:
    spellname = "Spawn Challenge to Urok";
    break;
  case 16448:
    spellname = "Black Rot";
    break;
  case 16449:
    spellname = "Maggot Slime";
    break;
  case 16450:
    spellname = "Summon Smolderweb";
    break;
  case 16451:
    spellname = "Judge's Gavel";
    break;
  case 16452:
    spellname = "Kill Urok Minion";
    break;
  case 16453:
    spellname = "Summon Spire Spiderling";
    break;
  case 16454:
    spellname = "Searing Blast";
    break;
  case 16455:
    spellname = "Lava";
    break;
  case 16456:
    spellname = "Slime";
    break;
  case 16457:
    spellname = "Call Friends";
    break;
  case 16458:
    spellname = "Ghoul Plague";
    break;
  case 16459:
    spellname = "Sword Specialization";
    break;
  case 16460:
    spellname = "Festering Bite";
    break;
  case 16461:
    spellname = "Slime Dysentery";
    break;
  case 16462:
    spellname = "Deflection";
    break;
  case 16463:
    spellname = "Deflection";
    break;
  case 16464:
    spellname = "Deflection";
    break;
  case 16465:
    spellname = "Deflection";
    break;
  case 16466:
    spellname = "Deflection";
    break;
  case 16467:
    spellname = "Kirtonos Transform";
    break;
  case 16468:
    spellname = "Mother's Milk";
    break;
  case 16469:
    spellname = "Web Explosion";
    break;
  case 16470:
    spellname = "Gift of Stone";
    break;
  case 16472:
    spellname = "Wicked Milking";
    break;
  case 16473:
    spellname = "Summoned Urok";
    break;
  case 16474:
    spellname = "Create Rookery Spawner";
    break;
  case 16487:
    spellname = "Blood Craze";
    break;
  case 16488:
    spellname = "Blood Craze";
    break;
  case 16489:
    spellname = "Blood Craze";
    break;
  case 16490:
    spellname = "Blood Craze";
    break;
  case 16491:
    spellname = "Blood Craze";
    break;
  case 16492:
    spellname = "Blood Craze";
    break;
  case 16493:
    spellname = "Impale";
    break;
  case 16494:
    spellname = "Impale";
    break;
  case 16495:
    spellname = "Fatal Bite";
    break;
  case 16496:
    spellname = "Shoot";
    break;
  case 16497:
    spellname = "Stun Bomb";
    break;
  case 16498:
    spellname = "Faerie Fire";
    break;
  case 16502:
    spellname = "Release Winna's Kitten";
    break;
  case 16508:
    spellname = "Intimidating Roar";
    break;
  case 16509:
    spellname = "Rend";
    break;
  case 16510:
    spellname = "Corrupted Saber Visual (DND)";
    break;
  case 16511:
    spellname = "Hemorrhage";
    break;
  case 16513:
    spellname = "Vile Poisons";
    break;
  case 16514:
    spellname = "Vile Poisons";
    break;
  case 16515:
    spellname = "Vile Poisons";
    break;
  case 16527:
    spellname = "Worg Sentry";
    break;
  case 16528:
    spellname = "Numbing Pain";
    break;
  case 16529:
    spellname = "Destroy Totems (PT)";
    break;
  case 16530:
    spellname = "Smolderweb Protection";
    break;
  case 16531:
    spellname = "Summon Frail Skeleton";
    break;
  case 16532:
    spellname = "Emberseer Object Visual";
    break;
  case 16533:
    spellname = "Emberseer Start";
    break;
  case 16534:
    spellname = "Emberseer Bonus Damage";
    break;
  case 16536:
    spellname = "Flame Buffet";
    break;
  case 16537:
    spellname = "Immature Venom Sac";
    break;
  case 16538:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 16539:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 16540:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 16541:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 16542:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 16544:
    spellname = "Improved Fire Totems";
    break;
  case 16549:
    spellname = "Wound";
    break;
  case 16550:
    spellname = "Bonespike";
    break;
  case 16551:
    spellname = "Felstriker";
    break;
  case 16552:
    spellname = "Venom Spit";
    break;
  case 16553:
    spellname = "Ravenous Claw";
    break;
  case 16554:
    spellname = "Toxic Bolt";
    break;
  case 16555:
    spellname = "Drowning Death";
    break;
  case 16556:
    spellname = "Disturb Rookery Egg (FAST)";
    break;
  case 16557:
    spellname = "Destroy Spear";
    break;
  case 16558:
    spellname = "Destroy Spear";
    break;
  case 16559:
    spellname = "Flame Wrath";
    break;
  case 16560:
    spellname = "Flame Wrath";
    break;
  case 16561:
    spellname = "Regrowth";
    break;
  case 16562:
    spellname = "Urok Minions Vanish";
    break;
  case 16564:
    spellname = "Gargoyle Strike";
    break;
  case 16565:
    spellname = "Banshee Wail";
    break;
  case 16566:
    spellname = "Net-o-Matic";
    break;
  case 16567:
    spellname = "Tainted Mind";
    break;
  case 16568:
    spellname = "Mind Flay";
    break;
  case 16569:
    spellname = "Health Funnel";
    break;
  case 16570:
    spellname = "Charged Arcane Bolt";
    break;
  case 16572:
    spellname = "Shoot";
    break;
  case 16573:
    spellname = "Putrid Bile";
    break;
  case 16574:
    spellname = "Putrid Bile";
    break;
  case 16575:
    spellname = "Putrid Bile";
    break;
  case 16576:
    spellname = "Piercing Screech";
    break;
  case 16577:
    spellname = "Disease Cloud";
    break;
  case 16578:
    spellname = "Lightning Mastery";
    break;
  case 16579:
    spellname = "Lightning Mastery";
    break;
  case 16580:
    spellname = "Lightning Mastery";
    break;
  case 16581:
    spellname = "Lightning Mastery";
    break;
  case 16582:
    spellname = "Lightning Mastery";
    break;
  case 16583:
    spellname = "Shadow Shock";
    break;
  case 16587:
    spellname = "Dark Whispers";
    break;
  case 16588:
    spellname = "Dark Mending";
    break;
  case 16589:
    spellname = "Noggenfogger Elixir";
    break;
  case 16590:
    spellname = "Summon Zombie";
    break;
  case 16591:
    spellname = "Noggenfogger Elixir";
    break;
  case 16592:
    spellname = "Shadowform";
    break;
  case 16593:
    spellname = "Noggenfogger Elixir";
    break;
  case 16594:
    spellname = "Crypt Scarabs";
    break;
  case 16595:
    spellname = "Noggenfogger Elixir";
    break;
  case 16596:
    spellname = "Flames of Shahram";
    break;
  case 16597:
    spellname = "Curse of Shahram";
    break;
  case 16598:
    spellname = "Will of Shahram";
    break;
  case 16599:
    spellname = "Blessing of Shahram";
    break;
  case 16600:
    spellname = "Might of Shahram";
    break;
  case 16601:
    spellname = "Fist of Shahram";
    break;
  case 16602:
    spellname = "Shahram";
    break;
  case 16603:
    spellname = "Demonfork";
    break;
  case 16604:
    spellname = "Shahram";
    break;
  case 16606:
    spellname = "Shahram";
    break;
  case 16608:
    spellname = "Drain Life";
    break;
  case 16609:
    spellname = "Warchief's Blessing";
    break;
  case 16610:
    spellname = "Razorhide";
    break;
  case 16611:
    spellname = "Demon Forged Breastplate";
    break;
  case 16612:
    spellname = "Agamaggan's Strength";
    break;
  case 16613:
    spellname = "Displacing Temporal Rift";
    break;
  case 16614:
    spellname = "Lightning Strike";
    break;
  case 16615:
    spellname = "Add Lightning Dam - Weap 03";
    break;
  case 16617:
    spellname = "Lionheart";
    break;
  case 16618:
    spellname = "Spirit of the Wind";
    break;
  case 16620:
    spellname = "Proc Self Invulnerability";
    break;
  case 16621:
    spellname = "Self Invulnerability";
    break;
  case 16622:
    spellname = "Enhance Blunt Weapon V";
    break;
  case 16623:
    spellname = "Thorium Shield Spike";
    break;
  case 16624:
    spellname = "Thorium Shield Spike";
    break;
  case 16627:
    spellname = "Capture Felhound Spirit";
    break;
  case 16628:
    spellname = "Capture Infernal Spirit";
    break;
  case 16629:
    spellname = "Attuned Dampener";
    break;
  case 16633:
    spellname = "Create Item Visual (DND)";
    break;
  case 16634:
    spellname = "Vaelan Spawns";
    break;
  case 16635:
    spellname = "Fire Nova";
    break;
  case 16636:
    spellname = "Berserker Charge";
    break;
  case 16637:
    spellname = "Mend Dragon";
    break;
  case 16638:
    spellname = "Increase Nature Dam 34";
    break;
  case 16639:
    spellname = "Dense Grinding Stone";
    break;
  case 16640:
    spellname = "Dense Weightstone";
    break;
  case 16641:
    spellname = "Dense Sharpening Stone";
    break;
  case 16642:
    spellname = "Thorium Armor";
    break;
  case 16643:
    spellname = "Thorium Belt";
    break;
  case 16644:
    spellname = "Thorium Bracers";
    break;
  case 16645:
    spellname = "Radiant Belt";
    break;
  case 16646:
    spellname = "Imperial Plate Shoulders";
    break;
  case 16647:
    spellname = "Imperial Plate Belt";
    break;
  case 16648:
    spellname = "Radiant Breastplate";
    break;
  case 16649:
    spellname = "Imperial Plate Bracers";
    break;
  case 16650:
    spellname = "Wildthorn Mail";
    break;
  case 16651:
    spellname = "Thorium Shield Spike";
    break;
  case 16652:
    spellname = "Thorium Boots";
    break;
  case 16653:
    spellname = "Thorium Helm";
    break;
  case 16654:
    spellname = "Radiant Gloves";
    break;
  case 16655:
    spellname = "Fiery Plate Gauntlets";
    break;
  case 16656:
    spellname = "Radiant Boots";
    break;
  case 16657:
    spellname = "Imperial Plate Boots";
    break;
  case 16658:
    spellname = "Imperial Plate Helm";
    break;
  case 16659:
    spellname = "Radiant Circlet";
    break;
  case 16660:
    spellname = "Dawnbringer Shoulders";
    break;
  case 16661:
    spellname = "Storm Gauntlets";
    break;
  case 16662:
    spellname = "Thorium Leggings";
    break;
  case 16663:
    spellname = "Imperial Plate Chest";
    break;
  case 16664:
    spellname = "Runic Plate Shoulders";
    break;
  case 16665:
    spellname = "Runic Plate Boots";
    break;
  case 16666:
    spellname = "Demonic Rune";
    break;
  case 16667:
    spellname = "Demon Forged Breastplate";
    break;
  case 16689:
    spellname = "Nature's Grasp";
    break;
  case 16697:
    spellname = "Cower";
    break;
  case 16698:
    spellname = "Cower";
    break;
  case 16707:
    spellname = "Hex";
    break;
  case 16708:
    spellname = "Hex";
    break;
  case 16709:
    spellname = "Hex";
    break;
  case 16710:
    spellname = "Finkle is Einhorn";
    break;
  case 16711:
    spellname = "Grow";
    break;
  case 16712:
    spellname = "Special Brew";
    break;
  case 16713:
    spellname = "Ghostly";
    break;
  case 16714:
    spellname = "Smokey";
    break;
  case 16715:
    spellname = "Smokey";
    break;
  case 16716:
    spellname = "Launch";
    break;
  case 16717:
    spellname = "Launch";
    break;
  case 16718:
    spellname = "Finkle's Skinner";
    break;
  case 16719:
    spellname = "Vile Poisons";
    break;
  case 16720:
    spellname = "Vile Poisons";
    break;
  case 16722:
    spellname = "Durability Damage (PT)";
    break;
  case 16723:
    spellname = "Hold Rifle";
    break;
  case 16724:
    spellname = "Whitesoul Helm";
    break;
  case 16725:
    spellname = "Radiant Leggings";
    break;
  case 16726:
    spellname = "Runic Plate Helm";
    break;
  case 16727:
    spellname = "War Stomp";
    break;
  case 16728:
    spellname = "Helm of the Great Chief";
    break;
  case 16729:
    spellname = "Lionheart Helm";
    break;
  case 16730:
    spellname = "Imperial Plate Leggings";
    break;
  case 16731:
    spellname = "Runic Breastplate";
    break;
  case 16732:
    spellname = "Runic Plate Leggings";
    break;
  case 16734:
    spellname = "Arcane Mastery";
    break;
  case 16735:
    spellname = "Arcane Mastery";
    break;
  case 16736:
    spellname = "Arcane Mastery";
    break;
  case 16737:
    spellname = "Arcane Mastery";
    break;
  case 16738:
    spellname = "Arcane Mastery";
    break;
  case 16739:
    spellname = "Orb of Deception";
    break;
  case 16740:
    spellname = "War Stomp";
    break;
  case 16741:
    spellname = "Stronghold Gauntlets";
    break;
  case 16742:
    spellname = "Enchanted Thorium Helm";
    break;
  case 16744:
    spellname = "Enchanted Thorium Leggings";
    break;
  case 16745:
    spellname = "Enchanted Thorium Breastplate";
    break;
  case 16746:
    spellname = "Invulnerable Mail";
    break;
  case 16756:
    spellname = "Unsheathe Rifle";
    break;
  case 16757:
    spellname = "Arctic Reach";
    break;
  case 16758:
    spellname = "Arctic Reach";
    break;
  case 16763:
    spellname = "Improved Frostbolt";
    break;
  case 16765:
    spellname = "Improved Frostbolt";
    break;
  case 16766:
    spellname = "Improved Frostbolt";
    break;
  case 16767:
    spellname = "Shoot";
    break;
  case 16768:
    spellname = "Shoot";
    break;
  case 16769:
    spellname = "Improved Arcane Missiles";
    break;
  case 16770:
    spellname = "Improved Arcane Missiles";
    break;
  case 16771:
    spellname = "Warosh Tickle";
    break;
  case 16772:
    spellname = "Shoot";
    break;
  case 16775:
    spellname = "Shoot";
    break;
  case 16776:
    spellname = "Shoot";
    break;
  case 16777:
    spellname = "Shoot";
    break;
  case 16778:
    spellname = "Shoot";
    break;
  case 16779:
    spellname = "Shoot";
    break;
  case 16780:
    spellname = "Shoot";
    break;
  case 16781:
    spellname = "Combining Charms";
    break;
  case 16782:
    spellname = "Lightning Bolt";
    break;
  case 16783:
    spellname = "Shadow Bolt";
    break;
  case 16784:
    spellname = "Shadow Bolt";
    break;
  case 16785:
    spellname = "Flamebreak";
    break;
  case 16786:
    spellname = "Mortar Shot";
    break;
  case 16787:
    spellname = "Warosh's Teleport";
    break;
  case 16788:
    spellname = "Fireball";
    break;
  case 16789:
    spellname = "Rage";
    break;
  case 16790:
    spellname = "Knockdown";
    break;
  case 16791:
    spellname = "Furious Anger";
    break;
  case 16792:
    spellname = "Furious Anger";
    break;
  case 16793:
    spellname = "Draining Blow";
    break;
  case 16794:
    spellname = "Transformation";
    break;
  case 16795:
    spellname = "Crypt Scarabs";
    break;
  case 16796:
    spellname = "Summon Shy-Rotam";
    break;
  case 16798:
    spellname = "Enchanting Lullaby";
    break;
  case 16799:
    spellname = "Frostbolt";
    break;
  case 16800:
    spellname = "Ghoul Rot";
    break;
  case 16801:
    spellname = "Warosh's Transform";
    break;
  case 16803:
    spellname = "Flash Freeze";
    break;
  case 16804:
    spellname = "Flame Shock";
    break;
  case 16805:
    spellname = "Conflagration";
    break;
  case 16806:
    spellname = "Conflagration";
    break;
  case 16807:
    spellname = "Mass Teleport";
    break;
  case 16809:
    spellname = "Spawn Bile Slime";
    break;
  case 16810:
    spellname = "Nature's Grasp";
    break;
  case 16811:
    spellname = "Nature's Grasp";
    break;
  case 16812:
    spellname = "Nature's Grasp";
    break;
  case 16813:
    spellname = "Nature's Grasp";
    break;
  case 16814:
    spellname = "Starlight Wrath";
    break;
  case 16815:
    spellname = "Starlight Wrath";
    break;
  case 16816:
    spellname = "Starlight Wrath";
    break;
  case 16817:
    spellname = "Starlight Wrath";
    break;
  case 16818:
    spellname = "Starlight Wrath";
    break;
  case 16819:
    spellname = "Nature's Reach";
    break;
  case 16820:
    spellname = "Nature's Reach";
    break;
  case 16821:
    spellname = "Improved Moonfire";
    break;
  case 16822:
    spellname = "Improved Moonfire";
    break;
  case 16827:
    spellname = "Claw";
    break;
  case 16828:
    spellname = "Claw";
    break;
  case 16829:
    spellname = "Claw";
    break;
  case 16830:
    spellname = "Claw";
    break;
  case 16831:
    spellname = "Claw";
    break;
  case 16832:
    spellname = "Claw";
    break;
  case 16833:
    spellname = "Natural Shapeshifter";
    break;
  case 16834:
    spellname = "Natural Shapeshifter";
    break;
  case 16835:
    spellname = "Natural Shapeshifter";
    break;
  case 16836:
    spellname = "Brambles";
    break;
  case 16838:
    spellname = "Banshee Shriek";
    break;
  case 16839:
    spellname = "Brambles";
    break;
  case 16840:
    spellname = "Brambles";
    break;
  case 16843:
    spellname = "Crimson Fury";
    break;
  case 16844:
    spellname = "Crimson Fury";
    break;
  case 16845:
    spellname = "Moonglow";
    break;
  case 16846:
    spellname = "Moonglow";
    break;
  case 16847:
    spellname = "Moonglow";
    break;
  case 16850:
    spellname = "Celestial Focus";
    break;
  case 16856:
    spellname = "Mortal Strike";
    break;
  case 16857:
    spellname = "Faerie Fire (Feral)";
    break;
  case 16858:
    spellname = "Feral Aggression";
    break;
  case 16859:
    spellname = "Feral Aggression";
    break;
  case 16860:
    spellname = "Feral Aggression";
    break;
  case 16861:
    spellname = "Feral Aggression";
    break;
  case 16862:
    spellname = "Feral Aggression";
    break;
  case 16864:
    spellname = "Omen of Clarity";
    break;
  case 16865:
    spellname = "Spawn Bile Slimes";
    break;
  case 16866:
    spellname = "Venom Spit";
    break;
  case 16867:
    spellname = "Banshee Curse";
    break;
  case 16868:
    spellname = "Banshee Wail";
    break;
  case 16869:
    spellname = "Ice Tomb";
    break;
  case 16870:
    spellname = "Clearcasting";
    break;
  case 16871:
    spellname = "Bleakwood Curse";
    break;
  case 16872:
    spellname = "QATest Raid Buffs lvl 60";
    break;
  case 16873:
    spellname = "Holy Word: Fortitude";
    break;
  case 16874:
    spellname = "Shadow Protection";
    break;
  case 16875:
    spellname = "Divine Spirit";
    break;
  case 16876:
    spellname = "Arcane Intellect";
    break;
  case 16877:
    spellname = "Thorns";
    break;
  case 16878:
    spellname = "Mark of the Wild";
    break;
  case 16880:
    spellname = "Nature's Grace";
    break;
  case 16881:
    spellname = "Water Breathing";
    break;
  case 16882:
    spellname = "Detect Greater Invisibility";
    break;
  case 16883:
    spellname = "Elixir of the Giants";
    break;
  case 16884:
    spellname = "Health II";
    break;
  case 16885:
    spellname = "Agility VIII";
    break;
  case 16886:
    spellname = "Nature's Grace";
    break;
  case 16888:
    spellname = "Intellect IX";
    break;
  case 16889:
    spellname = "Greater Arcane Elixir";
    break;
  case 16890:
    spellname = "Regeneration IV";
    break;
  case 16891:
    spellname = "Shadow Protection";
    break;
  case 16892:
    spellname = "Holy Protection";
    break;
  case 16893:
    spellname = "Nature Protection";
    break;
  case 16894:
    spellname = "Fire Protection";
    break;
  case 16895:
    spellname = "Frost Protection";
    break;
  case 16896:
    spellname = "Moonfury";
    break;
  case 16897:
    spellname = "Moonfury";
    break;
  case 16898:
    spellname = "Blaze";
    break;
  case 16899:
    spellname = "Moonfury";
    break;
  case 16900:
    spellname = "Moonfury";
    break;
  case 16901:
    spellname = "Moonfury";
    break;
  case 16908:
    spellname = "Dispel Magic";
    break;
  case 16909:
    spellname = "Vengeance";
    break;
  case 16910:
    spellname = "Vengeance";
    break;
  case 16911:
    spellname = "Vengeance";
    break;
  case 16912:
    spellname = "Vengeance";
    break;
  case 16913:
    spellname = "Vengeance";
    break;
  case 16914:
    spellname = "Hurricane";
    break;
  case 16916:
    spellname = "Strength of the Champion";
    break;
  case 16918:
    spellname = "Control of Nature";
    break;
  case 16919:
    spellname = "Control of Nature";
    break;
  case 16920:
    spellname = "Control of Nature";
    break;
  case 16921:
    spellname = "Chain Lightning";
    break;
  case 16922:
    spellname = "Starfire Stun";
    break;
  case 16923:
    spellname = "Celestial Focus";
    break;
  case 16924:
    spellname = "Celestial Focus";
    break;
  case 16927:
    spellname = "Chilled";
    break;
  case 16928:
    spellname = "Armor Shatter";
    break;
  case 16929:
    spellname = "Thick Hide";
    break;
  case 16930:
    spellname = "Thick Hide";
    break;
  case 16931:
    spellname = "Thick Hide";
    break;
  case 16934:
    spellname = "Ferocity";
    break;
  case 16935:
    spellname = "Ferocity";
    break;
  case 16936:
    spellname = "Ferocity";
    break;
  case 16937:
    spellname = "Ferocity";
    break;
  case 16938:
    spellname = "Ferocity";
    break;
  case 16939:
    spellname = "Ancestor's Vengeance";
    break;
  case 16940:
    spellname = "Brutal Impact";
    break;
  case 16941:
    spellname = "Brutal Impact";
    break;
  case 16942:
    spellname = "Sharpened Claws";
    break;
  case 16943:
    spellname = "Sharpened Claws";
    break;
  case 16944:
    spellname = "Sharpened Claws";
    break;
  case 16947:
    spellname = "Feral Instinct";
    break;
  case 16948:
    spellname = "Feral Instinct";
    break;
  case 16949:
    spellname = "Feral Instinct";
    break;
  case 16952:
    spellname = "Blood Frenzy";
    break;
  case 16953:
    spellname = "Blood Frenzy";
    break;
  case 16954:
    spellname = "Blood Frenzy";
    break;
  case 16958:
    spellname = "Primal Fury";
    break;
  case 16959:
    spellname = "Primal Fury";
    break;
  case 16960:
    spellname = "Thorium Greatsword";
    break;
  case 16961:
    spellname = "Primal Fury";
    break;
  case 16965:
    spellname = "Bleakwood Hew";
    break;
  case 16966:
    spellname = "Shredding Attacks";
    break;
  case 16967:
    spellname = "Inlaid Thorium Hammer";
    break;
  case 16968:
    spellname = "Shredding Attacks";
    break;
  case 16969:
    spellname = "Ornate Thorium Handaxe";
    break;
  case 16970:
    spellname = "Dawn's Edge";
    break;
  case 16971:
    spellname = "Huge Thorium Battleaxe";
    break;
  case 16972:
    spellname = "Predatory Strikes";
    break;
  case 16973:
    spellname = "Enchanted Battlehammer";
    break;
  case 16974:
    spellname = "Predatory Strikes";
    break;
  case 16975:
    spellname = "Predatory Strikes";
    break;
  case 16978:
    spellname = "Blazing Rapier";
    break;
  case 16979:
    spellname = "Feral Charge";
    break;
  case 16980:
    spellname = "Rune Edge";
    break;
  case 16982:
    spellname = "Orb of Fire";
    break;
  case 16983:
    spellname = "Serenity";
    break;
  case 16984:
    spellname = "Volcanic Hammer";
    break;
  case 16985:
    spellname = "Corruption";
    break;
  case 16986:
    spellname = "Blood Talon";
    break;
  case 16987:
    spellname = "Darkspear";
    break;
  case 16988:
    spellname = "Hammer of the Titans";
    break;
  case 16989:
    spellname = "Planting Banner";
    break;
  case 16990:
    spellname = "Arcanite Champion";
    break;
  case 16991:
    spellname = "Annihilator";
    break;
  case 16992:
    spellname = "Frostguard";
    break;
  case 16993:
    spellname = "Masterwork Stormhammer";
    break;
  case 16994:
    spellname = "Arcanite Reaper";
    break;
  case 16995:
    spellname = "Heartseeker";
    break;
  case 16996:
    spellname = "Incendia Powder";
    break;
  case 16997:
    spellname = "Gargoyle Strike";
    break;
  case 16998:
    spellname = "Savage Fury";
    break;
  case 16999:
    spellname = "Savage Fury";
    break;
  case 17002:
    spellname = "Feral Swiftness";
    break;
  case 17003:
    spellname = "Heart of the Wild";
    break;
  case 17004:
    spellname = "Heart of the Wild";
    break;
  case 17005:
    spellname = "Heart of the Wild";
    break;
  case 17006:
    spellname = "Heart of the Wild";
    break;
  case 17007:
    spellname = "Leader of the Pack";
    break;
  case 17008:
    spellname = "Drain Mana";
    break;
  case 17009:
    spellname = "Voodoo";
    break;
  case 17010:
    spellname = "Freezing Claw";
    break;
  case 17011:
    spellname = "Freezing Claw";
    break;
  case 17012:
    spellname = "Devour Magic";
    break;
  case 17013:
    spellname = "Agamaggan's Agility";
    break;
  case 17014:
    spellname = "Bone Shards";
    break;
  case 17015:
    spellname = "Destroy Tent";
    break;
  case 17016:
    spellname = "Placing Beacon Torch";
    break;
  case 17038:
    spellname = "Winterfall Firewater";
    break;
  case 17039:
    spellname = "Master Swordsmith";
    break;
  case 17040:
    spellname = "Master Hammersmith";
    break;
  case 17041:
    spellname = "Master Axesmith";
    break;
  case 17045:
    spellname = "Dawn's Gambit";
    break;
  case 17047:
    spellname = "Increase Reputation";
    break;
  case 17048:
    spellname = "Soul Claim";
    break;
  case 17050:
    spellname = "Improved Mark of the Wild";
    break;
  case 17051:
    spellname = "Improved Mark of the Wild";
    break;
  case 17052:
    spellname = "Decay";
    break;
  case 17053:
    spellname = "Improved Mark of the Wild";
    break;
  case 17054:
    spellname = "Improved Mark of the Wild";
    break;
  case 17055:
    spellname = "Improved Mark of the Wild";
    break;
  case 17056:
    spellname = "Furor";
    break;
  case 17057:
    spellname = "Furor";
    break;
  case 17058:
    spellname = "Furor";
    break;
  case 17059:
    spellname = "Furor";
    break;
  case 17060:
    spellname = "Furor";
    break;
  case 17061:
    spellname = "Furor";
    break;
  case 17063:
    spellname = "Nature's Focus";
    break;
  case 17064:
    spellname = "Summon Rotting Worms";
    break;
  case 17065:
    spellname = "Nature's Focus";
    break;
  case 17066:
    spellname = "Nature's Focus";
    break;
  case 17067:
    spellname = "Nature's Focus";
    break;
  case 17068:
    spellname = "Nature's Focus";
    break;
  case 17069:
    spellname = "Naturalist";
    break;
  case 17070:
    spellname = "Naturalist";
    break;
  case 17071:
    spellname = "Naturalist";
    break;
  case 17072:
    spellname = "Naturalist";
    break;
  case 17073:
    spellname = "Naturalist";
    break;
  case 17074:
    spellname = "Improved Regrowth";
    break;
  case 17075:
    spellname = "Improved Regrowth";
    break;
  case 17076:
    spellname = "Improved Regrowth";
    break;
  case 17077:
    spellname = "Improved Regrowth";
    break;
  case 17078:
    spellname = "Improved Regrowth";
    break;
  case 17080:
    spellname = "Intensity";
    break;
  case 17081:
    spellname = "Improved Enrage";
    break;
  case 17086:
    spellname = "Breath";
    break;
  case 17087:
    spellname = "Breath";
    break;
  case 17088:
    spellname = "Breath";
    break;
  case 17089:
    spellname = "Breath";
    break;
  case 17090:
    spellname = "Breath";
    break;
  case 17091:
    spellname = "Breath";
    break;
  case 17092:
    spellname = "Breath";
    break;
  case 17093:
    spellname = "Breath";
    break;
  case 17094:
    spellname = "Breath";
    break;
  case 17095:
    spellname = "Breath";
    break;
  case 17097:
    spellname = "Breath";
    break;
  case 17099:
    spellname = "Furor";
    break;
  case 17104:
    spellname = "Gift of Nature";
    break;
  case 17105:
    spellname = "Banshee Curse";
    break;
  case 17106:
    spellname = "Intensity";
    break;
  case 17107:
    spellname = "Intensity";
    break;
  case 17108:
    spellname = "Intensity";
    break;
  case 17111:
    spellname = "Improved Rejuvenation";
    break;
  case 17112:
    spellname = "Improved Rejuvenation";
    break;
  case 17113:
    spellname = "Improved Rejuvenation";
    break;
  case 17114:
    spellname = "Improved Rejuvenation";
    break;
  case 17115:
    spellname = "Improved Rejuvenation";
    break;
  case 17116:
    spellname = "Nature's Swiftness";
    break;
  case 17117:
    spellname = "Magatha Incendia Powder";
    break;
  case 17118:
    spellname = "Subtlety";
    break;
  case 17119:
    spellname = "Subtlety";
    break;
  case 17120:
    spellname = "Subtlety";
    break;
  case 17121:
    spellname = "Subtlety";
    break;
  case 17122:
    spellname = "Subtlety";
    break;
  case 17123:
    spellname = "Improved Tranquility";
    break;
  case 17124:
    spellname = "Improved Tranquility";
    break;
  case 17131:
    spellname = "Hover";
    break;
  case 17132:
    spellname = "Pamela's Doll Trap";
    break;
  case 17133:
    spellname = "Create Pamela's Doll";
    break;
  case 17134:
    spellname = "Musty Tome Trap";
    break;
  case 17136:
    spellname = "Onyxia Trans";
    break;
  case 17137:
    spellname = "Flash Heal";
    break;
  case 17138:
    spellname = "Flash Heal";
    break;
  case 17139:
    spellname = "Power Word: Shield";
    break;
  case 17140:
    spellname = "Holy Fire";
    break;
  case 17141:
    spellname = "Holy Fire";
    break;
  case 17142:
    spellname = "Holy Fire";
    break;
  case 17143:
    spellname = "Holy Strike";
    break;
  case 17144:
    spellname = "Wrath";
    break;
  case 17145:
    spellname = "Blast Wave";
    break;
  case 17146:
    spellname = "Shadow Word: Pain";
    break;
  case 17147:
    spellname = "Exorcism";
    break;
  case 17148:
    spellname = "Brain Hacker";
    break;
  case 17149:
    spellname = "Exorcism";
    break;
  case 17150:
    spellname = "Arcane Might";
    break;
  case 17151:
    spellname = "Shadow Barrier";
    break;
  case 17152:
    spellname = "Destiny";
    break;
  case 17153:
    spellname = "Rend";
    break;
  case 17154:
    spellname = "The Green Tower";
    break;
  case 17155:
    spellname = "Sprinkling Purified Water";
    break;
  case 17156:
    spellname = "Maul";
    break;
  case 17157:
    spellname = "Lightning Breath";
    break;
  case 17158:
    spellname = "Venom Spit";
    break;
  case 17159:
    spellname = "Port to Haleh";
    break;
  case 17160:
    spellname = "Port to Mazthoril";
    break;
  case 17161:
    spellname = "Taking Moon Well Sample";
    break;
  case 17162:
    spellname = "Summon Water Elemental";
    break;
  case 17164:
    spellname = "Summon Scarlet Hound";
    break;
  case 17165:
    spellname = "Mind Flay";
    break;
  case 17166:
    spellname = "Release Umi's Yeti";
    break;
  case 17167:
    spellname = "Blue Flight";
    break;
  case 17168:
    spellname = "Haleh's Will";
    break;
  case 17169:
    spellname = "Summon Carrion Scarab";
    break;
  case 17170:
    spellname = "Fatal Sting";
    break;
  case 17171:
    spellname = "Shadow Shot";
    break;
  case 17172:
    spellname = "Hex";
    break;
  case 17173:
    spellname = "Drain Life";
    break;
  case 17174:
    spellname = "Concussive Shot";
    break;
  case 17175:
    spellname = "Resist Arcane";
    break;
  case 17176:
    spellname = "Panther Cage Key";
    break;
  case 17177:
    spellname = "Seal of Protection";
    break;
  case 17178:
    spellname = "Alex's Audacity";
    break;
  case 17179:
    spellname = "Boon of Life";
    break;
  case 17180:
    spellname = "Enchanted Thorium";
    break;
  case 17181:
    spellname = "Enchanted Leather";
    break;
  case 17183:
    spellname = "Poison";
    break;
  case 17187:
    spellname = "Transmute: Arcanite";
    break;
  case 17189:
    spellname = "Frostwhisper's Lifeblood";
    break;
  case 17190:
    spellname = "Ras Frostwhisper Visual Dummy";
    break;
  case 17191:
    spellname = "Improved Renew";
    break;
  case 17194:
    spellname = "Mind Blast";
    break;
  case 17195:
    spellname = "Scorch";
    break;
  case 17196:
    spellname = "Seeping Willow";
    break;
  case 17197:
    spellname = "Maggot Goo";
    break;
  case 17198:
    spellname = "Overpower";
    break;
  case 17199:
    spellname = "Fire Cannon";
    break;
  case 17200:
    spellname = "Call of the Hero";
    break;
  case 17201:
    spellname = "Dispel Magic";
    break;
  case 17202:
    spellname = "Avenge";
    break;
  case 17203:
    spellname = "Fireball Volley";
    break;
  case 17204:
    spellname = "Summon Skeleton";
    break;
  case 17205:
    spellname = "Winterfall Firewater";
    break;
  case 17206:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17207:
    spellname = "Whirlwind";
    break;
  case 17208:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17209:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17210:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17211:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17212:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17213:
    spellname = "Curse of Vengeance";
    break;
  case 17214:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17215:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17216:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17217:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17218:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17219:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17220:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17221:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17222:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17223:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 17224:
    spellname = "Upgrade Zigguraut";
    break;
  case 17227:
    spellname = "Curse of Weakness";
    break;
  case 17228:
    spellname = "Shadow Bolt Volley";
    break;
  case 17229:
    spellname = "Winterspring Frostsaber";
    break;
  case 17230:
    spellname = "Infected Wound";
    break;
  case 17231:
    spellname = "Summon Illusory Wraith";
    break;
  case 17232:
    spellname = "Devotion Aura";
    break;
  case 17233:
    spellname = "Lay on Hands";
    break;
  case 17234:
    spellname = "Shadow Shock";
    break;
  case 17235:
    spellname = "Raise Undead Scarab";
    break;
  case 17236:
    spellname = "Upgrade Zigguraut";
    break;
  case 17237:
    spellname = "Upgrade Zigguraut";
    break;
  case 17238:
    spellname = "Drain Life";
    break;
  case 17239:
    spellname = "Upgrade Zigguraut";
    break;
  case 17240:
    spellname = "Upgrade Zigguraut";
    break;
  case 17241:
    spellname = "Upgrade Zigguraut";
    break;
  case 17242:
    spellname = "Upgrade Zigguraut";
    break;
  case 17243:
    spellname = "Drain Mana";
    break;
  case 17244:
    spellname = "Possess";
    break;
  case 17245:
    spellname = "Improved Nature's Grasp";
    break;
  case 17246:
    spellname = "Possessed";
    break;
  case 17247:
    spellname = "Improved Nature's Grasp";
    break;
  case 17248:
    spellname = "Improved Nature's Grasp";
    break;
  case 17249:
    spellname = "Improved Nature's Grasp";
    break;
  case 17250:
    spellname = "Possess";
    break;
  case 17251:
    spellname = "Spirit Healer Res";
    break;
  case 17252:
    spellname = "Mark of the Dragon Lord";
    break;
  case 17253:
    spellname = "Bite";
    break;
  case 17254:
    spellname = "Bite";
    break;
  case 17255:
    spellname = "Bite";
    break;
  case 17256:
    spellname = "Bite";
    break;
  case 17257:
    spellname = "Bite";
    break;
  case 17258:
    spellname = "Bite";
    break;
  case 17259:
    spellname = "Bite";
    break;
  case 17260:
    spellname = "Bite";
    break;
  case 17261:
    spellname = "Bite";
    break;
  case 17262:
    spellname = "Bite";
    break;
  case 17263:
    spellname = "Bite";
    break;
  case 17264:
    spellname = "Bite";
    break;
  case 17265:
    spellname = "Bite";
    break;
  case 17266:
    spellname = "Bite";
    break;
  case 17267:
    spellname = "Bite";
    break;
  case 17268:
    spellname = "Bite";
    break;
  case 17269:
    spellname = "Create Resonating Skull";
    break;
  case 17270:
    spellname = "Create Bone Dust";
    break;
  case 17271:
    spellname = "Test Fetid Skull";
    break;
  case 17272:
    spellname = "Summon";
    break;
  case 17273:
    spellname = "Pyroblast";
    break;
  case 17274:
    spellname = "Pyroblast";
    break;
  case 17275:
    spellname = "Heart of the Scale";
    break;
  case 17276:
    spellname = "Scald";
    break;
  case 17277:
    spellname = "Blast Wave";
    break;
  case 17278:
    spellname = "Cannon Fire";
    break;
  case 17279:
    spellname = "Summon Crimson Rifleman";
    break;
  case 17280:
    spellname = "Increase Spell Dam 43";
    break;
  case 17281:
    spellname = "Crusader Strike";
    break;
  case 17283:
    spellname = "Smokey's Lighter";
    break;
  case 17284:
    spellname = "Holy Strike";
    break;
  case 17285:
    spellname = "Enchant Annals of Darrowshire";
    break;
  case 17286:
    spellname = "Crusader's Hammer";
    break;
  case 17287:
    spellname = "Mind Blast";
    break;
  case 17288:
    spellname = "Balnazzar Transform";
    break;
  case 17289:
    spellname = "Shadow Shock";
    break;
  case 17290:
    spellname = "Fireball";
    break;
  case 17291:
    spellname = "Stratholme Holy Water";
    break;
  case 17292:
    spellname = "Poison";
    break;
  case 17293:
    spellname = "Burning Winds";
    break;
  case 17294:
    spellname = "Flame Breath";
    break;
  case 17307:
    spellname = "Knockout";
    break;
  case 17308:
    spellname = "Stun";
    break;
  case 17311:
    spellname = "Mind Flay";
    break;
  case 17312:
    spellname = "Mind Flay";
    break;
  case 17313:
    spellname = "Mind Flay";
    break;
  case 17314:
    spellname = "Mind Flay";
    break;
  case 17315:
    spellname = "Puncture Armor";
    break;
  case 17319:
    spellname = "Undead Slayer 81";
    break;
  case 17320:
    spellname = "Increase Healing 84";
    break;
  case 17321:
    spellname = "Spirit Spawn-in";
    break;
  case 17322:
    spellname = "Shadow Reach";
    break;
  case 17323:
    spellname = "Shadow Reach";
    break;
  case 17324:
    spellname = "Beast Slaying 132";
    break;
  case 17327:
    spellname = "Spirit Particles";
    break;
  case 17328:
    spellname = "Aura of Penitence";
    break;
  case 17329:
    spellname = "Nature's Grasp";
    break;
  case 17330:
    spellname = "Poison";
    break;
  case 17331:
    spellname = "Fang of the Crystal Spider";
    break;
  case 17332:
    spellname = "Spider's Kiss";
    break;
  case 17333:
    spellname = "Spider's Kiss";
    break;
  case 17334:
    spellname = "Portal Effect: Stormwind";
    break;
  case 17347:
    spellname = "Hemorrhage";
    break;
  case 17348:
    spellname = "Hemorrhage";
    break;
  case 17350:
    spellname = "Argent Dawn";
    break;
  case 17351:
    spellname = "Argent Dawn";
    break;
  case 17352:
    spellname = "Argent Avenger";
    break;
  case 17353:
    spellname = "Shoot";
    break;
  case 17364:
    spellname = "Stormstrike";
    break;
  case 17366:
    spellname = "Fire Nova";
    break;
  case 17367:
    spellname = "Increase Spell Dam 32";
    break;
  case 17368:
    spellname = "Egan's Blaster";
    break;
  case 17369:
    spellname = "Increased Bow";
    break;
  case 17370:
    spellname = "Soul Freed";
    break;
  case 17371:
    spellname = "Increase Healing 44";
    break;
  case 17390:
    spellname = "Faerie Fire (Feral)";
    break;
  case 17391:
    spellname = "Faerie Fire (Feral)";
    break;
  case 17392:
    spellname = "Faerie Fire (Feral)";
    break;
  case 17393:
    spellname = "Shadow Bolt";
    break;
  case 17398:
    spellname = "Balnazzar Transform Stun";
    break;
  case 17399:
    spellname = "Shadow Shock";
    break;
  case 17400:
    spellname = "Perm. Illusion DeathKnight";
    break;
  case 17401:
    spellname = "Hurricane";
    break;
  case 17402:
    spellname = "Hurricane";
    break;
  case 17405:
    spellname = "Domination";
    break;
  case 17407:
    spellname = "Wound";
    break;
  case 17427:
    spellname = "Combat Endurance";
    break;
  case 17428:
    spellname = "Combat Endurance";
    break;
  case 17429:
    spellname = "Combat Endurance";
    break;
  case 17430:
    spellname = "Summon Anubisath Swarmguard";
    break;
  case 17431:
    spellname = "Summon Anubisath Warrior";
    break;
  case 17432:
    spellname = "Opening Stratholme Postbox";
    break;
  case 17434:
    spellname = "Shadow Bolt";
    break;
  case 17435:
    spellname = "Shadow Bolt";
    break;
  case 17439:
    spellname = "Shadow Shock";
    break;
  case 17441:
    spellname = "Air Bubbles";
    break;
  case 17443:
    spellname = "Air Bubbles";
    break;
  case 17445:
    spellname = "Bone Smelt";
    break;
  case 17446:
    spellname = "The Black Sleep";
    break;
  case 17447:
    spellname = "Circle of Flame";
    break;
  case 17448:
    spellname = "Testament of Hope";
    break;
  case 17449:
    spellname = "Summon Oracle Sphere";
    break;
  case 17450:
    spellname = "Ivory Raptor";
    break;
  case 17451:
    spellname = "Reputation - Armorsmithing";
    break;
  case 17452:
    spellname = "Reputation - Weaponsmithing";
    break;
  case 17453:
    spellname = "Green Mechanostrider";
    break;
  case 17454:
    spellname = "Unpainted Mechanostrider";
    break;
  case 17455:
    spellname = "Purple Mechanostrider";
    break;
  case 17456:
    spellname = "Red & Blue Mechanostrider";
    break;
  case 17457:
    spellname = "Undead Slayer 75";
    break;
  case 17458:
    spellname = "Fluorescent Green Mechanostrider";
    break;
  case 17459:
    spellname = "Icy Blue Mechanostrider";
    break;
  case 17460:
    spellname = "Frost Ram";
    break;
  case 17461:
    spellname = "Black Ram";
    break;
  case 17462:
    spellname = "Red Skeletal Horse";
    break;
  case 17463:
    spellname = "Blue Skeletal Horse";
    break;
  case 17464:
    spellname = "Brown Skeletal Horse";
    break;
  case 17465:
    spellname = "Green Skeletal Warhorse";
    break;
  case 17466:
    spellname = "Unholy Aura";
    break;
  case 17467:
    spellname = "Unholy Aura";
    break;
  case 17468:
    spellname = "Pet Fish";
    break;
  case 17469:
    spellname = "Pet Stone";
    break;
  case 17470:
    spellname = "Ravenous Claw";
    break;
  case 17471:
    spellname = "Death Pact";
    break;
  case 17473:
    spellname = "Raise Dead";
    break;
  case 17474:
    spellname = "Find Relic Fragment";
    break;
  case 17475:
    spellname = "Raise Dead";
    break;
  case 17476:
    spellname = "Raise Dead";
    break;
  case 17477:
    spellname = "Raise Dead";
    break;
  case 17478:
    spellname = "Raise Dead";
    break;
  case 17479:
    spellname = "Raise Dead";
    break;
  case 17480:
    spellname = "Raise Dead";
    break;
  case 17481:
    spellname = "Deathcharger";
    break;
  case 17482:
    spellname = "Beast Slaying 48";
    break;
  case 17483:
    spellname = "Shadow Bolt";
    break;
  case 17484:
    spellname = "Skullforge Brand";
    break;
  case 17485:
    spellname = "Ancestral Knowledge";
    break;
  case 17486:
    spellname = "Ancestral Knowledge";
    break;
  case 17487:
    spellname = "Ancestral Knowledge";
    break;
  case 17488:
    spellname = "Ancestral Knowledge";
    break;
  case 17489:
    spellname = "Ancestral Knowledge";
    break;
  case 17490:
    spellname = "Summon Skeleton";
    break;
  case 17492:
    spellname = "Hand of Thaurissan";
    break;
  case 17493:
    spellname = "Increase Spell Dam 44";
    break;
  case 17494:
    spellname = "Slavedriver's Cane";
    break;
  case 17495:
    spellname = "Crest of Retribution";
    break;
  case 17496:
    spellname = "Crest of Retribution";
    break;
  case 17498:
    spellname = "Speed";
    break;
  case 17499:
    spellname = "Surge of Strength";
    break;
  case 17500:
    spellname = "Malown's Slam";
    break;
  case 17501:
    spellname = "Cannon Fire";
    break;
  case 17503:
    spellname = "Frostbolt";
    break;
  case 17504:
    spellname = "Rend";
    break;
  case 17505:
    spellname = "Curse of Timmy";
    break;
  case 17506:
    spellname = "Soul Breaker";
    break;
  case 17508:
    spellname = "Undead Slayer 108";
    break;
  case 17509:
    spellname = "Shadow Bolt";
    break;
  case 17510:
    spellname = "Corruption";
    break;
  case 17511:
    spellname = "Poison";
    break;
  case 17512:
    spellname = "Piccolo of the Flaming Fire";
    break;
  case 17513:
    spellname = "Increased Defense";
    break;
  case 17527:
    spellname = "Mighty Rage Potion";
    break;
  case 17528:
    spellname = "Mighty Rage";
    break;
  case 17529:
    spellname = "Vitreous Focuser";
    break;
  case 17530:
    spellname = "Restore Mana";
    break;
  case 17531:
    spellname = "Restore Mana";
    break;
  case 17533:
    spellname = "Perm. Illusion Pig";
    break;
  case 17534:
    spellname = "Healing Potion";
    break;
  case 17535:
    spellname = "Elixir of the Sages";
    break;
  case 17536:
    spellname = "Awaken Kerlonian";
    break;
  case 17537:
    spellname = "Elixir of Brute Force";
    break;
  case 17538:
    spellname = "Elixir of the Mongoose";
    break;
  case 17539:
    spellname = "Greater Arcane Elixir";
    break;
  case 17540:
    spellname = "Greater Stoneshield";
    break;
  case 17543:
    spellname = "Fire Protection";
    break;
  case 17544:
    spellname = "Frost Protection";
    break;
  case 17545:
    spellname = "Holy Protection";
    break;
  case 17546:
    spellname = "Nature Protection";
    break;
  case 17547:
    spellname = "Mortal Strike";
    break;
  case 17548:
    spellname = "Shadow Protection";
    break;
  case 17549:
    spellname = "Arcane Protection";
    break;
  case 17550:
    spellname = "Purification";
    break;
  case 17551:
    spellname = "Stonescale Oil";
    break;
  case 17552:
    spellname = "Mighty Rage Potion";
    break;
  case 17553:
    spellname = "Superior Mana Potion";
    break;
  case 17554:
    spellname = "Elixir of Superior Defense";
    break;
  case 17555:
    spellname = "Elixir of the Sages";
    break;
  case 17556:
    spellname = "Major Healing Potion";
    break;
  case 17557:
    spellname = "Elixir of Brute Force";
    break;
  case 17559:
    spellname = "Transmute: Air to Fire";
    break;
  case 17560:
    spellname = "Transmute: Fire to Earth";
    break;
  case 17561:
    spellname = "Transmute: Earth to Water";
    break;
  case 17562:
    spellname = "Transmute: Water to Air";
    break;
  case 17563:
    spellname = "Transmute: Undeath to Water";
    break;
  case 17564:
    spellname = "Transmute: Water to Undeath";
    break;
  case 17565:
    spellname = "Transmute: Life to Earth";
    break;
  case 17566:
    spellname = "Transmute: Earth to Life";
    break;
  case 17567:
    spellname = "Summon Blood Parrot";
    break;
  case 17570:
    spellname = "Greater Stoneshield Potion";
    break;
  case 17571:
    spellname = "Elixir of the Mongoose";
    break;
  case 17572:
    spellname = "Purification Potion";
    break;
  case 17573:
    spellname = "Greater Arcane Elixir";
    break;
  case 17574:
    spellname = "Greater Fire Protection Potion";
    break;
  case 17575:
    spellname = "Greater Frost Protection Potion";
    break;
  case 17576:
    spellname = "Greater Nature Protection Potion";
    break;
  case 17577:
    spellname = "Greater Arcane Protection Potion";
    break;
  case 17578:
    spellname = "Greater Shadow Protection Potion";
    break;
  case 17579:
    spellname = "Greater Holy Protection Potion";
    break;
  case 17580:
    spellname = "Major Mana Potion";
    break;
  case 17607:
    spellname = "Portal Effect: Ironforge";
    break;
  case 17608:
    spellname = "Portal Effect: Darnassus";
    break;
  case 17609:
    spellname = "Portal Effect: Orgrimmar";
    break;
  case 17610:
    spellname = "Portal Effect: Thunder Bluff";
    break;
  case 17611:
    spellname = "Portal Effect: Undercity";
    break;
  case 17613:
    spellname = "Dark Mending";
    break;
  case 17615:
    spellname = "Mana Burn";
    break;
  case 17616:
    spellname = "Corpse Explosion";
    break;
  case 17617:
    spellname = "Increased Armor 400";
    break;
  case 17618:
    spellname = "Summon Risen Lackey";
    break;
  case 17619:
    spellname = "Alchemist's Stone";
    break;
  case 17620:
    spellname = "Drain Life";
    break;
  case 17622:
    spellname = "Caer Darrow Ghosts";
    break;
  case 17623:
    spellname = "Visions of the Past";
    break;
  case 17624:
    spellname = "Petrification";
    break;
  case 17625:
    spellname = "Unholy Aura";
    break;
  case 17626:
    spellname = "Flask of the Titans";
    break;
  case 17627:
    spellname = "Distilled Wisdom";
    break;
  case 17628:
    spellname = "Supreme Power";
    break;
  case 17629:
    spellname = "Chromatic Resistance";
    break;
  case 17630:
    spellname = "Mana Burn";
    break;
  case 17631:
    spellname = "Wail of Souls";
    break;
  case 17632:
    spellname = "Alchemist's Stone";
    break;
  case 17633:
    spellname = "Arcane Focus";
    break;
  case 17634:
    spellname = "Flask of Petrification";
    break;
  case 17635:
    spellname = "Flask of the Titans";
    break;
  case 17636:
    spellname = "Flask of Distilled Wisdom";
    break;
  case 17637:
    spellname = "Flask of Supreme Power";
    break;
  case 17638:
    spellname = "Flask of Chromatic Resistance";
    break;
  case 17639:
    spellname = "Wail of the Banshee";
    break;
  case 17646:
    spellname = "Summon Onyxia Whelp";
    break;
  case 17647:
    spellname = "Create Onyxia Spawner";
    break;
  case 17648:
    spellname = "Surrender";
    break;
  case 17649:
    spellname = "Accept Surrender";
    break;
  case 17650:
    spellname = "Altered Cauldron Toxin";
    break;
  case 17651:
    spellname = "Image Projection";
    break;
  case 17652:
    spellname = "Image Projection";
    break;
  case 17653:
    spellname = "Summon Spectral Projections";
    break;
  case 17667:
    spellname = "Light On Fire";
    break;
  case 17668:
    spellname = "Ramstein's Lightning Bolts";
    break;
  case 17669:
    spellname = "Ramstein's Lightning Bolts";
    break;
  case 17670:
    spellname = "Argent Dawn Commission";
    break;
  case 17671:
    spellname = "Mortar Disturb";
    break;
  case 17672:
    spellname = "Summon Spectral Essence";
    break;
  case 17673:
    spellname = "Shade Form Visual";
    break;
  case 17675:
    spellname = "Lava Trap 1";
    break;
  case 17676:
    spellname = "Lava Trap 3";
    break;
  case 17677:
    spellname = "Lava Trap 4";
    break;
  case 17678:
    spellname = "Despawn Spectral Combatants";
    break;
  case 17679:
    spellname = "Shellfish Trap";
    break;
  case 17680:
    spellname = "Spirit Spawn-out";
    break;
  case 17682:
    spellname = "Drain Mana";
    break;
  case 17683:
    spellname = "Full Heal";
    break;
  case 17684:
    spellname = "Increase Fire Dam 39";
    break;
  case 17686:
    spellname = "Deadly Acid";
    break;
  case 17687:
    spellname = "Flurry";
    break;
  case 17688:
    spellname = "Deadly Acid";
    break;
  case 17689:
    spellname = "Disease Burst";
    break;
  case 17690:
    spellname = "Disease Burst";
    break;
  case 17691:
    spellname = "Time Out";
    break;
  case 17692:
    spellname = "Marduk's Curse";
    break;
  case 17695:
    spellname = "Defiling Aura";
    break;
  case 17697:
    spellname = "Defiling Aura";
    break;
  case 17698:
    spellname = "Death Pact";
    break;
  case 17707:
    spellname = "Summon Panda";
    break;
  case 17708:
    spellname = "Summon Diablo";
    break;
  case 17709:
    spellname = "Summon Zergling";
    break;
  case 17712:
    spellname = "Lifestone Healing";
    break;
  case 17713:
    spellname = "Increased Critical 100";
    break;
  case 17715:
    spellname = "Consuming Shadows";
    break;
  case 17716:
    spellname = "Consuming Shadows";
    break;
  case 17727:
    spellname = "Create Spellstone";
    break;
  case 17728:
    spellname = "Create Spellstone";
    break;
  case 17729:
    spellname = "Greater Spellstone";
    break;
  case 17730:
    spellname = "Major Spellstone";
    break;
  case 17731:
    spellname = "Eruption";
    break;
  case 17734:
    spellname = "Fool's Curse";
    break;
  case 17735:
    spellname = "Suffering";
    break;
  case 17736:
    spellname = "Suffering";
    break;
  case 17737:
    spellname = "Language Gutterspeak";
    break;
  case 17738:
    spellname = "Curse of the Plague Rat";
    break;
  case 17739:
    spellname = "Disease";
    break;
  case 17740:
    spellname = "Mana Shield";
    break;
  case 17741:
    spellname = "Mana Shield";
    break;
  case 17742:
    spellname = "Cloud of Disease";
    break;
  case 17743:
    spellname = "Peon Sleeping";
    break;
  case 17744:
    spellname = "Force Target - Kick";
    break;
  case 17745:
    spellname = "Diseased Spit";
    break;
  case 17746:
    spellname = "Stealth 5";
    break;
  case 17747:
    spellname = "Increase Fire Dam 23";
    break;
  case 17748:
    spellname = "Kick Peon";
    break;
  case 17749:
    spellname = "Kick Peon Prologue";
    break;
  case 17750:
    spellname = "Suffering";
    break;
  case 17751:
    spellname = "Suffering";
    break;
  case 17752:
    spellname = "Suffering";
    break;
  case 17753:
    spellname = "Suffering";
    break;
  case 17754:
    spellname = "Suffering";
    break;
  case 17755:
    spellname = "Suffering";
    break;
  case 17767:
    spellname = "Consume Shadows";
    break;
  case 17768:
    spellname = "Wolfshead Helm";
    break;
  case 17769:
    spellname = "Wolfshead Helm Rage";
    break;
  case 17770:
    spellname = "Wolfshead Helm Energy";
    break;
  case 17771:
    spellname = "Curse of Agony";
    break;
  case 17773:
    spellname = "Summon Illusions";
    break;
  case 17775:
    spellname = "Air Bubbles";
    break;
  case 17776:
    spellname = "Consume Shadows";
    break;
  case 17777:
    spellname = "Create Commission";
    break;
  case 17778:
    spellname = "Cataclysm";
    break;
  case 17779:
    spellname = "Cataclysm";
    break;
  case 17780:
    spellname = "Cataclysm";
    break;
  case 17781:
    spellname = "Cataclysm";
    break;
  case 17782:
    spellname = "Cataclysm";
    break;
  case 17783:
    spellname = "Fel Concentration";
    break;
  case 17784:
    spellname = "Fel Concentration";
    break;
  case 17785:
    spellname = "Fel Concentration";
    break;
  case 17786:
    spellname = "Fel Concentration";
    break;
  case 17787:
    spellname = "Fel Concentration";
    break;
  case 17788:
    spellname = "Bane";
    break;
  case 17789:
    spellname = "Bane";
    break;
  case 17790:
    spellname = "Bane";
    break;
  case 17791:
    spellname = "Bane";
    break;
  case 17792:
    spellname = "Bane";
    break;
  case 17793:
    spellname = "Improved Shadow Bolt";
    break;
  case 17794:
    spellname = "Shadow Vulnerability";
    break;
  case 17796:
    spellname = "Improved Shadow Bolt";
    break;
  case 17797:
    spellname = "Shadow Vulnerability";
    break;
  case 17798:
    spellname = "Shadow Vulnerability";
    break;
  case 17799:
    spellname = "Shadow Vulnerability";
    break;
  case 17800:
    spellname = "Shadow Vulnerability";
    break;
  case 17801:
    spellname = "Improved Shadow Bolt";
    break;
  case 17802:
    spellname = "Improved Shadow Bolt";
    break;
  case 17803:
    spellname = "Improved Shadow Bolt";
    break;
  case 17804:
    spellname = "Soul Siphon";
    break;
  case 17805:
    spellname = "Soul Siphon";
    break;
  case 17809:
    spellname = "Lesser Firestone Attack";
    break;
  case 17810:
    spellname = "Improved Corruption";
    break;
  case 17811:
    spellname = "Improved Corruption";
    break;
  case 17812:
    spellname = "Improved Corruption";
    break;
  case 17813:
    spellname = "Improved Corruption";
    break;
  case 17814:
    spellname = "Improved Corruption";
    break;
  case 17815:
    spellname = "Improved Immolate";
    break;
  case 17816:
    spellname = "Sharp Dresser";
    break;
  case 17818:
    spellname = "Increased Bow";
    break;
  case 17819:
    spellname = "Increase Nature Dam 29";
    break;
  case 17820:
    spellname = "Veil of Shadow";
    break;
  case 17821:
    spellname = "Increase Arcane Dam 23";
    break;
  case 17822:
    spellname = "Increase Arcane Dam 24";
    break;
  case 17823:
    spellname = "Increase Arcane Dam 26";
    break;
  case 17824:
    spellname = "Increase Arcane Dam 27";
    break;
  case 17825:
    spellname = "Increase Arcane Dam 29";
    break;
  case 17826:
    spellname = "Increase Arcane Dam 30";
    break;
  case 17827:
    spellname = "Increase Arcane Dam 31";
    break;
  case 17828:
    spellname = "Increase Arcane Dam 33";
    break;
  case 17829:
    spellname = "Increase Arcane Dam 34";
    break;
  case 17830:
    spellname = "Increase Arcane Dam 36";
    break;
  case 17831:
    spellname = "Call of the Grave";
    break;
  case 17832:
    spellname = "Increase Arcane Dam 37";
    break;
  case 17833:
    spellname = "Improved Immolate";
    break;
  case 17834:
    spellname = "Improved Immolate";
    break;
  case 17835:
    spellname = "Improved Immolate";
    break;
  case 17836:
    spellname = "Improved Immolate";
    break;
  case 17837:
    spellname = "Increase Arcane Dam 39";
    break;
  case 17838:
    spellname = "Increase Arcane Dam 40";
    break;
  case 17839:
    spellname = "Increase Arcane Dam 41";
    break;
  case 17840:
    spellname = "Increase Arcane Dam 43";
    break;
  case 17841:
    spellname = "Increase Arcane Dam 44";
    break;
  case 17842:
    spellname = "Increase Arcane Dam 46";
    break;
  case 17843:
    spellname = "Flash Heal";
    break;
  case 17844:
    spellname = "Increase Arcane Dam 47";
    break;
  case 17845:
    spellname = "Increase Arcane Dam 49";
    break;
  case 17846:
    spellname = "Increase Arcane Dam 50";
    break;
  case 17847:
    spellname = "Increase Arcane Dam 51";
    break;
  case 17848:
    spellname = "Increase Arcane Dam 53";
    break;
  case 17849:
    spellname = "Increase Arcane Dam 54";
    break;
  case 17850:
    spellname = "Consume Shadows";
    break;
  case 17851:
    spellname = "Consume Shadows";
    break;
  case 17852:
    spellname = "Consume Shadows";
    break;
  case 17853:
    spellname = "Consume Shadows";
    break;
  case 17854:
    spellname = "Consume Shadows";
    break;
  case 17855:
    spellname = "Consume Shadows";
    break;
  case 17856:
    spellname = "Consume Shadows";
    break;
  case 17857:
    spellname = "Consume Shadows";
    break;
  case 17859:
    spellname = "Consume Shadows";
    break;
  case 17860:
    spellname = "Consume Shadows";
    break;
  case 17862:
    spellname = "Curse of Shadow";
    break;
  case 17863:
    spellname = "Shadow Portal";
    break;
  case 17866:
    spellname = "Increase Fire Dam 24";
    break;
  case 17867:
    spellname = "Increase Fire Dam 26";
    break;
  case 17868:
    spellname = "Increase Fire Dam 27";
    break;
  case 17869:
    spellname = "Increase Fire Dam 30";
    break;
  case 17870:
    spellname = "Increase Fire Dam 31";
    break;
  case 17871:
    spellname = "Increase Fire Dam 33";
    break;
  case 17872:
    spellname = "Increase Fire Dam 34";
    break;
  case 17873:
    spellname = "Increase Fire Dam 36";
    break;
  case 17874:
    spellname = "Increase Fire Dam 37";
    break;
  case 17875:
    spellname = "Increase Fire Dam 40";
    break;
  case 17876:
    spellname = "Increase Fire Dam 41";
    break;
  case 17877:
    spellname = "Shadowburn";
    break;
  case 17878:
    spellname = "Increase Fire Dam 43";
    break;
  case 17879:
    spellname = "Increase Fire Dam 44";
    break;
  case 17880:
    spellname = "Increase Fire Dam 46";
    break;
  case 17881:
    spellname = "Increase Fire Dam 47";
    break;
  case 17882:
    spellname = "Increase Fire Dam 49";
    break;
  case 17883:
    spellname = "Immolate";
    break;
  case 17884:
    spellname = "Increase Fire Dam 50";
    break;
  case 17885:
    spellname = "Increase Fire Dam 51";
    break;
  case 17886:
    spellname = "Increase Fire Dam 53";
    break;
  case 17887:
    spellname = "Increase Fire Dam 54";
    break;
  case 17889:
    spellname = "Increase Frost Dam 23";
    break;
  case 17890:
    spellname = "Increase Frost Dam 24";
    break;
  case 17891:
    spellname = "Increase Frost Dam 26";
    break;
  case 17892:
    spellname = "Increase Frost Dam 27";
    break;
  case 17893:
    spellname = "Increase Frost Dam 30";
    break;
  case 17894:
    spellname = "Increase Frost Dam 31";
    break;
  case 17895:
    spellname = "Increase Frost Dam 33";
    break;
  case 17896:
    spellname = "Increase Frost Dam 34";
    break;
  case 17897:
    spellname = "Increase Frost Dam 36";
    break;
  case 17898:
    spellname = "Increase Frost Dam 37";
    break;
  case 17899:
    spellname = "Increase Frost Dam 39";
    break;
  case 17900:
    spellname = "Increase Frost Dam 40";
    break;
  case 17901:
    spellname = "Increase Frost Dam 41";
    break;
  case 17902:
    spellname = "Increase Frost Dam 43";
    break;
  case 17903:
    spellname = "Increase Frost Dam 44";
    break;
  case 17904:
    spellname = "Decrease Mana Cost - Fire";
    break;
  case 17905:
    spellname = "Increase Frost Dam 46";
    break;
  case 17906:
    spellname = "Increase Frost Dam 47";
    break;
  case 17907:
    spellname = "Increase Frost Dam 49";
    break;
  case 17908:
    spellname = "Increase Frost Dam 50";
    break;
  case 17909:
    spellname = "Increase Frost Dam 51";
    break;
  case 17910:
    spellname = "Increase Frost Dam 53";
    break;
  case 17911:
    spellname = "Increase Frost Dam 54";
    break;
  case 17912:
    spellname = "Decrease Mana Cost - Shadow";
    break;
  case 17913:
    spellname = "Decrease Mana Cost - Nature";
    break;
  case 17914:
    spellname = "Decrease Mana Cost - Frost";
    break;
  case 17915:
    spellname = "Decrease Mana Cost - Arcane";
    break;
  case 17916:
    spellname = "Decrease Mana Cost - Shadow";
    break;
  case 17917:
    spellname = "Destructive Reach";
    break;
  case 17918:
    spellname = "Destructive Reach";
    break;
  case 17919:
    spellname = "Searing Pain";
    break;
  case 17920:
    spellname = "Searing Pain";
    break;
  case 17921:
    spellname = "Searing Pain";
    break;
  case 17922:
    spellname = "Searing Pain";
    break;
  case 17923:
    spellname = "Searing Pain";
    break;
  case 17924:
    spellname = "Soul Fire";
    break;
  case 17925:
    spellname = "Death Coil";
    break;
  case 17926:
    spellname = "Death Coil";
    break;
  case 17927:
    spellname = "Improved Searing Pain";
    break;
  case 17928:
    spellname = "Howl of Terror";
    break;
  case 17929:
    spellname = "Improved Searing Pain";
    break;
  case 17930:
    spellname = "Improved Searing Pain";
    break;
  case 17933:
    spellname = "Firestone Attack";
    break;
  case 17934:
    spellname = "Greater Firestone Attack";
    break;
  case 17935:
    spellname = "Major Firestone Attack";
    break;
  case 17937:
    spellname = "Curse of Shadow";
    break;
  case 17939:
    spellname = "Shadow Portal";
    break;
  case 17941:
    spellname = "Shadow Trance";
    break;
  case 17943:
    spellname = "Shadow Portal";
    break;
  case 17944:
    spellname = "Shadow Portal";
    break;
  case 17945:
    spellname = "Firestone Passive";
    break;
  case 17946:
    spellname = "Shadow Portal";
    break;
  case 17947:
    spellname = "Firestone Passive";
    break;
  case 17948:
    spellname = "Shadow Portal";
    break;
  case 17949:
    spellname = "Firestone Passive";
    break;
  case 17950:
    spellname = "Shadow Portal";
    break;
  case 17951:
    spellname = "Create Firestone";
    break;
  case 17952:
    spellname = "Create Firestone";
    break;
  case 17953:
    spellname = "Create Firestone";
    break;
  case 17954:
    spellname = "Emberstorm";
    break;
  case 17955:
    spellname = "Emberstorm";
    break;
  case 17956:
    spellname = "Emberstorm";
    break;
  case 17957:
    spellname = "Emberstorm";
    break;
  case 17958:
    spellname = "Emberstorm";
    break;
  case 17959:
    spellname = "Ruin";
    break;
  case 17960:
    spellname = "Kodo Bones Trap";
    break;
  case 17961:
    spellname = "Scarlet Illusion";
    break;
  case 17962:
    spellname = "Conflagrate";
    break;
  case 17963:
    spellname = "Sundering Cleave";
    break;
  case 17987:
    spellname = "Increase Nature Dam 23";
    break;
  case 17988:
    spellname = "Increase Nature Dam 24";
    break;
  case 17989:
    spellname = "Increase Nature Dam 26";
    break;
  case 17990:
    spellname = "Increase Nature Dam 27";
    break;
  case 17991:
    spellname = "Increase Nature Dam 30";
    break;
  case 17992:
    spellname = "Increase Nature Dam 31";
    break;
  case 17993:
    spellname = "Increase Nature Dam 33";
    break;
  case 17994:
    spellname = "Increase Nature Dam 36";
    break;
  case 17995:
    spellname = "Increase Nature Dam 37";
    break;
  case 17996:
    spellname = "Increase Nature Dam 39";
    break;
  case 17997:
    spellname = "Increase Nature Dam 40";
    break;
  case 17998:
    spellname = "Increase Nature Dam 41";
    break;
  case 17999:
    spellname = "Increase Nature Dam 43";
    break;
  case 18000:
    spellname = "Increase Nature Dam 44";
    break;
  case 18001:
    spellname = "Increase Nature Dam 46";
    break;
  case 18002:
    spellname = "Increase Nature Dam 47";
    break;
  case 18003:
    spellname = "Increase Nature Dam 49";
    break;
  case 18004:
    spellname = "Increase Nature Dam 50";
    break;
  case 18005:
    spellname = "Increase Nature Dam 51";
    break;
  case 18006:
    spellname = "Increase Nature Dam 53";
    break;
  case 18007:
    spellname = "Increase Nature Dam 54";
    break;
  case 18008:
    spellname = "Increase Shadow Dam 26";
    break;
  case 18009:
    spellname = "Increase Shadow Dam 27";
    break;
  case 18010:
    spellname = "Increase Shadow Dam 29";
    break;
  case 18011:
    spellname = "Increase Shadow Dam 30";
    break;
  case 18012:
    spellname = "Increase Shadow Dam 31";
    break;
  case 18013:
    spellname = "Increase Shadow Dam 33";
    break;
  case 18014:
    spellname = "Increase Shadow Dam 34";
    break;
  case 18015:
    spellname = "Increase Shadow Dam 36";
    break;
  case 18016:
    spellname = "Increase Shadow Dam 37";
    break;
  case 18017:
    spellname = "Increase Shadow Dam 39";
    break;
  case 18018:
    spellname = "Increase Shadow Dam 40";
    break;
  case 18019:
    spellname = "Increase Shadow Dam 41";
    break;
  case 18020:
    spellname = "Increase Shadow Dam 43";
    break;
  case 18021:
    spellname = "Increase Shadow Dam 44";
    break;
  case 18022:
    spellname = "Increase Shadow Dam 46";
    break;
  case 18023:
    spellname = "Increase Shadow Dam 47";
    break;
  case 18024:
    spellname = "Increase Shadow Dam 49";
    break;
  case 18025:
    spellname = "Increase Shadow Dam 50";
    break;
  case 18026:
    spellname = "Increase Shadow Dam 51";
    break;
  case 18027:
    spellname = "Increase Shadow Dam 53";
    break;
  case 18028:
    spellname = "Increase Shadow Dam 54";
    break;
  case 18029:
    spellname = "Increase Healing 35";
    break;
  case 18030:
    spellname = "Increase Healing 37";
    break;
  case 18031:
    spellname = "Increase Healing 40";
    break;
  case 18032:
    spellname = "Increase Healing 42";
    break;
  case 18033:
    spellname = "Increase Healing 46";
    break;
  case 18034:
    spellname = "Increase Healing 48";
    break;
  case 18035:
    spellname = "Increase Healing 51";
    break;
  case 18036:
    spellname = "Increase Healing 55";
    break;
  case 18037:
    spellname = "Increase Healing 57";
    break;
  case 18038:
    spellname = "Increase Healing 59";
    break;
  case 18039:
    spellname = "Increase Healing 62";
    break;
  case 18040:
    spellname = "Increase Healing 64";
    break;
  case 18041:
    spellname = "Increase Healing 66";
    break;
  case 18042:
    spellname = "Increase Healing 68";
    break;
  case 18043:
    spellname = "Increase Healing 70";
    break;
  case 18044:
    spellname = "Increase Healing 73";
    break;
  case 18045:
    spellname = "Increase Healing 75";
    break;
  case 18046:
    spellname = "Increase Healing 77";
    break;
  case 18047:
    spellname = "Increase Healing 79";
    break;
  case 18048:
    spellname = "Increase Healing 81";
    break;
  case 18049:
    spellname = "Increase Spell Dam 26";
    break;
  case 18050:
    spellname = "Increase Spell Dam 33";
    break;
  case 18052:
    spellname = "Increase Spell Dam 34";
    break;
  case 18053:
    spellname = "Increase Spell Dam 36";
    break;
  case 18054:
    spellname = "Increase Spell Dam 37";
    break;
  case 18055:
    spellname = "Increase Spell Dam 39";
    break;
  case 18056:
    spellname = "Increase Spell Dam 40";
    break;
  case 18057:
    spellname = "Increase Spell Dam 41";
    break;
  case 18058:
    spellname = "Increase Spell Dam 42";
    break;
  case 18060:
    spellname = "Attack Power 200";
    break;
  case 18061:
    spellname = "Increased 1H Sword";
    break;
  case 18062:
    spellname = "Increased Dodge 96";
    break;
  case 18063:
    spellname = "Increased Parry 100";
    break;
  case 18064:
    spellname = "Increased Block 100";
    break;
  case 18066:
    spellname = "Increased Hit Rating 100";
    break;
  case 18067:
    spellname = "Beast Slaying 45";
    break;
  case 18068:
    spellname = "Increased Armor 270";
    break;
  case 18069:
    spellname = "Increased Armor 160";
    break;
  case 18070:
    spellname = "Earthborer Acid";
    break;
  case 18071:
    spellname = "Enriched Manna Biscuit";
    break;
  case 18072:
    spellname = "Uppercut";
    break;
  case 18073:
    spellname = "Pyroclasm";
    break;
  case 18074:
    spellname = "Undead Slayer 30";
    break;
  case 18075:
    spellname = "Rend";
    break;
  case 18076:
    spellname = "Beast Slaying 72";
    break;
  case 18077:
    spellname = "Poison";
    break;
  case 18078:
    spellname = "Rend";
    break;
  case 18079:
    spellname = "Demon Slaying 33";
    break;
  case 18080:
    spellname = "Beast Slaying 21";
    break;
  case 18081:
    spellname = "Lightning Bolt";
    break;
  case 18082:
    spellname = "Fireball";
    break;
  case 18083:
    spellname = "Firebolt";
    break;
  case 18084:
    spellname = "Drain Life";
    break;
  case 18085:
    spellname = "Frost Blast";
    break;
  case 18086:
    spellname = "Firebolt";
    break;
  case 18087:
    spellname = "Demon Slaying 78";
    break;
  case 18088:
    spellname = "Corruption";
    break;
  case 18089:
    spellname = "Lightning Bolt";
    break;
  case 18090:
    spellname = "Wound";
    break;
  case 18091:
    spellname = "Arcane Blast";
    break;
  case 18092:
    spellname = "Frost Blast";
    break;
  case 18093:
    spellname = "Pyroclasm";
    break;
  case 18094:
    spellname = "Nightfall";
    break;
  case 18095:
    spellname = "Nightfall";
    break;
  case 18096:
    spellname = "Pyroclasm";
    break;
  case 18097:
    spellname = "The Green Tower";
    break;
  case 18098:
    spellname = "Undead Slayer 45";
    break;
  case 18099:
    spellname = "Chill Nova";
    break;
  case 18100:
    spellname = "Frost Armor";
    break;
  case 18101:
    spellname = "Chilled";
    break;
  case 18103:
    spellname = "Backhand";
    break;
  case 18104:
    spellname = "Wrath";
    break;
  case 18105:
    spellname = "Fireball";
    break;
  case 18106:
    spellname = "Rend";
    break;
  case 18107:
    spellname = "Wound";
    break;
  case 18108:
    spellname = "Fireball";
    break;
  case 18109:
    spellname = "Beast Slaying 39";
    break;
  case 18110:
    spellname = "Transform Viewing Room Students";
    break;
  case 18111:
    spellname = "Shadow Bolt";
    break;
  case 18112:
    spellname = "Firebolt";
    break;
  case 18113:
    spellname = "Manifestation Cleansing";
    break;
  case 18114:
    spellname = "Resist All";
    break;
  case 18115:
    spellname = "Viewing Room Student Transform - Effect";
    break;
  case 18116:
    spellname = "Kirtonos Gargoyle Passive";
    break;
  case 18118:
    spellname = "Aftermath";
    break;
  case 18119:
    spellname = "Aftermath";
    break;
  case 18120:
    spellname = "Aftermath";
    break;
  case 18121:
    spellname = "Aftermath";
    break;
  case 18122:
    spellname = "Aftermath";
    break;
  case 18123:
    spellname = "Aftermath";
    break;
  case 18124:
    spellname = "Blessed Sunfruit";
    break;
  case 18125:
    spellname = "Blessed Sunfruit";
    break;
  case 18126:
    spellname = "Improved Firebolt";
    break;
  case 18127:
    spellname = "Improved Firebolt";
    break;
  case 18128:
    spellname = "Improved Lash of Pain";
    break;
  case 18129:
    spellname = "Improved Lash of Pain";
    break;
  case 18130:
    spellname = "Devastation";
    break;
  case 18131:
    spellname = "Devastation";
    break;
  case 18132:
    spellname = "Devastation";
    break;
  case 18133:
    spellname = "Devastation";
    break;
  case 18134:
    spellname = "Devastation";
    break;
  case 18135:
    spellname = "Intensity";
    break;
  case 18136:
    spellname = "Intensity";
    break;
  case 18137:
    spellname = "Shadowguard";
    break;
  case 18138:
    spellname = "Shadow Bolt";
    break;
  case 18139:
    spellname = "GM Only ON";
    break;
  case 18140:
    spellname = "Blessed Sunfruit Juice";
    break;
  case 18141:
    spellname = "Blessed Sunfruit Juice";
    break;
  case 18142:
    spellname = "Peasant Transform";
    break;
  case 18144:
    spellname = "Swoop";
    break;
  case 18145:
    spellname = "Force Target - Kick with impact";
    break;
  case 18146:
    spellname = "Chilling Touch";
    break;
  case 18147:
    spellname = "Static Field";
    break;
  case 18149:
    spellname = "Volatile Infection";
    break;
  case 18150:
    spellname = "Volatile Infection";
    break;
  case 18151:
    spellname = "Noxious Catalyst";
    break;
  case 18152:
    spellname = "Draining Touch";
    break;
  case 18153:
    spellname = "Kodo Kombobulator";
    break;
  case 18159:
    spellname = "Curse of the Fallen Magram";
    break;
  case 18163:
    spellname = "Strength of Arko'narin";
    break;
  case 18164:
    spellname = "Shadow Bolt";
    break;
  case 18165:
    spellname = "Holy Fire";
    break;
  case 18166:
    spellname = "Summon Magram Ravager";
    break;
  case 18167:
    spellname = "Holy Fire";
    break;
  case 18172:
    spellname = "Kodo Kombobulator";
    break;
  case 18173:
    spellname = "Burning Adrenaline";
    break;
  case 18174:
    spellname = "Suppression";
    break;
  case 18175:
    spellname = "Suppression";
    break;
  case 18176:
    spellname = "Suppression";
    break;
  case 18177:
    spellname = "Suppression";
    break;
  case 18178:
    spellname = "Suppression";
    break;
  case 18179:
    spellname = "Improved Curse of Weakness";
    break;
  case 18180:
    spellname = "Improved Curse of Weakness";
    break;
  case 18182:
    spellname = "Improved Life Tap";
    break;
  case 18183:
    spellname = "Improved Life Tap";
    break;
  case 18184:
    spellname = "Sire's Suicide";
    break;
  case 18185:
    spellname = "Increased Defense";
    break;
  case 18186:
    spellname = "Firebolt";
    break;
  case 18187:
    spellname = "Firebolt";
    break;
  case 18188:
    spellname = "Increased Armor 180";
    break;
  case 18189:
    spellname = "TEST Arcane Concentration";
    break;
  case 18190:
    spellname = "Increased Armor 140";
    break;
  case 18191:
    spellname = "Increased Stamina";
    break;
  case 18192:
    spellname = "Increased Agility";
    break;
  case 18193:
    spellname = "Increased Spirit";
    break;
  case 18194:
    spellname = "Mana Regeneration";
    break;
  case 18195:
    spellname = "Increased Armor 220";
    break;
  case 18196:
    spellname = "Increased Defense";
    break;
  case 18197:
    spellname = "Poison";
    break;
  case 18198:
    spellname = "Undead Slayer 66";
    break;
  case 18199:
    spellname = "Fireball";
    break;
  case 18200:
    spellname = "Rend";
    break;
  case 18201:
    spellname = "Beast Slaying 24";
    break;
  case 18202:
    spellname = "Rend";
    break;
  case 18203:
    spellname = "Poison";
    break;
  case 18204:
    spellname = "Frost Blast";
    break;
  case 18205:
    spellname = "Shadow Bolt";
    break;
  case 18206:
    spellname = "Fatal Wound";
    break;
  case 18207:
    spellname = "Beast Slaying 60";
    break;
  case 18208:
    spellname = "Poison";
    break;
  case 18209:
    spellname = "Test Grow";
    break;
  case 18210:
    spellname = "Test Shrink";
    break;
  case 18211:
    spellname = "Shadow Bolt";
    break;
  case 18212:
    spellname = "Demon Slaying 99";
    break;
  case 18213:
    spellname = "Improved Drain Soul";
    break;
  case 18214:
    spellname = "Shadow Bolt";
    break;
  case 18217:
    spellname = "Shadow Bolt";
    break;
  case 18218:
    spellname = "Grim Reach";
    break;
  case 18219:
    spellname = "Grim Reach";
    break;
  case 18220:
    spellname = "Dark Pact";
    break;
  case 18222:
    spellname = "Health Regeneration";
    break;
  case 18223:
    spellname = "Curse of Exhaustion";
    break;
  case 18229:
    spellname = "Food";
    break;
  case 18230:
    spellname = "Food";
    break;
  case 18231:
    spellname = "Food";
    break;
  case 18232:
    spellname = "Food";
    break;
  case 18233:
    spellname = "Food";
    break;
  case 18234:
    spellname = "Food";
    break;
  case 18238:
    spellname = "Spotted Yellowtail";
    break;
  case 18239:
    spellname = "Cooked Glossy Mightfish";
    break;
  case 18240:
    spellname = "Grilled Squid";
    break;
  case 18241:
    spellname = "Filet of Redgill";
    break;
  case 18242:
    spellname = "Hot Smoked Bass";
    break;
  case 18243:
    spellname = "Nightfin Soup";
    break;
  case 18244:
    spellname = "Poached Sunscale Salmon";
    break;
  case 18245:
    spellname = "Lobster Stew";
    break;
  case 18246:
    spellname = "Mightfish Steak";
    break;
  case 18247:
    spellname = "Baked Salmon";
    break;
  case 18248:
    spellname = "Fishing";
    break;
  case 18249:
    spellname = "Artisan Fishing";
    break;
  case 18260:
    spellname = "Cooking";
    break;
  case 18261:
    spellname = "Artisan Cook";
    break;
  case 18262:
    spellname = "Call Bloodshot";
    break;
  case 18264:
    spellname = "Headmaster's Charge";
    break;
  case 18265:
    spellname = "Siphon Life";
    break;
  case 18266:
    spellname = "Curse of Agony";
    break;
  case 18267:
    spellname = "Curse of Weakness";
    break;
  case 18269:
    spellname = "Kodo Kombobulator";
    break;
  case 18270:
    spellname = "Dark Plague";
    break;
  case 18271:
    spellname = "Shadow Mastery";
    break;
  case 18272:
    spellname = "Shadow Mastery";
    break;
  case 18273:
    spellname = "Shadow Mastery";
    break;
  case 18274:
    spellname = "Shadow Mastery";
    break;
  case 18275:
    spellname = "Shadow Mastery";
    break;
  case 18276:
    spellname = "Frost Blast";
    break;
  case 18278:
    spellname = "Silence";
    break;
  case 18281:
    spellname = "Increased Armor 210";
    break;
  case 18282:
    spellname = "Dummy Spell";
    break;
  case 18288:
    spellname = "Amplify Curse";
    break;
  case 18289:
    spellname = "Creeping Mold";
    break;
  case 18307:
    spellname = "Death by Peasant";
    break;
  case 18308:
    spellname = "Death by Peasant";
    break;
  case 18309:
    spellname = "Bear Form";
    break;
  case 18327:
    spellname = "Silence";
    break;
  case 18328:
    spellname = "Incapacitating Shout";
    break;
  case 18347:
    spellname = "Haunted";
    break;
  case 18351:
    spellname = "Breath";
    break;
  case 18352:
    spellname = "Breath";
    break;
  case 18353:
    spellname = "Breath";
    break;
  case 18354:
    spellname = "Breath";
    break;
  case 18355:
    spellname = "Breath";
    break;
  case 18356:
    spellname = "Breath";
    break;
  case 18357:
    spellname = "Breath";
    break;
  case 18358:
    spellname = "Breath";
    break;
  case 18359:
    spellname = "Breath";
    break;
  case 18360:
    spellname = "Breath";
    break;
  case 18361:
    spellname = "Breath";
    break;
  case 18362:
    spellname = "Kodo Kombobulator";
    break;
  case 18363:
    spellname = "Riding Kodo";
    break;
  case 18364:
    spellname = "Cloak of Fire";
    break;
  case 18367:
    spellname = "Create Dawn's Gambit";
    break;
  case 18368:
    spellname = "Strike";
    break;
  case 18369:
    spellname = "Increased Defense";
    break;
  case 18371:
    spellname = "Drain Soul";
    break;
  case 18372:
    spellname = "Improved Drain Soul";
    break;
  case 18373:
    spellname = "Aynasha's Root";
    break;
  case 18374:
    spellname = "Cloak of Fire";
    break;
  case 18375:
    spellname = "Aynasha's Arrow";
    break;
  case 18376:
    spellname = "Corruption";
    break;
  case 18377:
    spellname = "Kodo Kombobulator";
    break;
  case 18378:
    spellname = "Increased Mana Regen";
    break;
  case 18379:
    spellname = "Increased Mana Regen";
    break;
  case 18381:
    spellname = "Cripple";
    break;
  case 18382:
    spellname = "Increased Critical Spell";
    break;
  case 18384:
    spellname = "Increased Critical Spell";
    break;
  case 18385:
    spellname = "Replenish Mana";
    break;
  case 18386:
    spellname = "Heal Pet";
    break;
  case 18387:
    spellname = "Onyxia";
    break;
  case 18388:
    spellname = "Quick Fade";
    break;
  case 18389:
    spellname = "dmg5";
    break;
  case 18390:
    spellname = "dmg6";
    break;
  case 18392:
    spellname = "Fireball";
    break;
  case 18395:
    spellname = "Dismounting Shot";
    break;
  case 18396:
    spellname = "Dismounting Blast";
    break;
  case 18397:
    spellname = "Filling";
    break;
  case 18398:
    spellname = "Frost Blast";
    break;
  case 18399:
    spellname = "Flamestrike";
    break;
  case 18400:
    spellname = "Piccolo of the Flaming Fire";
    break;
  case 18401:
    spellname = "Bolt of Runecloth";
    break;
  case 18402:
    spellname = "Runecloth Belt";
    break;
  case 18403:
    spellname = "Frostweave Tunic";
    break;
  case 18404:
    spellname = "Frostweave Robe";
    break;
  case 18405:
    spellname = "Runecloth Bag";
    break;
  case 18406:
    spellname = "Runecloth Robe";
    break;
  case 18407:
    spellname = "Runecloth Tunic";
    break;
  case 18408:
    spellname = "Cindercloth Vest";
    break;
  case 18409:
    spellname = "Runecloth Cloak";
    break;
  case 18410:
    spellname = "Ghostweave Belt";
    break;
  case 18411:
    spellname = "Frostweave Gloves";
    break;
  case 18412:
    spellname = "Cindercloth Gloves";
    break;
  case 18413:
    spellname = "Ghostweave Gloves";
    break;
  case 18414:
    spellname = "Brightcloth Robe";
    break;
  case 18415:
    spellname = "Brightcloth Gloves";
    break;
  case 18416:
    spellname = "Ghostweave Vest";
    break;
  case 18417:
    spellname = "Runecloth Gloves";
    break;
  case 18418:
    spellname = "Cindercloth Cloak";
    break;
  case 18419:
    spellname = "Felcloth Pants";
    break;
  case 18420:
    spellname = "Brightcloth Cloak";
    break;
  case 18421:
    spellname = "Wizardweave Leggings";
    break;
  case 18422:
    spellname = "Cloak of Fire";
    break;
  case 18423:
    spellname = "Runecloth Boots";
    break;
  case 18424:
    spellname = "Frostweave Pants";
    break;
  case 18425:
    spellname = "Kick - Silenced";
    break;
  case 18427:
    spellname = "Aggression";
    break;
  case 18428:
    spellname = "Aggression";
    break;
  case 18429:
    spellname = "Aggression";
    break;
  case 18431:
    spellname = "Bellowing Roar";
    break;
  case 18432:
    spellname = "Fire Nova";
    break;
  case 18434:
    spellname = "Cindercloth Pants";
    break;
  case 18435:
    spellname = "Flame Breath";
    break;
  case 18436:
    spellname = "Robe of Winter Night";
    break;
  case 18437:
    spellname = "Felcloth Boots";
    break;
  case 18438:
    spellname = "Runecloth Pants";
    break;
  case 18439:
    spellname = "Brightcloth Pants";
    break;
  case 18440:
    spellname = "Mooncloth Leggings";
    break;
  case 18441:
    spellname = "Ghostweave Pants";
    break;
  case 18442:
    spellname = "Felcloth Hood";
    break;
  case 18443:
    spellname = "Safe Fall";
    break;
  case 18444:
    spellname = "Runecloth Headband";
    break;
  case 18445:
    spellname = "Mooncloth Bag";
    break;
  case 18446:
    spellname = "Wizardweave Robe";
    break;
  case 18447:
    spellname = "Mooncloth Vest";
    break;
  case 18448:
    spellname = "Mooncloth Shoulders";
    break;
  case 18449:
    spellname = "Runecloth Shoulders";
    break;
  case 18450:
    spellname = "Wizardweave Turban";
    break;
  case 18451:
    spellname = "Felcloth Robe";
    break;
  case 18452:
    spellname = "Mooncloth Circlet";
    break;
  case 18453:
    spellname = "Felcloth Shoulders";
    break;
  case 18454:
    spellname = "Gloves of Spell Mastery";
    break;
  case 18455:
    spellname = "Bottomless Bag";
    break;
  case 18456:
    spellname = "Truefaith Vestments";
    break;
  case 18457:
    spellname = "Robe of the Archmage";
    break;
  case 18458:
    spellname = "Robe of the Void";
    break;
  case 18459:
    spellname = "Incineration";
    break;
  case 18460:
    spellname = "Incineration";
    break;
  case 18462:
    spellname = "Arcane Meditation";
    break;
  case 18463:
    spellname = "Arcane Meditation";
    break;
  case 18464:
    spellname = "Arcane Meditation";
    break;
  case 18469:
    spellname = "Counterspell - Silenced";
    break;
  case 18476:
    spellname = "Summon Minion";
    break;
  case 18498:
    spellname = "Shield Bash - Silenced";
    break;
  case 18499:
    spellname = "Berserker Rage";
    break;
  case 18500:
    spellname = "Wing Buffet";
    break;
  case 18501:
    spellname = "Enrage";
    break;
  case 18502:
    spellname = "Curse of Hakkar";
    break;
  case 18503:
    spellname = "Hex";
    break;
  case 18530:
    spellname = "Divine Fury";
    break;
  case 18531:
    spellname = "Divine Fury";
    break;
  case 18533:
    spellname = "Divine Fury";
    break;
  case 18534:
    spellname = "Divine Fury";
    break;
  case 18535:
    spellname = "Divine Fury";
    break;
  case 18540:
    spellname = "Ritual of Doom";
    break;
  case 18541:
    spellname = "Ritual of Doom Effect";
    break;
  case 18542:
    spellname = "Immolate";
    break;
  case 18543:
    spellname = "Flame Lash";
    break;
  case 18544:
    spellname = "Force of Will";
    break;
  case 18545:
    spellname = "Scorpid Sting";
    break;
  case 18546:
    spellname = "Overdrive";
    break;
  case 18547:
    spellname = "Force of Will";
    break;
  case 18548:
    spellname = "Force of Will";
    break;
  case 18549:
    spellname = "Force of Will";
    break;
  case 18550:
    spellname = "Force of Will";
    break;
  case 18551:
    spellname = "Mental Strength";
    break;
  case 18552:
    spellname = "Mental Strength";
    break;
  case 18553:
    spellname = "Mental Strength";
    break;
  case 18554:
    spellname = "Mental Strength";
    break;
  case 18555:
    spellname = "Mental Strength";
    break;
  case 18557:
    spellname = "Drain Life";
    break;
  case 18559:
    spellname = "Demon Pick";
    break;
  case 18560:
    spellname = "Mooncloth";
    break;
  case 18561:
    spellname = "Shoot";
    break;
  case 18562:
    spellname = "Swiftmend";
    break;
  case 18564:
    spellname = "Breath";
    break;
  case 18565:
    spellname = "Breath";
    break;
  case 18566:
    spellname = "Breath";
    break;
  case 18567:
    spellname = "Breath";
    break;
  case 18568:
    spellname = "Breath";
    break;
  case 18569:
    spellname = "Breath";
    break;
  case 18570:
    spellname = "Breath";
    break;
  case 18571:
    spellname = "Breath";
    break;
  case 18572:
    spellname = "Breath";
    break;
  case 18573:
    spellname = "Breath";
    break;
  case 18574:
    spellname = "Breath";
    break;
  case 18575:
    spellname = "Breath";
    break;
  case 18576:
    spellname = "Breath";
    break;
  case 18578:
    spellname = "Breath";
    break;
  case 18579:
    spellname = "Breath";
    break;
  case 18580:
    spellname = "Breath";
    break;
  case 18581:
    spellname = "Breath";
    break;
  case 18582:
    spellname = "Breath";
    break;
  case 18583:
    spellname = "Breath";
    break;
  case 18584:
    spellname = "Breath";
    break;
  case 18585:
    spellname = "Breath";
    break;
  case 18586:
    spellname = "Breath";
    break;
  case 18587:
    spellname = "Breath";
    break;
  case 18588:
    spellname = "Breath";
    break;
  case 18589:
    spellname = "Breath";
    break;
  case 18590:
    spellname = "Breath";
    break;
  case 18591:
    spellname = "Breath";
    break;
  case 18592:
    spellname = "Breath";
    break;
  case 18593:
    spellname = "Breath";
    break;
  case 18594:
    spellname = "Breath";
    break;
  case 18595:
    spellname = "Breath";
    break;
  case 18596:
    spellname = "Breath";
    break;
  case 18597:
    spellname = "Breath";
    break;
  case 18598:
    spellname = "Breath";
    break;
  case 18599:
    spellname = "Breath";
    break;
  case 18600:
    spellname = "Breath";
    break;
  case 18601:
    spellname = "Breath";
    break;
  case 18602:
    spellname = "Breath";
    break;
  case 18603:
    spellname = "Breath";
    break;
  case 18604:
    spellname = "Breath";
    break;
  case 18605:
    spellname = "Breath";
    break;
  case 18606:
    spellname = "Breath";
    break;
  case 18607:
    spellname = "Breath";
    break;
  case 18608:
    spellname = "First Aid";
    break;
  case 18609:
    spellname = "Breath";
    break;
  case 18610:
    spellname = "First Aid";
    break;
  case 18611:
    spellname = "Breath";
    break;
  case 18612:
    spellname = "Breath";
    break;
  case 18613:
    spellname = "Breath";
    break;
  case 18614:
    spellname = "Breath";
    break;
  case 18615:
    spellname = "Breath";
    break;
  case 18616:
    spellname = "Breath";
    break;
  case 18617:
    spellname = "Breath";
    break;
  case 18618:
    spellname = "Breath";
    break;
  case 18619:
    spellname = "Breath";
    break;
  case 18620:
    spellname = "Breath";
    break;
  case 18621:
    spellname = "Breath";
    break;
  case 18622:
    spellname = "Breath";
    break;
  case 18623:
    spellname = "Breath";
    break;
  case 18624:
    spellname = "Breath";
    break;
  case 18625:
    spellname = "Breath";
    break;
  case 18626:
    spellname = "Breath";
    break;
  case 18627:
    spellname = "Breath";
    break;
  case 18628:
    spellname = "Breath";
    break;
  case 18629:
    spellname = "Runecloth Bandage";
    break;
  case 18630:
    spellname = "Heavy Runecloth Bandage";
    break;
  case 18631:
    spellname = "Runecloth Bandage";
    break;
  case 18632:
    spellname = "Heavy Runecloth Bandage";
    break;
  case 18633:
    spellname = "Weakening Disease";
    break;
  case 18634:
    spellname = "Target Dummy - Event 001";
    break;
  case 18647:
    spellname = "Banish";
    break;
  case 18649:
    spellname = "Shadow Shot";
    break;
  case 18650:
    spellname = "Summon Marduk the Black";
    break;
  case 18651:
    spellname = "Multi-Shot";
    break;
  case 18652:
    spellname = "Siphon Health";
    break;
  case 18653:
    spellname = "Siphon Health";
    break;
  case 18654:
    spellname = "Siphon Health";
    break;
  case 18655:
    spellname = "Mortar Animate";
    break;
  case 18656:
    spellname = "Corruption";
    break;
  case 18657:
    spellname = "Hibernate";
    break;
  case 18658:
    spellname = "Hibernate";
    break;
  case 18661:
    spellname = "Araj's Phylactery";
    break;
  case 18662:
    spellname = "Curse of Doom Effect";
    break;
  case 18663:
    spellname = "Shadow Shock";
    break;
  case 18666:
    spellname = "Corrupt Redpath";
    break;
  case 18670:
    spellname = "Knock Away";
    break;
  case 18671:
    spellname = "Curse of Agony";
    break;
  case 18672:
    spellname = "Increased All Resist 01";
    break;
  case 18673:
    spellname = "Increased All Resist 02";
    break;
  case 18674:
    spellname = "Increased All Resist 03";
    break;
  case 18675:
    spellname = "Increased All Resist 04";
    break;
  case 18676:
    spellname = "Increased All Resist 05";
    break;
  case 18677:
    spellname = "Increased All Resist 06";
    break;
  case 18678:
    spellname = "Increased All Resist 07";
    break;
  case 18679:
    spellname = "Increased All Resist 08";
    break;
  case 18680:
    spellname = "Increased All Resist 09";
    break;
  case 18681:
    spellname = "Increased All Resist 10";
    break;
  case 18682:
    spellname = "Increased All Resist 11";
    break;
  case 18683:
    spellname = "Increased All Resist 12";
    break;
  case 18684:
    spellname = "Increased All Resist 13";
    break;
  case 18685:
    spellname = "Increased All Resist 14";
    break;
  case 18686:
    spellname = "Increased All Resist 15";
    break;
  case 18687:
    spellname = "Increased All Resist 16";
    break;
  case 18688:
    spellname = "Increased All Resist 17";
    break;
  case 18689:
    spellname = "Increased All Resist 18";
    break;
  case 18690:
    spellname = "Increased All Resist 19";
    break;
  case 18691:
    spellname = "Increased All Resist 20";
    break;
  case 18692:
    spellname = "Improved Healthstone";
    break;
  case 18693:
    spellname = "Improved Healthstone";
    break;
  case 18694:
    spellname = "Improved Imp";
    break;
  case 18695:
    spellname = "Improved Imp";
    break;
  case 18696:
    spellname = "Improved Imp";
    break;
  case 18697:
    spellname = "Demonic Embrace";
    break;
  case 18698:
    spellname = "Demonic Embrace";
    break;
  case 18699:
    spellname = "Demonic Embrace";
    break;
  case 18700:
    spellname = "Demonic Embrace";
    break;
  case 18701:
    spellname = "Demonic Embrace";
    break;
  case 18702:
    spellname = "Curse of the Darkmaster";
    break;
  case 18703:
    spellname = "Improved Health Funnel";
    break;
  case 18704:
    spellname = "Improved Health Funnel";
    break;
  case 18705:
    spellname = "Improved Voidwalker";
    break;
  case 18706:
    spellname = "Improved Voidwalker";
    break;
  case 18707:
    spellname = "Improved Voidwalker";
    break;
  case 18708:
    spellname = "Fel Domination";
    break;
  case 18709:
    spellname = "Master Summoner";
    break;
  case 18710:
    spellname = "Master Summoner";
    break;
  case 18711:
    spellname = "Forging";
    break;
  case 18727:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18728:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18729:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18730:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18731:
    spellname = "Fel Intellect";
    break;
  case 18733:
    spellname = "Air Bubbles";
    break;
  case 18735:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18736:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18737:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18738:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18739:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18740:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18741:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18742:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 18743:
    spellname = "Fel Intellect";
    break;
  case 18744:
    spellname = "Fel Intellect";
    break;
  case 18747:
    spellname = "Blue Dragon Immunity (PT)";
    break;
  case 18748:
    spellname = "Fel Stamina";
    break;
  case 18749:
    spellname = "Fel Stamina";
    break;
  case 18750:
    spellname = "Fel Stamina";
    break;
  case 18754:
    spellname = "Improved Succubus";
    break;
  case 18755:
    spellname = "Improved Succubus";
    break;
  case 18756:
    spellname = "Improved Succubus";
    break;
  case 18761:
    spellname = "Swallow Soul";
    break;
  case 18762:
    spellname = "Hand of Iruxos";
    break;
  case 18763:
    spellname = "Freeze";
    break;
  case 18764:
    spellname = "Fungal Regrowth";
    break;
  case 18765:
    spellname = "Sweeping Strikes";
    break;
  case 18767:
    spellname = "Master Conjuror";
    break;
  case 18768:
    spellname = "Master Conjuror";
    break;
  case 18769:
    spellname = "Unholy Power";
    break;
  case 18770:
    spellname = "Unholy Power";
    break;
  case 18771:
    spellname = "Unholy Power";
    break;
  case 18772:
    spellname = "Unholy Power";
    break;
  case 18773:
    spellname = "Unholy Power";
    break;
  case 18787:
    spellname = "Heaven's Blessing";
    break;
  case 18788:
    spellname = "Demonic Sacrifice";
    break;
  case 18789:
    spellname = "Burning Wish";
    break;
  case 18790:
    spellname = "Fel Stamina";
    break;
  case 18791:
    spellname = "Touch of Shadow";
    break;
  case 18792:
    spellname = "Fel Energy";
    break;
  case 18794:
    spellname = "Young Tirion";
    break;
  case 18795:
    spellname = "Peon Sleeping (Stun emote)";
    break;
  case 18796:
    spellname = "Fireball";
    break;
  case 18797:
    spellname = "Flurry Axe";
    break;
  case 18798:
    spellname = "Freeze";
    break;
  case 18799:
    spellname = "Freeze";
    break;
  case 18800:
    spellname = "Light Test";
    break;
  case 18801:
    spellname = "TESTT";
    break;
  case 18802:
    spellname = "Frost Shot";
    break;
  case 18803:
    spellname = "Focus";
    break;
  case 18805:
    spellname = "Recombobulate";
    break;
  case 18807:
    spellname = "Mind Flay";
    break;
  case 18809:
    spellname = "Pyroblast";
    break;
  case 18810:
    spellname = "Taelan's Suffering";
    break;
  case 18811:
    spellname = "Taelan's Suffering Effect";
    break;
  case 18812:
    spellname = "Knockdown";
    break;
  case 18813:
    spellname = "Knock Away";
    break;
  case 18814:
    spellname = "Summon Phoenix Adds";
    break;
  case 18815:
    spellname = "Drain Life";
    break;
  case 18816:
    spellname = "Flamestrike";
    break;
  case 18817:
    spellname = "Drain Life";
    break;
  case 18818:
    spellname = "Flamestrike";
    break;
  case 18819:
    spellname = "Holy Cleave";
    break;
  case 18820:
    spellname = "Insight";
    break;
  case 18821:
    spellname = "Improved Enslave Demon";
    break;
  case 18822:
    spellname = "Improved Enslave Demon";
    break;
  case 18826:
    spellname = "Savior's Sacrifice";
    break;
  case 18827:
    spellname = "Improved Curse of Agony";
    break;
  case 18828:
    spellname = "Bone Armor";
    break;
  case 18829:
    spellname = "Improved Curse of Agony";
    break;
  case 18831:
    spellname = "Conjure Lily Root";
    break;
  case 18832:
    spellname = "Lily Root";
    break;
  case 18833:
    spellname = "Firebolt";
    break;
  case 18847:
    spellname = "Fevered Fatigue";
    break;
  case 18848:
    spellname = "Spirit Weapons";
    break;
  case 18867:
    spellname = "Shadowburn";
    break;
  case 18868:
    spellname = "Shadowburn";
    break;
  case 18869:
    spellname = "Shadowburn";
    break;
  case 18870:
    spellname = "Shadowburn";
    break;
  case 18871:
    spellname = "Shadowburn";
    break;
  case 18873:
    spellname = "Diablo";
    break;
  case 18874:
    spellname = "Diablo";
    break;
  case 18879:
    spellname = "Siphon Life";
    break;
  case 18880:
    spellname = "Siphon Life";
    break;
  case 18881:
    spellname = "Siphon Life";
    break;
  case 18887:
    spellname = "Create Nimboya's Laden Pike";
    break;
  case 18907:
    spellname = "Target Dummy - Event 002";
    break;
  case 18930:
    spellname = "Conflagrate";
    break;
  case 18931:
    spellname = "Conflagrate";
    break;
  case 18932:
    spellname = "Conflagrate";
    break;
  case 18936:
    spellname = "Trigger Silithid";
    break;
  case 18937:
    spellname = "Dark Pact";
    break;
  case 18938:
    spellname = "Dark Pact";
    break;
  case 18942:
    spellname = "Fire Protection";
    break;
  case 18943:
    spellname = "Double Attack";
    break;
  case 18944:
    spellname = "Smash";
    break;
  case 18945:
    spellname = "Knock Away";
    break;
  case 18946:
    spellname = "The Lion Horn of Stormwind";
    break;
  case 18948:
    spellname = "Dark Energy";
    break;
  case 18949:
    spellname = "Atal'ai Poison";
    break;
  case 18950:
    spellname = "Invisibility and Stealth Detection";
    break;
  case 18951:
    spellname = "Spirit Particles (green)";
    break;
  case 18952:
    spellname = "Opening Termite Barrel";
    break;
  case 18953:
    spellname = "Ranshalla Waiting";
    break;
  case 18956:
    spellname = "Restore Life";
    break;
  case 18957:
    spellname = "Restore Life";
    break;
  case 18958:
    spellname = "Flame Lash";
    break;
  case 18960:
    spellname = "Teleport: Moonglade";
    break;
  case 18968:
    spellname = "Fire Shield";
    break;
  case 18969:
    spellname = "Taelan Death";
    break;
  case 18970:
    spellname = "Self Stun - (Visual only)";
    break;
  case 18972:
    spellname = "Slow";
    break;
  case 18974:
    spellname = "Summon Lunaclaw";
    break;
  case 18975:
    spellname = "Summon Ice Totem";
    break;
  case 18976:
    spellname = "Self Resurrection";
    break;
  case 18977:
    spellname = "Frost";
    break;
  case 18978:
    spellname = "Ice Totem";
    break;
  case 18979:
    spellname = "Lightning";
    break;
  case 18980:
    spellname = "Lightning";
    break;
  case 18983:
    spellname = "Heal on Kill";
    break;
  case 18984:
    spellname = "Heal on Kill";
    break;
  case 18985:
    spellname = "Resist Silence";
    break;
  case 18986:
    spellname = "Lunaclaw Spirit";
    break;
  case 18987:
    spellname = "Create Relic Bundle";
    break;
  case 18988:
    spellname = "Create Relic Bundle";
    break;
  case 18989:
    spellname = "Gray Kodo";
    break;
  case 18990:
    spellname = "Brown Kodo";
    break;
  case 18991:
    spellname = "Green Kodo";
    break;
  case 18992:
    spellname = "Teal Kodo";
    break;
  case 18994:
    spellname = "Ranshalla - Bind Wildkin";
    break;
  case 18995:
    spellname = "Kodo Riding";
    break;
  case 18996:
    spellname = "Kodo Riding";
    break;
  case 19007:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19027:
    spellname = "Teleport: Moonglade";
    break;
  case 19028:
    spellname = "Soul Link";
    break;
  case 19029:
    spellname = "Create Coagulated Rot";
    break;
  case 19030:
    spellname = "Bear Form";
    break;
  case 19031:
    spellname = "Summon Human Skull";
    break;
  case 19032:
    spellname = "Throw Human Skull";
    break;
  case 19047:
    spellname = "Cured Rugged Hide";
    break;
  case 19048:
    spellname = "Heavy Scorpid Bracers";
    break;
  case 19049:
    spellname = "Wicked Leather Gauntlets";
    break;
  case 19050:
    spellname = "Green Dragonscale Breastplate";
    break;
  case 19051:
    spellname = "Heavy Scorpid Vest";
    break;
  case 19052:
    spellname = "Wicked Leather Bracers";
    break;
  case 19053:
    spellname = "Chimeric Gloves";
    break;
  case 19054:
    spellname = "Red Dragonscale Breastplate";
    break;
  case 19055:
    spellname = "Runic Leather Gauntlets";
    break;
  case 19057:
    spellname = "Armor +40";
    break;
  case 19058:
    spellname = "Rugged Armor Kit";
    break;
  case 19059:
    spellname = "Volcanic Leggings";
    break;
  case 19060:
    spellname = "Green Dragonscale Leggings";
    break;
  case 19061:
    spellname = "Living Shoulders";
    break;
  case 19062:
    spellname = "Ironfeather Shoulders";
    break;
  case 19063:
    spellname = "Chimeric Boots";
    break;
  case 19064:
    spellname = "Heavy Scorpid Gauntlets";
    break;
  case 19065:
    spellname = "Runic Leather Bracers";
    break;
  case 19066:
    spellname = "Frostsaber Boots";
    break;
  case 19067:
    spellname = "Stormshroud Pants";
    break;
  case 19068:
    spellname = "Warbear Harness";
    break;
  case 19069:
    spellname = "Plant Magic Beans";
    break;
  case 19070:
    spellname = "Heavy Scorpid Belt";
    break;
  case 19071:
    spellname = "Wicked Leather Headband";
    break;
  case 19072:
    spellname = "Runic Leather Belt";
    break;
  case 19073:
    spellname = "Chimeric Leggings";
    break;
  case 19074:
    spellname = "Frostsaber Leggings";
    break;
  case 19075:
    spellname = "Heavy Scorpid Leggings";
    break;
  case 19076:
    spellname = "Volcanic Breastplate";
    break;
  case 19077:
    spellname = "Blue Dragonscale Breastplate";
    break;
  case 19078:
    spellname = "Living Leggings";
    break;
  case 19079:
    spellname = "Stormshroud Armor";
    break;
  case 19080:
    spellname = "Warbear Woolies";
    break;
  case 19081:
    spellname = "Chimeric Vest";
    break;
  case 19082:
    spellname = "Runic Leather Headband";
    break;
  case 19083:
    spellname = "Wicked Leather Pants";
    break;
  case 19084:
    spellname = "Devilsaur Gauntlets";
    break;
  case 19085:
    spellname = "Black Dragonscale Breastplate";
    break;
  case 19086:
    spellname = "Ironfeather Breastplate";
    break;
  case 19087:
    spellname = "Frostsaber Gloves";
    break;
  case 19088:
    spellname = "Heavy Scorpid Helm";
    break;
  case 19089:
    spellname = "Blue Dragonscale Shoulders";
    break;
  case 19090:
    spellname = "Stormshroud Shoulders";
    break;
  case 19091:
    spellname = "Runic Leather Pants";
    break;
  case 19092:
    spellname = "Wicked Leather Belt";
    break;
  case 19093:
    spellname = "Onyxia Scale Cloak";
    break;
  case 19094:
    spellname = "Black Dragonscale Shoulders";
    break;
  case 19095:
    spellname = "Living Breastplate";
    break;
  case 19096:
    spellname = "Summon Conquered Soul";
    break;
  case 19097:
    spellname = "Devilsaur Leggings";
    break;
  case 19098:
    spellname = "Wicked Leather Armor";
    break;
  case 19099:
    spellname = "Blizzard";
    break;
  case 19100:
    spellname = "Heavy Scorpid Shoulders";
    break;
  case 19101:
    spellname = "Volcanic Shoulders";
    break;
  case 19102:
    spellname = "Runic Leather Armor";
    break;
  case 19103:
    spellname = "Runic Leather Shoulders";
    break;
  case 19104:
    spellname = "Frostsaber Tunic";
    break;
  case 19105:
    spellname = "MHTest01 Effect";
    break;
  case 19106:
    spellname = "Onyxia Scale Breastplate";
    break;
  case 19107:
    spellname = "Black Dragonscale Leggings";
    break;
  case 19108:
    spellname = "MHTest02";
    break;
  case 19109:
    spellname = "MHTest02 Effect";
    break;
  case 19127:
    spellname = "Xabraxxis Demon Bag";
    break;
  case 19128:
    spellname = "Knockdown";
    break;
  case 19129:
    spellname = "Massive Tremor";
    break;
  case 19130:
    spellname = "Revenge";
    break;
  case 19131:
    spellname = "Shield Charge";
    break;
  case 19132:
    spellname = "Mighty Blow";
    break;
  case 19133:
    spellname = "Frost Shock";
    break;
  case 19134:
    spellname = "Frightening Shout";
    break;
  case 19135:
    spellname = "Avatar";
    break;
  case 19136:
    spellname = "Stormbolt";
    break;
  case 19137:
    spellname = "Slow";
    break;
  case 19138:
    spellname = "Summon Lunaclaw";
    break;
  case 19150:
    spellname = "Musty Tome Trap";
    break;
  case 19151:
    spellname = "Humanoid Slaying";
    break;
  case 19152:
    spellname = "Humanoid Slaying";
    break;
  case 19153:
    spellname = "Humanoid Slaying";
    break;
  case 19155:
    spellname = "Precision";
    break;
  case 19159:
    spellname = "Savage Strikes";
    break;
  case 19160:
    spellname = "Savage Strikes";
    break;
  case 19168:
    spellname = "Lightning Reflexes";
    break;
  case 19179:
    spellname = "Bear Form";
    break;
  case 19180:
    spellname = "Lightning Reflexes";
    break;
  case 19181:
    spellname = "Lightning Reflexes";
    break;
  case 19184:
    spellname = "Entrapment";
    break;
  case 19185:
    spellname = "Entrapment";
    break;
  case 19194:
    spellname = "Double Attack";
    break;
  case 19196:
    spellname = "Surge";
    break;
  case 19199:
    spellname = "Tea with Sugar";
    break;
  case 19213:
    spellname = "Pattern: Onyxia Scale Cloak";
    break;
  case 19223:
    spellname = "Surge 2";
    break;
  case 19226:
    spellname = "Zergling";
    break;
  case 19227:
    spellname = "Zergling";
    break;
  case 19228:
    spellname = "Improved Wing Clip";
    break;
  case 19229:
    spellname = "Improved Wing Clip";
    break;
  case 19230:
    spellname = "Panda";
    break;
  case 19231:
    spellname = "Panda";
    break;
  case 19232:
    spellname = "Improved Wing Clip";
    break;
  case 19233:
    spellname = "Improved Wing Clip";
    break;
  case 19236:
    spellname = "Desperate Prayer";
    break;
  case 19237:
    spellname = "Smokey's Explosion";
    break;
  case 19238:
    spellname = "Desperate Prayer";
    break;
  case 19239:
    spellname = "Clever Traps";
    break;
  case 19240:
    spellname = "Desperate Prayer";
    break;
  case 19241:
    spellname = "Desperate Prayer";
    break;
  case 19242:
    spellname = "Desperate Prayer";
    break;
  case 19243:
    spellname = "Desperate Prayer";
    break;
  case 19244:
    spellname = "Spell Lock";
    break;
  case 19245:
    spellname = "Clever Traps";
    break;
  case 19249:
    spellname = "Touch of Weakness";
    break;
  case 19250:
    spellname = "Placing Smokey's Explosives";
    break;
  case 19251:
    spellname = "Touch of Weakness";
    break;
  case 19252:
    spellname = "Touch of Weakness";
    break;
  case 19253:
    spellname = "Touch of Weakness";
    break;
  case 19254:
    spellname = "Touch of Weakness";
    break;
  case 19255:
    spellname = "Survivalist";
    break;
  case 19256:
    spellname = "Survivalist";
    break;
  case 19257:
    spellname = "Survivalist";
    break;
  case 19258:
    spellname = "Survivalist";
    break;
  case 19259:
    spellname = "Survivalist";
    break;
  case 19260:
    spellname = "Frost Blast";
    break;
  case 19261:
    spellname = "Touch of Weakness";
    break;
  case 19262:
    spellname = "Touch of Weakness";
    break;
  case 19263:
    spellname = "Deterrence";
    break;
  case 19264:
    spellname = "Touch of Weakness";
    break;
  case 19265:
    spellname = "Touch of Weakness";
    break;
  case 19266:
    spellname = "Touch of Weakness";
    break;
  case 19267:
    spellname = "Feedback";
    break;
  case 19268:
    spellname = "Feedback";
    break;
  case 19269:
    spellname = "Feedback";
    break;
  case 19270:
    spellname = "Feedback";
    break;
  case 19271:
    spellname = "Feedback";
    break;
  case 19272:
    spellname = "Lava Breath";
    break;
  case 19273:
    spellname = "Feedback";
    break;
  case 19274:
    spellname = "Feedback";
    break;
  case 19275:
    spellname = "Feedback";
    break;
  case 19276:
    spellname = "Devouring Plague";
    break;
  case 19277:
    spellname = "Devouring Plague";
    break;
  case 19278:
    spellname = "Devouring Plague";
    break;
  case 19279:
    spellname = "Devouring Plague";
    break;
  case 19280:
    spellname = "Devouring Plague";
    break;
  case 19281:
    spellname = "Hex of Weakness";
    break;
  case 19282:
    spellname = "Hex of Weakness";
    break;
  case 19283:
    spellname = "Hex of Weakness";
    break;
  case 19284:
    spellname = "Hex of Weakness";
    break;
  case 19285:
    spellname = "Hex of Weakness";
    break;
  case 19286:
    spellname = "Improved Feign Death";
    break;
  case 19287:
    spellname = "Improved Feign Death";
    break;
  case 19290:
    spellname = "Surefooted";
    break;
  case 19294:
    spellname = "Surefooted";
    break;
  case 19295:
    spellname = "Deflection";
    break;
  case 19296:
    spellname = "Starshards";
    break;
  case 19297:
    spellname = "Deflection";
    break;
  case 19298:
    spellname = "Deflection";
    break;
  case 19299:
    spellname = "Starshards";
    break;
  case 19300:
    spellname = "Deflection";
    break;
  case 19301:
    spellname = "Deflection";
    break;
  case 19302:
    spellname = "Starshards";
    break;
  case 19303:
    spellname = "Starshards";
    break;
  case 19304:
    spellname = "Starshards";
    break;
  case 19305:
    spellname = "Starshards";
    break;
  case 19306:
    spellname = "Counterattack";
    break;
  case 19307:
    spellname = "Crystal of Zin-Malor";
    break;
  case 19308:
    spellname = "Shadowguard";
    break;
  case 19309:
    spellname = "Shadowguard";
    break;
  case 19310:
    spellname = "Shadowguard";
    break;
  case 19311:
    spellname = "Shadowguard";
    break;
  case 19312:
    spellname = "Shadowguard";
    break;
  case 19319:
    spellname = "Vicious Bite";
    break;
  case 19362:
    spellname = "MHTest03";
    break;
  case 19363:
    spellname = "Summon Mechanical Yeti";
    break;
  case 19364:
    spellname = "Ground Stomp";
    break;
  case 19365:
    spellname = "Ancient Dread";
    break;
  case 19366:
    spellname = "Cauterizing Flames";
    break;
  case 19367:
    spellname = "Withering Heat";
    break;
  case 19368:
    spellname = "Summon Infected Mossflayer";
    break;
  case 19369:
    spellname = "Ancient Despair";
    break;
  case 19370:
    spellname = "Killer Instinct";
    break;
  case 19371:
    spellname = "Killer Instinct";
    break;
  case 19372:
    spellname = "Ancient Hysteria";
    break;
  case 19373:
    spellname = "Killer Instinct";
    break;
  case 19376:
    spellname = "Trap Mastery";
    break;
  case 19377:
    spellname = "Trap Mastery";
    break;
  case 19380:
    spellname = "Beast Slaying 33";
    break;
  case 19381:
    spellname = "Melee Specialization";
    break;
  case 19382:
    spellname = "Melee Specialization";
    break;
  case 19383:
    spellname = "Melee Specialization";
    break;
  case 19384:
    spellname = "Melee Specialization";
    break;
  case 19385:
    spellname = "Melee Specialization";
    break;
  case 19386:
    spellname = "Wyvern Sting";
    break;
  case 19387:
    spellname = "Entrapment";
    break;
  case 19388:
    spellname = "Entrapment";
    break;
  case 19391:
    spellname = "Fireball";
    break;
  case 19392:
    spellname = "Summon Lava Spawn";
    break;
  case 19393:
    spellname = "Soul Burn";
    break;
  case 19395:
    spellname = "Gordunni Trap";
    break;
  case 19397:
    spellname = "Incinerate";
    break;
  case 19407:
    spellname = "Improved Concussive Shot";
    break;
  case 19408:
    spellname = "Panic";
    break;
  case 19409:
    spellname = "Bone Armor";
    break;
  case 19410:
    spellname = "Improved Concussive Shot";
    break;
  case 19411:
    spellname = "Lava Bomb";
    break;
  case 19412:
    spellname = "Improved Concussive Shot";
    break;
  case 19413:
    spellname = "Improved Concussive Shot";
    break;
  case 19414:
    spellname = "Improved Concussive Shot";
    break;
  case 19415:
    spellname = "Improved Concussive Shot";
    break;
  case 19416:
    spellname = "Efficiency";
    break;
  case 19417:
    spellname = "Efficiency";
    break;
  case 19418:
    spellname = "Efficiency";
    break;
  case 19419:
    spellname = "Efficiency";
    break;
  case 19420:
    spellname = "Efficiency";
    break;
  case 19421:
    spellname = "Improved Hunter's Mark";
    break;
  case 19422:
    spellname = "Improved Hunter's Mark";
    break;
  case 19423:
    spellname = "Improved Hunter's Mark";
    break;
  case 19424:
    spellname = "Improved Hunter's Mark";
    break;
  case 19425:
    spellname = "Improved Hunter's Mark";
    break;
  case 19426:
    spellname = "Lethal Shots";
    break;
  case 19427:
    spellname = "Lethal Shots";
    break;
  case 19428:
    spellname = "Conflagration";
    break;
  case 19429:
    spellname = "Lethal Shots";
    break;
  case 19430:
    spellname = "Lethal Shots";
    break;
  case 19431:
    spellname = "Lethal Shots";
    break;
  case 19434:
    spellname = "Aimed Shot";
    break;
  case 19435:
    spellname = "Mooncloth Boots";
    break;
  case 19437:
    spellname = "Mooncloth Boots";
    break;
  case 19438:
    spellname = "Sacrifice";
    break;
  case 19439:
    spellname = "Sacrifice";
    break;
  case 19440:
    spellname = "Sacrifice";
    break;
  case 19441:
    spellname = "Sacrifice";
    break;
  case 19442:
    spellname = "Sacrifice";
    break;
  case 19443:
    spellname = "Sacrifice";
    break;
  case 19444:
    spellname = "Sacrifice";
    break;
  case 19445:
    spellname = "Sacrifice";
    break;
  case 19446:
    spellname = "Sacrifice";
    break;
  case 19447:
    spellname = "Sacrifice";
    break;
  case 19448:
    spellname = "Poison";
    break;
  case 19449:
    spellname = "Magma Spit";
    break;
  case 19450:
    spellname = "Magma Spit";
    break;
  case 19451:
    spellname = "Frenzy";
    break;
  case 19452:
    spellname = "Toxic Spit";
    break;
  case 19453:
    spellname = "Hive'Zora Egg";
    break;
  case 19454:
    spellname = "Improved Arcane Shot";
    break;
  case 19455:
    spellname = "Improved Arcane Shot";
    break;
  case 19456:
    spellname = "Improved Arcane Shot";
    break;
  case 19457:
    spellname = "Improved Arcane Shot";
    break;
  case 19458:
    spellname = "Improved Arcane Shot";
    break;
  case 19459:
    spellname = "Hive'Zora Wasp";
    break;
  case 19460:
    spellname = "Shadow Shock";
    break;
  case 19461:
    spellname = "Barrage";
    break;
  case 19462:
    spellname = "Barrage";
    break;
  case 19463:
    spellname = "Corrosive Acid Spit";
    break;
  case 19464:
    spellname = "Improved Stings";
    break;
  case 19465:
    spellname = "Improved Stings";
    break;
  case 19466:
    spellname = "Improved Stings";
    break;
  case 19467:
    spellname = "Improved Stings";
    break;
  case 19468:
    spellname = "Improved Stings";
    break;
  case 19469:
    spellname = "Poison Mind";
    break;
  case 19470:
    spellname = "Gem of the Serpent";
    break;
  case 19471:
    spellname = "Berserker Charge";
    break;
  case 19472:
    spellname = "Sinister Strike";
    break;
  case 19473:
    spellname = "Naga Statue Spell";
    break;
  case 19474:
    spellname = "Rain of Fire";
    break;
  case 19476:
    spellname = "Dispel Magic";
    break;
  case 19478:
    spellname = "Tainted Blood";
    break;
  case 19479:
    spellname = "Tainted Blood Effect";
    break;
  case 19480:
    spellname = "Paranoia";
    break;
  case 19481:
    spellname = "Paranoia";
    break;
  case 19482:
    spellname = "War Stomp";
    break;
  case 19483:
    spellname = "Immolation";
    break;
  case 19484:
    spellname = "Majordomo Teleport Visual";
    break;
  case 19485:
    spellname = "Mortal Shots";
    break;
  case 19486:
    spellname = "Improved Scorpid Sting";
    break;
  case 19487:
    spellname = "Mortal Shots";
    break;
  case 19488:
    spellname = "Mortal Shots";
    break;
  case 19489:
    spellname = "Mortal Shots";
    break;
  case 19490:
    spellname = "Mortal Shots";
    break;
  case 19491:
    spellname = "Improved Scorpid Sting";
    break;
  case 19492:
    spellname = "Antimagic Pulse";
    break;
  case 19493:
    spellname = "Improved Scorpid Sting";
    break;
  case 19494:
    spellname = "Improved Scorpid Sting";
    break;
  case 19496:
    spellname = "Magma Shackles";
    break;
  case 19497:
    spellname = "Eruption";
    break;
  case 19498:
    spellname = "Hawk Eye";
    break;
  case 19499:
    spellname = "Hawk Eye";
    break;
  case 19500:
    spellname = "Hawk Eye";
    break;
  case 19501:
    spellname = "Spiral Wave of Death";
    break;
  case 19502:
    spellname = "Sickly Critter Aura";
    break;
  case 19503:
    spellname = "Scatter Shot";
    break;
  case 19505:
    spellname = "Devour Magic";
    break;
  case 19506:
    spellname = "Trueshot Aura";
    break;
  case 19507:
    spellname = "Ranged Weapon Specialization";
    break;
  case 19508:
    spellname = "Ranged Weapon Specialization";
    break;
  case 19509:
    spellname = "Ranged Weapon Specialization";
    break;
  case 19510:
    spellname = "Ranged Weapon Specialization";
    break;
  case 19511:
    spellname = "Ranged Weapon Specialization";
    break;
  case 19512:
    spellname = "Apply Salve";
    break;
  case 19513:
    spellname = "Lightning Cloud";
    break;
  case 19514:
    spellname = "Lightning Shield";
    break;
  case 19515:
    spellname = "Enrage Trigger";
    break;
  case 19516:
    spellname = "Enrage";
    break;
  case 19548:
    spellname = "Tame Ice Claw Bear";
    break;
  case 19549:
    spellname = "Improved Aspect of the Monkey";
    break;
  case 19550:
    spellname = "Improved Aspect of the Monkey";
    break;
  case 19551:
    spellname = "Improved Aspect of the Monkey";
    break;
  case 19552:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 19553:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 19554:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 19555:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 19556:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 19557:
    spellname = "Improved Eyes of the Beast";
    break;
  case 19558:
    spellname = "Improved Eyes of the Beast";
    break;
  case 19559:
    spellname = "Pathfinding";
    break;
  case 19560:
    spellname = "Pathfinding";
    break;
  case 19561:
    spellname = "Summon Gnashjaw";
    break;
  case 19564:
    spellname = "Draw Water Sample";
    break;
  case 19565:
    spellname = "Draw Water Sample";
    break;
  case 19566:
    spellname = "Salt Shaker";
    break;
  case 19567:
    spellname = "Salt Shaker";
    break;
  case 19569:
    spellname = "Split";
    break;
  case 19570:
    spellname = "Split";
    break;
  case 19571:
    spellname = "Destroy Ghost Magnet";
    break;
  case 19572:
    spellname = "Improved Mend Pet";
    break;
  case 19573:
    spellname = "Improved Mend Pet";
    break;
  case 19574:
    spellname = "Bestial Wrath";
    break;
  case 19575:
    spellname = "Improved Revive Pet";
    break;
  case 19577:
    spellname = "Intimidation";
    break;
  case 19578:
    spellname = "Spirit Bond";
    break;
  case 19579:
    spellname = "Spirit Bond";
    break;
  case 19580:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19581:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19582:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19583:
    spellname = "Endurance Training";
    break;
  case 19584:
    spellname = "Endurance Training";
    break;
  case 19585:
    spellname = "Endurance Training";
    break;
  case 19586:
    spellname = "Endurance Training";
    break;
  case 19587:
    spellname = "Endurance Training";
    break;
  case 19588:
    spellname = "Place Ghost Magnet";
    break;
  case 19589:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19590:
    spellname = "Bestial Discipline";
    break;
  case 19591:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 19592:
    spellname = "Bestial Discipline";
    break;
  case 19593:
    spellname = "Egg Explosion";
    break;
  case 19594:
    spellname = "Plague Effect";
    break;
  case 19595:
    spellname = "Shadow and Frost Reflect";
    break;
  case 19596:
    spellname = "Bestial Swiftness";
    break;
  case 19597:
    spellname = "Tame Ice Claw Bear";
    break;
  case 19598:
    spellname = "Ferocity";
    break;
  case 19599:
    spellname = "Ferocity";
    break;
  case 19600:
    spellname = "Ferocity";
    break;
  case 19601:
    spellname = "Ferocity";
    break;
  case 19602:
    spellname = "Ferocity";
    break;
  case 19603:
    spellname = "Bestial Fury";
    break;
  case 19604:
    spellname = "Bestial Fury Effect";
    break;
  case 19605:
    spellname = "Bestial Fury";
    break;
  case 19606:
    spellname = "Bestial Fury";
    break;
  case 19607:
    spellname = "Bestial Fury";
    break;
  case 19608:
    spellname = "Bestial Fury";
    break;
  case 19609:
    spellname = "Thick Hide";
    break;
  case 19610:
    spellname = "Thick Hide";
    break;
  case 19612:
    spellname = "Thick Hide";
    break;
  case 19615:
    spellname = "Frenzy Effect";
    break;
  case 19616:
    spellname = "Unleashed Fury";
    break;
  case 19617:
    spellname = "Unleashed Fury";
    break;
  case 19618:
    spellname = "Unleashed Fury";
    break;
  case 19619:
    spellname = "Unleashed Fury";
    break;
  case 19620:
    spellname = "Unleashed Fury";
    break;
  case 19621:
    spellname = "Frenzy";
    break;
  case 19622:
    spellname = "Frenzy";
    break;
  case 19623:
    spellname = "Frenzy";
    break;
  case 19624:
    spellname = "Frenzy";
    break;
  case 19625:
    spellname = "Frenzy";
    break;
  case 19627:
    spellname = "Fire Shield";
    break;
  case 19628:
    spellname = "Flames";
    break;
  case 19629:
    spellname = "Summon Flames";
    break;
  case 19630:
    spellname = "Cone of Fire";
    break;
  case 19631:
    spellname = "Melt Armor";
    break;
  case 19632:
    spellname = "Cleave";
    break;
  case 19633:
    spellname = "Knock Away";
    break;
  case 19634:
    spellname = "Mana Rejuvenation";
    break;
  case 19635:
    spellname = "Incite Flames";
    break;
  case 19636:
    spellname = "Fire Blossom";
    break;
  case 19637:
    spellname = "Fire Blossom";
    break;
  case 19638:
    spellname = "Prismstone";
    break;
  case 19639:
    spellname = "Pummel";
    break;
  case 19641:
    spellname = "Pyroclast Barrage";
    break;
  case 19642:
    spellname = "Cleave";
    break;
  case 19643:
    spellname = "Mortal Strike";
    break;
  case 19644:
    spellname = "Strike";
    break;
  case 19645:
    spellname = "Anti-Magic Shield";
    break;
  case 19646:
    spellname = "Silver Skeleton Key";
    break;
  case 19647:
    spellname = "Spell Lock";
    break;
  case 19648:
    spellname = "Spell Lock";
    break;
  case 19649:
    spellname = "Golden Skeleton Key";
    break;
  case 19650:
    spellname = "Spell Lock";
    break;
  case 19651:
    spellname = "Truesilver Skeleton Key";
    break;
  case 19652:
    spellname = "Tainted Blood Effect";
    break;
  case 19653:
    spellname = "Tainted Blood Effect";
    break;
  case 19654:
    spellname = "Tainted Blood Effect";
    break;
  case 19655:
    spellname = "Tainted Blood";
    break;
  case 19656:
    spellname = "Tainted Blood";
    break;
  case 19657:
    spellname = "Arcanite Skeleton Key";
    break;
  case 19658:
    spellname = "Devour Magic Effect";
    break;
  case 19659:
    spellname = "Ignite Mana";
    break;
  case 19660:
    spellname = "Tainted Blood";
    break;
  case 19661:
    spellname = "Tainted Blood";
    break;
  case 19662:
    spellname = "Tainted Blood";
    break;
  case 19663:
    spellname = "Tainted Blood";
    break;
  case 19664:
    spellname = "Tainted Blood";
    break;
  case 19665:
    spellname = "Ignite Mana";
    break;
  case 19666:
    spellname = "Silver Skeleton Key";
    break;
  case 19667:
    spellname = "Golden Skeleton Key";
    break;
  case 19668:
    spellname = "Truesilver Skeleton Key";
    break;
  case 19669:
    spellname = "Arcanite Skeleton Key";
    break;
  case 19674:
    spellname = "Tame Large Crag Boar";
    break;
  case 19675:
    spellname = "Feral Charge Effect";
    break;
  case 19676:
    spellname = "Tame Snow Leopard";
    break;
  case 19677:
    spellname = "Tame Large Crag Boar";
    break;
  case 19678:
    spellname = "Tame Adult Plainstrider";
    break;
  case 19679:
    spellname = "Tame Prairie Stalker";
    break;
  case 19680:
    spellname = "Tame Swoop";
    break;
  case 19681:
    spellname = "Tame Dire Mottled Boar";
    break;
  case 19682:
    spellname = "Tame Surf Crawler";
    break;
  case 19683:
    spellname = "Tame Armored Scorpid";
    break;
  case 19684:
    spellname = "Tame Webwood Lurker";
    break;
  case 19685:
    spellname = "Tame Nightsaber Stalker";
    break;
  case 19686:
    spellname = "Tame Strigid Screecher";
    break;
  case 19687:
    spellname = "Tame Snow Leopard";
    break;
  case 19688:
    spellname = "Tame Adult Plainstrider";
    break;
  case 19689:
    spellname = "Tame Prairie Stalker";
    break;
  case 19690:
    spellname = "Scarlet Illusion";
    break;
  case 19691:
    spellname = "Beast Slaying 18";
    break;
  case 19692:
    spellname = "Tame Swoop";
    break;
  case 19693:
    spellname = "Tame Webwood Lurker";
    break;
  case 19694:
    spellname = "Tame Dire Mottled Boar";
    break;
  case 19695:
    spellname = "Inferno";
    break;
  case 19696:
    spellname = "Tame Surf Crawler";
    break;
  case 19697:
    spellname = "Tame Armored Scorpid";
    break;
  case 19698:
    spellname = "Inferno";
    break;
  case 19699:
    spellname = "Tame Nightsaber Stalker";
    break;
  case 19700:
    spellname = "Tame Strigid Screecher";
    break;
  case 19701:
    spellname = "Boulder";
    break;
  case 19702:
    spellname = "Impending Doom";
    break;
  case 19703:
    spellname = "Lucifron's Curse";
    break;
  case 19704:
    spellname = "Summon Earth Elemental";
    break;
  case 19705:
    spellname = "Well Fed";
    break;
  case 19706:
    spellname = "Well Fed";
    break;
  case 19708:
    spellname = "Well Fed";
    break;
  case 19709:
    spellname = "Well Fed";
    break;
  case 19710:
    spellname = "Well Fed";
    break;
  case 19711:
    spellname = "Well Fed";
    break;
  case 19712:
    spellname = "Arcane Explosion";
    break;
  case 19713:
    spellname = "Shazzrah's Curse";
    break;
  case 19714:
    spellname = "Magic Grounding";
    break;
  case 19715:
    spellname = "Counterspell";
    break;
  case 19716:
    spellname = "Gehennas' Curse";
    break;
  case 19717:
    spellname = "Rain of Fire";
    break;
  case 19719:
    spellname = "Use Bauble";
    break;
  case 19720:
    spellname = "Combine Pendants";
    break;
  case 19721:
    spellname = "Resurrect Trooper";
    break;
  case 19722:
    spellname = "Summon Scarlet Trooper";
    break;
  case 19723:
    spellname = "Advanced Target Dummy - Event 003";
    break;
  case 19725:
    spellname = "Turn Undead";
    break;
  case 19726:
    spellname = "Resistance Aura";
    break;
  case 19727:
    spellname = "Aquatic Miasma";
    break;
  case 19728:
    spellname = "Shadow Bolt";
    break;
  case 19729:
    spellname = "Shadow Bolt";
    break;
  case 19730:
    spellname = "Strike";
    break;
  case 19731:
    spellname = "Devour Magic";
    break;
  case 19732:
    spellname = "Devour Magic Effect";
    break;
  case 19733:
    spellname = "Devour Magic Effect";
    break;
  case 19734:
    spellname = "Devour Magic";
    break;
  case 19735:
    spellname = "Devour Magic Effect";
    break;
  case 19736:
    spellname = "Devour Magic";
    break;
  case 19737:
    spellname = "Devour Magic";
    break;
  case 19738:
    spellname = "Devour Magic";
    break;
  case 19739:
    spellname = "Devour Magic";
    break;
  case 19740:
    spellname = "Blessing of Might";
    break;
  case 19742:
    spellname = "Blessing of Wisdom";
    break;
  case 19746:
    spellname = "Concentration Aura";
    break;
  case 19748:
    spellname = "Charismatic Aura";
    break;
  case 19749:
    spellname = "Trooper Ping";
    break;
  case 19750:
    spellname = "Flash of Light";
    break;
  case 19752:
    spellname = "Divine Intervention";
    break;
  case 19753:
    spellname = "Divine Intervention";
    break;
  case 19755:
    spellname = "Frightalon";
    break;
  case 19767:
    spellname = "Aynasha's Bow";
    break;
  case 19769:
    spellname = "Thorium Grenade";
    break;
  case 19770:
    spellname = "Gizelton Caravan";
    break;
  case 19771:
    spellname = "Serrated Bite";
    break;
  case 19772:
    spellname = "Summon Lifelike Toad";
    break;
  case 19773:
    spellname = "Elemental Fire";
    break;
  case 19774:
    spellname = "Summon Ragnaros";
    break;
  case 19775:
    spellname = "Dark Mending";
    break;
  case 19776:
    spellname = "Shadow Word: Pain";
    break;
  case 19777:
    spellname = "Dark Strike";
    break;
  case 19778:
    spellname = "Demoralizing Shout";
    break;
  case 19779:
    spellname = "Inspire";
    break;
  case 19780:
    spellname = "Hand of Ragnaros";
    break;
  case 19781:
    spellname = "Flame Spear";
    break;
  case 19784:
    spellname = "Dark Iron Bomb";
    break;
  case 19785:
    spellname = "Throw";
    break;
  case 19786:
    spellname = "Resist Silence";
    break;
  case 19787:
    spellname = "Increased Armor 110";
    break;
  case 19788:
    spellname = "Dense Blasting Powder";
    break;
  case 19790:
    spellname = "Thorium Grenade";
    break;
  case 19791:
    spellname = "Thorium Widget";
    break;
  case 19792:
    spellname = "Thorium Rifle";
    break;
  case 19793:
    spellname = "Lifelike Mechanical Toad";
    break;
  case 19794:
    spellname = "Spellpower Goggles Xtreme Plus";
    break;
  case 19795:
    spellname = "Thorium Tube";
    break;
  case 19796:
    spellname = "Dark Iron Rifle";
    break;
  case 19797:
    spellname = "Conjure Torch of Retribution";
    break;
  case 19798:
    spellname = "Earthquake";
    break;
  case 19799:
    spellname = "Dark Iron Bomb";
    break;
  case 19800:
    spellname = "Thorium Shells";
    break;
  case 19801:
    spellname = "Tranquilizing Shot";
    break;
  case 19802:
    spellname = "Summon Arcanite Dragonling";
    break;
  case 19804:
    spellname = "Arcanite Dragonling";
    break;
  case 19805:
    spellname = "Masterwork Target Dummy";
    break;
  case 19808:
    spellname = "Masterwork Target Dummy Effect";
    break;
  case 19809:
    spellname = "Masterwork Target Dummy Passive";
    break;
  case 19811:
    spellname = "Annihilate";
    break;
  case 19812:
    spellname = "Frenzy";
    break;
  case 19813:
    spellname = "Knockback";
    break;
  case 19814:
    spellname = "Masterwork Target Dummy";
    break;
  case 19815:
    spellname = "Delicate Arcanite Converter";
    break;
  case 19816:
    spellname = "Fireball";
    break;
  case 19817:
    spellname = "Double Attack";
    break;
  case 19818:
    spellname = "Double Attack";
    break;
  case 19819:
    spellname = "Voice Amplification Modulator";
    break;
  case 19820:
    spellname = "Mangle";
    break;
  case 19821:
    spellname = "Arcane Bomb";
    break;
  case 19822:
    spellname = "Play Dead";
    break;
  case 19823:
    spellname = "Fire Nova Visual";
    break;
  case 19825:
    spellname = "Master Engineer's Goggles";
    break;
  case 19830:
    spellname = "Arcanite Dragonling";
    break;
  case 19831:
    spellname = "Arcane Bomb";
    break;
  case 19832:
    spellname = "Possess";
    break;
  case 19833:
    spellname = "Flawless Arcanite Rifle";
    break;
  case 19834:
    spellname = "Blessing of Might";
    break;
  case 19835:
    spellname = "Blessing of Might";
    break;
  case 19836:
    spellname = "Blessing of Might";
    break;
  case 19837:
    spellname = "Blessing of Might";
    break;
  case 19838:
    spellname = "Blessing of Might";
    break;
  case 19850:
    spellname = "Blessing of Wisdom";
    break;
  case 19852:
    spellname = "Blessing of Wisdom";
    break;
  case 19853:
    spellname = "Blessing of Wisdom";
    break;
  case 19854:
    spellname = "Blessing of Wisdom";
    break;
  case 19869:
    spellname = "Dragon Orb";
    break;
  case 19870:
    spellname = "Improved Intimidating Shout";
    break;
  case 19871:
    spellname = "Improved Intimidating Shout";
    break;
  case 19872:
    spellname = "Calm Dragonkin";
    break;
  case 19873:
    spellname = "Destroy Egg";
    break;
  case 19874:
    spellname = "Lightning Bolt";
    break;
  case 19876:
    spellname = "Shadow Resistance Aura";
    break;
  case 19878:
    spellname = "Track Demons";
    break;
  case 19879:
    spellname = "Track Dragonkin";
    break;
  case 19880:
    spellname = "Track Elementals";
    break;
  case 19881:
    spellname = "Shoot (TEST)";
    break;
  case 19882:
    spellname = "Track Giants";
    break;
  case 19883:
    spellname = "Track Humanoids";
    break;
  case 19884:
    spellname = "Track Undead";
    break;
  case 19885:
    spellname = "Track Hidden";
    break;
  case 19886:
    spellname = "Expert Cook";
    break;
  case 19887:
    spellname = "Artisan Cook";
    break;
  case 19888:
    spellname = "Frost Resistance Aura";
    break;
  case 19889:
    spellname = "Expert Fishing";
    break;
  case 19890:
    spellname = "Artisan Fishing";
    break;
  case 19891:
    spellname = "Fire Resistance Aura";
    break;
  case 19895:
    spellname = "Shadow Resistance Aura";
    break;
  case 19896:
    spellname = "Shadow Resistance Aura";
    break;
  case 19897:
    spellname = "Frost Resistance Aura";
    break;
  case 19898:
    spellname = "Frost Resistance Aura";
    break;
  case 19899:
    spellname = "Fire Resistance Aura";
    break;
  case 19900:
    spellname = "Fire Resistance Aura";
    break;
  case 19901:
    spellname = "dmg7";
    break;
  case 19902:
    spellname = "Artisan First Aid";
    break;
  case 19903:
    spellname = "Expert First Aid";
    break;
  case 19927:
    spellname = "Test Enchant Weapon Flame";
    break;
  case 19931:
    spellname = "Mike's Test Spell";
    break;
  case 19932:
    spellname = "QAEnchant Cloak +7 Fire Resistance";
    break;
  case 19937:
    spellname = "Illusion: Black Dragonkin";
    break;
  case 19938:
    spellname = "Awaken Peon";
    break;
  case 19939:
    spellname = "Flash of Light";
    break;
  case 19940:
    spellname = "Flash of Light";
    break;
  case 19941:
    spellname = "Flash of Light";
    break;
  case 19942:
    spellname = "Flash of Light";
    break;
  case 19943:
    spellname = "Flash of Light";
    break;
  case 19952:
    spellname = "Heal Ragnaros";
    break;
  case 19953:
    spellname = "Enrage";
    break;
  case 19970:
    spellname = "Entangling Roots";
    break;
  case 19971:
    spellname = "Entangling Roots";
    break;
  case 19972:
    spellname = "Entangling Roots";
    break;
  case 19973:
    spellname = "Entangling Roots";
    break;
  case 19974:
    spellname = "Entangling Roots";
    break;
  case 19975:
    spellname = "Entangling Roots";
    break;
  case 19977:
    spellname = "Blessing of Light";
    break;
  case 19978:
    spellname = "Blessing of Light";
    break;
  case 19979:
    spellname = "Blessing of Light";
    break;
  case 19983:
    spellname = "Cleave";
    break;
  case 19984:
    spellname = "Superior Strength";
    break;
  case 19985:
    spellname = "Superior Stamina";
    break;
  case 19986:
    spellname = "Superior Spirit";
    break;
  case 19987:
    spellname = "Superior Intellect";
    break;
  case 19988:
    spellname = "Greater Stats";
    break;
  case 19989:
    spellname = "Superior Agility";
    break;
  case 19990:
    spellname = "Major Health";
    break;
  case 19991:
    spellname = "Major Mana";
    break;
  case 19992:
    spellname = "Greater Resistance";
    break;
  case 20000:
    spellname = "Alexander's Test Periodic Aura";
    break;
  case 20002:
    spellname = "Intellect 15";
    break;
  case 20003:
    spellname = "Spirit 15";
    break;
  case 20004:
    spellname = "Life Steal";
    break;
  case 20005:
    spellname = "Chilled";
    break;
  case 20006:
    spellname = "Unholy Curse";
    break;
  case 20007:
    spellname = "Holy Strength";
    break;
  case 20008:
    spellname = "Enchant Bracer - Greater Intellect";
    break;
  case 20009:
    spellname = "Enchant Bracer - Superior Spirit";
    break;
  case 20010:
    spellname = "Enchant Bracer - Superior Strength";
    break;
  case 20011:
    spellname = "Enchant Bracer - Superior Stamina";
    break;
  case 20012:
    spellname = "Enchant Gloves - Greater Agility";
    break;
  case 20013:
    spellname = "Enchant Gloves - Greater Strength";
    break;
  case 20014:
    spellname = "Enchant Cloak - Greater Resistance";
    break;
  case 20015:
    spellname = "Enchant Cloak - Superior Defense";
    break;
  case 20016:
    spellname = "Enchant Shield - Superior Spirit";
    break;
  case 20017:
    spellname = "Enchant Shield - Greater Stamina";
    break;
  case 20018:
    spellname = "Create Healthstone (Major)";
    break;
  case 20019:
    spellname = "Engulfing Flames";
    break;
  case 20020:
    spellname = "Enchant Boots - Greater Stamina";
    break;
  case 20021:
    spellname = "Engulfing Flames";
    break;
  case 20022:
    spellname = "Create Soulstone";
    break;
  case 20023:
    spellname = "Enchant Boots - Greater Agility";
    break;
  case 20024:
    spellname = "Enchant Boots - Spirit";
    break;
  case 20025:
    spellname = "Enchant Chest - Greater Stats";
    break;
  case 20026:
    spellname = "Enchant Chest - Major Health";
    break;
  case 20028:
    spellname = "Enchant Chest - Major Mana";
    break;
  case 20029:
    spellname = "Enchant Weapon - Icy Chill";
    break;
  case 20030:
    spellname = "Enchant 2H Weapon - Superior Impact";
    break;
  case 20031:
    spellname = "Enchant Weapon - Superior Striking";
    break;
  case 20032:
    spellname = "Enchant Weapon - Lifestealing";
    break;
  case 20033:
    spellname = "Enchant Weapon - Unholy Weapon";
    break;
  case 20034:
    spellname = "Enchant Weapon - Crusader";
    break;
  case 20035:
    spellname = "Enchant 2H Weapon - Major Spirit";
    break;
  case 20036:
    spellname = "Enchant 2H Weapon - Major Intellect";
    break;
  case 20037:
    spellname = "Explode Orb Effect";
    break;
  case 20038:
    spellname = "Explosion";
    break;
  case 20039:
    spellname = "Greater Eternal Essence";
    break;
  case 20040:
    spellname = "Lesser Eternal Essence";
    break;
  case 20041:
    spellname = "Tammra Sapling";
    break;
  case 20042:
    spellname = "Improved Blessing of Might";
    break;
  case 20043:
    spellname = "Aspect of the Wild";
    break;
  case 20045:
    spellname = "Improved Blessing of Might";
    break;
  case 20046:
    spellname = "Improved Blessing of Might";
    break;
  case 20047:
    spellname = "Improved Blessing of Might";
    break;
  case 20048:
    spellname = "Improved Blessing of Might";
    break;
  case 20049:
    spellname = "Vengeance";
    break;
  case 20050:
    spellname = "Vengeance";
    break;
  case 20051:
    spellname = "Runed Arcanite Rod";
    break;
  case 20052:
    spellname = "Vengeance";
    break;
  case 20053:
    spellname = "Vengeance";
    break;
  case 20054:
    spellname = "Vengeance";
    break;
  case 20055:
    spellname = "Vengeance";
    break;
  case 20056:
    spellname = "Vengeance";
    break;
  case 20057:
    spellname = "Vengeance";
    break;
  case 20058:
    spellname = "Vengeance";
    break;
  case 20059:
    spellname = "Vengeance";
    break;
  case 20060:
    spellname = "Deflection";
    break;
  case 20061:
    spellname = "Deflection";
    break;
  case 20062:
    spellname = "Deflection";
    break;
  case 20063:
    spellname = "Deflection";
    break;
  case 20064:
    spellname = "Deflection";
    break;
  case 20066:
    spellname = "Repentance";
    break;
  case 20091:
    spellname = "Improved Retribution Aura";
    break;
  case 20092:
    spellname = "Improved Retribution Aura";
    break;
  case 20096:
    spellname = "Anticipation";
    break;
  case 20097:
    spellname = "Anticipation";
    break;
  case 20098:
    spellname = "Anticipation";
    break;
  case 20099:
    spellname = "Anticipation";
    break;
  case 20100:
    spellname = "Anticipation";
    break;
  case 20101:
    spellname = "Benediction";
    break;
  case 20102:
    spellname = "Benediction";
    break;
  case 20103:
    spellname = "Benediction";
    break;
  case 20104:
    spellname = "Benediction";
    break;
  case 20105:
    spellname = "Benediction";
    break;
  case 20111:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 20112:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 20113:
    spellname = "Two-Handed Weapon Specialization";
    break;
  case 20114:
    spellname = "BM Only OFF";
    break;
  case 20115:
    spellname = "BM Only ON";
    break;
  case 20116:
    spellname = "Consecration";
    break;
  case 20117:
    spellname = "Conviction";
    break;
  case 20118:
    spellname = "Conviction";
    break;
  case 20119:
    spellname = "Conviction";
    break;
  case 20120:
    spellname = "Conviction";
    break;
  case 20121:
    spellname = "Conviction";
    break;
  case 20127:
    spellname = "Redoubt";
    break;
  case 20128:
    spellname = "Redoubt";
    break;
  case 20130:
    spellname = "Redoubt";
    break;
  case 20131:
    spellname = "Redoubt";
    break;
  case 20132:
    spellname = "Redoubt";
    break;
  case 20133:
    spellname = "Redoubt";
    break;
  case 20134:
    spellname = "Redoubt";
    break;
  case 20135:
    spellname = "Redoubt";
    break;
  case 20136:
    spellname = "Redoubt";
    break;
  case 20137:
    spellname = "Redoubt";
    break;
  case 20138:
    spellname = "Improved Devotion Aura";
    break;
  case 20139:
    spellname = "Improved Devotion Aura";
    break;
  case 20140:
    spellname = "Improved Devotion Aura";
    break;
  case 20141:
    spellname = "Improved Devotion Aura";
    break;
  case 20142:
    spellname = "Improved Devotion Aura";
    break;
  case 20143:
    spellname = "Toughness";
    break;
  case 20144:
    spellname = "Toughness";
    break;
  case 20145:
    spellname = "Toughness";
    break;
  case 20146:
    spellname = "Toughness";
    break;
  case 20147:
    spellname = "Toughness";
    break;
  case 20148:
    spellname = "Shield Specialization";
    break;
  case 20149:
    spellname = "Shield Specialization";
    break;
  case 20150:
    spellname = "Shield Specialization";
    break;
  case 20153:
    spellname = "Immolation";
    break;
  case 20154:
    spellname = "Seal of Righteousness";
    break;
  case 20162:
    spellname = "Seal of the Crusader";
    break;
  case 20164:
    spellname = "Seal of Justice";
    break;
  case 20165:
    spellname = "Seal of Light";
    break;
  case 20166:
    spellname = "Seal of Wisdom";
    break;
  case 20167:
    spellname = "Seal of Light";
    break;
  case 20168:
    spellname = "Seal of Wisdom";
    break;
  case 20170:
    spellname = "Stun";
    break;
  case 20173:
    spellname = "Raid Buff Fire";
    break;
  case 20174:
    spellname = "Guardian's Favor";
    break;
  case 20175:
    spellname = "Guardian's Favor";
    break;
  case 20177:
    spellname = "Reckoning";
    break;
  case 20178:
    spellname = "Reckoning";
    break;
  case 20179:
    spellname = "Reckoning";
    break;
  case 20180:
    spellname = "Reckoning";
    break;
  case 20181:
    spellname = "Reckoning";
    break;
  case 20182:
    spellname = "Reckoning";
    break;
  case 20184:
    spellname = "Judgement of Justice";
    break;
  case 20185:
    spellname = "Judgement of Light";
    break;
  case 20186:
    spellname = "Judgement of Wisdom";
    break;
  case 20187:
    spellname = "Judgement of Righteousness";
    break;
  case 20188:
    spellname = "Judgement of the Crusader";
    break;
  case 20189:
    spellname = "Precision";
    break;
  case 20190:
    spellname = "Aspect of the Wild";
    break;
  case 20192:
    spellname = "Precision";
    break;
  case 20193:
    spellname = "Precision";
    break;
  case 20194:
    spellname = "Improved Blessing of Salvation";
    break;
  case 20195:
    spellname = "Improved Blessing of Salvation";
    break;
  case 20196:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 20197:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 20198:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 20199:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 20200:
    spellname = "One-Handed Weapon Specialization";
    break;
  case 20201:
    spellname = "Arcanite Rod";
    break;
  case 20203:
    spellname = "Fire Nova";
    break;
  case 20205:
    spellname = "Spiritual Focus";
    break;
  case 20206:
    spellname = "Spiritual Focus";
    break;
  case 20207:
    spellname = "Spiritual Focus";
    break;
  case 20208:
    spellname = "Spiritual Focus";
    break;
  case 20209:
    spellname = "Spiritual Focus";
    break;
  case 20210:
    spellname = "Illumination";
    break;
  case 20212:
    spellname = "Illumination";
    break;
  case 20213:
    spellname = "Illumination";
    break;
  case 20214:
    spellname = "Illumination";
    break;
  case 20215:
    spellname = "Illumination";
    break;
  case 20216:
    spellname = "Divine Favor";
    break;
  case 20217:
    spellname = "Blessing of Kings";
    break;
  case 20218:
    spellname = "Sanctity Aura";
    break;
  case 20219:
    spellname = "Gnomish Engineer";
    break;
  case 20220:
    spellname = "Gnomish Engineering";
    break;
  case 20221:
    spellname = "Goblin Engineering";
    break;
  case 20222:
    spellname = "Goblin Engineer";
    break;
  case 20223:
    spellname = "Magic Reflection";
    break;
  case 20224:
    spellname = "Improved Seal of Righteousness";
    break;
  case 20225:
    spellname = "Improved Seal of Righteousness";
    break;
  case 20228:
    spellname = "Pyroblast";
    break;
  case 20229:
    spellname = "Blast Wave";
    break;
  case 20230:
    spellname = "Retaliation";
    break;
  case 20233:
    spellname = "Lay on Hands";
    break;
  case 20234:
    spellname = "Improved Lay on Hands";
    break;
  case 20235:
    spellname = "Improved Lay on Hands";
    break;
  case 20236:
    spellname = "Lay on Hands";
    break;
  case 20237:
    spellname = "Healing Light";
    break;
  case 20238:
    spellname = "Healing Light";
    break;
  case 20239:
    spellname = "Healing Light";
    break;
  case 20240:
    spellname = "Retaliation";
    break;
  case 20243:
    spellname = "Devastate";
    break;
  case 20244:
    spellname = "Improved Blessing of Wisdom";
    break;
  case 20245:
    spellname = "Improved Blessing of Wisdom";
    break;
  case 20249:
    spellname = "Improved Flash of Light";
    break;
  case 20250:
    spellname = "Improved Flash of Light";
    break;
  case 20251:
    spellname = "Improved Flash of Light";
    break;
  case 20252:
    spellname = "Intercept";
    break;
  case 20253:
    spellname = "Intercept Stun";
    break;
  case 20254:
    spellname = "Improved Concentration Aura";
    break;
  case 20255:
    spellname = "Improved Concentration Aura";
    break;
  case 20256:
    spellname = "Improved Concentration Aura";
    break;
  case 20257:
    spellname = "Divine Intellect";
    break;
  case 20258:
    spellname = "Divine Intellect";
    break;
  case 20259:
    spellname = "Divine Intellect";
    break;
  case 20260:
    spellname = "Divine Intellect";
    break;
  case 20261:
    spellname = "Divine Intellect";
    break;
  case 20262:
    spellname = "Divine Strength";
    break;
  case 20263:
    spellname = "Divine Strength";
    break;
  case 20264:
    spellname = "Divine Strength";
    break;
  case 20265:
    spellname = "Divine Strength";
    break;
  case 20266:
    spellname = "Divine Strength";
    break;
  case 20267:
    spellname = "Judgement of Light";
    break;
  case 20268:
    spellname = "Judgement of Wisdom";
    break;
  case 20269:
    spellname = "Enchanted Gaea Seed";
    break;
  case 20270:
    spellname = "Firebolt";
    break;
  case 20271:
    spellname = "Judgement";
    break;
  case 20272:
    spellname = "Illumination";
    break;
  case 20274:
    spellname = "Capturing Termites";
    break;
  case 20276:
    spellname = "Knockdown";
    break;
  case 20277:
    spellname = "Fist of Ragnaros";
    break;
  case 20279:
    spellname = "Summon Player";
    break;
  case 20280:
    spellname = "Judgement of Righteousness";
    break;
  case 20281:
    spellname = "Judgement of Righteousness";
    break;
  case 20282:
    spellname = "Judgement of Righteousness";
    break;
  case 20283:
    spellname = "Judgement of Righteousness";
    break;
  case 20284:
    spellname = "Judgement of Righteousness";
    break;
  case 20285:
    spellname = "Judgement of Righteousness";
    break;
  case 20286:
    spellname = "Judgement of Righteousness";
    break;
  case 20287:
    spellname = "Seal of Righteousness";
    break;
  case 20288:
    spellname = "Seal of Righteousness";
    break;
  case 20289:
    spellname = "Seal of Righteousness";
    break;
  case 20290:
    spellname = "Seal of Righteousness";
    break;
  case 20291:
    spellname = "Seal of Righteousness";
    break;
  case 20292:
    spellname = "Seal of Righteousness";
    break;
  case 20293:
    spellname = "Seal of Righteousness";
    break;
  case 20294:
    spellname = "Immolate";
    break;
  case 20295:
    spellname = "Lightning Bolt";
    break;
  case 20296:
    spellname = "Flamestrike";
    break;
  case 20297:
    spellname = "Frostbolt";
    break;
  case 20298:
    spellname = "Shadow Bolt";
    break;
  case 20299:
    spellname = "Forked Lightning";
    break;
  case 20300:
    spellname = "Judgement of the Crusader";
    break;
  case 20301:
    spellname = "Judgement of the Crusader";
    break;
  case 20302:
    spellname = "Judgement of the Crusader";
    break;
  case 20303:
    spellname = "Judgement of the Crusader";
    break;
  case 20305:
    spellname = "Seal of the Crusader";
    break;
  case 20306:
    spellname = "Seal of the Crusader";
    break;
  case 20307:
    spellname = "Seal of the Crusader";
    break;
  case 20308:
    spellname = "Seal of the Crusader";
    break;
  case 20310:
    spellname = "Stun";
    break;
  case 20311:
    spellname = "Summon Player";
    break;
  case 20312:
    spellname = "Firebolt";
    break;
  case 20313:
    spellname = "Firebolt";
    break;
  case 20314:
    spellname = "Firebolt";
    break;
  case 20315:
    spellname = "Firebolt";
    break;
  case 20316:
    spellname = "Firebolt";
    break;
  case 20317:
    spellname = "Torment";
    break;
  case 20318:
    spellname = "Blood Pact";
    break;
  case 20319:
    spellname = "Blood Pact";
    break;
  case 20320:
    spellname = "Blood Pact";
    break;
  case 20321:
    spellname = "Blood Pact";
    break;
  case 20322:
    spellname = "Fire Shield";
    break;
  case 20323:
    spellname = "Fire Shield";
    break;
  case 20324:
    spellname = "Fire Shield";
    break;
  case 20326:
    spellname = "Fire Shield";
    break;
  case 20327:
    spellname = "Fire Shield";
    break;
  case 20329:
    spellname = "Phase Shift";
    break;
  case 20330:
    spellname = "Improved Seal of Righteousness";
    break;
  case 20331:
    spellname = "Improved Seal of Righteousness";
    break;
  case 20332:
    spellname = "Improved Seal of Righteousness";
    break;
  case 20333:
    spellname = "Seal of Light";
    break;
  case 20334:
    spellname = "Seal of Light";
    break;
  case 20335:
    spellname = "Improved Seal of the Crusader";
    break;
  case 20336:
    spellname = "Improved Seal of the Crusader";
    break;
  case 20337:
    spellname = "Improved Seal of the Crusader";
    break;
  case 20340:
    spellname = "Seal of Light";
    break;
  case 20341:
    spellname = "Judgement of Light";
    break;
  case 20342:
    spellname = "Judgement of Light";
    break;
  case 20343:
    spellname = "Judgement of Light";
    break;
  case 20344:
    spellname = "Judgement of Light";
    break;
  case 20345:
    spellname = "Judgement of Light";
    break;
  case 20346:
    spellname = "Judgement of Light";
    break;
  case 20347:
    spellname = "Seal of Light";
    break;
  case 20348:
    spellname = "Seal of Light";
    break;
  case 20349:
    spellname = "Seal of Light";
    break;
  case 20350:
    spellname = "Seal of Wisdom";
    break;
  case 20351:
    spellname = "Seal of Wisdom";
    break;
  case 20352:
    spellname = "Judgement of Wisdom";
    break;
  case 20353:
    spellname = "Judgement of Wisdom";
    break;
  case 20354:
    spellname = "Judgement of Wisdom";
    break;
  case 20355:
    spellname = "Judgement of Wisdom";
    break;
  case 20356:
    spellname = "Seal of Wisdom";
    break;
  case 20357:
    spellname = "Seal of Wisdom";
    break;
  case 20358:
    spellname = "Windsor Reading Tablets DND";
    break;
  case 20359:
    spellname = "Sanctified Light";
    break;
  case 20360:
    spellname = "Sanctified Light";
    break;
  case 20361:
    spellname = "Sanctified Light";
    break;
  case 20364:
    spellname = "Bury Samuel's Remains";
    break;
  case 20367:
    spellname = "Tag: Purple Cloud";
    break;
  case 20368:
    spellname = "Tag: Red Skulls";
    break;
  case 20369:
    spellname = "Tag: Purple Ball";
    break;
  case 20370:
    spellname = "Tag: Red Glow";
    break;
  case 20371:
    spellname = "Tag: Green Glow";
    break;
  case 20372:
    spellname = "Tag: Hearts";
    break;
  case 20373:
    spellname = "Tag: Sleep";
    break;
  case 20374:
    spellname = "Tag: Arrow";
    break;
  case 20375:
    spellname = "Seal of Command";
    break;
  case 20376:
    spellname = "Reduced Frost Cost";
    break;
  case 20377:
    spellname = "Torment";
    break;
  case 20378:
    spellname = "Torment";
    break;
  case 20379:
    spellname = "Torment";
    break;
  case 20380:
    spellname = "Torment";
    break;
  case 20381:
    spellname = "Sacrifice";
    break;
  case 20382:
    spellname = "Sacrifice";
    break;
  case 20383:
    spellname = "Sacrifice";
    break;
  case 20384:
    spellname = "Sacrifice";
    break;
  case 20385:
    spellname = "Sacrifice";
    break;
  case 20386:
    spellname = "Sacrifice";
    break;
  case 20387:
    spellname = "Consume Shadows";
    break;
  case 20388:
    spellname = "Consume Shadows";
    break;
  case 20389:
    spellname = "Consume Shadows";
    break;
  case 20390:
    spellname = "Consume Shadows";
    break;
  case 20391:
    spellname = "Consume Shadows";
    break;
  case 20392:
    spellname = "Consume Shadows";
    break;
  case 20393:
    spellname = "Suffering";
    break;
  case 20394:
    spellname = "Suffering";
    break;
  case 20395:
    spellname = "Suffering";
    break;
  case 20396:
    spellname = "Suffering";
    break;
  case 20397:
    spellname = "Blood Pact";
    break;
  case 20398:
    spellname = "Lash of Pain";
    break;
  case 20399:
    spellname = "Lash of Pain";
    break;
  case 20400:
    spellname = "Lash of Pain";
    break;
  case 20401:
    spellname = "Lash of Pain";
    break;
  case 20402:
    spellname = "Lash of Pain";
    break;
  case 20403:
    spellname = "Soothing Kiss";
    break;
  case 20404:
    spellname = "Soothing Kiss";
    break;
  case 20405:
    spellname = "Soothing Kiss";
    break;
  case 20406:
    spellname = "Soothing Kiss";
    break;
  case 20407:
    spellname = "Seduction";
    break;
  case 20408:
    spellname = "Lesser Invisibility";
    break;
  case 20410:
    spellname = "Tag: Clear";
    break;
  case 20420:
    spellname = "Fireball";
    break;
  case 20424:
    spellname = "Seal of Command";
    break;
  case 20425:
    spellname = "Judgement of Command";
    break;
  case 20426:
    spellname = "Devour Magic";
    break;
  case 20427:
    spellname = "Devour Magic";
    break;
  case 20428:
    spellname = "Devour Magic";
    break;
  case 20429:
    spellname = "Tainted Blood";
    break;
  case 20430:
    spellname = "Tainted Blood";
    break;
  case 20431:
    spellname = "Tainted Blood";
    break;
  case 20432:
    spellname = "Tainted Blood";
    break;
  case 20433:
    spellname = "Spell Lock";
    break;
  case 20434:
    spellname = "Spell Lock";
    break;
  case 20435:
    spellname = "Paranoia";
    break;
  case 20436:
    spellname = "Drunken Pit Crew";
    break;
  case 20449:
    spellname = "Teleport";
    break;
  case 20463:
    spellname = "Shoot";
    break;
  case 20464:
    spellname = "Summon Skeleton";
    break;
  case 20465:
    spellname = "Windsor Death DND";
    break;
  case 20466:
    spellname = "Lady Prestor Despawns DND";
    break;
  case 20467:
    spellname = "Judgement of Command";
    break;
  case 20468:
    spellname = "Improved Righteous Fury";
    break;
  case 20469:
    spellname = "Improved Righteous Fury";
    break;
  case 20470:
    spellname = "Improved Righteous Fury";
    break;
  case 20473:
    spellname = "Holy Shock";
    break;
  case 20474:
    spellname = "Lava Bomb";
    break;
  case 20475:
    spellname = "Living Bomb";
    break;
  case 20476:
    spellname = "Explosion";
    break;
  case 20477:
    spellname = "Summon Player";
    break;
  case 20478:
    spellname = "Armageddon";
    break;
  case 20479:
    spellname = "Armageddon";
    break;
  case 20480:
    spellname = "Birth";
    break;
  case 20481:
    spellname = "Garr Armor Debuff";
    break;
  case 20483:
    spellname = "Massive Eruption";
    break;
  case 20484:
    spellname = "Rebirth";
    break;
  case 20487:
    spellname = "Improved Hammer of Justice";
    break;
  case 20488:
    spellname = "Improved Hammer of Justice";
    break;
  case 20489:
    spellname = "Improved Hammer of Justice";
    break;
  case 20496:
    spellname = "Improved Cleave";
    break;
  case 20500:
    spellname = "Improved Berserker Rage";
    break;
  case 20501:
    spellname = "Improved Berserker Rage";
    break;
  case 20502:
    spellname = "Improved Execute";
    break;
  case 20503:
    spellname = "Improved Execute";
    break;
  case 20504:
    spellname = "Weapon Mastery";
    break;
  case 20505:
    spellname = "Weapon Mastery";
    break;
  case 20506:
    spellname = "Summon Magmakin";
    break;
  case 20508:
    spellname = "Charge";
    break;
  case 20509:
    spellname = "TEST AVATAR";
    break;
  case 20510:
    spellname = "TEST AVATAR FORM";
    break;
  case 20511:
    spellname = "Intimidating Shout";
    break;
  case 20512:
    spellname = "Creeping Plague";
    break;
  case 20513:
    spellname = "Enchanted Resonite Crystal";
    break;
  case 20514:
    spellname = "Ruul Snowhoof Shapechange (DND)";
    break;
  case 20527:
    spellname = "Eruption";
    break;
  case 20528:
    spellname = "Mor'rogal Enchant";
    break;
  case 20529:
    spellname = "Bind Chapter 1";
    break;
  case 20530:
    spellname = "Bind Chapter 2";
    break;
  case 20531:
    spellname = "Bind Chapter 3";
    break;
  case 20532:
    spellname = "Intense Heat";
    break;
  case 20533:
    spellname = "Intense Heat";
    break;
  case 20534:
    spellname = "Teleport";
    break;
  case 20535:
    spellname = "Lightning Breath";
    break;
  case 20536:
    spellname = "Lightning Breath";
    break;
  case 20537:
    spellname = "Counterspell";
    break;
  case 20539:
    spellname = "Fatal Bite";
    break;
  case 20540:
    spellname = "Ashenvale Outrunner Sneak";
    break;
  case 20541:
    spellname = "Fetch!";
    break;
  case 20542:
    spellname = "Static Conduit";
    break;
  case 20543:
    spellname = "Lightning Breath";
    break;
  case 20545:
    spellname = "Lightning Shield";
    break;
  case 20547:
    spellname = "Fun Bomb";
    break;
  case 20549:
    spellname = "War Stomp";
    break;
  case 20550:
    spellname = "Endurance";
    break;
  case 20551:
    spellname = "Nature Resistance";
    break;
  case 20552:
    spellname = "Cultivation";
    break;
  case 20553:
    spellname = "Golemagg's Trust";
    break;
  case 20554:
    spellname = "Berserking";
    break;
  case 20555:
    spellname = "Regeneration";
    break;
  case 20557:
    spellname = "Beast Slaying";
    break;
  case 20558:
    spellname = "Throwing Specialization";
    break;
  case 20559:
    spellname = "Mocking Blow";
    break;
  case 20560:
    spellname = "Mocking Blow";
    break;
  case 20564:
    spellname = "Elemental Fire";
    break;
  case 20565:
    spellname = "Magma Blast";
    break;
  case 20566:
    spellname = "Wrath of Ragnaros";
    break;
  case 20567:
    spellname = "Ragnaros Submerge Visual";
    break;
  case 20568:
    spellname = "Ragnaros Emerge";
    break;
  case 20569:
    spellname = "Cleave";
    break;
  case 20570:
    spellname = "Superheated Flames";
    break;
  case 20572:
    spellname = "Blood Fury";
    break;
  case 20573:
    spellname = "Hardiness";
    break;
  case 20574:
    spellname = "Axe Specialization";
    break;
  case 20575:
    spellname = "Command";
    break;
  case 20576:
    spellname = "Command";
    break;
  case 20577:
    spellname = "Cannibalize";
    break;
  case 20578:
    spellname = "Cannibalize";
    break;
  case 20579:
    spellname = "Shadow Resistance";
    break;
  case 20580:
    spellname = "Shadowmeld";
    break;
  case 20582:
    spellname = "Quickness";
    break;
  case 20583:
    spellname = "Nature Resistance";
    break;
  case 20584:
    spellname = "Ghost";
    break;
  case 20585:
    spellname = "Wisp Spirit";
    break;
  case 20586:
    spellname = "Windreaper";
    break;
  case 20587:
    spellname = "Ragged John's Neverending Cup";
    break;
  case 20589:
    spellname = "Escape Artist";
    break;
  case 20590:
    spellname = "Ragged John's Neverending Cup";
    break;
  case 20591:
    spellname = "Expansive Mind";
    break;
  case 20592:
    spellname = "Arcane Resistance";
    break;
  case 20593:
    spellname = "Engineering Specialization";
    break;
  case 20594:
    spellname = "Stoneform";
    break;
  case 20595:
    spellname = "Gun Specialization";
    break;
  case 20596:
    spellname = "Frost Resistance";
    break;
  case 20597:
    spellname = "Sword Specialization";
    break;
  case 20598:
    spellname = "The Human Spirit";
    break;
  case 20599:
    spellname = "Diplomacy";
    break;
  case 20600:
    spellname = "Perception";
    break;
  case 20602:
    spellname = "Fire Nova";
    break;
  case 20603:
    spellname = "Shadow Shock";
    break;
  case 20604:
    spellname = "Dominate Mind";
    break;
  case 20605:
    spellname = "Cleave";
    break;
  case 20606:
    spellname = "Undead Slayer 15";
    break;
  case 20607:
    spellname = "Increased Staff";
    break;
  case 20608:
    spellname = "Reincarnation";
    break;
  case 20609:
    spellname = "Ancestral Spirit";
    break;
  case 20610:
    spellname = "Ancestral Spirit";
    break;
  case 20614:
    spellname = "Intercept Stun";
    break;
  case 20615:
    spellname = "Intercept Stun";
    break;
  case 20616:
    spellname = "Intercept";
    break;
  case 20617:
    spellname = "Intercept";
    break;
  case 20618:
    spellname = "Teleport";
    break;
  case 20619:
    spellname = "Magic Reflection";
    break;
  case 20620:
    spellname = "Aegis of Ragnaros";
    break;
  case 20623:
    spellname = "Fire Blast";
    break;
  case 20624:
    spellname = "Test Mod Water Breathing (PT)";
    break;
  case 20625:
    spellname = "Ritual of Doom Sacrifice";
    break;
  case 20626:
    spellname = "Undermine Clam Chowder";
    break;
  case 20627:
    spellname = "Lightning Breath";
    break;
  case 20629:
    spellname = "Corrosive Venom Spit";
    break;
  case 20630:
    spellname = "Lightning Breath";
    break;
  case 20631:
    spellname = "Furbolg Medicine Pouch";
    break;
  case 20647:
    spellname = "Execute";
    break;
  case 20648:
    spellname = "Medium Leather";
    break;
  case 20649:
    spellname = "Heavy Leather";
    break;
  case 20650:
    spellname = "Thick Leather";
    break;
  case 20654:
    spellname = "Entangling Roots";
    break;
  case 20655:
    spellname = "Barkskin";
    break;
  case 20656:
    spellname = "Faerie Fire";
    break;
  case 20657:
    spellname = "Acid Spit";
    break;
  case 20658:
    spellname = "Execute";
    break;
  case 20660:
    spellname = "Execute";
    break;
  case 20661:
    spellname = "Execute";
    break;
  case 20662:
    spellname = "Execute";
    break;
  case 20663:
    spellname = "Sleep";
    break;
  case 20664:
    spellname = "Rejuvenation";
    break;
  case 20665:
    spellname = "Regrowth";
    break;
  case 20666:
    spellname = "Cleave";
    break;
  case 20667:
    spellname = "Corrosive Acid Breath";
    break;
  case 20668:
    spellname = "Sleepwalk";
    break;
  case 20669:
    spellname = "Sleep";
    break;
  case 20672:
    spellname = "Fade";
    break;
  case 20676:
    spellname = "Intense Heat";
    break;
  case 20677:
    spellname = "Cleave";
    break;
  case 20678:
    spellname = "Fireball";
    break;
  case 20679:
    spellname = "Fire Blast";
    break;
  case 20680:
    spellname = "Blizzard";
    break;
  case 20681:
    spellname = "Summon Water Elementals";
    break;
  case 20682:
    spellname = "Teleport";
    break;
  case 20683:
    spellname = "Highlord's Justice";
    break;
  case 20684:
    spellname = "Cleave";
    break;
  case 20685:
    spellname = "Storm Bolt";
    break;
  case 20686:
    spellname = "Knock Away";
    break;
  case 20687:
    spellname = "Starfall";
    break;
  case 20688:
    spellname = "Searing Arrow";
    break;
  case 20690:
    spellname = "Moonfire";
    break;
  case 20691:
    spellname = "Cleave";
    break;
  case 20692:
    spellname = "Fireball";
    break;
  case 20694:
    spellname = "Holy Nova";
    break;
  case 20695:
    spellname = "Holy Smite";
    break;
  case 20696:
    spellname = "Holy Smite";
    break;
  case 20697:
    spellname = "Power Word: Shield";
    break;
  case 20698:
    spellname = "Wrath";
    break;
  case 20699:
    spellname = "Entangling Roots";
    break;
  case 20700:
    spellname = "Ritual of Doom";
    break;
  case 20701:
    spellname = "Rejuvenation";
    break;
  case 20702:
    spellname = "Summon Treant Allies";
    break;
  case 20705:
    spellname = "Power Shield 500";
    break;
  case 20706:
    spellname = "Power Word: Shield 500";
    break;
  case 20707:
    spellname = "Soulstone Resurrection";
    break;
  case 20708:
    spellname = "Emote State Ready";
    break;
  case 20709:
    spellname = "Arcanite Skeleton Key";
    break;
  case 20710:
    spellname = "Inner Courage 20";
    break;
  case 20711:
    spellname = "Spirit of Redemption";
    break;
  case 20712:
    spellname = "Flame Breath";
    break;
  case 20714:
    spellname = "Fireball";
    break;
  case 20715:
    spellname = "Emote - SpellCastOmni";
    break;
  case 20716:
    spellname = "Sand Breath";
    break;
  case 20717:
    spellname = "Sand Breath";
    break;
  case 20718:
    spellname = "Emote - SpellCastDirected";
    break;
  case 20719:
    spellname = "Feline Grace";
    break;
  case 20720:
    spellname = "Arcane Bolt";
    break;
  case 20725:
    spellname = "Greater Dragon Slayer 25";
    break;
  case 20726:
    spellname = "Greater Dragon Slayer 25";
    break;
  case 20729:
    spellname = "Blessing of Sacrifice";
    break;
  case 20731:
    spellname = "Beast Slaying 15";
    break;
  case 20732:
    spellname = "Attack Power 15";
    break;
  case 20733:
    spellname = "Black Arrow";
    break;
  case 20735:
    spellname = "Multi-Shot";
    break;
  case 20736:
    spellname = "Distracting Shot";
    break;
  case 20737:
    spellname = "Summon Karang's Banner";
    break;
  case 20739:
    spellname = "Rebirth";
    break;
  case 20740:
    spellname = "Dominate Mind";
    break;
  case 20741:
    spellname = "Shadow Bolt Volley";
    break;
  case 20742:
    spellname = "Rebirth";
    break;
  case 20743:
    spellname = "Drain Life";
    break;
  case 20746:
    spellname = "Summon Karang's Banner Aura";
    break;
  case 20747:
    spellname = "Rebirth";
    break;
  case 20748:
    spellname = "Rebirth";
    break;
  case 20751:
    spellname = "Maul";
    break;
  case 20752:
    spellname = "Create Soulstone";
    break;
  case 20753:
    spellname = "Demoralizing Roar";
    break;
  case 20754:
    spellname = "Rain of Fire";
    break;
  case 20755:
    spellname = "Create Soulstone";
    break;
  case 20756:
    spellname = "Create Soulstone";
    break;
  case 20757:
    spellname = "Create Soulstone";
    break;
  case 20758:
    spellname = "Use Soulstone";
    break;
  case 20759:
    spellname = "Use Soulstone";
    break;
  case 20760:
    spellname = "Use Soulstone";
    break;
  case 20761:
    spellname = "Use Soulstone";
    break;
  case 20762:
    spellname = "Soulstone Resurrection";
    break;
  case 20763:
    spellname = "Soulstone Resurrection";
    break;
  case 20764:
    spellname = "Soulstone Resurrection";
    break;
  case 20765:
    spellname = "Soulstone Resurrection";
    break;
  case 20770:
    spellname = "Resurrection";
    break;
  case 20772:
    spellname = "Redemption";
    break;
  case 20773:
    spellname = "Redemption";
    break;
  case 20776:
    spellname = "Ancestral Spirit";
    break;
  case 20777:
    spellname = "Ancestral Spirit";
    break;
  case 20782:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 20783:
    spellname = "Destroy Karang's Banner";
    break;
  case 20784:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 20786:
    spellname = "Destroy Karang's Banner";
    break;
  case 20787:
    spellname = "Immolate";
    break;
  case 20788:
    spellname = "Counterspell";
    break;
  case 20789:
    spellname = "Detonate";
    break;
  case 20790:
    spellname = "Healing Touch";
    break;
  case 20791:
    spellname = "Shadow Bolt";
    break;
  case 20792:
    spellname = "Frostbolt";
    break;
  case 20793:
    spellname = "Fireball";
    break;
  case 20794:
    spellname = "Flamestrike";
    break;
  case 20795:
    spellname = "Fire Blast";
    break;
  case 20797:
    spellname = "Fireball";
    break;
  case 20798:
    spellname = "Demon Skin";
    break;
  case 20800:
    spellname = "Immolate";
    break;
  case 20801:
    spellname = "Firebolt";
    break;
  case 20802:
    spellname = "Lightning Bolt";
    break;
  case 20804:
    spellname = "Triage";
    break;
  case 20805:
    spellname = "Lightning Bolt";
    break;
  case 20806:
    spellname = "Frostbolt";
    break;
  case 20807:
    spellname = "Shadow Bolt";
    break;
  case 20808:
    spellname = "Fireball";
    break;
  case 20810:
    spellname = "Vampiric Aura";
    break;
  case 20811:
    spellname = "Fireball";
    break;
  case 20812:
    spellname = "Cripple";
    break;
  case 20813:
    spellname = "Flamestrike";
    break;
  case 20814:
    spellname = "Collect Dire Water";
    break;
  case 20815:
    spellname = "Fireball";
    break;
  case 20816:
    spellname = "Shadow Bolt";
    break;
  case 20817:
    spellname = "Mana Burn";
    break;
  case 20818:
    spellname = "Summon Foulweald Totem Basket";
    break;
  case 20819:
    spellname = "Frostbolt";
    break;
  case 20820:
    spellname = "Holy Smite";
    break;
  case 20821:
    spellname = "Acid Spit";
    break;
  case 20822:
    spellname = "Frostbolt";
    break;
  case 20823:
    spellname = "Fireball";
    break;
  case 20824:
    spellname = "Lightning Bolt";
    break;
  case 20825:
    spellname = "Shadow Bolt";
    break;
  case 20826:
    spellname = "Immolate";
    break;
  case 20827:
    spellname = "Flamestrike";
    break;
  case 20828:
    spellname = "Cone of Cold";
    break;
  case 20829:
    spellname = "Arcane Bolt";
    break;
  case 20830:
    spellname = "Mind Blast";
    break;
  case 20831:
    spellname = "Chain Lightning";
    break;
  case 20832:
    spellname = "Fire Blast";
    break;
  case 20847:
    spellname = "The Lion Horn of Stormwind";
    break;
  case 20848:
    spellname = "Flarecore Mantle";
    break;
  case 20849:
    spellname = "Flarecore Gloves";
    break;
  case 20853:
    spellname = "Corehound Boots";
    break;
  case 20854:
    spellname = "Molten Helm";
    break;
  case 20855:
    spellname = "Black Dragonscale Boots";
    break;
  case 20858:
    spellname = "Demon Slaying 30";
    break;
  case 20864:
    spellname = "Mace Specialization";
    break;
  case 20869:
    spellname = "Frost Blast";
    break;
  case 20872:
    spellname = "Fiery Chain Girdle";
    break;
  case 20873:
    spellname = "Fiery Chain Shoulders";
    break;
  case 20874:
    spellname = "Dark Iron Bracers";
    break;
  case 20875:
    spellname = "Rumsey Rum";
    break;
  case 20876:
    spellname = "Dark Iron Leggings";
    break;
  case 20877:
    spellname = "Beast Slaying 15";
    break;
  case 20882:
    spellname = "Enslave Demon";
    break;
  case 20883:
    spellname = "Arcane Blast";
    break;
  case 20884:
    spellname = "Stun 1% for 1 sec";
    break;
  case 20885:
    spellname = "Vitality";
    break;
  case 20886:
    spellname = "Thorns Dmg +3";
    break;
  case 20887:
    spellname = "Thorns Dmg +2";
    break;
  case 20888:
    spellname = "Thorns Dmg +1";
    break;
  case 20889:
    spellname = "Thorns Dmg +4";
    break;
  case 20890:
    spellname = "Dark Iron Reaver";
    break;
  case 20891:
    spellname = "Greater Beast Slayer 25";
    break;
  case 20893:
    spellname = "Greater Beast Slayer 25";
    break;
  case 20895:
    spellname = "Spirit Bond";
    break;
  case 20897:
    spellname = "Dark Iron Destroyer";
    break;
  case 20900:
    spellname = "Aimed Shot";
    break;
  case 20901:
    spellname = "Aimed Shot";
    break;
  case 20902:
    spellname = "Aimed Shot";
    break;
  case 20903:
    spellname = "Aimed Shot";
    break;
  case 20904:
    spellname = "Aimed Shot";
    break;
  case 20905:
    spellname = "Trueshot Aura";
    break;
  case 20906:
    spellname = "Trueshot Aura";
    break;
  case 20909:
    spellname = "Counterattack";
    break;
  case 20910:
    spellname = "Counterattack";
    break;
  case 20911:
    spellname = "Blessing of Sanctuary";
    break;
  case 20912:
    spellname = "Blessing of Sanctuary";
    break;
  case 20913:
    spellname = "Blessing of Sanctuary";
    break;
  case 20914:
    spellname = "Blessing of Sanctuary";
    break;
  case 20915:
    spellname = "Seal of Command";
    break;
  case 20916:
    spellname = "Mithril Headed Trout";
    break;
  case 20918:
    spellname = "Seal of Command";
    break;
  case 20919:
    spellname = "Seal of Command";
    break;
  case 20920:
    spellname = "Seal of Command";
    break;
  case 20922:
    spellname = "Consecration";
    break;
  case 20923:
    spellname = "Consecration";
    break;
  case 20924:
    spellname = "Consecration";
    break;
  case 20925:
    spellname = "Holy Shield";
    break;
  case 20927:
    spellname = "Holy Shield";
    break;
  case 20928:
    spellname = "Holy Shield";
    break;
  case 20929:
    spellname = "Holy Shock";
    break;
  case 20930:
    spellname = "Holy Shock";
    break;
  case 20936:
    spellname = "Spirit of Greater Healing";
    break;
  case 20937:
    spellname = "Hyper Resurrection 4 sec";
    break;
  case 20939:
    spellname = "Undying Soul";
    break;
  case 20959:
    spellname = "Increased Mana Regen";
    break;
  case 20961:
    spellname = "Judgement of Command";
    break;
  case 20962:
    spellname = "Judgement of Command";
    break;
  case 20963:
    spellname = "Judgement of Command";
    break;
  case 20964:
    spellname = "Judgement of Command";
    break;
  case 20965:
    spellname = "Judgement of Command";
    break;
  case 20966:
    spellname = "Judgement of Command";
    break;
  case 20967:
    spellname = "Judgement of Command";
    break;
  case 20968:
    spellname = "Judgement of Command";
    break;
  case 20969:
    spellname = "Vitality";
    break;
  case 20987:
    spellname = "Giantstalker A";
    break;
  case 20988:
    spellname = "Nature's Ally";
    break;
  case 20989:
    spellname = "Sleep";
    break;
  case 21007:
    spellname = "Curse of Weakness";
    break;
  case 21008:
    spellname = "Mocking Blow";
    break;
  case 21009:
    spellname = "Shadowmeld Passive";
    break;
  case 21010:
    spellname = "Increase Spell Dam Undead 14";
    break;
  case 21011:
    spellname = "Increase Spell Dam Demons 14";
    break;
  case 21012:
    spellname = "Increased Offhand Damage 10";
    break;
  case 21013:
    spellname = "Attack Power Ranged 60";
    break;
  case 21027:
    spellname = "Spark";
    break;
  case 21029:
    spellname = "Thaumaturgy Channel";
    break;
  case 21030:
    spellname = "Frost Shock";
    break;
  case 21047:
    spellname = "Corrosive Acid Spit";
    break;
  case 21048:
    spellname = "Curse of the Tribes";
    break;
  case 21049:
    spellname = "Bloodlust";
    break;
  case 21050:
    spellname = "Melodious Rapture";
    break;
  case 21051:
    spellname = "Melodious Rapture Visual (DND)";
    break;
  case 21052:
    spellname = "Monty Bashes Rats (DND)";
    break;
  case 21053:
    spellname = "Capture Soul";
    break;
  case 21054:
    spellname = "Capture Soul";
    break;
  case 21055:
    spellname = "Crush Armor";
    break;
  case 21056:
    spellname = "Mark of Kazzak";
    break;
  case 21057:
    spellname = "Summon Theradrim Shardling";
    break;
  case 21058:
    spellname = "Mark of Kazzak";
    break;
  case 21059:
    spellname = "Acid Spit";
    break;
  case 21060:
    spellname = "Blind";
    break;
  case 21061:
    spellname = "Putrid Breath";
    break;
  case 21062:
    spellname = "Putrid Breath";
    break;
  case 21063:
    spellname = "Twisted Reflection";
    break;
  case 21064:
    spellname = "Twisted Reflection";
    break;
  case 21066:
    spellname = "Void Bolt";
    break;
  case 21067:
    spellname = "Poison Bolt";
    break;
  case 21068:
    spellname = "Corruption";
    break;
  case 21069:
    spellname = "Larva Goo";
    break;
  case 21070:
    spellname = "Noxious Cloud";
    break;
  case 21071:
    spellname = "Boulder";
    break;
  case 21072:
    spellname = "Fireball";
    break;
  case 21073:
    spellname = "Arcane Explosion";
    break;
  case 21074:
    spellname = "Test NPC Resurrection";
    break;
  case 21075:
    spellname = "Damage Shield";
    break;
  case 21076:
    spellname = "Dispel Magic";
    break;
  case 21077:
    spellname = "Shadow Bolt";
    break;
  case 21078:
    spellname = "Conjure Milton (DND)";
    break;
  case 21079:
    spellname = "Echo of Archimonde";
    break;
  case 21080:
    spellname = "Putrid Breath";
    break;
  case 21081:
    spellname = "Sunder Armor";
    break;
  case 21082:
    spellname = "Seal of the Crusader";
    break;
  case 21084:
    spellname = "Seal of Righteousness";
    break;
  case 21086:
    spellname = "Encouragement";
    break;
  case 21088:
    spellname = "Improved Arcane Intellect";
    break;
  case 21089:
    spellname = "Retributive Smite";
    break;
  case 21091:
    spellname = "Retributive Smite";
    break;
  case 21092:
    spellname = "Increased Critical Holy";
    break;
  case 21093:
    spellname = "Improved Fortitude";
    break;
  case 21095:
    spellname = "Separation Anxiety";
    break;
  case 21096:
    spellname = "Blizzard";
    break;
  case 21097:
    spellname = "Manastorm";
    break;
  case 21098:
    spellname = "Chill";
    break;
  case 21099:
    spellname = "Frost Breath";
    break;
  case 21100:
    spellname = "Conjure Elegant Letter";
    break;
  case 21107:
    spellname = "Ragnaros Submerge Fade";
    break;
  case 21109:
    spellname = "Vitality";
    break;
  case 21118:
    spellname = "Spell Reflection";
    break;
  case 21127:
    spellname = "Maraudon Portal";
    break;
  case 21128:
    spellname = "Maraudon Portal Effect";
    break;
  case 21131:
    spellname = "Breath";
    break;
  case 21132:
    spellname = "Breath";
    break;
  case 21133:
    spellname = "Breath";
    break;
  case 21134:
    spellname = "Will of Ragnaros";
    break;
  case 21135:
    spellname = "Breath";
    break;
  case 21136:
    spellname = "Breath";
    break;
  case 21137:
    spellname = "Breath";
    break;
  case 21138:
    spellname = "Breath";
    break;
  case 21139:
    spellname = "Breath";
    break;
  case 21140:
    spellname = "Fatal Wound";
    break;
  case 21141:
    spellname = "Shadow Bolt";
    break;
  case 21142:
    spellname = "Immolation";
    break;
  case 21143:
    spellname = "Gingerbread Cookie";
    break;
  case 21144:
    spellname = "Egg Nog";
    break;
  case 21147:
    spellname = "Arcane Vacuum";
    break;
  case 21149:
    spellname = "Egg Nog";
    break;
  case 21150:
    spellname = "Summon Player";
    break;
  case 21151:
    spellname = "Gutgore Ripper";
    break;
  case 21152:
    spellname = "Earthshaker";
    break;
  case 21153:
    spellname = "Bonereaver's Edge";
    break;
  case 21154:
    spellname = "Might of Ragnaros";
    break;
  case 21155:
    spellname = "Intense Heat";
    break;
  case 21156:
    spellname = "Battle Stance Passive";
    break;
  case 21157:
    spellname = "Dark Channeling";
    break;
  case 21158:
    spellname = "Lava Burst";
    break;
  case 21159:
    spellname = "Fireball";
    break;
  case 21160:
    spellname = "Eye of Sulfuras";
    break;
  case 21161:
    spellname = "Sulfuron Hammer";
    break;
  case 21162:
    spellname = "Fireball";
    break;
  case 21163:
    spellname = "Polished Armor";
    break;
  case 21164:
    spellname = "Sulfuron Hammer";
    break;
  case 21165:
    spellname = "Haste";
    break;
  case 21167:
    spellname = "Snowball";
    break;
  case 21168:
    spellname = "Vitality";
    break;
  case 21169:
    spellname = "Reincarnation";
    break;
  case 21170:
    spellname = "Drain Life";
    break;
  case 21171:
    spellname = "Ryson's Eye in the Sky";
    break;
  case 21172:
    spellname = "Grip of Command";
    break;
  case 21174:
    spellname = "Aura of Battle";
    break;
  case 21175:
    spellname = "Spider Sausage";
    break;
  case 21178:
    spellname = "Bear Form (Passive2)";
    break;
  case 21179:
    spellname = "Chain Lightning";
    break;
  case 21180:
    spellname = "Summon Thunderstrike";
    break;
  case 21181:
    spellname = "Summon Shadowstrike";
    break;
  case 21183:
    spellname = "Judgement of the Crusader";
    break;
  case 21184:
    spellname = "Rogue Passive (DND)";
    break;
  case 21185:
    spellname = "Spinal Reaper";
    break;
  case 21186:
    spellname = "Spinal Reaper";
    break;
  case 21187:
    spellname = "Stormpike Reputation +5";
    break;
  case 21188:
    spellname = "Stun Bomb Attack";
    break;
  case 21189:
    spellname = "Gryphon Wing Flap";
    break;
  case 21207:
    spellname = "Tailoring Pattern - Mooncloth Boots";
    break;
  case 21227:
    spellname = "Fire & Ice Channeling";
    break;
  case 21228:
    spellname = "Arcane Missiles +1";
    break;
  case 21229:
    spellname = "Frostbolt";
    break;
  case 21230:
    spellname = "Fireball";
    break;
  case 21248:
    spellname = "Opening";
    break;
  case 21249:
    spellname = "Call of the Nether";
    break;
  case 21267:
    spellname = "Conjure Altar of Summoning";
    break;
  case 21268:
    spellname = "Conjure Altar of Summoning Effect DND";
    break;
  case 21288:
    spellname = "Opening";
    break;
  case 21307:
    spellname = "Swell of Souls";
    break;
  case 21327:
    spellname = "Summon Hive'Ashi Drones";
    break;
  case 21330:
    spellname = "Corrupted Fear";
    break;
  case 21331:
    spellname = "Entangling Roots";
    break;
  case 21332:
    spellname = "Aspect of Neptulon";
    break;
  case 21333:
    spellname = "Lava Breath";
    break;
  case 21334:
    spellname = "Reactive Mana";
    break;
  case 21335:
    spellname = "Thorns";
    break;
  case 21336:
    spellname = "Discordant Surge Visual";
    break;
  case 21337:
    spellname = "Thorns";
    break;
  case 21338:
    spellname = "Conjure Furis Felsteed DUMMY DND";
    break;
  case 21339:
    spellname = "Improved Prayer of Healing";
    break;
  case 21340:
    spellname = "Berserk";
    break;
  case 21341:
    spellname = "Shadow Bolt Volley";
    break;
  case 21342:
    spellname = "Mistletoe Test";
    break;
  case 21343:
    spellname = "Snowball";
    break;
  case 21345:
    spellname = "Vitality";
    break;
  case 21346:
    spellname = "Vitality";
    break;
  case 21347:
    spellname = "Vitality";
    break;
  case 21348:
    spellname = "Vitality";
    break;
  case 21349:
    spellname = "Vitality";
    break;
  case 21350:
    spellname = "Vitality";
    break;
  case 21351:
    spellname = "Increased Stun Resist 01";
    break;
  case 21352:
    spellname = "Decreased Parry 1";
    break;
  case 21354:
    spellname = "Snowball Resistant";
    break;
  case 21355:
    spellname = "Planting Guse's Beacon";
    break;
  case 21356:
    spellname = "Conjure Guse's Beacon DND";
    break;
  case 21357:
    spellname = "Create Aqual Quintessence";
    break;
  case 21358:
    spellname = "Aqual Quintessence - Dowse Molten Core Rune";
    break;
  case 21359:
    spellname = "Increased Mana Regen";
    break;
  case 21360:
    spellname = "Increased Mana Regen";
    break;
  case 21361:
    spellname = "Increased Mana Regen";
    break;
  case 21362:
    spellname = "Increased Mana Regen";
    break;
  case 21363:
    spellname = "Increased Mana Regen";
    break;
  case 21364:
    spellname = "Increased Mana Regen";
    break;
  case 21365:
    spellname = "Increased Mana Regen";
    break;
  case 21366:
    spellname = "Increased Mana Regen";
    break;
  case 21367:
    spellname = "Blizzard";
    break;
  case 21368:
    spellname = "Conjure Jeztor's Beacon DND";
    break;
  case 21369:
    spellname = "Frostbolt";
    break;
  case 21370:
    spellname = "Planting Jeztor's Beacon";
    break;
  case 21371:
    spellname = "Planting Mulverick's Beacon";
    break;
  case 21372:
    spellname = "Conjure Mulverick's Beacon DND";
    break;
  case 21388:
    spellname = "Melt Weapon";
    break;
  case 21389:
    spellname = "Fire Channeling";
    break;
  case 21390:
    spellname = "Multi-Shot";
    break;
  case 21391:
    spellname = "Syndicate Tracker (MURP) DND";
    break;
  case 21392:
    spellname = "Fire Channeling";
    break;
  case 21393:
    spellname = "Healing Draught";
    break;
  case 21394:
    spellname = "Healing Draught";
    break;
  case 21395:
    spellname = "Restore Mana";
    break;
  case 21396:
    spellname = "Restore Mana";
    break;
  case 21397:
    spellname = "Syndicate Tracker (MURP) DND";
    break;
  case 21398:
    spellname = "Create Stormpike Assault Order (DND)";
    break;
  case 21399:
    spellname = "Alchemist's Stone";
    break;
  case 21400:
    spellname = "Alchemist's Stone";
    break;
  case 21401:
    spellname = "Frost Shock";
    break;
  case 21402:
    spellname = "Fireball";
    break;
  case 21407:
    spellname = "Increased Defense";
    break;
  case 21408:
    spellname = "Increased Defense";
    break;
  case 21409:
    spellname = "Increased Defense";
    break;
  case 21410:
    spellname = "Increased Defense";
    break;
  case 21411:
    spellname = "Increased Defense";
    break;
  case 21412:
    spellname = "Increased Defense";
    break;
  case 21413:
    spellname = "Increased Defense";
    break;
  case 21414:
    spellname = "Increased Defense";
    break;
  case 21415:
    spellname = "Increased Defense";
    break;
  case 21416:
    spellname = "Increased Defense";
    break;
  case 21417:
    spellname = "Increased Defense";
    break;
  case 21418:
    spellname = "Increased Defense";
    break;
  case 21419:
    spellname = "Increased Defense";
    break;
  case 21420:
    spellname = "Increased Defense";
    break;
  case 21421:
    spellname = "Increased Defense";
    break;
  case 21422:
    spellname = "Increased Defense";
    break;
  case 21423:
    spellname = "Increased Defense";
    break;
  case 21424:
    spellname = "Increased Defense";
    break;
  case 21425:
    spellname = "Ryson's Eye in the Sky";
    break;
  case 21426:
    spellname = "Attack Power Ranged 2";
    break;
  case 21427:
    spellname = "Attack Power Ranged 5";
    break;
  case 21428:
    spellname = "Attack Power Ranged 7";
    break;
  case 21429:
    spellname = "Attack Power Ranged 10";
    break;
  case 21430:
    spellname = "Attack Power Ranged 12";
    break;
  case 21431:
    spellname = "Attack Power Ranged 14";
    break;
  case 21432:
    spellname = "Attack Power Ranged 17";
    break;
  case 21433:
    spellname = "Attack Power Ranged 19";
    break;
  case 21434:
    spellname = "Attack Power Ranged 22";
    break;
  case 21435:
    spellname = "Attack Power Ranged 24";
    break;
  case 21436:
    spellname = "Attack Power Ranged 26";
    break;
  case 21437:
    spellname = "Attack Power Ranged 29";
    break;
  case 21438:
    spellname = "Attack Power Ranged 31";
    break;
  case 21439:
    spellname = "Attack Power Ranged 34";
    break;
  case 21440:
    spellname = "Attack Power Ranged 36";
    break;
  case 21441:
    spellname = "Attack Power Ranged 38";
    break;
  case 21442:
    spellname = "Attack Power Ranged 41";
    break;
  case 21443:
    spellname = "Attack Power Ranged 43";
    break;
  case 21444:
    spellname = "Attack Power Ranged 46";
    break;
  case 21445:
    spellname = "Attack Power Ranged 48";
    break;
  case 21446:
    spellname = "Attack Power Ranged 50";
    break;
  case 21447:
    spellname = "Attack Power Ranged 53";
    break;
  case 21448:
    spellname = "Attack Power Ranged 55";
    break;
  case 21449:
    spellname = "Attack Power Ranged 58";
    break;
  case 21450:
    spellname = "Attack Power Ranged 62";
    break;
  case 21451:
    spellname = "Attack Power Ranged 65";
    break;
  case 21452:
    spellname = "Attack Power Ranged 67";
    break;
  case 21453:
    spellname = "Attack Power Ranged 70";
    break;
  case 21454:
    spellname = "Attack Power Ranged 72";
    break;
  case 21455:
    spellname = "Attack Power Ranged 74";
    break;
  case 21456:
    spellname = "Attack Power Ranged 77";
    break;
  case 21457:
    spellname = "Attack Power Ranged 79";
    break;
  case 21458:
    spellname = "Attack Power Ranged 82";
    break;
  case 21459:
    spellname = "Attack Power Ranged 84";
    break;
  case 21460:
    spellname = "Attack Power Ranged 86";
    break;
  case 21461:
    spellname = "Attack Power Ranged 89";
    break;
  case 21462:
    spellname = "Attack Power Ranged 91";
    break;
  case 21463:
    spellname = "Teleport to Player";
    break;
  case 21464:
    spellname = "Conjure Ryson's Beacon (Horde) DND";
    break;
  case 21465:
    spellname = "Conjure Ryson's Beacon (Alliance) DND";
    break;
  case 21466:
    spellname = "Increased Block 4";
    break;
  case 21467:
    spellname = "Increased Block 3";
    break;
  case 21468:
    spellname = "Increased Block 2";
    break;
  case 21469:
    spellname = "Increased Block 1";
    break;
  case 21470:
    spellname = "Increased Block 6";
    break;
  case 21471:
    spellname = "Increased Block 7";
    break;
  case 21472:
    spellname = "Increased Block 8";
    break;
  case 21473:
    spellname = "Increased Block 9";
    break;
  case 21474:
    spellname = "Increased Block 11";
    break;
  case 21475:
    spellname = "Increased Block 12";
    break;
  case 21476:
    spellname = "Increased Block 13";
    break;
  case 21477:
    spellname = "Increased Block 14";
    break;
  case 21478:
    spellname = "Increased Block 16";
    break;
  case 21479:
    spellname = "Increased Block 17";
    break;
  case 21480:
    spellname = "Increased Block 18";
    break;
  case 21481:
    spellname = "Increased Block 19";
    break;
  case 21482:
    spellname = "Increased Block 21";
    break;
  case 21483:
    spellname = "Increased Block 22";
    break;
  case 21484:
    spellname = "Increased Block 23";
    break;
  case 21485:
    spellname = "Increased Block 24";
    break;
  case 21486:
    spellname = "Increased Block 26";
    break;
  case 21487:
    spellname = "Increased Block 27";
    break;
  case 21488:
    spellname = "Increased Block 28";
    break;
  case 21489:
    spellname = "Increased Block 29";
    break;
  case 21490:
    spellname = "Increased Block 30";
    break;
  case 21491:
    spellname = "Increased Block 31";
    break;
  case 21492:
    spellname = "Increased Block 32";
    break;
  case 21493:
    spellname = "Increased Block 33";
    break;
  case 21494:
    spellname = "Increased Block 34";
    break;
  case 21495:
    spellname = "Increased Block 35";
    break;
  case 21496:
    spellname = "Increased Block 36";
    break;
  case 21497:
    spellname = "Increased Block 37";
    break;
  case 21498:
    spellname = "Increased Block 38";
    break;
  case 21499:
    spellname = "Increase Holy Dam 1";
    break;
  case 21500:
    spellname = "Increase Holy Dam 3";
    break;
  case 21501:
    spellname = "Increase Holy Dam 4";
    break;
  case 21502:
    spellname = "Increase Holy Dam 6";
    break;
  case 21503:
    spellname = "Increase Holy Dam 7";
    break;
  case 21504:
    spellname = "Increase Holy Dam 9";
    break;
  case 21505:
    spellname = "Increase Holy Dam 10";
    break;
  case 21506:
    spellname = "Increase Holy Dam 11";
    break;
  case 21507:
    spellname = "Increase Holy Dam 13";
    break;
  case 21508:
    spellname = "Increase Holy Dam 14";
    break;
  case 21509:
    spellname = "Increase Holy Dam 16";
    break;
  case 21510:
    spellname = "Increase Holy Dam 17";
    break;
  case 21511:
    spellname = "Increase Holy Dam 19";
    break;
  case 21512:
    spellname = "Increase Holy Dam 20";
    break;
  case 21513:
    spellname = "Increase Holy Dam 21";
    break;
  case 21514:
    spellname = "Increase Holy Dam 23";
    break;
  case 21515:
    spellname = "Increase Holy Dam 24";
    break;
  case 21516:
    spellname = "Increase Holy Dam 26";
    break;
  case 21517:
    spellname = "Increase Holy Dam 27";
    break;
  case 21518:
    spellname = "Increase Holy Dam 29";
    break;
  case 21519:
    spellname = "Increase Holy Dam 30";
    break;
  case 21520:
    spellname = "Increase Holy Dam 31";
    break;
  case 21521:
    spellname = "Increase Holy Dam 33";
    break;
  case 21522:
    spellname = "Increase Holy Dam 34";
    break;
  case 21523:
    spellname = "Increase Holy Dam 36";
    break;
  case 21524:
    spellname = "Increase Holy Dam 37";
    break;
  case 21525:
    spellname = "Increase Holy Dam 39";
    break;
  case 21526:
    spellname = "Increase Holy Dam 40";
    break;
  case 21527:
    spellname = "Increase Holy Dam 41";
    break;
  case 21528:
    spellname = "Increase Holy Dam 43";
    break;
  case 21529:
    spellname = "Increase Holy Dam 44";
    break;
  case 21530:
    spellname = "Increase Holy Dam 46";
    break;
  case 21531:
    spellname = "Increase Holy Dam 47";
    break;
  case 21532:
    spellname = "Increase Holy Dam 49";
    break;
  case 21533:
    spellname = "Increase Holy Dam 50";
    break;
  case 21534:
    spellname = "Increase Holy Dam 51";
    break;
  case 21535:
    spellname = "Increase Holy Dam 53";
    break;
  case 21536:
    spellname = "Increase Holy Dam 54";
    break;
  case 21537:
    spellname = "Planting Ryson's Beacon";
    break;
  case 21538:
    spellname = "Planting Ryson's Beacon";
    break;
  case 21539:
    spellname = "Block Value 02";
    break;
  case 21540:
    spellname = "Improved Block Value";
    break;
  case 21541:
    spellname = "Conjure Scrying Scope (Horde) DND";
    break;
  case 21542:
    spellname = "Conjure Scrying Scope (Alliance) DND";
    break;
  case 21543:
    spellname = "Teleport to Player";
    break;
  case 21544:
    spellname = "Create Shredder";
    break;
  case 21546:
    spellname = "Ryson's All Seeing Eye";
    break;
  case 21547:
    spellname = "Spore Cloud";
    break;
  case 21549:
    spellname = "Fireball";
    break;
  case 21551:
    spellname = "Mortal Strike";
    break;
  case 21552:
    spellname = "Mortal Strike";
    break;
  case 21553:
    spellname = "Mortal Strike";
    break;
  case 21556:
    spellname = "Control Shredder";
    break;
  case 21559:
    spellname = "Shredder Armor Melt";
    break;
  case 21562:
    spellname = "Prayer of Fortitude";
    break;
  case 21563:
    spellname = "Command";
    break;
  case 21564:
    spellname = "Prayer of Fortitude";
    break;
  case 21565:
    spellname = "Create Shredder";
    break;
  case 21566:
    spellname = "Control Shredder";
    break;
  case 21587:
    spellname = "Vitality";
    break;
  case 21588:
    spellname = "Vitality";
    break;
  case 21589:
    spellname = "Vitality";
    break;
  case 21590:
    spellname = "Vitality";
    break;
  case 21592:
    spellname = "Vitality";
    break;
  case 21593:
    spellname = "Vitality";
    break;
  case 21594:
    spellname = "Vitality";
    break;
  case 21595:
    spellname = "Vitality";
    break;
  case 21596:
    spellname = "Vitality";
    break;
  case 21597:
    spellname = "Vitality";
    break;
  case 21598:
    spellname = "Vitality";
    break;
  case 21599:
    spellname = "Vitality";
    break;
  case 21600:
    spellname = "Vitality";
    break;
  case 21601:
    spellname = "Vitality";
    break;
  case 21602:
    spellname = "Vitality";
    break;
  case 21603:
    spellname = "Vitality";
    break;
  case 21604:
    spellname = "Vitality";
    break;
  case 21605:
    spellname = "Vitality";
    break;
  case 21606:
    spellname = "Vitality";
    break;
  case 21607:
    spellname = "Vitality";
    break;
  case 21608:
    spellname = "Vitality";
    break;
  case 21609:
    spellname = "Vitality";
    break;
  case 21610:
    spellname = "Vitality";
    break;
  case 21611:
    spellname = "Vitality";
    break;
  case 21612:
    spellname = "Vitality";
    break;
  case 21613:
    spellname = "Vitality";
    break;
  case 21614:
    spellname = "Vitality";
    break;
  case 21615:
    spellname = "Vitality";
    break;
  case 21616:
    spellname = "Vitality";
    break;
  case 21617:
    spellname = "Vitality";
    break;
  case 21618:
    spellname = "Increased Mana Regen";
    break;
  case 21619:
    spellname = "Increased Mana Regen";
    break;
  case 21620:
    spellname = "Increased Mana Regen";
    break;
  case 21621:
    spellname = "Increased Mana Regen";
    break;
  case 21622:
    spellname = "Increased Mana Regen";
    break;
  case 21623:
    spellname = "Increased Mana Regen";
    break;
  case 21624:
    spellname = "Increased Mana Regen";
    break;
  case 21625:
    spellname = "Increased Mana Regen";
    break;
  case 21626:
    spellname = "Increased Mana Regen";
    break;
  case 21627:
    spellname = "Increased Mana Regen";
    break;
  case 21628:
    spellname = "Increased Mana Regen";
    break;
  case 21629:
    spellname = "Increased Mana Regen";
    break;
  case 21630:
    spellname = "Increased Mana Regen";
    break;
  case 21631:
    spellname = "Increased Mana Regen";
    break;
  case 21632:
    spellname = "Increased Mana Regen";
    break;
  case 21633:
    spellname = "Increased Mana Regen";
    break;
  case 21634:
    spellname = "Increased Mana Regen";
    break;
  case 21635:
    spellname = "Increased Mana Regen";
    break;
  case 21636:
    spellname = "Increased Mana Regen";
    break;
  case 21637:
    spellname = "Increased Mana Regen";
    break;
  case 21638:
    spellname = "Increased Mana Regen";
    break;
  case 21639:
    spellname = "Increased Mana Regen";
    break;
  case 21640:
    spellname = "Increased Mana Regen";
    break;
  case 21641:
    spellname = "Increased Mana Regen";
    break;
  case 21642:
    spellname = "Increased Mana Regen";
    break;
  case 21643:
    spellname = "Increased Mana Regen";
    break;
  case 21644:
    spellname = "Increased Mana Regen";
    break;
  case 21645:
    spellname = "Virulent Poison Proc";
    break;
  case 21646:
    spellname = "Conjure Circle of Calling";
    break;
  case 21647:
    spellname = "Frostwolf Reputation +5";
    break;
  case 21648:
    spellname = "Call to Ivus";
    break;
  case 21649:
    spellname = "Ivus Teleport Visual DND";
    break;
  case 21650:
    spellname = "Building Fire";
    break;
  case 21651:
    spellname = "Opening";
    break;
  case 21652:
    spellname = "Closing";
    break;
  case 21653:
    spellname = "Vipore Cat Form DND";
    break;
  case 21654:
    spellname = "Create Frostwolf Assault Order (DND)";
    break;
  case 21655:
    spellname = "Blink";
    break;
  case 21667:
    spellname = "Wrath";
    break;
  case 21668:
    spellname = "Starfire";
    break;
  case 21669:
    spellname = "Moonfire";
    break;
  case 21670:
    spellname = "Faerie Fire";
    break;
  case 21687:
    spellname = "Toxic Volley";
    break;
  case 21688:
    spellname = "Goblin Land Mine";
    break;
  case 21707:
    spellname = "Summon Noxxion's Spawns";
    break;
  case 21708:
    spellname = "Summon Noxxion's Spawns";
    break;
  case 21727:
    spellname = "Summon Player";
    break;
  case 21728:
    spellname = "Planting Ichman's Beacon";
    break;
  case 21729:
    spellname = "Planting Slidore's Beacon";
    break;
  case 21730:
    spellname = "Planting Vipore's Beacon";
    break;
  case 21731:
    spellname = "Conjure Ichman's Beacon DND";
    break;
  case 21732:
    spellname = "Conjure Slidore's Beacon DND";
    break;
  case 21734:
    spellname = "Conjure Vipore's Beacon DND";
    break;
  case 21735:
    spellname = "Conjure Vipore's Beacon DND";
    break;
  case 21737:
    spellname = "Periodic Knock Away";
    break;
  case 21740:
    spellname = "Demonic Ally";
    break;
  case 21741:
    spellname = "Demonic Ally";
    break;
  case 21744:
    spellname = "Spirit of Blessing";
    break;
  case 21747:
    spellname = "Lawbringer";
    break;
  case 21748:
    spellname = "Thorn Volley";
    break;
  case 21749:
    spellname = "Thorn Volley";
    break;
  case 21751:
    spellname = "Perm. Illusion Skeleton";
    break;
  case 21787:
    spellname = "Deadly Poison";
    break;
  case 21788:
    spellname = "Deadly Poison";
    break;
  case 21790:
    spellname = "Aqua Jet";
    break;
  case 21791:
    spellname = "Tranquility";
    break;
  case 21793:
    spellname = "Twisted Tranquility";
    break;
  case 21794:
    spellname = "Frostwolf Muzzle DND";
    break;
  case 21807:
    spellname = "Wrath";
    break;
  case 21808:
    spellname = "Landslide";
    break;
  case 21809:
    spellname = "Summon Theradrim Shardling";
    break;
  case 21829:
    spellname = "Stormpike Reputation +2";
    break;
  case 21831:
    spellname = "Improved Rend";
    break;
  case 21832:
    spellname = "Boulder";
    break;
  case 21833:
    spellname = "Goblin Dragon Gun";
    break;
  case 21834:
    spellname = "Gizlock's Dummy";
    break;
  case 21835:
    spellname = "Gizlock's Dummy Charm Effect";
    break;
  case 21836:
    spellname = "Gizlock's Dummy Charm";
    break;
  case 21837:
    spellname = "Gizlock's Dummy Effect";
    break;
  case 21838:
    spellname = "Battlegear of Might";
    break;
  case 21840:
    spellname = "Battlegear of Might";
    break;
  case 21841:
    spellname = "Battlegear of Might";
    break;
  case 21847:
    spellname = "Snowman";
    break;
  case 21848:
    spellname = "Snowman";
    break;
  case 21849:
    spellname = "Gift of the Wild";
    break;
  case 21850:
    spellname = "Gift of the Wild";
    break;
  case 21853:
    spellname = "Reactive Fade";
    break;
  case 21856:
    spellname = "Threatening Strikes";
    break;
  case 21857:
    spellname = "Lava Shield";
    break;
  case 21858:
    spellname = "Lava Shield";
    break;
  case 21860:
    spellname = "Gizlock's Dummy Taunt Effect";
    break;
  case 21861:
    spellname = "Gizlock's Dummy Taunt";
    break;
  case 21862:
    spellname = "Radiation";
    break;
  case 21866:
    spellname = "Alterac Ram Collar DND";
    break;
  case 21868:
    spellname = "Dust Field";
    break;
  case 21869:
    spellname = "Repulsive Gaze";
    break;
  case 21870:
    spellname = "Increased Critical Nature";
    break;
  case 21871:
    spellname = "Increased Rejuvenation Duration";
    break;
  case 21872:
    spellname = "Faster Regrowth Cast";
    break;
  case 21873:
    spellname = "Cheaper Druid Shapeshifting";
    break;
  case 21874:
    spellname = "Improved Vanish";
    break;
  case 21878:
    spellname = "Evasion TEST";
    break;
  case 21879:
    spellname = "Friendly Nukes";
    break;
  case 21880:
    spellname = "Improved Rupture";
    break;
  case 21881:
    spellname = "Improved Poisons";
    break;
  case 21882:
    spellname = "Judgement Smite";
    break;
  case 21884:
    spellname = "Collect Orange Crystal Liquid";
    break;
  case 21885:
    spellname = "Heal Vylestem Vine";
    break;
  case 21886:
    spellname = "Summon Lava Burst A";
    break;
  case 21887:
    spellname = "Warrior's Wrath";
    break;
  case 21889:
    spellname = "Judgement Smite";
    break;
  case 21890:
    spellname = "Warrior's Wrath";
    break;
  case 21891:
    spellname = "Earthfury Stat Totem";
    break;
  case 21892:
    spellname = "Arcane Protection";
    break;
  case 21893:
    spellname = "Arcane Protection";
    break;
  case 21894:
    spellname = "Meditation";
    break;
  case 21895:
    spellname = "Increased Totem Radius";
    break;
  case 21896:
    spellname = "Zaetar's Release (DND)";
    break;
  case 21897:
    spellname = "Warlock Terror";
    break;
  case 21898:
    spellname = "Warlock Terror";
    break;
  case 21899:
    spellname = "Improved Chain Heal";
    break;
  case 21900:
    spellname = "Summon Lava Burst B";
    break;
  case 21901:
    spellname = "Summon Lava Burst C";
    break;
  case 21902:
    spellname = "Summon Lava Burst D";
    break;
  case 21903:
    spellname = "Summon Lava Burst E";
    break;
  case 21904:
    spellname = "Summon Lava Burst F";
    break;
  case 21905:
    spellname = "Summon Lava Burst G";
    break;
  case 21906:
    spellname = "Summon Lava Burst H";
    break;
  case 21907:
    spellname = "Summon Lava Burst I";
    break;
  case 21909:
    spellname = "Dust Field";
    break;
  case 21910:
    spellname = "Goblin Dragon Gun";
    break;
  case 21911:
    spellname = "Puncture";
    break;
  case 21912:
    spellname = "Dummy Nuke";
    break;
  case 21913:
    spellname = "Edge of Winter";
    break;
  case 21916:
    spellname = "Celebras Waiting";
    break;
  case 21919:
    spellname = "Thrash";
    break;
  case 21920:
    spellname = "Frost Power";
    break;
  case 21921:
    spellname = "Demonic Ally";
    break;
  case 21922:
    spellname = "Demonic Ally";
    break;
  case 21923:
    spellname = "Elixir of Frost Power";
    break;
  case 21925:
    spellname = "Nature's Ally";
    break;
  case 21926:
    spellname = "Nature's Ally";
    break;
  case 21927:
    spellname = "Nature's Ally";
    break;
  case 21928:
    spellname = "Nature's Ally";
    break;
  case 21929:
    spellname = "Giantstalker";
    break;
  case 21930:
    spellname = "Winter's Might";
    break;
  case 21931:
    spellname = "Enchant Weapon - Winter's Might";
    break;
  case 21932:
    spellname = "Giantstalker";
    break;
  case 21935:
    spellname = "Snowmaster 9000";
    break;
  case 21936:
    spellname = "Reindeer";
    break;
  case 21937:
    spellname = "Giantstalker B";
    break;
  case 21938:
    spellname = "Nature's Ally";
    break;
  case 21939:
    spellname = "Create Scepter of Celebras";
    break;
  case 21940:
    spellname = "Snowmaster 9000";
    break;
  case 21942:
    spellname = "Hunter Giant Stalker";
    break;
  case 21943:
    spellname = "Gloves of the Greatfather";
    break;
  case 21945:
    spellname = "Green Holiday Shirt";
    break;
  case 21949:
    spellname = "Rend";
    break;
  case 21950:
    spellname = "Recite Words of Celebras";
    break;
  case 21951:
    spellname = "Fist of Stone";
    break;
  case 21952:
    spellname = "Poison";
    break;
  case 21953:
    spellname = "The Feast of Winter Veil";
    break;
  case 21954:
    spellname = "Dispel Poison";
    break;
  case 21955:
    spellname = "Razorlash Root";
    break;
  case 21956:
    spellname = "Physical Protection";
    break;
  case 21957:
    spellname = "Create Amulet of Union";
    break;
  case 21958:
    spellname = "Stout Heart";
    break;
  case 21959:
    spellname = "Reactive Mana";
    break;
  case 21960:
    spellname = "Manifest Spirit";
    break;
  case 21961:
    spellname = "Wound";
    break;
  case 21962:
    spellname = "Force of Nature";
    break;
  case 21963:
    spellname = "Force of Nature";
    break;
  case 21964:
    spellname = "Force of Nature";
    break;
  case 21965:
    spellname = "Manifestation Ends";
    break;
  case 21966:
    spellname = "Dragonstalker B";
    break;
  case 21967:
    spellname = "Dragonstalker A";
    break;
  case 21968:
    spellname = "Corrupt Forces of Nature";
    break;
  case 21969:
    spellname = "Mark of the Chosen";
    break;
  case 21970:
    spellname = "Mark of the Chosen Effect";
    break;
  case 21971:
    spellname = "Poison Bolt";
    break;
  case 21972:
    spellname = "Improved Thorns Duration";
    break;
  case 21973:
    spellname = "Prophecy Flash Heal Bonus";
    break;
  case 21975:
    spellname = "Vigor";
    break;
  case 21976:
    spellname = "Reactive Fade";
    break;
  case 21977:
    spellname = "Warrior's Wrath";
    break;
  case 21978:
    spellname = "Engulfing Shadows";
    break;
  case 21979:
    spellname = "Create The Pariah's Instructions";
    break;
  case 21980:
    spellname = "Snowman";
    break;
  case 21987:
    spellname = "Lash of Pain";
    break;
  case 21990:
    spellname = "Tornado";
    break;
  case 21991:
    spellname = "Talisman of Binding";
    break;
  case 21992:
    spellname = "Thunderfury";
    break;
  case 22007:
    spellname = "Netherwind Focus";
    break;
  case 22008:
    spellname = "Netherwind Focus";
    break;
  case 22009:
    spellname = "Greater Heal";
    break;
  case 22010:
    spellname = "Greater Heal Renew";
    break;
  case 22011:
    spellname = "Spirit Heal Channel";
    break;
  case 22012:
    spellname = "Spirit Heal";
    break;
  case 22027:
    spellname = "Remove Insignia";
    break;
  case 22047:
    spellname = "Testing Totem";
    break;
  case 22048:
    spellname = "Attack";
    break;
  case 22051:
    spellname = "QAEnchant Bracer +9 Strength";
    break;
  case 22052:
    spellname = "QAEnchant Bracer +9 Stamina";
    break;
  case 22053:
    spellname = "QAEnchant Bracer +9 Spirit";
    break;
  case 22054:
    spellname = "QAEnchant Bracer +7 Intellect";
    break;
  case 22067:
    spellname = "Reflection";
    break;
  case 22068:
    spellname = "rfo";
    break;
  case 22088:
    spellname = "Fireball";
    break;
  case 22089:
    spellname = "QAEnchant Chest +100 Health";
    break;
  case 22090:
    spellname = "QAEnchant Chest +100 Mana";
    break;
  case 22091:
    spellname = "QAEnchant Cloak +5 Resistances";
    break;
  case 22092:
    spellname = "QAEnchant Cloak +70 Armor";
    break;
  case 22093:
    spellname = "QAE 285 to spell damage";
    break;
  case 22094:
    spellname = "QAEnchant 2H Weapon +9 Damage";
    break;
  case 22095:
    spellname = "QAEnchant Weapon +5 Damage";
    break;
  case 22098:
    spellname = "QAEnchant Shield +7 Stamina";
    break;
  case 22099:
    spellname = "QAEnchant Shield +8 Frost Resistance";
    break;
  case 22100:
    spellname = "QAEnchant Shield +9 Spirit";
    break;
  case 22101:
    spellname = "QAEnchant Boots +7 Agility";
    break;
  case 22102:
    spellname = "QAEnchant Boots +5 Spirit";
    break;
  case 22103:
    spellname = "QAEnchant Boots +7 Stamina";
    break;
  case 22104:
    spellname = "QAEnchant Gloves +7 Strength";
    break;
  case 22105:
    spellname = "QAEnchant Gloves +7 Agility";
    break;
  case 22106:
    spellname = "QAEnchant Gloves +1% Haste";
    break;
  case 22108:
    spellname = "Conjure Frostwolf Rank 1 Insignia DND";
    break;
  case 22109:
    spellname = "Conjure Frostwolf Rank 2 Insignia DND";
    break;
  case 22110:
    spellname = "Conjure Frostwolf Rank 3 Insignia DND";
    break;
  case 22111:
    spellname = "Conjure Frostwolf Rank 4 Insignia DND";
    break;
  case 22112:
    spellname = "Conjure Frostwolf Rank 5 Insignia DND";
    break;
  case 22113:
    spellname = "Conjure Frostwolf Rank 6 Insignia DND";
    break;
  case 22114:
    spellname = "Conjure Stormpike Rank 1 Insignia DND";
    break;
  case 22115:
    spellname = "Conjure Stormpike Rank 2 Insignia DND";
    break;
  case 22116:
    spellname = "Conjure Stormpike Rank 3 Insignia DND";
    break;
  case 22117:
    spellname = "Conjure Stormpike Rank 4 Insignia DND";
    break;
  case 22118:
    spellname = "Conjure Stormpike Rank 5 Insignia DND";
    break;
  case 22119:
    spellname = "Conjure Stormpike Rank 6 Insignia DND";
    break;
  case 22120:
    spellname = "Charge";
    break;
  case 22121:
    spellname = "Shoot";
    break;
  case 22127:
    spellname = "Entangling Roots";
    break;
  case 22128:
    spellname = "Thorns";
    break;
  case 22147:
    spellname = "CHECKMEOUT";
    break;
  case 22167:
    spellname = "Heal";
    break;
  case 22168:
    spellname = "Renew";
    break;
  case 22187:
    spellname = "Power Word: Shield";
    break;
  case 22188:
    spellname = "Increased Crossbow";
    break;
  case 22189:
    spellname = "Mana Burn";
    break;
  case 22191:
    spellname = "Heated Ground";
    break;
  case 22192:
    spellname = "Heated Ground";
    break;
  case 22193:
    spellname = "Heated Ground";
    break;
  case 22194:
    spellname = "Heated Ground";
    break;
  case 22195:
    spellname = "Heated Ground";
    break;
  case 22196:
    spellname = "Heated Ground";
    break;
  case 22197:
    spellname = "Heated Ground";
    break;
  case 22198:
    spellname = "Heated Ground";
    break;
  case 22199:
    spellname = "Heated Ground";
    break;
  case 22200:
    spellname = "Heated Ground";
    break;
  case 22201:
    spellname = "Heated Ground";
    break;
  case 22202:
    spellname = "Heated Ground";
    break;
  case 22203:
    spellname = "Blue Beam";
    break;
  case 22205:
    spellname = "Trigger Blue Beam";
    break;
  case 22206:
    spellname = "Moonfire";
    break;
  case 22207:
    spellname = "Summon Drakefire Amulet DND";
    break;
  case 22227:
    spellname = "Create Dartol's Rod";
    break;
  case 22247:
    spellname = "Suppression Aura";
    break;
  case 22267:
    spellname = "Breath";
    break;
  case 22268:
    spellname = "Breath";
    break;
  case 22270:
    spellname = "Divine Intervention (NEWTEST)";
    break;
  case 22271:
    spellname = "Arcane Explosion";
    break;
  case 22272:
    spellname = "Arcane Missiles";
    break;
  case 22273:
    spellname = "Arcane Missiles";
    break;
  case 22274:
    spellname = "Greater Polymorph";
    break;
  case 22275:
    spellname = "Flamestrike";
    break;
  case 22277:
    spellname = "Elemental Shield";
    break;
  case 22278:
    spellname = "Elemental Shield";
    break;
  case 22279:
    spellname = "Elemental Shield";
    break;
  case 22280:
    spellname = "Elemental Shield";
    break;
  case 22281:
    spellname = "Elemental Shield";
    break;
  case 22284:
    spellname = "Brood Power: Red";
    break;
  case 22289:
    spellname = "Brood Power: Green";
    break;
  case 22290:
    spellname = "Brood Power: Blue";
    break;
  case 22291:
    spellname = "Brood Power: Bronze";
    break;
  case 22311:
    spellname = "Brood Power: Bronze";
    break;
  case 22312:
    spellname = "Brood Power: Black";
    break;
  case 22313:
    spellname = "Purple Hands";
    break;
  case 22331:
    spellname = "Rugged Leather";
    break;
  case 22334:
    spellname = "Bomb";
    break;
  case 22335:
    spellname = "Bottle of Poison";
    break;
  case 22336:
    spellname = "Shadow Bolt";
    break;
  case 22351:
    spellname = "Thorns";
    break;
  case 22355:
    spellname = "Chain Lightning";
    break;
  case 22356:
    spellname = "Slow";
    break;
  case 22357:
    spellname = "Icebolt";
    break;
  case 22371:
    spellname = "Curse of Impotence";
    break;
  case 22372:
    spellname = "Demon Portal";
    break;
  case 22373:
    spellname = "Regrowth";
    break;
  case 22392:
    spellname = "Summon Enraged Felguard";
    break;
  case 22393:
    spellname = "Enraged Felguard Spawn";
    break;
  case 22411:
    spellname = "Shoot";
    break;
  case 22412:
    spellname = "Virulent Poison";
    break;
  case 22413:
    spellname = "Virulent Poison Proc";
    break;
  case 22414:
    spellname = "Lightning Bolt";
    break;
  case 22415:
    spellname = "Entangling Roots";
    break;
  case 22416:
    spellname = "Backstab";
    break;
  case 22417:
    spellname = "Shadow Shield";
    break;
  case 22418:
    spellname = "Chaotic Focus";
    break;
  case 22419:
    spellname = "Riptide";
    break;
  case 22420:
    spellname = "Submersion";
    break;
  case 22421:
    spellname = "Massive Geyser";
    break;
  case 22422:
    spellname = "Water";
    break;
  case 22423:
    spellname = "Flame Shock";
    break;
  case 22424:
    spellname = "Blast Wave";
    break;
  case 22425:
    spellname = "Fireball Volley";
    break;
  case 22426:
    spellname = "Crush Armor";
    break;
  case 22427:
    spellname = "Concussion Blow";
    break;
  case 22428:
    spellname = "Frenzy";
    break;
  case 22429:
    spellname = "Tag: Bubbles";
    break;
  case 22431:
    spellname = "Tag: Bubbles";
    break;
  case 22433:
    spellname = "Flame Buffet";
    break;
  case 22436:
    spellname = "Aura of Flames";
    break;
  case 22438:
    spellname = "Mark of Detonation";
    break;
  case 22439:
    spellname = "Mark of Detonation";
    break;
  case 22440:
    spellname = "Commanding Shout";
    break;
  case 22441:
    spellname = "Growing Flames";
    break;
  case 22442:
    spellname = "Growing Flames";
    break;
  case 22458:
    spellname = "Healing Circle";
    break;
  case 22459:
    spellname = "Summon RaidMageArcaneFR";
    break;
  case 22460:
    spellname = "Arcane Explosion";
    break;
  case 22478:
    spellname = "Intense Pain";
    break;
  case 22479:
    spellname = "Frost Breath";
    break;
  case 22480:
    spellname = "Tender Wolf Steak";
    break;
  case 22482:
    spellname = "Blade Flurry";
    break;
  case 22498:
    spellname = "Land Mine Impact";
    break;
  case 22518:
    spellname = "Glowy (Red)";
    break;
  case 22519:
    spellname = "Ice Nova";
    break;
  case 22538:
    spellname = "Nef Trans";
    break;
  case 22539:
    spellname = "Shadow Flame";
    break;
  case 22558:
    spellname = "Brood Power: Red";
    break;
  case 22559:
    spellname = "Brood Power: Blue";
    break;
  case 22560:
    spellname = "Brood Power: Black";
    break;
  case 22561:
    spellname = "Brood Power: Green";
    break;
  case 22562:
    spellname = "Fill Amethyst Phial";
    break;
  case 22563:
    spellname = "Recall";
    break;
  case 22564:
    spellname = "Recall";
    break;
  case 22565:
    spellname = "Create Bloodpetal Zapper";
    break;
  case 22566:
    spellname = "Hex";
    break;
  case 22567:
    spellname = "Summon Ar'lia";
    break;
  case 22568:
    spellname = "Ferocious Bite";
    break;
  case 22570:
    spellname = "Maim";
    break;
  case 22572:
    spellname = "Bruising Blow";
    break;
  case 22573:
    spellname = "Furor's Anti-Zerg Cantrip";
    break;
  case 22574:
    spellname = "Dark Strike";
    break;
  case 22575:
    spellname = "Shadow Shock";
    break;
  case 22576:
    spellname = "Glowy (Blue)";
    break;
  case 22577:
    spellname = "Glowy (Green)";
    break;
  case 22578:
    spellname = "Glowy (Black)";
    break;
  case 22579:
    spellname = "Glowy (Orange)";
    break;
  case 22580:
    spellname = "Glowy (Yellow)";
    break;
  case 22581:
    spellname = "Glowy (Purple)";
    break;
  case 22582:
    spellname = "Frost Shock";
    break;
  case 22586:
    spellname = "5% speed bonus";
    break;
  case 22587:
    spellname = "8% speed bonus";
    break;
  case 22588:
    spellname = "10% speed bonus";
    break;
  case 22589:
    spellname = "13% speed bonus";
    break;
  case 22590:
    spellname = "15% speed bonus";
    break;
  case 22591:
    spellname = "Strike";
    break;
  case 22592:
    spellname = "Knockdown";
    break;
  case 22593:
    spellname = "Flame Mantle of the Dawn";
    break;
  case 22594:
    spellname = "Frost Mantle of the Dawn";
    break;
  case 22595:
    spellname = "Poison Shock";
    break;
  case 22596:
    spellname = "Shadow Mantle of the Dawn";
    break;
  case 22597:
    spellname = "Nature Mantle of the Dawn";
    break;
  case 22598:
    spellname = "Arcane Mantle of the Dawn";
    break;
  case 22599:
    spellname = "Chromatic Mantle of the Dawn";
    break;
  case 22600:
    spellname = "Force Reactive Disk";
    break;
  case 22618:
    spellname = "Force Reactive Disk";
    break;
  case 22619:
    spellname = "Force Reactive Disk";
    break;
  case 22620:
    spellname = "Force Reactive Disk";
    break;
  case 22638:
    spellname = "Poison Shock";
    break;
  case 22639:
    spellname = "Eskhandar's Rake";
    break;
  case 22640:
    spellname = "Eskhandar's Rage";
    break;
  case 22641:
    spellname = "Reckless Charge";
    break;
  case 22642:
    spellname = "Brood Power: Bronze";
    break;
  case 22643:
    spellname = "Frostbolt Volley";
    break;
  case 22644:
    spellname = "Blood Leech";
    break;
  case 22645:
    spellname = "Frost Nova";
    break;
  case 22646:
    spellname = "Reckless Charge";
    break;
  case 22648:
    spellname = "Call of Eskhandar";
    break;
  case 22649:
    spellname = "Summon Eskhandar";
    break;
  case 22650:
    spellname = "Ghost Visual";
    break;
  case 22651:
    spellname = "Sacrifice";
    break;
  case 22654:
    spellname = "Spawn Black Drakonid";
    break;
  case 22655:
    spellname = "Spawn Red Drakonid";
    break;
  case 22656:
    spellname = "Spawn Green Drakonid";
    break;
  case 22657:
    spellname = "Spawn Bronze Drakonid";
    break;
  case 22658:
    spellname = "Spawn Blue Drakonid";
    break;
  case 22659:
    spellname = "Spawn Drakonid";
    break;
  case 22660:
    spellname = "Dire Wolf Form";
    break;
  case 22661:
    spellname = "Enervate";
    break;
  case 22662:
    spellname = "Wither";
    break;
  case 22663:
    spellname = "Nefarian's Barrier";
    break;
  case 22664:
    spellname = "Shadowblink";
    break;
  case 22665:
    spellname = "Shadow Bolt Volley";
    break;
  case 22666:
    spellname = "Silence";
    break;
  case 22667:
    spellname = "Shadow Command";
    break;
  case 22668:
    spellname = "Shadowblink";
    break;
  case 22669:
    spellname = "Shadowblink";
    break;
  case 22670:
    spellname = "Shadowblink";
    break;
  case 22671:
    spellname = "Shadowblink";
    break;
  case 22672:
    spellname = "Shadowblink";
    break;
  case 22673:
    spellname = "Shadowblink";
    break;
  case 22674:
    spellname = "Shadowblink";
    break;
  case 22675:
    spellname = "Shadowblink";
    break;
  case 22676:
    spellname = "Shadowblink";
    break;
  case 22677:
    spellname = "Shadow Bolt";
    break;
  case 22678:
    spellname = "Fear";
    break;
  case 22680:
    spellname = "Spawn Chromatic Drakonid";
    break;
  case 22681:
    spellname = "Shadowblink";
    break;
  case 22682:
    spellname = "Shadow Flame";
    break;
  case 22683:
    spellname = "Onyxia Scale Cloak";
    break;
  case 22684:
    spellname = "Onyxia Scale Cloak";
    break;
  case 22685:
    spellname = "Defense TEST";
    break;
  case 22686:
    spellname = "Bellowing Roar";
    break;
  case 22687:
    spellname = "Veil of Shadow";
    break;
  case 22688:
    spellname = "Tree Form";
    break;
  case 22689:
    spellname = "Mangle";
    break;
  case 22690:
    spellname = "Test Charge";
    break;
  case 22691:
    spellname = "Disarm";
    break;
  case 22692:
    spellname = "Petrify";
    break;
  case 22693:
    spellname = "Harden Skin";
    break;
  case 22694:
    spellname = "Apo Mekhanes Theos";
    break;
  case 22695:
    spellname = "Regrowth";
    break;
  case 22696:
    spellname = "Thorns";
    break;
  case 22699:
    spellname = "Inferno";
    break;
  case 22700:
    spellname = "Field Repair Bot 74A";
    break;
  case 22703:
    spellname = "Inferno Effect";
    break;
  case 22704:
    spellname = "Field Repair Bot 74A";
    break;
  case 22709:
    spellname = "Void Bolt";
    break;
  case 22710:
    spellname = "Enlarge";
    break;
  case 22711:
    spellname = "Shadowskin Gloves";
    break;
  case 22713:
    spellname = "Flame Buffet";
    break;
  case 22714:
    spellname = "Summon Hydroling";
    break;
  case 22715:
    spellname = "Hydrojet";
    break;
  case 22717:
    spellname = "Black War Steed";
    break;
  case 22718:
    spellname = "Black War Kodo";
    break;
  case 22719:
    spellname = "Black Battlestrider";
    break;
  case 22720:
    spellname = "Black War Ram";
    break;
  case 22721:
    spellname = "Black War Raptor";
    break;
  case 22722:
    spellname = "Red Skeletal Warhorse";
    break;
  case 22723:
    spellname = "Black War Tiger";
    break;
  case 22724:
    spellname = "Black War Wolf";
    break;
  case 22725:
    spellname = "Defense Rating +5";
    break;
  case 22727:
    spellname = "Core Armor Kit";
    break;
  case 22729:
    spellname = "Rejuvenation Potion";
    break;
  case 22730:
    spellname = "Increased Intellect";
    break;
  case 22731:
    spellname = "Food";
    break;
  case 22732:
    spellname = "Major Rejuvenation Potion";
    break;
  case 22734:
    spellname = "Drink";
    break;
  case 22735:
    spellname = "Spirit of Runn Tum";
    break;
  case 22736:
    spellname = "Gordok Ogre Suit";
    break;
  case 22737:
    spellname = "Gordok Ogre Suit";
    break;
  case 22738:
    spellname = "Intercept Cooldown Reduction";
    break;
  case 22739:
    spellname = "Goblin Dragon Gun";
    break;
  case 22741:
    spellname = "Goblin Dragon Gun";
    break;
  case 22742:
    spellname = "Super Shrink Ray";
    break;
  case 22743:
    spellname = "Ribbon of Souls";
    break;
  case 22744:
    spellname = "Chains of Ice";
    break;
  case 22745:
    spellname = "Chains of Ice";
    break;
  case 22746:
    spellname = "Cone of Cold";
    break;
  case 22747:
    spellname = "Increase Spell Dam 30";
    break;
  case 22748:
    spellname = "Increase Healing 55";
    break;
  case 22749:
    spellname = "Enchant Weapon - Spell Power";
    break;
  case 22750:
    spellname = "Enchant Weapon - Healing Power";
    break;
  case 22751:
    spellname = "Fury of the Frostwolf";
    break;
  case 22752:
    spellname = "Fevered Exhaustion";
    break;
  case 22756:
    spellname = "Sharpen Weapon - Critical";
    break;
  case 22757:
    spellname = "Elemental Sharpening Stone";
    break;
  case 22759:
    spellname = "Flarecore Wraps";
    break;
  case 22761:
    spellname = "Runn Tum Tuber Surprise";
    break;
  case 22766:
    spellname = "Sneak";
    break;
  case 22767:
    spellname = "Increased Root Resist 01";
    break;
  case 22778:
    spellname = "Hamstring Rage Reduction";
    break;
  case 22779:
    spellname = "Biznicks 247x128 Accurascope";
    break;
  case 22780:
    spellname = "Ranged Hit Bonus +30";
    break;
  case 22781:
    spellname = "Thornling";
    break;
  case 22782:
    spellname = "Mage Armor";
    break;
  case 22783:
    spellname = "Mage Armor";
    break;
  case 22786:
    spellname = "Irritating Spores";
    break;
  case 22789:
    spellname = "Gordok Green Grog";
    break;
  case 22790:
    spellname = "Kreeg's Stout Beatdown";
    break;
  case 22792:
    spellname = "Plant Thornling";
    break;
  case 22793:
    spellname = "Biznicks 247x128 Accurascope";
    break;
  case 22795:
    spellname = "Core Marksman Rifle";
    break;
  case 22797:
    spellname = "Force Reactive Disk";
    break;
  case 22799:
    spellname = "King of the Gordok";
    break;
  case 22800:
    spellname = "Entangling Roots";
    break;
  case 22801:
    spellname = "Ghost Wolf Speed";
    break;
  case 22802:
    spellname = "Choking Spores";
    break;
  case 22804:
    spellname = "Shaman Shock Crit Bonus";
    break;
  case 22805:
    spellname = "r-h";
    break;
  case 22806:
    spellname = "r-h";
    break;
  case 22807:
    spellname = "Greater Water Breathing";
    break;
  case 22808:
    spellname = "Elixir of Greater Water Breathing";
    break;
  case 22810:
    spellname = "Opening - No Text";
    break;
  case 22811:
    spellname = "Increased Crossbow";
    break;
  case 22812:
    spellname = "Barkskin";
    break;
  case 22813:
    spellname = "Gordok Ogre Suit";
    break;
  case 22814:
    spellname = "Gordok Ogre Suit";
    break;
  case 22815:
    spellname = "Gordok Ogre Suit";
    break;
  case 22816:
    spellname = "Gordok Ogre Suit";
    break;
  case 22817:
    spellname = "Fengus' Ferocity";
    break;
  case 22818:
    spellname = "Mol'dar's Moxie";
    break;
  case 22820:
    spellname = "Slip'kik's Savvy";
    break;
  case 22822:
    spellname = "Starshards";
    break;
  case 22823:
    spellname = "Starshards";
    break;
  case 22825:
    spellname = "Summon Cadaverous Worm";
    break;
  case 22827:
    spellname = "Ferocious Bite";
    break;
  case 22828:
    spellname = "Ferocious Bite";
    break;
  case 22829:
    spellname = "Ferocious Bite";
    break;
  case 22833:
    spellname = "Booze Spit";
    break;
  case 22835:
    spellname = "Drunken Rage";
    break;
  case 22836:
    spellname = "Elemental Slaying 36";
    break;
  case 22838:
    spellname = "Alterac Ram Aura Dummy Dispel DND";
    break;
  case 22840:
    spellname = "Arcanum of Rapidity";
    break;
  case 22842:
    spellname = "Frenzied Regeneration";
    break;
  case 22844:
    spellname = "Arcanum of Focus";
    break;
  case 22845:
    spellname = "Frenzied Regeneration";
    break;
  case 22846:
    spellname = "Arcanum of Protection";
    break;
  case 22848:
    spellname = "Force Reactive Disk Visual";
    break;
  case 22849:
    spellname = "Increase Spell Dam Undead 35";
    break;
  case 22850:
    spellname = "Sanctuary";
    break;
  case 22852:
    spellname = "Block Value 23";
    break;
  case 22854:
    spellname = "Increased Hunter Pet Damage";
    break;
  case 22855:
    spellname = "Increased Imp Firebolt Damage";
    break;
  case 22856:
    spellname = "Ice Lock";
    break;
  case 22857:
    spellname = "Retaliation";
    break;
  case 22858:
    spellname = "Retaliation";
    break;
  case 22859:
    spellname = "Mortal Cleave";
    break;
  case 22860:
    spellname = "Call Reavers";
    break;
  case 22863:
    spellname = "Speed";
    break;
  case 22864:
    spellname = "Field Repair Bot 74A";
    break;
  case 22865:
    spellname = "Summon Doomguard";
    break;
  case 22866:
    spellname = "Belt of the Archmage";
    break;
  case 22867:
    spellname = "Felcloth Gloves";
    break;
  case 22868:
    spellname = "Inferno Gloves";
    break;
  case 22869:
    spellname = "Mooncloth Gloves";
    break;
  case 22870:
    spellname = "Cloak of Warding";
    break;
  case 22876:
    spellname = "Summon Netherwalker";
    break;
  case 22877:
    spellname = "Attunement to the Core";
    break;
  case 22878:
    spellname = "Shadow Bolt Volley";
    break;
  case 22883:
    spellname = "Heal";
    break;
  case 22884:
    spellname = "Psychic Scream";
    break;
  case 22885:
    spellname = "Earth Shock";
    break;
  case 22886:
    spellname = "Berserker Charge";
    break;
  case 22887:
    spellname = "Throw";
    break;
  case 22888:
    spellname = "Rallying Cry of the Dragonslayer";
    break;
  case 22890:
    spellname = "Undo Crowd Control";
    break;
  case 22891:
    spellname = "Undo Crowd Control Rogue";
    break;
  case 22893:
    spellname = "Arcane Blast";
    break;
  case 22895:
    spellname = "Frenzied Regeneration";
    break;
  case 22896:
    spellname = "Frenzied Regeneration";
    break;
  case 22899:
    spellname = "Eye of Immol'thar";
    break;
  case 22900:
    spellname = "Body Switch";
    break;
  case 22901:
    spellname = "Body Switch";
    break;
  case 22902:
    spellname = "Mooncloth Robe";
    break;
  case 22905:
    spellname = "Place Unfired Blade";
    break;
  case 22906:
    spellname = "Plunging Blade into Onyxia";
    break;
  case 22907:
    spellname = "Shoot";
    break;
  case 22908:
    spellname = "Volley";
    break;
  case 22909:
    spellname = "Eye of Immol'thar";
    break;
  case 22910:
    spellname = "Immolation Trap";
    break;
  case 22911:
    spellname = "Charge";
    break;
  case 22912:
    spellname = "Block Value 18";
    break;
  case 22914:
    spellname = "Concussive Shot";
    break;
  case 22915:
    spellname = "Improved Concussive Shot";
    break;
  case 22916:
    spellname = "Uppercut";
    break;
  case 22917:
    spellname = "Shadowform";
    break;
  case 22919:
    spellname = "Mind Flay";
    break;
  case 22920:
    spellname = "Arcane Blast";
    break;
  case 22921:
    spellname = "Girdle of Insight";
    break;
  case 22922:
    spellname = "Mongoose Boots";
    break;
  case 22923:
    spellname = "Swift Flight Bracers";
    break;
  case 22924:
    spellname = "Grasping Vines";
    break;
  case 22926:
    spellname = "Chromatic Cloak";
    break;
  case 22927:
    spellname = "Hide of the Wild";
    break;
  case 22928:
    spellname = "Shifting Cloak";
    break;
  case 22935:
    spellname = "Planted";
    break;
  case 22936:
    spellname = "Mana Burn";
    break;
  case 22937:
    spellname = "Poison Bolt";
    break;
  case 22938:
    spellname = "Arcane Explosion";
    break;
  case 22939:
    spellname = "Summon Mana Bursts";
    break;
  case 22940:
    spellname = "Arcane Blast";
    break;
  case 22945:
    spellname = "Forked Lightning";
    break;
  case 22946:
    spellname = "Lightning Cloud";
    break;
  case 22947:
    spellname = "Mana Burn";
    break;
  case 22948:
    spellname = "Spore Cloud";
    break;
  case 22949:
    spellname = "Seal Felvine Shard";
    break;
  case 22950:
    spellname = "Portal of Immol'thar";
    break;
  case 22951:
    spellname = "Summon Player";
    break;
  case 22959:
    spellname = "Fire Vulnerability";
    break;
  case 22967:
    spellname = "Smelt Elementium";
    break;
  case 22968:
    spellname = "Smelt Elementium";
    break;
  case 22969:
    spellname = "Quest - Kodo Fade Out (DND)";
    break;
  case 22971:
    spellname = "NefTest";
    break;
  case 22972:
    spellname = "Shadow Flame";
    break;
  case 22975:
    spellname = "Shadow Flame";
    break;
  case 22976:
    spellname = "Shadow Flame";
    break;
  case 22977:
    spellname = "Shadow Flame";
    break;
  case 22978:
    spellname = "Shadow Flame";
    break;
  case 22979:
    spellname = "Shadow Flame";
    break;
  case 22980:
    spellname = "Shadow Flame";
    break;
  case 22981:
    spellname = "Shadow Flame";
    break;
  case 22982:
    spellname = "Shadow Flame";
    break;
  case 22983:
    spellname = "Shadow Flame";
    break;
  case 22984:
    spellname = "Shadow Flame";
    break;
  case 22985:
    spellname = "Shadow Flame";
    break;
  case 22986:
    spellname = "Shadow Flame";
    break;
  case 22988:
    spellname = "Illidan's Fury";
    break;
  case 22989:
    spellname = "The Breaking";
    break;
  case 22990:
    spellname = "The Forming";
    break;
  case 22991:
    spellname = "The Breaking Left Blade DND";
    break;
  case 22992:
    spellname = "Shadow Flame";
    break;
  case 22993:
    spellname = "Shadow Flame";
    break;
  case 22994:
    spellname = "Entangle";
    break;
  case 22995:
    spellname = "Summon";
    break;
  case 22996:
    spellname = "Battle Standard";
    break;
  case 22997:
    spellname = "Plague";
    break;
  case 22998:
    spellname = "Battle Standard";
    break;
  case 22999:
    spellname = "Defibrillate";
    break;
  case 23000:
    spellname = "Ez-Thro Dynamite";
    break;
  case 23001:
    spellname = "Ez-Thro Dynamite Backfire";
    break;
  case 23002:
    spellname = "Alarm-o-bot";
    break;
  case 23003:
    spellname = "Alarm-o-bot";
    break;
  case 23004:
    spellname = "Summon Alarm-o-Bot";
    break;
  case 23005:
    spellname = "Battle Standard";
    break;
  case 23006:
    spellname = "Battle Standard";
    break;
  case 23008:
    spellname = "Powerful Seaforium Charge";
    break;
  case 23009:
    spellname = "Tendrils of Air";
    break;
  case 23010:
    spellname = "Tendrils of Air";
    break;
  case 23011:
    spellname = "Tears of the Wind Seeker";
    break;
  case 23012:
    spellname = "Summon Orphan";
    break;
  case 23013:
    spellname = "Summon Orphan";
    break;
  case 23014:
    spellname = "Possess";
    break;
  case 23015:
    spellname = "Crystal Prison";
    break;
  case 23016:
    spellname = "Lash of Submission";
    break;
  case 23017:
    spellname = "Arcane Channeling";
    break;
  case 23018:
    spellname = "Use Dragon Orb";
    break;
  case 23019:
    spellname = "Crystal Prison Dummy DND";
    break;
  case 23020:
    spellname = "Crystal Imprisonment";
    break;
  case 23023:
    spellname = "Conflagration";
    break;
  case 23024:
    spellname = "Fireball";
    break;
  case 23025:
    spellname = "Blink Cooldown Reduction";
    break;
  case 23028:
    spellname = "Arcane Brilliance";
    break;
  case 23033:
    spellname = "Battle Standard";
    break;
  case 23034:
    spellname = "Battle Standard";
    break;
  case 23035:
    spellname = "Battle Standard";
    break;
  case 23036:
    spellname = "Battle Standard";
    break;
  case 23037:
    spellname = "Mana Shield Absorb Increase";
    break;
  case 23038:
    spellname = "Flame Shock";
    break;
  case 23039:
    spellname = "Blast Wave";
    break;
  case 23040:
    spellname = "Warming Flames";
    break;
  case 23041:
    spellname = "Call Anathema";
    break;
  case 23042:
    spellname = "Call Benediction";
    break;
  case 23043:
    spellname = "Mind Blast Cast Pushback Reduction";
    break;
  case 23044:
    spellname = "Psychic Scream Duration Increase";
    break;
  case 23046:
    spellname = "Searing Pain Cast Pushback Reduction";
    break;
  case 23047:
    spellname = "Fear Cast Time Reduction";
    break;
  case 23048:
    spellname = "Gouge Cooldown Reduction";
    break;
  case 23049:
    spellname = "Sprint Duration Increase";
    break;
  case 23050:
    spellname = "Mithril Mechanical Dragonling";
    break;
  case 23051:
    spellname = "Mechanical Dragonling";
    break;
  case 23052:
    spellname = "Arcanite Dragonling";
    break;
  case 23053:
    spellname = "Infernal Conjure Dummy DND";
    break;
  case 23054:
    spellname = "Igniting Kroshius";
    break;
  case 23055:
    spellname = "Defibrillated!";
    break;
  case 23056:
    spellname = "Call Infernal Destroyer";
    break;
  case 23058:
    spellname = "Fix Ritual Bell (DND)";
    break;
  case 23059:
    spellname = "Create Thorium Brotherhood Contract DND";
    break;
  case 23060:
    spellname = "Battle Squawk";
    break;
  case 23061:
    spellname = "Fix Ritual Node";
    break;
  case 23062:
    spellname = "Fix Ritual Candle (DND)";
    break;
  case 23063:
    spellname = "Dense Dynamite";
    break;
  case 23064:
    spellname = "Recombobulate";
    break;
  case 23065:
    spellname = "Throw Rock";
    break;
  case 23066:
    spellname = "Red Firework";
    break;
  case 23067:
    spellname = "Blue Firework";
    break;
  case 23068:
    spellname = "Green Firework";
    break;
  case 23069:
    spellname = "EZ-Thro Dynamite II";
    break;
  case 23070:
    spellname = "Dense Dynamite";
    break;
  case 23071:
    spellname = "Truesilver Transformer";
    break;
  case 23072:
    spellname = "Seething Plague";
    break;
  case 23073:
    spellname = "Shoot";
    break;
  case 23074:
    spellname = "Arcanite Dragonling";
    break;
  case 23075:
    spellname = "Mithril Mechanical Dragonling";
    break;
  case 23076:
    spellname = "Mechanical Dragonling";
    break;
  case 23077:
    spellname = "Gyrofreeze Ice Reflector";
    break;
  case 23078:
    spellname = "Goblin Jumper Cables XL";
    break;
  case 23079:
    spellname = "Major Recombobulator";
    break;
  case 23080:
    spellname = "Powerful Seaforium Charge";
    break;
  case 23081:
    spellname = "Hyper-Radiant Flame Reflector";
    break;
  case 23082:
    spellname = "Ultra-Flash Shadow Reflector";
    break;
  case 23096:
    spellname = "Alarm-O-Bot";
    break;
  case 23097:
    spellname = "Fire Reflector";
    break;
  case 23099:
    spellname = "Dash";
    break;
  case 23100:
    spellname = "Dash";
    break;
  case 23101:
    spellname = "Eye of Divinity";
    break;
  case 23102:
    spellname = "Frostbolt";
    break;
  case 23103:
    spellname = "Enveloping Winds";
    break;
  case 23104:
    spellname = "Shock";
    break;
  case 23105:
    spellname = "Lightning Cloud";
    break;
  case 23106:
    spellname = "Chain Lightning";
    break;
  case 23107:
    spellname = "Enter the Light DND";
    break;
  case 23108:
    spellname = "Blessing of Nordrassil";
    break;
  case 23109:
    spellname = "Dash";
    break;
  case 23110:
    spellname = "Dash";
    break;
  case 23111:
    spellname = "Dash";
    break;
  case 23112:
    spellname = "Dash";
    break;
  case 23113:
    spellname = "Blast Wave";
    break;
  case 23114:
    spellname = "Earth Shock";
    break;
  case 23115:
    spellname = "Frost Shock";
    break;
  case 23116:
    spellname = "Vertex Color: Light Blue";
    break;
  case 23117:
    spellname = "Ritual Bell Aura";
    break;
  case 23120:
    spellname = "Black March Blessing";
    break;
  case 23122:
    spellname = "Jaina's Autograph";
    break;
  case 23123:
    spellname = "Cairne's Hoofprint";
    break;
  case 23124:
    spellname = "Human Orphan Whistle";
    break;
  case 23125:
    spellname = "Orcish Orphan Whistle";
    break;
  case 23126:
    spellname = "World Enlarger";
    break;
  case 23127:
    spellname = "Death's Door";
    break;
  case 23128:
    spellname = "Frenzy";
    break;
  case 23129:
    spellname = "World Enlarger";
    break;
  case 23131:
    spellname = "Frost Reflector";
    break;
  case 23132:
    spellname = "Shadow Reflector";
    break;
  case 23133:
    spellname = "Gnomish Battle Chicken";
    break;
  case 23134:
    spellname = "Goblin Bomb";
    break;
  case 23135:
    spellname = "Heavy Leather Ball";
    break;
  case 23136:
    spellname = "Release J'eevee";
    break;
  case 23138:
    spellname = "Gate of Shazzrah";
    break;
  case 23139:
    spellname = "Gate of Shazzrah";
    break;
  case 23140:
    spellname = "J'eevee summons object";
    break;
  case 23141:
    spellname = "QAEnchant Weapon Crusader";
    break;
  case 23142:
    spellname = "QAEnchant Weapon Icy Chill";
    break;
  case 23143:
    spellname = "QAEnchant Weapon Spell Power";
    break;
  case 23144:
    spellname = "QAEnchant Weapon Healing Power";
    break;
  case 23145:
    spellname = "Dive";
    break;
  case 23146:
    spellname = "Dive";
    break;
  case 23147:
    spellname = "Dive";
    break;
  case 23148:
    spellname = "Dive";
    break;
  case 23149:
    spellname = "Dive";
    break;
  case 23150:
    spellname = "Dive";
    break;
  case 23151:
    spellname = "Balance of Light and Shadow";
    break;
  case 23152:
    spellname = "Summon Xorothian Dreadsteed";
    break;
  case 23153:
    spellname = "Brood Affliction: Blue";
    break;
  case 23154:
    spellname = "Brood Affliction: Black";
    break;
  case 23155:
    spellname = "Brood Affliction: Red";
    break;
  case 23157:
    spellname = "Arcane Shot Mana Reduction";
    break;
  case 23158:
    spellname = "Concussive Shot Cooldown Reduction";
    break;
  case 23159:
    spellname = "Summon Dreadsteed Spirit (DND)";
    break;
  case 23160:
    spellname = "Teach Summon Dreadsteed";
    break;
  case 23161:
    spellname = "Summon Dreadsteed";
    break;
  case 23168:
    spellname = "Brood Affliction: Red";
    break;
  case 23169:
    spellname = "Brood Affliction: Green";
    break;
  case 23170:
    spellname = "Brood Affliction: Bronze";
    break;
  case 23171:
    spellname = "Time Stop";
    break;
  case 23172:
    spellname = "Block Value 10";
    break;
  case 23174:
    spellname = "Chromatic Mutation";
    break;
  case 23176:
    spellname = "Summon Pirate Booty (DND)";
    break;
  case 23179:
    spellname = "Taint of Shadow";
    break;
  case 23180:
    spellname = "Release Imp";
    break;
  case 23181:
    spellname = "Block Value 24";
    break;
  case 23182:
    spellname = "Mark of Frost";
    break;
  case 23184:
    spellname = "Mark of Frost";
    break;
  case 23186:
    spellname = "Aura of Frost";
    break;
  case 23187:
    spellname = "Frost Burn";
    break;
  case 23188:
    spellname = "trans";
    break;
  case 23189:
    spellname = "Frost Burn";
    break;
  case 23190:
    spellname = "Heavy Leather Ball";
    break;
  case 23192:
    spellname = "Forming Rhok'delar";
    break;
  case 23193:
    spellname = "Forming Lok'delar";
    break;
  case 23194:
    spellname = "Forming Rhok'delar";
    break;
  case 23196:
    spellname = "Quest Invisibility";
    break;
  case 23202:
    spellname = "Torch";
    break;
  case 23203:
    spellname = "Block Value 15";
    break;
  case 23204:
    spellname = "Place Scryer";
    break;
  case 23205:
    spellname = "Temptress' Kiss";
    break;
  case 23206:
    spellname = "Chain Lightning";
    break;
  case 23207:
    spellname = "Silence";
    break;
  case 23208:
    spellname = "Exorcise Spirits";
    break;
  case 23210:
    spellname = "Vitality";
    break;
  case 23212:
    spellname = "Increased Mana Regen";
    break;
  case 23213:
    spellname = "Increase Spell Dam 57";
    break;
  case 23214:
    spellname = "Summon Charger";
    break;
  case 23215:
    spellname = "Summon Charger";
    break;
  case 23217:
    spellname = "Stealth Detection";
    break;
  case 23218:
    spellname = "Feral Move Speed Increase";
    break;
  case 23219:
    spellname = "Swift Mistsaber";
    break;
  case 23220:
    spellname = "Swift Dawnsaber";
    break;
  case 23221:
    spellname = "Swift Frostsaber";
    break;
  case 23222:
    spellname = "Swift Yellow Mechanostrider";
    break;
  case 23223:
    spellname = "Swift White Mechanostrider";
    break;
  case 23224:
    spellname = "Veil of Shadow";
    break;
  case 23225:
    spellname = "Swift Green Mechanostrider";
    break;
  case 23226:
    spellname = "Ritual Candle Aura";
    break;
  case 23227:
    spellname = "Swift Palomino";
    break;
  case 23228:
    spellname = "Swift White Steed";
    break;
  case 23229:
    spellname = "Swift Brown Steed";
    break;
  case 23230:
    spellname = "Blood Fury";
    break;
  case 23231:
    spellname = "Binding Volume I";
    break;
  case 23232:
    spellname = "Binding Volume II";
    break;
  case 23233:
    spellname = "Binding Volume III";
    break;
  case 23235:
    spellname = "Battle Standard Spawn";
    break;
  case 23236:
    spellname = "Benediction";
    break;
  case 23237:
    spellname = "Anathema";
    break;
  case 23238:
    spellname = "Swift Brown Ram";
    break;
  case 23239:
    spellname = "Swift Gray Ram";
    break;
  case 23240:
    spellname = "Swift White Ram";
    break;
  case 23241:
    spellname = "Swift Blue Raptor";
    break;
  case 23242:
    spellname = "Swift Olive Raptor";
    break;
  case 23243:
    spellname = "Swift Orange Raptor";
    break;
  case 23244:
    spellname = "Corrupted Stamina";
    break;
  case 23245:
    spellname = "Corrupted Stamina Passive";
    break;
  case 23246:
    spellname = "Purple Skeletal Warhorse";
    break;
  case 23247:
    spellname = "Great White Kodo";
    break;
  case 23248:
    spellname = "Great Gray Kodo";
    break;
  case 23249:
    spellname = "Great Brown Kodo";
    break;
  case 23250:
    spellname = "Swift Brown Wolf";
    break;
  case 23251:
    spellname = "Swift Timber Wolf";
    break;
  case 23252:
    spellname = "Swift Gray Wolf";
    break;
  case 23254:
    spellname = "Redeeming the Soul";
    break;
  case 23256:
    spellname = "Deep Wounds";
    break;
  case 23257:
    spellname = "Demonic Frenzy";
    break;
  case 23260:
    spellname = "Entropic Sting";
    break;
  case 23261:
    spellname = "Summon Darkreaver's Fallen Charger";
    break;
  case 23262:
    spellname = "Demoralize";
    break;
  case 23264:
    spellname = "Increase Healing 106";
    break;
  case 23265:
    spellname = "Increase Shadow Dam 69";
    break;
  case 23266:
    spellname = "Fiery Aura";
    break;
  case 23267:
    spellname = "Firebolt";
    break;
  case 23268:
    spellname = "Shadow Word: Pain";
    break;
  case 23269:
    spellname = "Holy Blast";
    break;
  case 23271:
    spellname = "Ephemeral Power";
    break;
  case 23272:
    spellname = "Soul Flame";
    break;
  case 23274:
    spellname = "Immune Fear/Polymorph/Snare";
    break;
  case 23275:
    spellname = "Dreadful Fright";
    break;
  case 23276:
    spellname = "Immune Fear/Polymorph/Stun";
    break;
  case 23277:
    spellname = "Immune Charm/Fear/Stun";
    break;
  case 23278:
    spellname = "Shadow Scythe";
    break;
  case 23279:
    spellname = "Crippling Clip";
    break;
  case 23298:
    spellname = "Demonic Doom";
    break;
  case 23299:
    spellname = "Stinging Trauma";
    break;
  case 23300:
    spellname = "Seal of the Crusader Judgement Increase";
    break;
  case 23302:
    spellname = "Hammer of Justice Cooldown Reduction";
    break;
  case 23304:
    spellname = "Manna-Enriched Horse Feed";
    break;
  case 23308:
    spellname = "Incinerate";
    break;
  case 23309:
    spellname = "Incinerate";
    break;
  case 23310:
    spellname = "Time Lapse";
    break;
  case 23312:
    spellname = "Time Lapse";
    break;
  case 23313:
    spellname = "Corrosive Acid";
    break;
  case 23314:
    spellname = "Corrosive Acid";
    break;
  case 23315:
    spellname = "Ignite Flesh";
    break;
  case 23316:
    spellname = "Ignite Flesh";
    break;
  case 23327:
    spellname = "Trigger Trap";
    break;
  case 23328:
    spellname = "Trigger Trap";
    break;
  case 23331:
    spellname = "Blast Wave";
    break;
  case 23332:
    spellname = "trans2";
    break;
  case 23333:
    spellname = "Warsong Flag";
    break;
  case 23334:
    spellname = "Horde Flag Drop";
    break;
  case 23335:
    spellname = "Silverwing Flag";
    break;
  case 23336:
    spellname = "Alliance Flag Drop";
    break;
  case 23337:
    spellname = "Shoot";
    break;
  case 23338:
    spellname = "Swift Stormsaber";
    break;
  case 23339:
    spellname = "Wing Buffet";
    break;
  case 23340:
    spellname = "Shadow of Ebonroc";
    break;
  case 23341:
    spellname = "Flame Buffet";
    break;
  case 23342:
    spellname = "Frenzy";
    break;
  case 23354:
    spellname = "Feed Pet (Quest Test)";
    break;
  case 23355:
    spellname = "Feed Pet Effect (Quest Test)";
    break;
  case 23356:
    spellname = "Taming Lesson";
    break;
  case 23357:
    spellname = "Training Lesson";
    break;
  case 23359:
    spellname = "Transmogrify!";
    break;
  case 23360:
    spellname = "Trigger Trap2";
    break;
  case 23364:
    spellname = "Tail Lash";
    break;
  case 23365:
    spellname = "Dropped Weapon";
    break;
  case 23378:
    spellname = "Magma Splash";
    break;
  case 23379:
    spellname = "Magma Splash";
    break;
  case 23380:
    spellname = "Moonfire";
    break;
  case 23381:
    spellname = "Healing Touch";
    break;
  case 23382:
    spellname = "Knock Away";
    break;
  case 23389:
    spellname = "Alliance Flag Capture";
    break;
  case 23391:
    spellname = "Boulder";
    break;
  case 23392:
    spellname = "Boulder";
    break;
  case 23393:
    spellname = "Brood Affliction: Blue";
    break;
  case 23394:
    spellname = "Shadow of Ebonroc";
    break;
  case 23396:
    spellname = "Restoration";
    break;
  case 23397:
    spellname = "Berserk";
    break;
  case 23398:
    spellname = "Involuntary Transformation";
    break;
  case 23399:
    spellname = "Barbaric Bracers";
    break;
  case 23401:
    spellname = "Corrupted Healing";
    break;
  case 23402:
    spellname = "Corrupted Healing";
    break;
  case 23409:
    spellname = "Soft Landin'";
    break;
  case 23410:
    spellname = "Wild Magic";
    break;
  case 23411:
    spellname = "Fireball";
    break;
  case 23412:
    spellname = "Frostbolt";
    break;
  case 23413:
    spellname = "Arcane Explosion";
    break;
  case 23414:
    spellname = "Paralyze";
    break;
  case 23415:
    spellname = "Improved Blessing of Protection";
    break;
  case 23416:
    spellname = "Pillow Fight";
    break;
  case 23417:
    spellname = "Smother";
    break;
  case 23418:
    spellname = "Siphon Blessing";
    break;
  case 23419:
    spellname = "Corrupted Fire Nova Totem";
    break;
  case 23420:
    spellname = "Corrupted Stoneskin Totem";
    break;
  case 23422:
    spellname = "Corrupted Healing Stream Totem";
    break;
  case 23423:
    spellname = "Corrupted Windfury Totem";
    break;
  case 23425:
    spellname = "Corrupted Totems";
    break;
  case 23426:
    spellname = "Summon Infernals";
    break;
  case 23427:
    spellname = "Summon Infernals";
    break;
  case 23428:
    spellname = "Summon Albino Snapjaw";
    break;
  case 23429:
    spellname = "Summon Loggerhead Snapjaw";
    break;
  case 23430:
    spellname = "Summon Olive Snapjaw";
    break;
  case 23431:
    spellname = "Summon Leatherback Snapjaw";
    break;
  case 23432:
    spellname = "Summon Hawksbill Snapjaw";
    break;
  case 23433:
    spellname = "Increased Critical Spell";
    break;
  case 23434:
    spellname = "Increased Critical Spell";
    break;
  case 23435:
    spellname = "Increased Holy Criticals";
    break;
  case 23436:
    spellname = "Corrupt Weapon";
    break;
  case 23440:
    spellname = "Increased Critical Spell Shadow";
    break;
  case 23441:
    spellname = "Gadgetzan Transporter";
    break;
  case 23442:
    spellname = "Everlook Transporter";
    break;
  case 23443:
    spellname = "Increased Critical Spell Shadow";
    break;
  case 23444:
    spellname = "Transporter Malfunction";
    break;
  case 23445:
    spellname = "Evil Twin";
    break;
  case 23446:
    spellname = "Gadgetzan Transporter Failure";
    break;
  case 23447:
    spellname = "Transporter Malfunction";
    break;
  case 23448:
    spellname = "Transporter Arrival";
    break;
  case 23449:
    spellname = "Transporter Malfunction";
    break;
  case 23450:
    spellname = "Transporter Arrival";
    break;
  case 23451:
    spellname = "Speed";
    break;
  case 23452:
    spellname = "Invisibility";
    break;
  case 23453:
    spellname = "Gnomish Transporter";
    break;
  case 23454:
    spellname = "Stun";
    break;
  case 23455:
    spellname = "Holy Nova";
    break;
  case 23456:
    spellname = "Transporter Malfunction";
    break;
  case 23457:
    spellname = "Transporter Malfunction";
    break;
  case 23458:
    spellname = "Holy Nova";
    break;
  case 23459:
    spellname = "Holy Nova";
    break;
  case 23460:
    spellname = "Teleport to Blackwing Lair DND";
    break;
  case 23461:
    spellname = "Flame Breath";
    break;
  case 23462:
    spellname = "Fire Nova";
    break;
  case 23466:
    spellname = "Tower Capture";
    break;
  case 23467:
    spellname = "Tower Buff";
    break;
  case 23468:
    spellname = "Minor Healthstone";
    break;
  case 23469:
    spellname = "Minor Healthstone";
    break;
  case 23470:
    spellname = "Lesser Healthstone";
    break;
  case 23471:
    spellname = "Lesser Healthstone";
    break;
  case 23472:
    spellname = "Healthstone";
    break;
  case 23473:
    spellname = "Healthstone";
    break;
  case 23474:
    spellname = "Greater Healthstone";
    break;
  case 23475:
    spellname = "Greater Healthstone";
    break;
  case 23476:
    spellname = "Major Healthstone";
    break;
  case 23477:
    spellname = "Major Healthstone";
    break;
  case 23478:
    spellname = "Burning Adrenaline";
    break;
  case 23480:
    spellname = "Increase Fire Dam 10";
    break;
  case 23481:
    spellname = "Increase Fire Dam 14";
    break;
  case 23482:
    spellname = "Increase Fire Dam 17";
    break;
  case 23483:
    spellname = "Increase Fire Dam 21";
    break;
  case 23485:
    spellname = "Big Bonfire Damage";
    break;
  case 23486:
    spellname = "Dimensional Ripper - Everlook";
    break;
  case 23488:
    spellname = "Spirit Hammer";
    break;
  case 23489:
    spellname = "Ultrasafe Transporter - Gadgetzan";
    break;
  case 23490:
    spellname = "Dimension Ripper - Everlook";
    break;
  case 23491:
    spellname = "Ultrasafe Transporter: Gadgetzan";
    break;
  case 23492:
    spellname = "Separation Anxiety";
    break;
  case 23493:
    spellname = "Restoration";
    break;
  case 23498:
    spellname = "Call Pet";
    break;
  case 23504:
    spellname = "Fool's Plight";
    break;
  case 23505:
    spellname = "Berserking";
    break;
  case 23506:
    spellname = "Aura of Protection";
    break;
  case 23507:
    spellname = "Snake Burst Firework";
    break;
  case 23509:
    spellname = "Frostwolf Howler";
    break;
  case 23510:
    spellname = "Stormpike Battle Charger";
    break;
  case 23511:
    spellname = "Demoralizing Shout";
    break;
  case 23512:
    spellname = "Fireball Volley";
    break;
  case 23513:
    spellname = "Essence of the Red";
    break;
  case 23514:
    spellname = "Placing Message to the Wildhammer";
    break;
  case 23515:
    spellname = "Block Value 14";
    break;
  case 23516:
    spellname = "Block Value 27";
    break;
  case 23530:
    spellname = "Summon Tiny Red Dragon";
    break;
  case 23531:
    spellname = "Summon Tiny Green Dragon";
    break;
  case 23537:
    spellname = "Enrage";
    break;
  case 23538:
    spellname = "Battle Standard";
    break;
  case 23539:
    spellname = "Battle Standard";
    break;
  case 23540:
    spellname = "Warsong Gulch Enriched Ration";
    break;
  case 23541:
    spellname = "Warsong Gulch Iron Ration";
    break;
  case 23542:
    spellname = "Warsong Gulch Field Ration";
    break;
  case 23544:
    spellname = "Healing Circle";
    break;
  case 23545:
    spellname = "Subtlety";
    break;
  case 23547:
    spellname = "Parry";
    break;
  case 23548:
    spellname = "Parry";
    break;
  case 23549:
    spellname = "Increased Area";
    break;
  case 23550:
    spellname = "Increased Prayer of Healing Criticals";
    break;
  case 23551:
    spellname = "Lightning Shield";
    break;
  case 23552:
    spellname = "Lightning Shield";
    break;
  case 23553:
    spellname = "Shadow Cost Reduction";
    break;
  case 23554:
    spellname = "Improved Drain Life";
    break;
  case 23555:
    spellname = "Decreased Destruction Threat";
    break;
  case 23556:
    spellname = "Decreased Tranquility and Hurricane Cooldown";
    break;
  case 23557:
    spellname = "Improved Thorns Damage";
    break;
  case 23558:
    spellname = "Improved Feint";
    break;
  case 23559:
    spellname = "Improved Aspect of the Hawk";
    break;
  case 23560:
    spellname = "Improved Mend Pet";
    break;
  case 23561:
    spellname = "Enhanced Sunder Armor";
    break;
  case 23562:
    spellname = "Block Value 30";
    break;
  case 23563:
    spellname = "Enhanced Battle Shout";
    break;
  case 23564:
    spellname = "Improved Judgement of Light";
    break;
  case 23565:
    spellname = "Increased Aura Radii";
    break;
  case 23566:
    spellname = "Improved Volley and Multishot";
    break;
  case 23567:
    spellname = "First Aid";
    break;
  case 23568:
    spellname = "First Aid";
    break;
  case 23569:
    spellname = "First Aid";
    break;
  case 23570:
    spellname = "Increased Critical Spell";
    break;
  case 23571:
    spellname = "Mana Surge";
    break;
  case 23572:
    spellname = "Mana Surge";
    break;
  case 23573:
    spellname = "Chain Healing Wave";
    break;
  case 23574:
    spellname = "Battle Standard";
    break;
  case 23575:
    spellname = "Water Shield";
    break;
  case 23576:
    spellname = "Battle Standard";
    break;
  case 23577:
    spellname = "Expose Weakness";
    break;
  case 23578:
    spellname = "Expose Weakness";
    break;
  case 23580:
    spellname = "Bloodfang";
    break;
  case 23581:
    spellname = "Bloodfang";
    break;
  case 23582:
    spellname = "Clean Escape";
    break;
  case 23583:
    spellname = "Clean Escape";
    break;
  case 23584:
    spellname = "Dual Wield Specialization";
    break;
  case 23585:
    spellname = "Dual Wield Specialization";
    break;
  case 23586:
    spellname = "Dual Wield Specialization";
    break;
  case 23587:
    spellname = "Dual Wield Specialization";
    break;
  case 23588:
    spellname = "Dual Wield Specialization";
    break;
  case 23589:
    spellname = "Creeping Doom";
    break;
  case 23590:
    spellname = "Judgement";
    break;
  case 23591:
    spellname = "Judgement";
    break;
  case 23592:
    spellname = "Lightning Bolt";
    break;
  case 23593:
    spellname = "Increase Healing 92";
    break;
  case 23594:
    spellname = "Increase Shadow Dam 64";
    break;
  case 23595:
    spellname = "Luffa";
    break;
  case 23598:
    spellname = "Meeting Stone Summon";
    break;
  case 23600:
    spellname = "Piercing Howl";
    break;
  case 23601:
    spellname = "Scatter Shot";
    break;
  case 23602:
    spellname = "Shield Specialization";
    break;
  case 23603:
    spellname = "Wild Polymorph";
    break;
  case 23604:
    spellname = "Reduce Threat";
    break;
  case 23605:
    spellname = "Spell Vulnerability";
    break;
  case 23618:
    spellname = "GGOODMANTEST2";
    break;
  case 23619:
    spellname = "Burning Adrenaline";
    break;
  case 23620:
    spellname = "Burning Adrenaline";
    break;
  case 23621:
    spellname = "Wild Leather Boots";
    break;
  case 23622:
    spellname = "Wild Leather Cloak";
    break;
  case 23623:
    spellname = "Wild Leather Helmet";
    break;
  case 23625:
    spellname = "Wild Leather Leggings";
    break;
  case 23626:
    spellname = "Wild Leather Shoulders";
    break;
  case 23627:
    spellname = "Wild Leather Vest";
    break;
  case 23628:
    spellname = "Heavy Timbermaw Belt";
    break;
  case 23629:
    spellname = "Heavy Timbermaw Boots";
    break;
  case 23632:
    spellname = "Girdle of the Dawn";
    break;
  case 23633:
    spellname = "Gloves of the Dawn";
    break;
  case 23636:
    spellname = "Dark Iron Helm";
    break;
  case 23637:
    spellname = "Dark Iron Gauntlets";
    break;
  case 23638:
    spellname = "Black Amnesty";
    break;
  case 23639:
    spellname = "Blackfury";
    break;
  case 23642:
    spellname = "Corruption";
    break;
  case 23645:
    spellname = "Hourglass Sand";
    break;
  case 23646:
    spellname = "Elemental Shield";
    break;
  case 23650:
    spellname = "Ebon Hand";
    break;
  case 23652:
    spellname = "Blackguard";
    break;
  case 23653:
    spellname = "Nightfall";
    break;
  case 23658:
    spellname = "Complete Alterac Valley quest";
    break;
  case 23659:
    spellname = "Complete Warsong Gulch Quest";
    break;
  case 23660:
    spellname = "Complete Warsong Gulch Quest";
    break;
  case 23661:
    spellname = "Create Silverwing Talisman of Merit";
    break;
  case 23662:
    spellname = "Wisdom of the Timbermaw";
    break;
  case 23663:
    spellname = "Mantle of the Timbermaw";
    break;
  case 23664:
    spellname = "Argent Boots";
    break;
  case 23665:
    spellname = "Argent Shoulders";
    break;
  case 23666:
    spellname = "Flarecore Robe";
    break;
  case 23667:
    spellname = "Flarecore Leggings";
    break;
  case 23674:
    spellname = "Test Eng Haste";
    break;
  case 23675:
    spellname = "Minigun";
    break;
  case 23676:
    spellname = "Minigun";
    break;
  case 23677:
    spellname = "Beasts Deck";
    break;
  case 23678:
    spellname = "Warlord Deck";
    break;
  case 23679:
    spellname = "Elementals Deck";
    break;
  case 23680:
    spellname = "Portals Deck";
    break;
  case 23681:
    spellname = "Clear Essence of the Red";
    break;
  case 23682:
    spellname = "Heroism";
    break;
  case 23683:
    spellname = "Twisting Nether";
    break;
  case 23684:
    spellname = "Aura of the Blue Dragon";
    break;
  case 23685:
    spellname = "Sam's Test Spell";
    break;
  case 23686:
    spellname = "Lightning Strike";
    break;
  case 23687:
    spellname = "Lightning Strike";
    break;
  case 23688:
    spellname = "Aura of the Blue Dragon";
    break;
  case 23689:
    spellname = "Heroism";
    break;
  case 23690:
    spellname = "Berserker Rage Effect";
    break;
  case 23691:
    spellname = "Berserker Rage Effect";
    break;
  case 23692:
    spellname = "Alterac Manna Biscuit";
    break;
  case 23693:
    spellname = "Stormpike's Salvation";
    break;
  case 23694:
    spellname = "Improved Hamstring";
    break;
  case 23695:
    spellname = "Improved Hamstring";
    break;
  case 23696:
    spellname = "First Aid";
    break;
  case 23697:
    spellname = "Alterac Spring Water";
    break;
  case 23698:
    spellname = "Alterac Spring Water";
    break;
  case 23699:
    spellname = "Unstoppable Force";
    break;
  case 23700:
    spellname = "Twisting Nether";
    break;
  case 23701:
    spellname = "Twisting Nether";
    break;
  case 23702:
    spellname = "Create Warsong Mark of Honor";
    break;
  case 23703:
    spellname = "Might of the Timbermaw";
    break;
  case 23704:
    spellname = "Timbermaw Brawlers";
    break;
  case 23705:
    spellname = "Dawn Treaders";
    break;
  case 23706:
    spellname = "Golden Mantle of the Dawn";
    break;
  case 23707:
    spellname = "Lava Belt";
    break;
  case 23708:
    spellname = "Chromatic Gauntlets";
    break;
  case 23709:
    spellname = "Corehound Belt";
    break;
  case 23710:
    spellname = "Molten Belt";
    break;
  case 23719:
    spellname = "Untamed Fury";
    break;
  case 23720:
    spellname = "Blessing of the Black Book";
    break;
  case 23721:
    spellname = "Arcane Infused";
    break;
  case 23722:
    spellname = "Arcane Detonation";
    break;
  case 23723:
    spellname = "Mind Quickening";
    break;
  case 23724:
    spellname = "Metamorphosis Rune";
    break;
  case 23725:
    spellname = "Gift of Life";
    break;
  case 23726:
    spellname = "Venomous Totem";
    break;
  case 23727:
    spellname = "Increased Spell Hit Chance 8";
    break;
  case 23728:
    spellname = "Increase Spell Dam 84";
    break;
  case 23729:
    spellname = "Increased Spell Hit Chance 16";
    break;
  case 23730:
    spellname = "Increase Spell Dam 64";
    break;
  case 23731:
    spellname = "Block Value 19";
    break;
  case 23732:
    spellname = "Increase Spell Dam 56";
    break;
  case 23733:
    spellname = "Blinding Light";
    break;
  case 23734:
    spellname = "Nature Aligned";
    break;
  case 23735:
    spellname = "Sayge's Dark Fortune of Strength";
    break;
  case 23736:
    spellname = "Sayge's Dark Fortune of Agility";
    break;
  case 23737:
    spellname = "Sayge's Dark Fortune of Stamina";
    break;
  case 23738:
    spellname = "Sayge's Dark Fortune of Spirit";
    break;
  case 23758:
    spellname = "Speak Draconic";
    break;
  case 23759:
    spellname = "Master Demonologist";
    break;
  case 23760:
    spellname = "Master Demonologist";
    break;
  case 23761:
    spellname = "Master Demonologist";
    break;
  case 23762:
    spellname = "Master Demonologist";
    break;
  case 23765:
    spellname = "Darkmoon Faire Fortune";
    break;
  case 23766:
    spellname = "Sayge's Dark Fortune of Intelligence";
    break;
  case 23767:
    spellname = "Sayge's Dark Fortune of Armor";
    break;
  case 23768:
    spellname = "Sayge's Dark Fortune of Damage";
    break;
  case 23769:
    spellname = "Sayge's Dark Fortune of Resistance";
    break;
  case 23771:
    spellname = "Wracking Pains Proc";
    break;
  case 23772:
    spellname = "Wilt";
    break;
  case 23773:
    spellname = "Suffering of Sanity";
    break;
  case 23774:
    spellname = "System Shock";
    break;
  case 23775:
    spellname = "Stun Forever";
    break;
  case 23780:
    spellname = "Aegis of Preservation";
    break;
  case 23781:
    spellname = "Aegis Heal";
    break;
  case 23782:
    spellname = "Gift of Life";
    break;
  case 23783:
    spellname = "Gift of Life";
    break;
  case 23784:
    spellname = "Master Demonologist";
    break;
  case 23785:
    spellname = "Master Demonologist";
    break;
  case 23786:
    spellname = "Powerful Anti-Venom";
    break;
  case 23787:
    spellname = "Powerful Anti-Venom";
    break;
  case 23789:
    spellname = "Stoneclaw Totem TEST";
    break;
  case 23792:
    spellname = "Stoneclaw Totem Passive TEST";
    break;
  case 23793:
    spellname = "Strength";
    break;
  case 23794:
    spellname = "Agility +15";
    break;
  case 23795:
    spellname = "Increased Mana Regen";
    break;
  case 23796:
    spellname = "Increase Healing 24";
    break;
  case 23797:
    spellname = "Spirit";
    break;
  case 23798:
    spellname = "Intellect";
    break;
  case 23799:
    spellname = "Enchant Weapon - Strength";
    break;
  case 23800:
    spellname = "Enchant Weapon - Agility";
    break;
  case 23801:
    spellname = "Enchant Bracer - Mana Regeneration";
    break;
  case 23802:
    spellname = "Enchant Bracer - Healing Power";
    break;
  case 23803:
    spellname = "Enchant Weapon - Mighty Spirit";
    break;
  case 23804:
    spellname = "Enchant Weapon - Mighty Intellect";
    break;
  case 23811:
    spellname = "Summon Jubling";
    break;
  case 23822:
    spellname = "Master Demonologist";
    break;
  case 23823:
    spellname = "Master Demonologist";
    break;
  case 23824:
    spellname = "Master Demonologist";
    break;
  case 23825:
    spellname = "Master Demonologist";
    break;
  case 23826:
    spellname = "Master Demonologist";
    break;
  case 23827:
    spellname = "Master Demonologist";
    break;
  case 23828:
    spellname = "Master Demonologist";
    break;
  case 23829:
    spellname = "Master Demonologist";
    break;
  case 23830:
    spellname = "Master Demonologist";
    break;
  case 23831:
    spellname = "Master Demonologist";
    break;
  case 23832:
    spellname = "Master Demonologist";
    break;
  case 23833:
    spellname = "Master Demonologist";
    break;
  case 23834:
    spellname = "Master Demonologist";
    break;
  case 23835:
    spellname = "Master Demonologist";
    break;
  case 23836:
    spellname = "Master Demonologist";
    break;
  case 23837:
    spellname = "Master Demonologist";
    break;
  case 23838:
    spellname = "Master Demonologist";
    break;
  case 23839:
    spellname = "Master Demonologist";
    break;
  case 23840:
    spellname = "Master Demonologist";
    break;
  case 23841:
    spellname = "Master Demonologist";
    break;
  case 23842:
    spellname = "Master Demonologist";
    break;
  case 23843:
    spellname = "Master Demonologist";
    break;
  case 23844:
    spellname = "Master Demonologist";
    break;
  case 23848:
    spellname = "Test Strike W50";
    break;
  case 23849:
    spellname = "Venoxis Transform";
    break;
  case 23850:
    spellname = "Test Strike W35";
    break;
  case 23851:
    spellname = "Hatch Egg";
    break;
  case 23852:
    spellname = "Jubling Cooldown";
    break;
  case 23853:
    spellname = "Jubling Cooldown";
    break;
  case 23858:
    spellname = "Holy Nova";
    break;
  case 23859:
    spellname = "Dispel Magic";
    break;
  case 23860:
    spellname = "Holy Fire";
    break;
  case 23861:
    spellname = "Poison Cloud";
    break;
  case 23862:
    spellname = "Venom Spit";
    break;
  case 23863:
    spellname = "Revitalize";
    break;
  case 23864:
    spellname = "Revitalize";
    break;
  case 23865:
    spellname = "Parasitic Serpent";
    break;
  case 23866:
    spellname = "Summon Parasitic Serpent";
    break;
  case 23867:
    spellname = "Parasitic Serpent";
    break;
  case 23880:
    spellname = "Bloodthirst";
    break;
  case 23881:
    spellname = "Bloodthirst";
    break;
  case 23885:
    spellname = "Bloodthirst";
    break;
  case 23886:
    spellname = "Bloodthirst";
    break;
  case 23887:
    spellname = "Bloodthirst";
    break;
  case 23888:
    spellname = "Bloodthirst";
    break;
  case 23889:
    spellname = "Bloodthirst";
    break;
  case 23890:
    spellname = "Bloodthirst";
    break;
  case 23891:
    spellname = "Bloodthirst";
    break;
  case 23892:
    spellname = "Bloodthirst";
    break;
  case 23893:
    spellname = "Bloodthirst";
    break;
  case 23894:
    spellname = "Bloodthirst";
    break;
  case 23895:
    spellname = "Renew";
    break;
  case 23918:
    spellname = "Sonic Burst";
    break;
  case 23919:
    spellname = "Swoop";
    break;
  case 23920:
    spellname = "Spell Reflection";
    break;
  case 23921:
    spellname = "Shield Guard";
    break;
  case 23922:
    spellname = "Shield Slam";
    break;
  case 23923:
    spellname = "Shield Slam";
    break;
  case 23924:
    spellname = "Shield Slam";
    break;
  case 23925:
    spellname = "Shield Slam";
    break;
  case 23929:
    spellname = "Increase Spell Dam 71";
    break;
  case 23930:
    spellname = "Seal of the Dawn";
    break;
  case 23931:
    spellname = "Thunderclap";
    break;
  case 23947:
    spellname = "Power Word: Fortitude";
    break;
  case 23948:
    spellname = "Power Word: Fortitude";
    break;
  case 23949:
    spellname = "Exzhal Calls Circle of Binding DND";
    break;
  case 23950:
    spellname = "Exzhal Searches for Wild Gods DND";
    break;
  case 23951:
    spellname = "Bloodlust";
    break;
  case 23952:
    spellname = "Shadow Word: Pain";
    break;
  case 23953:
    spellname = "Mind Flay";
    break;
  case 23954:
    spellname = "Great Heal";
    break;
  case 23958:
    spellname = "Mind Exhaustion";
    break;
  case 23959:
    spellname = "Test Stab R50";
    break;
  case 23960:
    spellname = "Test Strike R50";
    break;
  case 23961:
    spellname = "Frostwolf Reputation +1";
    break;
  case 23962:
    spellname = "Stormpike Reputation +1";
    break;
  case 23963:
    spellname = "Frostwolf Reputation +2";
    break;
  case 23964:
    spellname = "Bloodrager's Requiem";
    break;
  case 23965:
    spellname = "Instant Heal";
    break;
  case 23966:
    spellname = "Jeklik Transform";
    break;
  case 23967:
    spellname = "Dragonbane";
    break;
  case 23968:
    spellname = "Throw Liquid Fire";
    break;
  case 23969:
    spellname = "Throw Liquid Fire";
    break;
  case 23970:
    spellname = "Throw Liquid Fire";
    break;
  case 23971:
    spellname = "Summon Liquid Fire";
    break;
  case 23972:
    spellname = "Blaze";
    break;
  case 23974:
    spellname = "Summon Frenzied Bloodseeker Bats";
    break;
  case 23978:
    spellname = "Speed";
    break;
  case 23979:
    spellname = "Holy Wrath";
    break;
  case 23989:
    spellname = "Readiness";
    break;
  case 23990:
    spellname = "Item - Minor Run Speed";
    break;
  case 23991:
    spellname = "Damage Absorb";
    break;
  case 23992:
    spellname = "Fire Resistance";
    break;
  case 24002:
    spellname = "Tranquilizing Poison";
    break;
  case 24003:
    spellname = "Tranquilizing Poison";
    break;
  case 24004:
    spellname = "Sleep";
    break;
  case 24005:
    spellname = "Food";
    break;
  case 24006:
    spellname = "Bounty of the Harvest";
    break;
  case 24011:
    spellname = "Venom Spit";
    break;
  case 24016:
    spellname = "Exploit Weakness";
    break;
  case 24017:
    spellname = "Create Arathi Resource Crate";
    break;
  case 24018:
    spellname = "Axe Flurry";
    break;
  case 24020:
    spellname = "Axe Flurry";
    break;
  case 24021:
    spellname = "Anti-Magic Shield";
    break;
  case 24022:
    spellname = "Cleanse Nova";
    break;
  case 24023:
    spellname = "Charge";
    break;
  case 24024:
    spellname = "Unstable Concoction";
    break;
  case 24042:
    spellname = "Test Maul";
    break;
  case 24043:
    spellname = "Test Fury";
    break;
  case 24048:
    spellname = "Whirling Trip";
    break;
  case 24049:
    spellname = "Impale";
    break;
  case 24050:
    spellname = "Spirit Burst";
    break;
  case 24051:
    spellname = "Spirit Burst";
    break;
  case 24052:
    spellname = "Summon Voodoo Spirit";
    break;
  case 24053:
    spellname = "Hex";
    break;
  case 24054:
    spellname = "Shrink";
    break;
  case 24058:
    spellname = "Release Toads";
    break;
  case 24061:
    spellname = "Complete Arathi Basin quest";
    break;
  case 24062:
    spellname = "Toad Explode";
    break;
  case 24063:
    spellname = "Disease Cloud";
    break;
  case 24064:
    spellname = "Complete Arathi Basin quest";
    break;
  case 24065:
    spellname = "Toad Explode";
    break;
  case 24071:
    spellname = "Axe Flurry";
    break;
  case 24080:
    spellname = "Death Touch Copy";
    break;
  case 24083:
    spellname = "Hatch Eggs";
    break;
  case 24084:
    spellname = "Mar'li Transform";
    break;
  case 24085:
    spellname = "Transform Visual";
    break;
  case 24088:
    spellname = "Full Grown";
    break;
  case 24090:
    spellname = "Minor Movement Speed";
    break;
  case 24091:
    spellname = "Bloodvine Vest";
    break;
  case 24092:
    spellname = "Bloodvine Leggings";
    break;
  case 24093:
    spellname = "Bloodvine Boots";
    break;
  case 24097:
    spellname = "Poison";
    break;
  case 24099:
    spellname = "Poison Bolt Volley";
    break;
  case 24101:
    spellname = "Grom's Troll Tribute";
    break;
  case 24102:
    spellname = "Grom's Tauren Tribute";
    break;
  case 24103:
    spellname = "Grom's Forsaken Tribute";
    break;
  case 24104:
    spellname = "Grom's Orc Tribute";
    break;
  case 24105:
    spellname = "Uther's Human Tribute";
    break;
  case 24106:
    spellname = "Uther's Gnome Tribute";
    break;
  case 24107:
    spellname = "Uther's Dwarf Tribute";
    break;
  case 24108:
    spellname = "Uther's Night Elf Tribute";
    break;
  case 24109:
    spellname = "Enlarge";
    break;
  case 24110:
    spellname = "Enveloping Webs";
    break;
  case 24111:
    spellname = "Corrosive Poison";
    break;
  case 24112:
    spellname = "Poison Shock";
    break;
  case 24117:
    spellname = "Pain Spike";
    break;
  case 24121:
    spellname = "Primal Batskin Jerkin";
    break;
  case 24122:
    spellname = "Primal Batskin Gloves";
    break;
  case 24123:
    spellname = "Primal Batskin Bracers";
    break;
  case 24124:
    spellname = "Blood Tiger Breastplate";
    break;
  case 24125:
    spellname = "Blood Tiger Shoulders";
    break;
  case 24131:
    spellname = "Wyvern Sting";
    break;
  case 24132:
    spellname = "Wyvern Sting";
    break;
  case 24133:
    spellname = "Wyvern Sting";
    break;
  case 24134:
    spellname = "Wyvern Sting";
    break;
  case 24135:
    spellname = "Wyvern Sting";
    break;
  case 24136:
    spellname = "Bloodsoul Breastplate";
    break;
  case 24137:
    spellname = "Bloodsoul Shoulders";
    break;
  case 24138:
    spellname = "Bloodsoul Gauntlets";
    break;
  case 24139:
    spellname = "Darksoul Breastplate";
    break;
  case 24140:
    spellname = "Darksoul Leggings";
    break;
  case 24141:
    spellname = "Darksoul Shoulders";
    break;
  case 24148:
    spellname = "Presence of Might";
    break;
  case 24149:
    spellname = "Presence of Might";
    break;
  case 24151:
    spellname = "Syncretist's Sigil";
    break;
  case 24153:
    spellname = "Death's Embrace";
    break;
  case 24154:
    spellname = "Falcon's Call";
    break;
  case 24155:
    spellname = "Vodouisant's Vigilant Embrace";
    break;
  case 24156:
    spellname = "Presence of Sight";
    break;
  case 24157:
    spellname = "Hoodoo Hex";
    break;
  case 24158:
    spellname = "Prophetic Aura";
    break;
  case 24159:
    spellname = "Animist's Caress";
    break;
  case 24160:
    spellname = "Syncretist's Sigil";
    break;
  case 24161:
    spellname = "Death's Embrace";
    break;
  case 24162:
    spellname = "Falcon's Call";
    break;
  case 24163:
    spellname = "Vodouisant's Vigilant Embrace";
    break;
  case 24164:
    spellname = "Presence of Sight";
    break;
  case 24165:
    spellname = "Hoodoo Hex";
    break;
  case 24167:
    spellname = "Prophetic Aura";
    break;
  case 24168:
    spellname = "Animist's Caress";
    break;
  case 24169:
    spellname = "Thekal Transform";
    break;
  case 24171:
    spellname = "Resurrection Impact Visual";
    break;
  case 24172:
    spellname = "Thekal Trigger";
    break;
  case 24173:
    spellname = "Resurrection";
    break;
  case 24178:
    spellname = "Will of Hakkar";
    break;
  case 24179:
    spellname = "Create Seal of the Dawn";
    break;
  case 24180:
    spellname = "Quest - Polymorph Impact";
    break;
  case 24183:
    spellname = "Summon Zulian Guardians";
    break;
  case 24184:
    spellname = "Servant of Hakkar DND";
    break;
  case 24185:
    spellname = "Bloodlust";
    break;
  case 24186:
    spellname = "Create Zul's Aura";
    break;
  case 24187:
    spellname = "Claw";
    break;
  case 24188:
    spellname = "Improved Hammer of Justice";
    break;
  case 24189:
    spellname = "Force Punch";
    break;
  case 24190:
    spellname = "Arlokk Transform";
    break;
  case 24191:
    spellname = "Improved Power Word: Shield";
    break;
  case 24192:
    spellname = "Speed Slash";
    break;
  case 24193:
    spellname = "Charge";
    break;
  case 24194:
    spellname = "Uther's Tribute";
    break;
  case 24195:
    spellname = "Grom's Tribute";
    break;
  case 24196:
    spellname = "Increase Spell Dam 47";
    break;
  case 24197:
    spellname = "Increase Spell Dam Undead 48";
    break;
  case 24198:
    spellname = "Rune of the Dawn";
    break;
  case 24199:
    spellname = "Knockback 35";
    break;
  case 24201:
    spellname = "Create Rune of the Dawn";
    break;
  case 24202:
    spellname = "Create Heart of Hakkar Rift";
    break;
  case 24203:
    spellname = "Heart of Hakkar Banning";
    break;
  case 24204:
    spellname = "Heart of Hakkar Implode";
    break;
  case 24207:
    spellname = "Hellfire Cast Visual";
    break;
  case 24208:
    spellname = "Great Heal";
    break;
  case 24209:
    spellname = "Great Heal";
    break;
  case 24210:
    spellname = "Mark of Arlokk";
    break;
  case 24212:
    spellname = "Shadow Word: Pain";
    break;
  case 24213:
    spellname = "Ravage";
    break;
  case 24214:
    spellname = "Heart of Hakkar - Molthor chucks the heart";
    break;
  case 24217:
    spellname = "Quest - Heart of Hakkar";
    break;
  case 24221:
    spellname = "Quest - Teleport Spawn-out";
    break;
  case 24222:
    spellname = "Vanish Visual";
    break;
  case 24223:
    spellname = "Vanish";
    break;
  case 24224:
    spellname = "Intuition";
    break;
  case 24225:
    spellname = "Exhaustion";
    break;
  case 24226:
    spellname = "Increase Reputation";
    break;
  case 24228:
    spellname = "Vanish";
    break;
  case 24229:
    spellname = "Vanish";
    break;
  case 24230:
    spellname = "Vanish";
    break;
  case 24231:
    spellname = "Vanish";
    break;
  case 24232:
    spellname = "Vanish";
    break;
  case 24233:
    spellname = "Vanish";
    break;
  case 24236:
    spellname = "Whirlwind";
    break;
  case 24238:
    spellname = "Test Rip";
    break;
  case 24239:
    spellname = "Hammer of Wrath";
    break;
  case 24240:
    spellname = "Spawn - Red Lightning";
    break;
  case 24241:
    spellname = "Decapitate";
    break;
  case 24242:
    spellname = "Swift Razzashi Raptor";
    break;
  case 24243:
    spellname = "Increase Spell Dam 840";
    break;
  case 24244:
    spellname = "Grow";
    break;
  case 24245:
    spellname = "String Together Heads";
    break;
  case 24248:
    spellname = "Ferocious Bite";
    break;
  case 24251:
    spellname = "Zulian Slice";
    break;
  case 24252:
    spellname = "Swift Zulian Tiger";
    break;
  case 24253:
    spellname = "Graveyard Teleport Test";
    break;
  case 24254:
    spellname = "Serpent's Hiss";
    break;
  case 24255:
    spellname = "Primal Blessing";
    break;
  case 24256:
    spellname = "Primal Blessing Trigger DND";
    break;
  case 24257:
    spellname = "Jeklik's Crushing Blow";
    break;
  case 24258:
    spellname = "Quest - Troll Hero Summon Visual";
    break;
  case 24259:
    spellname = "Spell Lock";
    break;
  case 24261:
    spellname = "Brain Wash";
    break;
  case 24262:
    spellname = "Summon Brain Wash Totem";
    break;
  case 24263:
    spellname = "UNUSED Quest - Create Empowered Mojo Bundle";
    break;
  case 24264:
    spellname = "Extinguish";
    break;
  case 24265:
    spellname = "Killer Bees!";
    break;
  case 24266:
    spellname = "Gurubashi Mojo Madness";
    break;
  case 24267:
    spellname = "Gurubashi Mojo Madness";
    break;
  case 24268:
    spellname = "Mar'li's Brain Boost";
    break;
  case 24274:
    spellname = "Hammer of Wrath";
    break;
  case 24275:
    spellname = "Hammer of Wrath";
    break;
  case 24279:
    spellname = "Punctured Voodoo Doll DRU DND";
    break;
  case 24280:
    spellname = "Punctured Voodoo Doll HUN DND";
    break;
  case 24281:
    spellname = "Punctured Voodoo Doll ROG DND";
    break;
  case 24282:
    spellname = "Punctured Voodoo Doll MAG DND";
    break;
  case 24283:
    spellname = "Surefooted";
    break;
  case 24284:
    spellname = "Punctured Voodoo Doll PRT DND";
    break;
  case 24285:
    spellname = "Punctured Voodoo Doll PAL DND";
    break;
  case 24288:
    spellname = "Punctured Voodoo Doll SHM DND";
    break;
  case 24289:
    spellname = "Punctured Voodoo Doll WAR DND";
    break;
  case 24290:
    spellname = "Punctured Voodoo Doll WLK DND";
    break;
  case 24291:
    spellname = "Dragon Slaying 48";
    break;
  case 24292:
    spellname = "Dragon Slaying 117";
    break;
  case 24293:
    spellname = "Monster Slaying";
    break;
  case 24294:
    spellname = "Monster Slaying";
    break;
  case 24295:
    spellname = "Monster Slaying";
    break;
  case 24296:
    spellname = "Lightning Reflexes";
    break;
  case 24297:
    spellname = "Lightning Reflexes";
    break;
  case 24300:
    spellname = "Drain Life";
    break;
  case 24301:
    spellname = "Fishing Skill +35";
    break;
  case 24302:
    spellname = "Eternium Fishing Line";
    break;
  case 24303:
    spellname = "Fishing";
    break;
  case 24306:
    spellname = "Delusions of Jin'do";
    break;
  case 24307:
    spellname = "Shade of Jin'do Passive";
    break;
  case 24309:
    spellname = "Powerful Healing Ward";
    break;
  case 24311:
    spellname = "Powerful Healing Ward";
    break;
  case 24312:
    spellname = "Level Up";
    break;
  case 24313:
    spellname = "Shade Visual";
    break;
  case 24314:
    spellname = "Threatening Gaze";
    break;
  case 24315:
    spellname = "Charge";
    break;
  case 24316:
    spellname = "Guillotine";
    break;
  case 24317:
    spellname = "Sunder Armor";
    break;
  case 24318:
    spellname = "Enrage";
    break;
  case 24319:
    spellname = "Summon Poison Cloud";
    break;
  case 24320:
    spellname = "Poisonous Blood";
    break;
  case 24321:
    spellname = "Poisonous Blood";
    break;
  case 24322:
    spellname = "Blood Siphon";
    break;
  case 24323:
    spellname = "Blood Siphon";
    break;
  case 24324:
    spellname = "Blood Siphon";
    break;
  case 24325:
    spellname = "Pagle's Point Cast - Create Mudskunk Lure";
    break;
  case 24326:
    spellname = "Gahz'ranka Slam";
    break;
  case 24327:
    spellname = "Cause Insanity";
    break;
  case 24328:
    spellname = "Corrupted Blood";
    break;
  case 24331:
    spellname = "Rake";
    break;
  case 24332:
    spellname = "Rake";
    break;
  case 24333:
    spellname = "Ravage";
    break;
  case 24334:
    spellname = "Acid Spit";
    break;
  case 24335:
    spellname = "Wyvern Sting";
    break;
  case 24336:
    spellname = "Wyvern Sting";
    break;
  case 24337:
    spellname = "Ambush";
    break;
  case 24339:
    spellname = "Infected Bite";
    break;
  case 24340:
    spellname = "Meteor";
    break;
  case 24341:
    spellname = "Revive";
    break;
  case 24346:
    spellname = "Mojo";
    break;
  case 24347:
    spellname = "Master Angler";
    break;
  case 24348:
    spellname = "Cheetah Sprint";
    break;
  case 24350:
    spellname = "Safe Fall";
    break;
  case 24351:
    spellname = "Fear Resistance 4";
    break;
  case 24352:
    spellname = "Devilsaur Fury";
    break;
  case 24353:
    spellname = "Primal Instinct";
    break;
  case 24354:
    spellname = "Prayer Beads Blessing";
    break;
  case 24355:
    spellname = "Drink";
    break;
  case 24356:
    spellname = "Bloodvine Goggles";
    break;
  case 24357:
    spellname = "Bloodvine Lens";
    break;
  case 24360:
    spellname = "Greater Dreamless Sleep";
    break;
  case 24361:
    spellname = "Regeneration";
    break;
  case 24362:
    spellname = "Increased 1H Fist Weapons";
    break;
  case 24363:
    spellname = "Mana Regeneration";
    break;
  case 24364:
    spellname = "Living Free Action";
    break;
  case 24365:
    spellname = "Mageblood Potion";
    break;
  case 24366:
    spellname = "Greater Dreamless Sleep Potion";
    break;
  case 24367:
    spellname = "Living Action Potion";
    break;
  case 24368:
    spellname = "Major Troll's Blood Potion";
    break;
  case 24374:
    spellname = "Fireball";
    break;
  case 24375:
    spellname = "War Stomp";
    break;
  case 24376:
    spellname = "Opening Azure Bag";
    break;
  case 24377:
    spellname = "Destroy Bijou";
    break;
  case 24378:
    spellname = "Berserking";
    break;
  case 24379:
    spellname = "Restoration";
    break;
  case 24382:
    spellname = "Spirit of Zanza";
    break;
  case 24383:
    spellname = "Swiftness of Zanza";
    break;
  case 24384:
    spellname = "Essence Mango";
    break;
  case 24388:
    spellname = "Brain Damage";
    break;
  case 24389:
    spellname = "Chaos Fire";
    break;
  case 24390:
    spellname = "Opening";
    break;
  case 24391:
    spellname = "Opening";
    break;
  case 24392:
    spellname = "Frosty Zap";
    break;
  case 24393:
    spellname = "Test Strike";
    break;
  case 24394:
    spellname = "Intimidation";
    break;
  case 24395:
    spellname = "Bestial Wrath";
    break;
  case 24396:
    spellname = "Bestial Wrath";
    break;
  case 24397:
    spellname = "Bestial Wrath";
    break;
  case 24398:
    spellname = "Water Shield";
    break;
  case 24399:
    spellname = "Dark Iron Boots";
    break;
  case 24401:
    spellname = "Test Pet Passive";
    break;
  case 24402:
    spellname = "Deafened";
    break;
  case 24405:
    spellname = "Icy Energy";
    break;
  case 24406:
    spellname = "Improved Mend Pet";
    break;
  case 24407:
    spellname = "Overpower";
    break;
  case 24408:
    spellname = "Charge";
    break;
  case 24409:
    spellname = "Arathi Basin Field Ration";
    break;
  case 24410:
    spellname = "Arathi Basin Iron Ration";
    break;
  case 24411:
    spellname = "Arathi Basin Enriched Ration";
    break;
  case 24412:
    spellname = "First Aid";
    break;
  case 24413:
    spellname = "First Aid";
    break;
  case 24414:
    spellname = "First Aid";
    break;
  case 24415:
    spellname = "Slow";
    break;
  case 24416:
    spellname = "Superior Aspects";
    break;
  case 24417:
    spellname = "Sheen of Zanza";
    break;
  case 24418:
    spellname = "Heavy Crocolisk Stew";
    break;
  case 24420:
    spellname = "Zandalar Signet of Serenity";
    break;
  case 24421:
    spellname = "Zandalar Signet of Mojo";
    break;
  case 24422:
    spellname = "Zandalar Signet of Might";
    break;
  case 24423:
    spellname = "Screech";
    break;
  case 24424:
    spellname = "Screech";
    break;
  case 24425:
    spellname = "Spirit of Zandalar";
    break;
  case 24426:
    spellname = "Increased Critical Holy Spells";
    break;
  case 24427:
    spellname = "Diamond Flask";
    break;
  case 24428:
    spellname = "Improved Hamstring";
    break;
  case 24429:
    spellname = "Improved Counterspell";
    break;
  case 24430:
    spellname = "Improved Rain of Fire/Hellfire";
    break;
  case 24431:
    spellname = "Improved Whirlwind";
    break;
  case 24432:
    spellname = "Improved Feign Death";
    break;
  case 24433:
    spellname = "Improved Wrath/Starfire";
    break;
  case 24434:
    spellname = "Improved Kick";
    break;
  case 24435:
    spellname = "Drain Life";
    break;
  case 24436:
    spellname = "Improved Mana/Health Totems";
    break;
  case 24437:
    spellname = "Blood Leech";
    break;
  case 24438:
    spellname = "Battle Shout";
    break;
  case 24439:
    spellname = "Fire Resistance";
    break;
  case 24440:
    spellname = "Fire Resistance";
    break;
  case 24441:
    spellname = "Fire Resistance";
    break;
  case 24443:
    spellname = "Improved Revive Pet";
    break;
  case 24444:
    spellname = "Fire Resistance";
    break;
  case 24445:
    spellname = "Fire Resistance";
    break;
  case 24446:
    spellname = "Frost Resistance";
    break;
  case 24447:
    spellname = "Frost Resistance";
    break;
  case 24448:
    spellname = "Frost Resistance";
    break;
  case 24449:
    spellname = "Frost Resistance";
    break;
  case 24450:
    spellname = "Prowl";
    break;
  case 24451:
    spellname = "Prowl";
    break;
  case 24452:
    spellname = "Prowl";
    break;
  case 24453:
    spellname = "Prowl";
    break;
  case 24454:
    spellname = "Prowl";
    break;
  case 24455:
    spellname = "Prowl";
    break;
  case 24456:
    spellname = "Improved Intimidating Shout";
    break;
  case 24457:
    spellname = "Improved Holy Light";
    break;
  case 24458:
    spellname = "Shadow Shock";
    break;
  case 24459:
    spellname = "Shadow Shock";
    break;
  case 24460:
    spellname = "Improved Blessings";
    break;
  case 24461:
    spellname = "Improved Frost Shock";
    break;
  case 24462:
    spellname = "Improved Lightning Bolt";
    break;
  case 24463:
    spellname = "Fire Resistance";
    break;
  case 24464:
    spellname = "Fire Resistance";
    break;
  case 24465:
    spellname = "Improved Concussive Shot";
    break;
  case 24466:
    spellname = "Banish";
    break;
  case 24467:
    spellname = "Improved Serpent Sting";
    break;
  case 24469:
    spellname = "Improved Blind";
    break;
  case 24471:
    spellname = "Improved Eviscerate and Rupture";
    break;
  case 24475:
    spellname = "Frost Resistance";
    break;
  case 24476:
    spellname = "Frost Resistance";
    break;
  case 24477:
    spellname = "Frost Resistance";
    break;
  case 24478:
    spellname = "Frost Resistance";
    break;
  case 24479:
    spellname = "Improved Faerie Fire";
    break;
  case 24480:
    spellname = "Improved Starfire";
    break;
  case 24482:
    spellname = "Improved Smite and Holy Fire";
    break;
  case 24483:
    spellname = "Improved Mind Control";
    break;
  case 24486:
    spellname = "Improved Corruption";
    break;
  case 24487:
    spellname = "Improved Death Coil";
    break;
  case 24488:
    spellname = "Shadow Resistance";
    break;
  case 24489:
    spellname = "Improved Arcane Intellect";
    break;
  case 24490:
    spellname = "Shadow Resistance";
    break;
  case 24491:
    spellname = "Improved Flamestrike";
    break;
  case 24492:
    spellname = "Nature Resistance";
    break;
  case 24493:
    spellname = "Arcane Resistance";
    break;
  case 24494:
    spellname = "Nature Resistance";
    break;
  case 24495:
    spellname = "Arcane Resistance";
    break;
  case 24497:
    spellname = "Arcane Resistance";
    break;
  case 24498:
    spellname = "Brilliant Light";
    break;
  case 24499:
    spellname = "Energized Shield";
    break;
  case 24500:
    spellname = "Arcane Resistance";
    break;
  case 24501:
    spellname = "Arcane Resistance";
    break;
  case 24502:
    spellname = "Nature Resistance";
    break;
  case 24503:
    spellname = "Nature Resistance";
    break;
  case 24504:
    spellname = "Nature Resistance";
    break;
  case 24505:
    spellname = "Shadow Resistance";
    break;
  case 24506:
    spellname = "Shadow Resistance";
    break;
  case 24507:
    spellname = "Shadow Resistance";
    break;
  case 24508:
    spellname = "Arcane Resistance";
    break;
  case 24509:
    spellname = "Arcane Resistance";
    break;
  case 24510:
    spellname = "Arcane Resistance";
    break;
  case 24511:
    spellname = "Nature Resistance";
    break;
  case 24512:
    spellname = "Nature Resistance";
    break;
  case 24513:
    spellname = "Nature Resistance";
    break;
  case 24514:
    spellname = "Shadow Resistance";
    break;
  case 24515:
    spellname = "Shadow Resistance";
    break;
  case 24516:
    spellname = "Shadow Resistance";
    break;
  case 24529:
    spellname = "Spirit Bond";
    break;
  case 24530:
    spellname = "Felfire";
    break;
  case 24531:
    spellname = "Refocus";
    break;
  case 24532:
    spellname = "Burst of Energy";
    break;
  case 24542:
    spellname = "Nimble Healing Touch";
    break;
  case 24543:
    spellname = "Massive Destruction";
    break;
  case 24544:
    spellname = "Arcane Potency";
    break;
  case 24545:
    spellname = "Natural Armor";
    break;
  case 24546:
    spellname = "Rapid Healing";
    break;
  case 24547:
    spellname = "Natural Armor";
    break;
  case 24549:
    spellname = "Natural Armor";
    break;
  case 24550:
    spellname = "Natural Armor";
    break;
  case 24551:
    spellname = "Natural Armor";
    break;
  case 24552:
    spellname = "Natural Armor";
    break;
  case 24553:
    spellname = "Natural Armor";
    break;
  case 24554:
    spellname = "Natural Armor";
    break;
  case 24555:
    spellname = "Natural Armor";
    break;
  case 24556:
    spellname = "Natural Armor";
    break;
  case 24557:
    spellname = "Natural Armor";
    break;
  case 24558:
    spellname = "Natural Armor";
    break;
  case 24559:
    spellname = "Natural Armor";
    break;
  case 24560:
    spellname = "Natural Armor";
    break;
  case 24561:
    spellname = "Natural Armor";
    break;
  case 24562:
    spellname = "Natural Armor";
    break;
  case 24571:
    spellname = "Blood Fury";
    break;
  case 24573:
    spellname = "Mortal Strike";
    break;
  case 24574:
    spellname = "Brittle Armor";
    break;
  case 24575:
    spellname = "Brittle Armor";
    break;
  case 24576:
    spellname = "Chromatic Mount";
    break;
  case 24577:
    spellname = "Screech";
    break;
  case 24578:
    spellname = "Screech";
    break;
  case 24579:
    spellname = "Screech";
    break;
  case 24580:
    spellname = "Screech";
    break;
  case 24581:
    spellname = "Screech";
    break;
  case 24582:
    spellname = "Screech";
    break;
  case 24583:
    spellname = "Scorpid Poison";
    break;
  case 24584:
    spellname = "Scorpid Poison";
    break;
  case 24585:
    spellname = "Drain Life";
    break;
  case 24586:
    spellname = "Scorpid Poison";
    break;
  case 24587:
    spellname = "Scorpid Poison";
    break;
  case 24588:
    spellname = "Scorpid Poison";
    break;
  case 24589:
    spellname = "Scorpid Poison";
    break;
  case 24590:
    spellname = "Brittle Armor";
    break;
  case 24591:
    spellname = "Improved Skinning";
    break;
  case 24592:
    spellname = "Hunter Pet Buffs";
    break;
  case 24593:
    spellname = "Pagle's Point Cast - Create Splash and Quake";
    break;
  case 24594:
    spellname = "Mesmerize";
    break;
  case 24595:
    spellname = "Increase Spell Dam 24";
    break;
  case 24596:
    spellname = "Intoxicating Venom";
    break;
  case 24597:
    spellname = "Furious Howl";
    break;
  case 24598:
    spellname = "Summon Razzashi Skitterer";
    break;
  case 24599:
    spellname = "Furious Howl";
    break;
  case 24600:
    spellname = "Web Spin";
    break;
  case 24601:
    spellname = "Communique - summon another target";
    break;
  case 24602:
    spellname = "Create Heart of Hakkar Summon Circle";
    break;
  case 24603:
    spellname = "Furious Howl";
    break;
  case 24604:
    spellname = "Furious Howl";
    break;
  case 24605:
    spellname = "Furious Howl";
    break;
  case 24607:
    spellname = "Furious Howl";
    break;
  case 24608:
    spellname = "Furious Howl";
    break;
  case 24609:
    spellname = "Furious Howl";
    break;
  case 24610:
    spellname = "Pagle's Broken Reel";
    break;
  case 24611:
    spellname = "Fireball";
    break;
  case 24612:
    spellname = "Flamestrike";
    break;
  case 24614:
    spellname = "Consuming Shadows";
    break;
  case 24615:
    spellname = "Consuming Shadows";
    break;
  case 24616:
    spellname = "Shadow Shock";
    break;
  case 24617:
    spellname = "Blood Funnel";
    break;
  case 24618:
    spellname = "Drain Life";
    break;
  case 24619:
    spellname = "Soul Tap";
    break;
  case 24621:
    spellname = "Portal of Madness";
    break;
  case 24622:
    spellname = "Summon Mad Voidwalkers";
    break;
  case 24623:
    spellname = "Summon Van'Cleef";
    break;
  case 24624:
    spellname = "Summon Mutanus the Devourer";
    break;
  case 24625:
    spellname = "Summon Aku'mai";
    break;
  case 24626:
    spellname = "Summon Cannon Master Willey";
    break;
  case 24627:
    spellname = "Summon Postmaster Malown";
    break;
  case 24628:
    spellname = "Summon Amnennar the Coldbringer";
    break;
  case 24629:
    spellname = "Natural Armor";
    break;
  case 24630:
    spellname = "Natural Armor";
    break;
  case 24631:
    spellname = "Natural Armor";
    break;
  case 24632:
    spellname = "Natural Armor";
    break;
  case 24637:
    spellname = "Create Warsong Gulch Consolation Ribbon";
    break;
  case 24640:
    spellname = "Scorpid Poison";
    break;
  case 24641:
    spellname = "Scorpid Poison";
    break;
  case 24646:
    spellname = "Avatar";
    break;
  case 24647:
    spellname = "Stun";
    break;
  case 24648:
    spellname = "Entangling Roots";
    break;
  case 24649:
    spellname = "Thousand Blades";
    break;
  case 24653:
    spellname = "TEST 100 STR DND";
    break;
  case 24654:
    spellname = "Blue Dragonscale Leggings";
    break;
  case 24655:
    spellname = "Green Dragonscale Gauntlets";
    break;
  case 24658:
    spellname = "Unstable Power";
    break;
  case 24659:
    spellname = "Unstable Power";
    break;
  case 24661:
    spellname = "Restless Strength";
    break;
  case 24662:
    spellname = "Restless Strength";
    break;
  case 24664:
    spellname = "Sleep";
    break;
  case 24666:
    spellname = "Increase Frost Dam 132";
    break;
  case 24667:
    spellname = "Increase Frost Dam 72";
    break;
  case 24668:
    spellname = "Shadow Bolt";
    break;
  case 24669:
    spellname = "Rain of Fire";
    break;
  case 24670:
    spellname = "Inferno";
    break;
  case 24671:
    spellname = "Snap Kick";
    break;
  case 24672:
    spellname = "Unholy Frenzy";
    break;
  case 24673:
    spellname = "Curse of Blood";
    break;
  case 24674:
    spellname = "Veil of Shadow";
    break;
  case 24675:
    spellname = "BM OFF";
    break;
  case 24676:
    spellname = "BM ON";
    break;
  case 24680:
    spellname = "Chain Lightning";
    break;
  case 24681:
    spellname = "Summon Nightmare Illusions";
    break;
  case 24682:
    spellname = "Forked Lightning";
    break;
  case 24683:
    spellname = "Lightning Cloud";
    break;
  case 24684:
    spellname = "Chain Burn";
    break;
  case 24685:
    spellname = "Earth Shock";
    break;
  case 24686:
    spellname = "Aspect of Mar'li";
    break;
  case 24687:
    spellname = "Aspect of Jeklik";
    break;
  case 24688:
    spellname = "Aspect of Venoxis";
    break;
  case 24689:
    spellname = "Aspect of Thekal";
    break;
  case 24690:
    spellname = "Aspect of Arlokk";
    break;
  case 24691:
    spellname = "Barrage";
    break;
  case 24694:
    spellname = "Attack Power - Feral (+0574)";
    break;
  case 24696:
    spellname = "Summon Murky";
    break;
  case 24697:
    spellname = "Attack Power - Feral (+0280)";
    break;
  case 24698:
    spellname = "Gouge";
    break;
  case 24699:
    spellname = "Vanish";
    break;
  case 24701:
    spellname = "Burning Adrenaline";
    break;
  case 24702:
    spellname = "Hallow's End Aura";
    break;
  case 24703:
    spellname = "Dreamscale Breastplate";
    break;
  case 24705:
    spellname = "Invocation of the Wickerman";
    break;
  case 24706:
    spellname = "Toss Stink Bomb";
    break;
  case 24707:
    spellname = "Food";
    break;
  case 24708:
    spellname = "Pirate Costume";
    break;
  case 24709:
    spellname = "Pirate Costume";
    break;
  case 24710:
    spellname = "Ninja Costume";
    break;
  case 24711:
    spellname = "Ninja Costume";
    break;
  case 24712:
    spellname = "Leper Gnome Costume";
    break;
  case 24713:
    spellname = "Leper Gnome Costume";
    break;
  case 24714:
    spellname = "Trick";
    break;
  case 24715:
    spellname = "Treat";
    break;
  case 24716:
    spellname = "Happy Pet";
    break;
  case 24717:
    spellname = "Pirate Costume";
    break;
  case 24718:
    spellname = "Ninja Costume";
    break;
  case 24719:
    spellname = "Leper Gnome Costume";
    break;
  case 24720:
    spellname = "Random Costume";
    break;
  case 24721:
    spellname = "Buru Transform";
    break;
  case 24723:
    spellname = "Skeleton Costume";
    break;
  case 24724:
    spellname = "Skeleton Costume";
    break;
  case 24725:
    spellname = "Debilitate";
    break;
  case 24726:
    spellname = "Deputize Agent of Nozdormu";
    break;
  case 24727:
    spellname = "Lost Badge Agent of Nozdormu DND";
    break;
  case 24728:
    spellname = "Summon Nightmare Illusions";
    break;
  case 24729:
    spellname = "Summon Nightmare Illusions";
    break;
  case 24730:
    spellname = "Cannon Prep";
    break;
  case 24731:
    spellname = "Fire Cannon";
    break;
  case 24732:
    spellname = "Bat Costume";
    break;
  case 24733:
    spellname = "Bat Costume";
    break;
  case 24734:
    spellname = "Summon Templar Random";
    break;
  case 24735:
    spellname = "Ghost Costume";
    break;
  case 24736:
    spellname = "Ghost Costume";
    break;
  case 24737:
    spellname = "Ghost Costume";
    break;
  case 24740:
    spellname = "Wisp Costume";
    break;
  case 24741:
    spellname = "Wisp Costume";
    break;
  case 24742:
    spellname = "Magic Wings";
    break;
  case 24744:
    spellname = "Summon Templar";
    break;
  case 24745:
    spellname = "Summon Templar";
    break;
  case 24746:
    spellname = "Twilight Cultist Disguise";
    break;
  case 24747:
    spellname = "Summon Templar Fire";
    break;
  case 24748:
    spellname = "Twilight Cultist Disguise";
    break;
  case 24750:
    spellname = "Trick";
    break;
  case 24751:
    spellname = "Trick or Treat";
    break;
  case 24752:
    spellname = "Mark of the Wild";
    break;
  case 24753:
    spellname = "Trick";
    break;
  case 24755:
    spellname = "Tricked or Treated";
    break;
  case 24756:
    spellname = "Summon Templar";
    break;
  case 24757:
    spellname = "Summon Templar Air";
    break;
  case 24758:
    spellname = "Summon Templar";
    break;
  case 24759:
    spellname = "Summon Templar Earth";
    break;
  case 24760:
    spellname = "Summon Templar";
    break;
  case 24761:
    spellname = "Summon Templar Water";
    break;
  case 24762:
    spellname = "Summon Duke";
    break;
  case 24763:
    spellname = "Summon Duke Random";
    break;
  case 24765:
    spellname = "Summon Duke";
    break;
  case 24766:
    spellname = "Summon Duke Fire";
    break;
  case 24767:
    spellname = "Thousand Blades";
    break;
  case 24768:
    spellname = "Summon Duke";
    break;
  case 24769:
    spellname = "Summon Duke Air";
    break;
  case 24770:
    spellname = "Summon Duke";
    break;
  case 24771:
    spellname = "Summon Duke Earth";
    break;
  case 24772:
    spellname = "Summon Duke";
    break;
  case 24773:
    spellname = "Summon Duke Water";
    break;
  case 24774:
    spellname = "Increased Defense";
    break;
  case 24775:
    spellname = "Increased Defense";
    break;
  case 24776:
    spellname = "Summon Player";
    break;
  case 24777:
    spellname = "Dream Fog";
    break;
  case 24778:
    spellname = "Sleep";
    break;
  case 24780:
    spellname = "Dream Fog";
    break;
  case 24782:
    spellname = "Twilight Cultist Disguise";
    break;
  case 24784:
    spellname = "Summon Royal Random";
    break;
  case 24785:
    spellname = "Summon Royal";
    break;
  case 24786:
    spellname = "Summon Royal";
    break;
  case 24787:
    spellname = "Summon Royal Fire";
    break;
  case 24788:
    spellname = "Summon Royal";
    break;
  case 24789:
    spellname = "Summon Royal";
    break;
  case 24790:
    spellname = "Summon Royal";
    break;
  case 24791:
    spellname = "Summon Royal Air";
    break;
  case 24792:
    spellname = "Summon Royal Earth";
    break;
  case 24793:
    spellname = "Summon Royal Water";
    break;
  case 24795:
    spellname = "Summon Demented Druid Spirit";
    break;
  case 24799:
    spellname = "Well Fed";
    break;
  case 24800:
    spellname = "Food";
    break;
  case 24801:
    spellname = "Smoked Desert Dumplings";
    break;
  case 24802:
    spellname = "Smoked Desert Dumplings";
    break;
  case 24803:
    spellname = "Abyssal Punishment";
    break;
  case 24804:
    spellname = "Dark Offering";
    break;
  case 24809:
    spellname = "Spirit Shade Visual";
    break;
  case 24811:
    spellname = "Draw Spirit";
    break;
  case 24813:
    spellname = "Seeping Fog";
    break;
  case 24814:
    spellname = "Seeping Fog";
    break;
  case 24815:
    spellname = "Draw Ancient Glyphs";
    break;
  case 24816:
    spellname = "Test Mortal Strike";
    break;
  case 24817:
    spellname = "Test Overpower";
    break;
  case 24818:
    spellname = "Noxious Breath";
    break;
  case 24819:
    spellname = "Lightning Wave";
    break;
  case 24820:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24821:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24822:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24823:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24824:
    spellname = "Test Sinister Strike";
    break;
  case 24825:
    spellname = "Test Backstab";
    break;
  case 24826:
    spellname = "Infernal Fire";
    break;
  case 24827:
    spellname = "Create Soul Shard";
    break;
  case 24828:
    spellname = "Shatter Soul Gem";
    break;
  case 24829:
    spellname = "Fortitude of the Sin'dorei";
    break;
  case 24831:
    spellname = "Cannon Prep";
    break;
  case 24832:
    spellname = "Cannon Prep";
    break;
  case 24833:
    spellname = "Holy Mightstone";
    break;
  case 24834:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24835:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24836:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24837:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24838:
    spellname = "Shadow Bolt Whirl";
    break;
  case 24839:
    spellname = "Acid Breath";
    break;
  case 24840:
    spellname = "Poison Cloud";
    break;
  case 24841:
    spellname = "Summon Shade of Taerar";
    break;
  case 24842:
    spellname = "Summon Shade of Taerar";
    break;
  case 24843:
    spellname = "Summon Shade of Taerar";
    break;
  case 24844:
    spellname = "Lightning Breath";
    break;
  case 24845:
    spellname = "Lightning Breath";
    break;
  case 24846:
    spellname = "Spitfire Bracers";
    break;
  case 24847:
    spellname = "Spitfire Gauntlets";
    break;
  case 24848:
    spellname = "Spitfire Breastplate";
    break;
  case 24849:
    spellname = "Sandstalker Bracers";
    break;
  case 24850:
    spellname = "Sandstalker Gauntlets";
    break;
  case 24851:
    spellname = "Sandstalker Breastplate";
    break;
  case 24852:
    spellname = "Increased Nature Criticals";
    break;
  case 24853:
    spellname = "Mana Spring";
    break;
  case 24854:
    spellname = "Mana Spring Totem";
    break;
  case 24857:
    spellname = "Arcane Blast";
    break;
  case 24858:
    spellname = "Moonkin Form";
    break;
  case 24864:
    spellname = "Feral Swiftness Passive 2a";
    break;
  case 24865:
    spellname = "Sanctified Orb";
    break;
  case 24866:
    spellname = "Feral Swiftness";
    break;
  case 24867:
    spellname = "Feral Swiftness Passive 1a";
    break;
  case 24869:
    spellname = "Food";
    break;
  case 24870:
    spellname = "Well Fed";
    break;
  case 24871:
    spellname = "Spore Cloud";
    break;
  case 24872:
    spellname = "Create Hunter Epic Staff DND";
    break;
  case 24873:
    spellname = "Create Hunter Epic Bow DND";
    break;
  case 24874:
    spellname = "Create Crest of Beckoning: Fire";
    break;
  case 24875:
    spellname = "Undercity Mint";
    break;
  case 24883:
    spellname = "Self Stun";
    break;
  case 24884:
    spellname = "Earthen Sigil";
    break;
  case 24885:
    spellname = "Create Crest of Beckoning: Air";
    break;
  case 24887:
    spellname = "Create Crest of Beckoning: Earth";
    break;
  case 24888:
    spellname = "Create Crest of Beckoning: Water";
    break;
  case 24889:
    spellname = "Create Signet of Beckoning: Fire";
    break;
  case 24890:
    spellname = "Create Signet of Beckoning: Air";
    break;
  case 24891:
    spellname = "Create Signet of Beckoning: Earth";
    break;
  case 24892:
    spellname = "Create Signet of Beckoning: Water";
    break;
  case 24893:
    spellname = "Black Sapphire";
    break;
  case 24894:
    spellname = "Heart of the Wild";
    break;
  case 24895:
    spellname = "Create Scepter of Beckoning: Fire";
    break;
  case 24896:
    spellname = "Create Scepter of Beckoning: Air";
    break;
  case 24897:
    spellname = "Create Scepter of Beckoning: Earth";
    break;
  case 24898:
    spellname = "Create Scepter of Beckoning: Water";
    break;
  case 24899:
    spellname = "Heart of the Wild Bear Effect";
    break;
  case 24900:
    spellname = "Heart of the Wild Cat Effect";
    break;
  case 24901:
    spellname = "Runed Stygian Leggings";
    break;
  case 24902:
    spellname = "Runed Stygian Belt";
    break;
  case 24903:
    spellname = "Runed Stygian Boots";
    break;
  case 24904:
    spellname = "Summon Putrid Mushroom";
    break;
  case 24905:
    spellname = "Moonkin Form (Passive)";
    break;
  case 24907:
    spellname = "Moonkin Aura";
    break;
  case 24910:
    spellname = "Corruption of the Earth";
    break;
  case 24912:
    spellname = "Darkrune Gauntlets";
    break;
  case 24913:
    spellname = "Darkrune Helm";
    break;
  case 24914:
    spellname = "Darkrune Breastplate";
    break;
  case 24918:
    spellname = "Stink Trap";
    break;
  case 24919:
    spellname = "Nauseous";
    break;
  case 24921:
    spellname = "Increased Staff";
    break;
  case 24923:
    spellname = "Honor Points +398";
    break;
  case 24924:
    spellname = "Hallow's End Candy";
    break;
  case 24925:
    spellname = "Hallow's End Candy";
    break;
  case 24926:
    spellname = "Hallow's End Candy";
    break;
  case 24927:
    spellname = "Hallow's End Candy";
    break;
  case 24928:
    spellname = "Volatile Infection";
    break;
  case 24929:
    spellname = "Volatile Infection";
    break;
  case 24930:
    spellname = "Hallow's End Candy";
    break;
  case 24932:
    spellname = "Leader of the Pack";
    break;
  case 24933:
    spellname = "Cannon";
    break;
  case 24934:
    spellname = "Summon RC Tank";
    break;
  case 24935:
    spellname = "Summon RC Tank";
    break;
  case 24937:
    spellname = "Using Control Console";
    break;
  case 24939:
    spellname = "Summon Murky";
    break;
  case 24940:
    spellname = "Black Whelp Tunic";
    break;
  case 24942:
    spellname = "Frostbolt";
    break;
  case 24943:
    spellname = "Gift of Nature";
    break;
  case 24944:
    spellname = "Gift of Nature";
    break;
  case 24945:
    spellname = "Gift of Nature";
    break;
  case 24946:
    spellname = "Gift of Nature";
    break;
  case 24947:
    spellname = "Heal";
    break;
  case 24949:
    spellname = "Defensive State 2 (DND)";
    break;
  case 24950:
    spellname = "Create Warsong Mark of Honor (Loser)";
    break;
  case 24951:
    spellname = "Create Warsong Mark of Honor (WInner)";
    break;
  case 24952:
    spellname = "Arathi Basin Mark of Honor (Loser)";
    break;
  case 24953:
    spellname = "Arathi Basin Mark of Honor (Winner)";
    break;
  case 24954:
    spellname = "Alterac Valley Mark of Honor (Loser)";
    break;
  case 24955:
    spellname = "Alterac Valley Mark of Honor (Winner)";
    break;
  case 24957:
    spellname = "Moonfire";
    break;
  case 24960:
    spellname = "Honor Points +50";
    break;
  case 24961:
    spellname = "Honor Points +82";
    break;
  case 24962:
    spellname = "Honor Points +138";
    break;
  case 24963:
    spellname = "Honor Points +228";
    break;
  case 24964:
    spellname = "Honor Points +378";
    break;
  case 24965:
    spellname = "Honor Points +398";
    break;
  case 24966:
    spellname = "Honor Points +2388";
    break;
  case 24967:
    spellname = "Gong";
    break;
  case 24968:
    spellname = "Tranquil Spirit";
    break;
  case 24969:
    spellname = "Tranquil Spirit";
    break;
  case 24970:
    spellname = "Tranquil Spirit";
    break;
  case 24971:
    spellname = "Tranquil Spirit";
    break;
  case 24972:
    spellname = "Tranquil Spirit";
    break;
  case 24973:
    spellname = "Clean Up Stink Bomb";
    break;
  case 24974:
    spellname = "Insect Swarm";
    break;
  case 24975:
    spellname = "Insect Swarm";
    break;
  case 24976:
    spellname = "Insect Swarm";
    break;
  case 24977:
    spellname = "Insect Swarm";
    break;
  case 24982:
    spellname = "Remove Trick or Treat";
    break;
  case 24983:
    spellname = "Baby Murloc Passive";
    break;
  case 24984:
    spellname = "Baby Murloc";
    break;
  case 24985:
    spellname = "Summon Baby Murloc (Blue)";
    break;
  case 24986:
    spellname = "Summon Baby Murloc (Green)";
    break;
  case 24987:
    spellname = "Summon Baby Murloc (Orange)";
    break;
  case 24988:
    spellname = "Summon Baby Murloc (White)";
    break;
  case 24989:
    spellname = "Summon Baby Murloc (Pink)";
    break;
  case 24990:
    spellname = "Summon Baby Murloc (Purple)";
    break;
  case 24991:
    spellname = "Elemental Slayer";
    break;
  case 24992:
    spellname = "Demonic Transformation";
    break;
  case 24993:
    spellname = "Acid Blast";
    break;
  case 24994:
    spellname = "Attack Power - Feral (+0154)";
    break;
  case 24995:
    spellname = "Pyroblast";
    break;
  case 24997:
    spellname = "Greater Dispel";
    break;
  case 24998:
    spellname = "Healing of the Ages";
    break;
  case 24999:
    spellname = "Malfurion's Shade";
    break;
  case 25000:
    spellname = "Spirit Totem";
    break;
  case 25001:
    spellname = "Spirit Totem";
    break;
  case 25002:
    spellname = "Spirit Disruption";
    break;
  case 25003:
    spellname = "Mortar";
    break;
  case 25004:
    spellname = "Throw Nightmare Object";
    break;
  case 25005:
    spellname = "Summon RC Blimp";
    break;
  case 25006:
    spellname = "Summon RC Blimp";
    break;
  case 25007:
    spellname = "Wickerman Guardian Ember";
    break;
  case 25008:
    spellname = "Lightning Breath";
    break;
  case 25009:
    spellname = "Lightning Breath";
    break;
  case 25010:
    spellname = "Lightning Breath";
    break;
  case 25011:
    spellname = "Lightning Breath";
    break;
  case 25012:
    spellname = "Lightning Breath";
    break;
  case 25013:
    spellname = "Lightning Breath";
    break;
  case 25014:
    spellname = "Lightning Breath";
    break;
  case 25015:
    spellname = "Lightning Breath";
    break;
  case 25016:
    spellname = "Lightning Breath";
    break;
  case 25017:
    spellname = "Lightning Breath";
    break;
  case 25018:
    spellname = "Summon Murki";
    break;
  case 25019:
    spellname = "Blizzard";
    break;
  case 25020:
    spellname = "Lightning Shield";
    break;
  case 25021:
    spellname = "Chain Lightning";
    break;
  case 25022:
    spellname = "Hallow's End Fright";
    break;
  case 25023:
    spellname = "Hallow's End Fright";
    break;
  case 25024:
    spellname = "Drop Mine";
    break;
  case 25025:
    spellname = "Earth Shock";
    break;
  case 25026:
    spellname = "Activate MG Turret";
    break;
  case 25027:
    spellname = "Flamethrower";
    break;
  case 25028:
    spellname = "Fire Blast";
    break;
  case 25029:
    spellname = "Flamethrower";
    break;
  case 25030:
    spellname = "Shoot Rocket";
    break;
  case 25031:
    spellname = "Shoot Missile";
    break;
  case 25032:
    spellname = "Machine Gun";
    break;
  case 25033:
    spellname = "Lightning Cloud";
    break;
  case 25034:
    spellname = "Forked Lightning";
    break;
  case 25035:
    spellname = "Elemental Spawn-in";
    break;
  case 25036:
    spellname = "Block Value 12";
    break;
  case 25037:
    spellname = "Rumsey Rum Light";
    break;
  case 25039:
    spellname = "Green Ghost Visual";
    break;
  case 25040:
    spellname = "Mark of Nature";
    break;
  case 25041:
    spellname = "Mark of Nature";
    break;
  case 25043:
    spellname = "Aura of Nature";
    break;
  case 25046:
    spellname = "Arcane Torrent";
    break;
  case 25048:
    spellname = "Arcane Torrent";
    break;
  case 25049:
    spellname = "Blast Wave";
    break;
  case 25050:
    spellname = "Mark of Flames";
    break;
  case 25051:
    spellname = "Sunder Armor";
    break;
  case 25052:
    spellname = "Acid Spit";
    break;
  case 25053:
    spellname = "Venom Spit";
    break;
  case 25054:
    spellname = "Holy Smite";
    break;
  case 25055:
    spellname = "Arcane Bolt";
    break;
  case 25056:
    spellname = "Stomp";
    break;
  case 25057:
    spellname = "Dropped Weapon";
    break;
  case 25058:
    spellname = "Renew";
    break;
  case 25059:
    spellname = "Dmg Shield";
    break;
  case 25060:
    spellname = "Updraft";
    break;
  case 25063:
    spellname = "Increase Threat";
    break;
  case 25064:
    spellname = "Increase Shadow Dam 20";
    break;
  case 25065:
    spellname = "Increase Fire Dam 20";
    break;
  case 25066:
    spellname = "Increase Ice Dam 20";
    break;
  case 25067:
    spellname = "Increase Healing 30";
    break;
  case 25068:
    spellname = "Resistance - Greater Fire Resistance";
    break;
  case 25069:
    spellname = "Resistance - Greater Nature Resistance";
    break;
  case 25070:
    spellname = "Decrease Threat";
    break;
  case 25071:
    spellname = "Dodge";
    break;
  case 25072:
    spellname = "Enchant Gloves - Threat";
    break;
  case 25073:
    spellname = "Enchant Gloves - Shadow Power";
    break;
  case 25074:
    spellname = "Enchant Gloves - Frost Power";
    break;
  case 25076:
    spellname = "Cobra Reflexes";
    break;
  case 25077:
    spellname = "Cobra Reflexes";
    break;
  case 25078:
    spellname = "Enchant Gloves - Fire Power";
    break;
  case 25079:
    spellname = "Enchant Gloves - Healing Power";
    break;
  case 25080:
    spellname = "Enchant Gloves - Superior Agility";
    break;
  case 25081:
    spellname = "Enchant Cloak - Greater Fire Resistance";
    break;
  case 25082:
    spellname = "Enchant Cloak - Greater Nature Resistance";
    break;
  case 25083:
    spellname = "Enchant Cloak - Stealth";
    break;
  case 25084:
    spellname = "Enchant Cloak - Subtlety";
    break;
  case 25085:
    spellname = "Bright Campfire";
    break;
  case 25086:
    spellname = "Enchant Cloak - Dodge";
    break;
  case 25098:
    spellname = "Transform Hero";
    break;
  case 25099:
    spellname = "Detonation";
    break;
  case 25100:
    spellname = "Untransform Hero";
    break;
  case 25101:
    spellname = "Battle Shout";
    break;
  case 25102:
    spellname = "Water Mastery";
    break;
  case 25104:
    spellname = "Summon Player";
    break;
  case 25105:
    spellname = "Green Dragon Transform DND";
    break;
  case 25106:
    spellname = "Red Dragon Transform DND";
    break;
  case 25107:
    spellname = "Blue Dragon Transform DND";
    break;
  case 25109:
    spellname = "Increase Spell Dam 8";
    break;
  case 25110:
    spellname = "Increase Spell Dam 16";
    break;
  case 25111:
    spellname = "Increase Spell Dam 24";
    break;
  case 25112:
    spellname = "Summon Voidwalker";
    break;
  case 25113:
    spellname = "Increase Spell Dam 36 and 14 Spell Crit";
    break;
  case 25114:
    spellname = "Increased Mana Regen";
    break;
  case 25115:
    spellname = "Increased Mana Regen";
    break;
  case 25116:
    spellname = "Increased Mana Regen & Healing";
    break;
  case 25117:
    spellname = "Minor Wizard Oil";
    break;
  case 25118:
    spellname = "Minor Mana Oil";
    break;
  case 25119:
    spellname = "Lesser Wizard Oil";
    break;
  case 25120:
    spellname = "Lesser Mana Oil";
    break;
  case 25121:
    spellname = "Wizard Oil";
    break;
  case 25122:
    spellname = "Brilliant Wizard Oil";
    break;
  case 25123:
    spellname = "Brilliant Mana Oil";
    break;
  case 25124:
    spellname = "Minor Wizard Oil";
    break;
  case 25125:
    spellname = "Minor Mana Oil";
    break;
  case 25126:
    spellname = "Lesser Wizard Oil";
    break;
  case 25127:
    spellname = "Lesser Mana Oil";
    break;
  case 25128:
    spellname = "Wizard Oil";
    break;
  case 25129:
    spellname = "Brilliant Wizard Oil";
    break;
  case 25130:
    spellname = "Brilliant Mana Oil";
    break;
  case 25139:
    spellname = "Teleport to Molten Core DND";
    break;
  case 25140:
    spellname = "Translocate";
    break;
  case 25142:
    spellname = "Heart of the Wild Bear Effect 2";
    break;
  case 25143:
    spellname = "Translocate";
    break;
  case 25145:
    spellname = "Merithra's Wake";
    break;
  case 25146:
    spellname = "Transmute: Elemental Fire";
    break;
  case 25148:
    spellname = "Sleep Visual DND";
    break;
  case 25149:
    spellname = "Arygos's Vengeance";
    break;
  case 25150:
    spellname = "Molten Rain";
    break;
  case 25152:
    spellname = "Agro Drones";
    break;
  case 25155:
    spellname = "Quest - Self Healing from resurrect";
    break;
  case 25158:
    spellname = "Time Stop";
    break;
  case 25159:
    spellname = "Call Prismatic Barrier";
    break;
  case 25160:
    spellname = "Sand Storm";
    break;
  case 25161:
    spellname = "Harsh Winds";
    break;
  case 25162:
    spellname = "Summon Disgusting Oozeling";
    break;
  case 25163:
    spellname = "Oozeling's Disgusting Aura";
    break;
  case 25164:
    spellname = "Vengeance";
    break;
  case 25165:
    spellname = "Baby Murloc Dance";
    break;
  case 25166:
    spellname = "Call Glyphs of Warding";
    break;
  case 25167:
    spellname = "Call Ancients";
    break;
  case 25168:
    spellname = "Frost Tomb";
    break;
  case 25169:
    spellname = "Fiery Justice";
    break;
  case 25170:
    spellname = "Fiery Death DND";
    break;
  case 25171:
    spellname = "Time Stop Visual DND";
    break;
  case 25172:
    spellname = "Merithra's Wake Visual DND";
    break;
  case 25174:
    spellname = "Sundering Cleave";
    break;
  case 25176:
    spellname = "Strength of Ossirian";
    break;
  case 25177:
    spellname = "Fire Weakness";
    break;
  case 25178:
    spellname = "Frost Weakness";
    break;
  case 25179:
    spellname = "Increase Healing 112";
    break;
  case 25180:
    spellname = "Nature Weakness";
    break;
  case 25181:
    spellname = "Arcane Weakness";
    break;
  case 25182:
    spellname = "Staghelm Shatters Hammer DND";
    break;
  case 25183:
    spellname = "Shadow Weakness";
    break;
  case 25185:
    spellname = "Itch";
    break;
  case 25187:
    spellname = "Hive'Zara Catalyst";
    break;
  case 25188:
    spellname = "War Stomp";
    break;
  case 25189:
    spellname = "Enveloping Winds";
    break;
  case 25190:
    spellname = "Stinger Charge";
    break;
  case 25191:
    spellname = "Stinger Charge";
    break;
  case 25195:
    spellname = "Curse of Tongues";
    break;
  case 25198:
    spellname = "Poison Cloud";
    break;
  case 25199:
    spellname = "Frog Self (TEST)";
    break;
  case 25201:
    spellname = "Anachronos Quest Credit DND";
    break;
  case 25202:
    spellname = "Demoralizing Shout";
    break;
  case 25203:
    spellname = "Demoralizing Shout";
    break;
  case 25207:
    spellname = "Amulet of the Moon";
    break;
  case 25208:
    spellname = "Rend";
    break;
  case 25210:
    spellname = "Greater Heal";
    break;
  case 25211:
    spellname = "Heavy Golden Necklace of Battle";
    break;
  case 25212:
    spellname = "Hamstring";
    break;
  case 25213:
    spellname = "Greater Heal";
    break;
  case 25217:
    spellname = "Power Word: Shield";
    break;
  case 25218:
    spellname = "Power Word: Shield";
    break;
  case 25221:
    spellname = "Renew";
    break;
  case 25222:
    spellname = "Renew";
    break;
  case 25225:
    spellname = "Sunder Armor";
    break;
  case 25228:
    spellname = "Soul Link";
    break;
  case 25229:
    spellname = "Jewelcrafting";
    break;
  case 25230:
    spellname = "Jewelcrafting";
    break;
  case 25231:
    spellname = "Cleave";
    break;
  case 25233:
    spellname = "Flash Heal";
    break;
  case 25234:
    spellname = "Execute";
    break;
  case 25235:
    spellname = "Flash Heal";
    break;
  case 25236:
    spellname = "Execute";
    break;
  case 25241:
    spellname = "Slam";
    break;
  case 25242:
    spellname = "Slam";
    break;
  case 25245:
    spellname = "Apprentice Jewelcrafting";
    break;
  case 25246:
    spellname = "Journeyman Jewelcrafting";
    break;
  case 25247:
    spellname = "Longsight";
    break;
  case 25248:
    spellname = "Mortal Strike";
    break;
  case 25251:
    spellname = "Bloodthirst";
    break;
  case 25252:
    spellname = "Bloodthirst";
    break;
  case 25253:
    spellname = "Bloodthirst";
    break;
  case 25255:
    spellname = "Delicate Copper Wire";
    break;
  case 25258:
    spellname = "Shield Slam";
    break;
  case 25260:
    spellname = "Wings of Despair";
    break;
  case 25262:
    spellname = "Abomination Spit";
    break;
  case 25263:
    spellname = "Holy Light";
    break;
  case 25264:
    spellname = "Thunder Clap";
    break;
  case 25266:
    spellname = "Mocking Blow";
    break;
  case 25269:
    spellname = "Revenge";
    break;
  case 25272:
    spellname = "Intercept";
    break;
  case 25273:
    spellname = "Intercept Stun";
    break;
  case 25274:
    spellname = "Intercept Stun";
    break;
  case 25275:
    spellname = "Intercept";
    break;
  case 25278:
    spellname = "Bronze Setting";
    break;
  case 25280:
    spellname = "Elegant Silver Ring";
    break;
  case 25282:
    spellname = "Shield of Rajaxx";
    break;
  case 25283:
    spellname = "Inlaid Malachite Ring";
    break;
  case 25284:
    spellname = "Simple Pearl Ring";
    break;
  case 25286:
    spellname = "Heroic Strike";
    break;
  case 25287:
    spellname = "Gloom Band";
    break;
  case 25288:
    spellname = "Revenge";
    break;
  case 25289:
    spellname = "Battle Shout";
    break;
  case 25290:
    spellname = "Blessing of Wisdom";
    break;
  case 25291:
    spellname = "Blessing of Might";
    break;
  case 25292:
    spellname = "Holy Light";
    break;
  case 25294:
    spellname = "Multi-Shot";
    break;
  case 25295:
    spellname = "Serpent Sting";
    break;
  case 25296:
    spellname = "Aspect of the Hawk";
    break;
  case 25297:
    spellname = "Healing Touch";
    break;
  case 25298:
    spellname = "Starfire";
    break;
  case 25299:
    spellname = "Rejuvenation";
    break;
  case 25300:
    spellname = "Backstab";
    break;
  case 25302:
    spellname = "Feint";
    break;
  case 25304:
    spellname = "Frostbolt";
    break;
  case 25305:
    spellname = "Heavy Silver Ring";
    break;
  case 25306:
    spellname = "Fireball";
    break;
  case 25307:
    spellname = "Shadow Bolt";
    break;
  case 25308:
    spellname = "Prayer of Healing";
    break;
  case 25309:
    spellname = "Immolate";
    break;
  case 25311:
    spellname = "Corruption";
    break;
  case 25312:
    spellname = "Divine Spirit";
    break;
  case 25314:
    spellname = "Greater Heal";
    break;
  case 25315:
    spellname = "Renew";
    break;
  case 25316:
    spellname = "Prayer of Healing";
    break;
  case 25317:
    spellname = "Ring of Silver Might";
    break;
  case 25318:
    spellname = "Ring of Twilight Shadows";
    break;
  case 25320:
    spellname = "Heavy Golden Necklace of Battle";
    break;
  case 25321:
    spellname = "Moonsoul Crown";
    break;
  case 25322:
    spellname = "Sweeping Slam";
    break;
  case 25323:
    spellname = "Wicked Moonstone Ring";
    break;
  case 25329:
    spellname = "Holy Nova";
    break;
  case 25331:
    spellname = "Holy Nova";
    break;
  case 25339:
    spellname = "Amulet of the Moon";
    break;
  case 25345:
    spellname = "Arcane Missiles";
    break;
  case 25346:
    spellname = "Arcane Missiles";
    break;
  case 25347:
    spellname = "Deadly Poison V";
    break;
  case 25349:
    spellname = "Deadly Poison V";
    break;
  case 25351:
    spellname = "Deadly Poison V";
    break;
  case 25357:
    spellname = "Healing Wave";
    break;
  case 25359:
    spellname = "Grace of Air Totem";
    break;
  case 25360:
    spellname = "Grace of Air";
    break;
  case 25361:
    spellname = "Strength of Earth Totem";
    break;
  case 25362:
    spellname = "Strength of Earth";
    break;
  case 25363:
    spellname = "Smite";
    break;
  case 25364:
    spellname = "Smite";
    break;
  case 25367:
    spellname = "Shadow Word: Pain";
    break;
  case 25368:
    spellname = "Shadow Word: Pain";
    break;
  case 25371:
    spellname = "Consume";
    break;
  case 25372:
    spellname = "Mind Blast";
    break;
  case 25373:
    spellname = "Consume";
    break;
  case 25375:
    spellname = "Mind Blast";
    break;
  case 25378:
    spellname = "Consume";
    break;
  case 25379:
    spellname = "Mana Burn";
    break;
  case 25380:
    spellname = "Mana Burn";
    break;
  case 25383:
    spellname = "Spit Out";
    break;
  case 25384:
    spellname = "Holy Fire";
    break;
  case 25387:
    spellname = "Mind Flay";
    break;
  case 25389:
    spellname = "Power Word: Fortitude";
    break;
  case 25391:
    spellname = "Healing Wave";
    break;
  case 25392:
    spellname = "Prayer of Fortitude";
    break;
  case 25396:
    spellname = "Healing Wave";
    break;
  case 25420:
    spellname = "Lesser Healing Wave";
    break;
  case 25422:
    spellname = "Chain Heal";
    break;
  case 25423:
    spellname = "Chain Heal";
    break;
  case 25424:
    spellname = "Poison Bolt";
    break;
  case 25425:
    spellname = "Shockwave";
    break;
  case 25429:
    spellname = "Fade";
    break;
  case 25431:
    spellname = "Inner Fire";
    break;
  case 25433:
    spellname = "Shadow Protection";
    break;
  case 25435:
    spellname = "Resurrection";
    break;
  case 25437:
    spellname = "Desperate Prayer";
    break;
  case 25439:
    spellname = "Chain Lightning";
    break;
  case 25440:
    spellname = "Feedback";
    break;
  case 25441:
    spellname = "Feedback";
    break;
  case 25442:
    spellname = "Chain Lightning";
    break;
  case 25446:
    spellname = "Starshards";
    break;
  case 25448:
    spellname = "Lightning Bolt";
    break;
  case 25449:
    spellname = "Lightning Bolt";
    break;
  case 25454:
    spellname = "Earth Shock";
    break;
  case 25457:
    spellname = "Flame Shock";
    break;
  case 25460:
    spellname = "Touch of Weakness";
    break;
  case 25461:
    spellname = "Touch of Weakness";
    break;
  case 25462:
    spellname = "Enlarge";
    break;
  case 25464:
    spellname = "Frost Shock";
    break;
  case 25465:
    spellname = "Firework";
    break;
  case 25467:
    spellname = "Devouring Plague";
    break;
  case 25469:
    spellname = "Lightning Shield";
    break;
  case 25470:
    spellname = "Hex of Weakness";
    break;
  case 25471:
    spellname = "Attack Order";
    break;
  case 25472:
    spellname = "Lightning Shield";
    break;
  case 25477:
    spellname = "Shadowguard";
    break;
  case 25479:
    spellname = "Rockbiter Weapon";
    break;
  case 25485:
    spellname = "Rockbiter Weapon";
    break;
  case 25488:
    spellname = "Flametongue Weapon Proc";
    break;
  case 25489:
    spellname = "Flametongue Weapon";
    break;
  case 25490:
    spellname = "Solid Bronze Ring";
    break;
  case 25493:
    spellname = "Braided Copper Ring";
    break;
  case 25495:
    spellname = "Firework Dazzled";
    break;
  case 25497:
    spellname = "Venom Spit";
    break;
  case 25498:
    spellname = "Barbaric Iron Collar";
    break;
  case 25500:
    spellname = "Frostbrand Weapon";
    break;
  case 25501:
    spellname = "Frostbrand Attack";
    break;
  case 25504:
    spellname = "Windfury Attack";
    break;
  case 25505:
    spellname = "Windfury Weapon";
    break;
  case 25506:
    spellname = "Stoneskin";
    break;
  case 25507:
    spellname = "Stoneskin";
    break;
  case 25508:
    spellname = "Stoneskin Totem";
    break;
  case 25509:
    spellname = "Stoneskin Totem";
    break;
  case 25512:
    spellname = "Stoneclaw Totem Effect";
    break;
  case 25513:
    spellname = "Stoneclaw Totem Passive";
    break;
  case 25514:
    spellname = "Flash of Light";
    break;
  case 25515:
    spellname = "Bash";
    break;
  case 25516:
    spellname = "Aura of Command";
    break;
  case 25525:
    spellname = "Stoneclaw Totem";
    break;
  case 25527:
    spellname = "Strength of Earth";
    break;
  case 25528:
    spellname = "Strength of Earth Totem";
    break;
  case 25530:
    spellname = "Attack";
    break;
  case 25531:
    spellname = "Shadow Mend";
    break;
  case 25533:
    spellname = "Searing Totem";
    break;
  case 25535:
    spellname = "Fire Nova";
    break;
  case 25537:
    spellname = "Fire Nova";
    break;
  case 25538:
    spellname = "Fire Nova";
    break;
  case 25539:
    spellname = "Fire Nova";
    break;
  case 25540:
    spellname = "Fire Nova";
    break;
  case 25544:
    spellname = "Fire Nova";
    break;
  case 25546:
    spellname = "Fire Nova Totem";
    break;
  case 25547:
    spellname = "Fire Nova Totem";
    break;
  case 25550:
    spellname = "Magma Totem";
    break;
  case 25551:
    spellname = "Magma Totem Passive";
    break;
  case 25552:
    spellname = "Magma Totem";
    break;
  case 25554:
    spellname = "Flametongue Totem Effect";
    break;
  case 25555:
    spellname = "Flametongue Totem Proc";
    break;
  case 25556:
    spellname = "Flametongue Totem Passive";
    break;
  case 25557:
    spellname = "Flametongue Totem";
    break;
  case 25559:
    spellname = "Frost Resistance";
    break;
  case 25560:
    spellname = "Frost Resistance Totem";
    break;
  case 25562:
    spellname = "Fire Resistance";
    break;
  case 25563:
    spellname = "Fire Resistance Totem";
    break;
  case 25565:
    spellname = "ClearAll";
    break;
  case 25566:
    spellname = "Healing Stream";
    break;
  case 25567:
    spellname = "Healing Stream Totem";
    break;
  case 25569:
    spellname = "Mana Spring";
    break;
  case 25570:
    spellname = "Mana Spring Totem";
    break;
  case 25572:
    spellname = "Pain Spike";
    break;
  case 25573:
    spellname = "Nature Resistance";
    break;
  case 25574:
    spellname = "Nature Resistance Totem";
    break;
  case 25576:
    spellname = "Windwall";
    break;
  case 25577:
    spellname = "Windwall Totem";
    break;
  case 25579:
    spellname = "Windfury Totem Effect";
    break;
  case 25580:
    spellname = "Windfury Totem Effect";
    break;
  case 25581:
    spellname = "Windfury Totem Passive";
    break;
  case 25582:
    spellname = "Windfury Totem Passive";
    break;
  case 25583:
    spellname = "Windfury Attack";
    break;
  case 25584:
    spellname = "Windfury Attack";
    break;
  case 25585:
    spellname = "Windfury Totem";
    break;
  case 25586:
    spellname = "Shadow Bolt Volley";
    break;
  case 25587:
    spellname = "Windfury Totem";
    break;
  case 25590:
    spellname = "Ancestral Spirit";
    break;
  case 25595:
    spellname = "Savage Pummel";
    break;
  case 25596:
    spellname = "Mind Soothe";
    break;
  case 25599:
    spellname = "Thundercrash";
    break;
  case 25602:
    spellname = "Faerie Fire";
    break;
  case 25603:
    spellname = "Slow";
    break;
  case 25605:
    spellname = "Poison";
    break;
  case 25606:
    spellname = "Pendant of the Agate Shield";
    break;
  case 25607:
    spellname = "Jade Pendant of Blasting";
    break;
  case 25608:
    spellname = "Citrine Pendant of Golden Healing";
    break;
  case 25610:
    spellname = "Pendant of the Agate Shield";
    break;
  case 25612:
    spellname = "Heavy Iron Knuckles";
    break;
  case 25613:
    spellname = "Golden Dragon Ring";
    break;
  case 25614:
    spellname = "Silver Rose Pendant";
    break;
  case 25615:
    spellname = "Mithril Filigree";
    break;
  case 25617:
    spellname = "Blazing Citrine Ring";
    break;
  case 25618:
    spellname = "Jade Pendant of Blasting";
    break;
  case 25619:
    spellname = "The Jade Eye";
    break;
  case 25620:
    spellname = "Engraved Truesilver Ring";
    break;
  case 25621:
    spellname = "Citrine Ring of Rapid Healing";
    break;
  case 25622:
    spellname = "Citrine Pendant of Golden Healing";
    break;
  case 25640:
    spellname = "Thorns";
    break;
  case 25641:
    spellname = "Frost Ward";
    break;
  case 25645:
    spellname = "Poison";
    break;
  case 25646:
    spellname = "Mortal Wound";
    break;
  case 25648:
    spellname = "Sand Trap";
    break;
  case 25649:
    spellname = "Translocate";
    break;
  case 25650:
    spellname = "Translocate";
    break;
  case 25651:
    spellname = "Flame Buffet";
    break;
  case 25652:
    spellname = "Translocate";
    break;
  case 25653:
    spellname = "Tail Sweep";
    break;
  case 25654:
    spellname = "Tail Lash";
    break;
  case 25655:
    spellname = "Dropped Weapon";
    break;
  case 25656:
    spellname = "Sand Trap";
    break;
  case 25659:
    spellname = "Dirge's Kickin' Chimaerok Chops";
    break;
  case 25660:
    spellname = "Food";
    break;
  case 25661:
    spellname = "Increased Stamina";
    break;
  case 25668:
    spellname = "Flame Buffet";
    break;
  case 25669:
    spellname = "Decapitate";
    break;
  case 25671:
    spellname = "Drain Mana";
    break;
  case 25672:
    spellname = "Arcane Eruption";
    break;
  case 25675:
    spellname = "Reindeer";
    break;
  case 25677:
    spellname = "Snowball";
    break;
  case 25678:
    spellname = "Siren's Song";
    break;
  case 25679:
    spellname = "Arcane Explosion";
    break;
  case 25681:
    spellname = "Summon Mana Fiend";
    break;
  case 25682:
    spellname = "Summon Mana Fiend";
    break;
  case 25683:
    spellname = "Summon Mana Fiend";
    break;
  case 25685:
    spellname = "Energize";
    break;
  case 25686:
    spellname = "Super Snowball";
    break;
  case 25687:
    spellname = "Super Snowball";
    break;
  case 25688:
    spellname = "Narain!";
    break;
  case 25689:
    spellname = "Increase Fire Dam 57";
    break;
  case 25690:
    spellname = "Brain Food";
    break;
  case 25691:
    spellname = "Brain Food";
    break;
  case 25692:
    spellname = "Brain Food";
    break;
  case 25693:
    spellname = "Brain Food";
    break;
  case 25694:
    spellname = "Well Fed";
    break;
  case 25695:
    spellname = "Food";
    break;
  case 25696:
    spellname = "Drink";
    break;
  case 25697:
    spellname = "Old Enriched Manna Biscuit";
    break;
  case 25698:
    spellname = "Explode";
    break;
  case 25699:
    spellname = "Explode";
    break;
  case 25700:
    spellname = "Food";
    break;
  case 25701:
    spellname = "Brain Food";
    break;
  case 25702:
    spellname = "Food";
    break;
  case 25703:
    spellname = "Brain Food";
    break;
  case 25704:
    spellname = "Smoked Sagefish";
    break;
  case 25706:
    spellname = "Increase Shadow Dam 57";
    break;
  case 25709:
    spellname = "Hive'Zara Swarmer Teleport";
    break;
  case 25710:
    spellname = "Heroic Strike";
    break;
  case 25712:
    spellname = "Heroic Strike";
    break;
  case 25713:
    spellname = "Seal of Righteousness";
    break;
  case 25716:
    spellname = "Force Self - Bow";
    break;
  case 25717:
    spellname = "Spell Penetration";
    break;
  case 25718:
    spellname = "Spell Penetration";
    break;
  case 25719:
    spellname = "Bind Draconic For Dummies";
    break;
  case 25720:
    spellname = "Place Loot";
    break;
  case 25721:
    spellname = "Feed";
    break;
  case 25722:
    spellname = "Rumsey Rum Dark";
    break;
  case 25725:
    spellname = "Paralyze";
    break;
  case 25735:
    spellname = "Seal of Righteousness";
    break;
  case 25736:
    spellname = "Seal of Righteousness";
    break;
  case 25737:
    spellname = "Seal of Righteousness";
    break;
  case 25738:
    spellname = "Seal of Righteousness";
    break;
  case 25739:
    spellname = "Seal of Righteousness";
    break;
  case 25740:
    spellname = "Seal of Righteousness";
    break;
  case 25741:
    spellname = "Seal of Righteousness";
    break;
  case 25742:
    spellname = "Seal of Righteousness";
    break;
  case 25743:
    spellname = "Dark Water";
    break;
  case 25744:
    spellname = "Rampage";
    break;
  case 25746:
    spellname = "Damage Absorb";
    break;
  case 25747:
    spellname = "Damage Absorb";
    break;
  case 25748:
    spellname = "Poison Stinger";
    break;
  case 25749:
    spellname = "Stinger Spray";
    break;
  case 25750:
    spellname = "Damage Absorb";
    break;
  case 25755:
    spellname = "Drain Mana";
    break;
  case 25756:
    spellname = "Purge";
    break;
  case 25759:
    spellname = "Video Camera 1";
    break;
  case 25760:
    spellname = "Video Camera 2";
    break;
  case 25761:
    spellname = "Video Camera 3";
    break;
  case 25762:
    spellname = "Video Camera 4";
    break;
  case 25766:
    spellname = "Spell Penetration";
    break;
  case 25767:
    spellname = "Mystical Disjunction";
    break;
  case 25768:
    spellname = "Mystical Disjunction";
    break;
  case 25770:
    spellname = "Bloody Death";
    break;
  case 25771:
    spellname = "Forbearance";
    break;
  case 25772:
    spellname = "Mental Domination";
    break;
  case 25774:
    spellname = "Mind Shatter";
    break;
  case 25777:
    spellname = "Thorns";
    break;
  case 25778:
    spellname = "Knock Away";
    break;
  case 25779:
    spellname = "Mana Burn";
    break;
  case 25780:
    spellname = "Righteous Fury";
    break;
  case 25781:
    spellname = "Righteous Fury";
    break;
  case 25782:
    spellname = "Greater Blessing of Might";
    break;
  case 25783:
    spellname = "Place Arcanite Buoy";
    break;
  case 25786:
    spellname = "Toxic Vapors";
    break;
  case 25787:
    spellname = "Surge";
    break;
  case 25788:
    spellname = "Head Butt";
    break;
  case 25790:
    spellname = "Vengeance";
    break;
  case 25791:
    spellname = "Xandivious Demon Bag";
    break;
  case 25793:
    spellname = "Demon Summoning Torch";
    break;
  case 25794:
    spellname = "Ahn'Qiraj Reward Buff (Melee - 20)";
    break;
  case 25795:
    spellname = "Ahn'Qiraj Reward Buff (Melee - 40)";
    break;
  case 25796:
    spellname = "Ahn'Qiraj Reward Buff (Melee - 60)";
    break;
  case 25797:
    spellname = "Ahn'Qiraj Reward Buff (Caster - 20)";
    break;
  case 25798:
    spellname = "Ahn'Qiraj Reward Buff (Caster - 40)";
    break;
  case 25799:
    spellname = "Ahn'Qiraj Reward Buff (Caster - 60)";
    break;
  case 25800:
    spellname = "Ahn'Qiraj Reward Buff (Trigger - 20)";
    break;
  case 25801:
    spellname = "Frenzy Aura";
    break;
  case 25802:
    spellname = "Ahn'Qiraj Reward Buff (Trigger - 40)";
    break;
  case 25803:
    spellname = "Ahn'Qiraj Reward Buff (Trigger - 60)";
    break;
  case 25804:
    spellname = "Rumsey Rum Black Label";
    break;
  case 25805:
    spellname = "Soul Corruption";
    break;
  case 25806:
    spellname = "Creature of Nightmare";
    break;
  case 25807:
    spellname = "Great Heal";
    break;
  case 25808:
    spellname = "Dispel";
    break;
  case 25809:
    spellname = "Crippling Poison";
    break;
  case 25810:
    spellname = "Mind-numbing Poison";
    break;
  case 25811:
    spellname = "Poison Bolt";
    break;
  case 25812:
    spellname = "Toxic Volley";
    break;
  case 25813:
    spellname = "Conjure Dream Rift";
    break;
  case 25814:
    spellname = "Wide Slash";
    break;
  case 25815:
    spellname = "Frightening Shriek";
    break;
  case 25816:
    spellname = "Hex of Weakness";
    break;
  case 25817:
    spellname = "Tranquility";
    break;
  case 25818:
    spellname = "Aura of Rot";
    break;
  case 25819:
    spellname = "Aura of Rot";
    break;
  case 25820:
    spellname = "Aura of Fear";
    break;
  case 25821:
    spellname = "Charge";
    break;
  case 25822:
    spellname = "Firecrackers";
    break;
  case 25823:
    spellname = "Spotlight";
    break;
  case 25824:
    spellname = "Spotlight";
    break;
  case 25825:
    spellname = "Hive'Zara Swarmer Teleport";
    break;
  case 25826:
    spellname = "Hive'Zara Swarmer Teleport";
    break;
  case 25827:
    spellname = "Hive'Zara Swarmer Teleport";
    break;
  case 25828:
    spellname = "Hive'Zara Swarmer Teleport";
    break;
  case 25829:
    spellname = "Holy Power";
    break;
  case 25831:
    spellname = "Summon Worm";
    break;
  case 25832:
    spellname = "Summon Worm";
    break;
  case 25836:
    spellname = "Unyielding Faith";
    break;
  case 25838:
    spellname = "Smothering Sands";
    break;
  case 25839:
    spellname = "Mass Healing";
    break;
  case 25840:
    spellname = "Full Heal";
    break;
  case 25841:
    spellname = "Prayer of Elune";
    break;
  case 25843:
    spellname = "Create Hive'Zora Scout Report";
    break;
  case 25845:
    spellname = "Create Hive'Ashi Scout Report";
    break;
  case 25846:
    spellname = "Eranikus Night Elf DND";
    break;
  case 25847:
    spellname = "Create Hive'Regal Scout Report";
    break;
  case 25848:
    spellname = "Test Enemy Crit Bonus - 10%";
    break;
  case 25849:
    spellname = "Summon Baby Shark";
    break;
  case 25850:
    spellname = "Drain Festive Mug";
    break;
  case 25851:
    spellname = "Lightheaded";
    break;
  case 25852:
    spellname = "Lash";
    break;
  case 25853:
    spellname = "Empty Festive Mug";
    break;
  case 25854:
    spellname = "Create Filled Festive Mug";
    break;
  case 25855:
    spellname = "Filling";
    break;
  case 25856:
    spellname = "Create Filled Festive Mug";
    break;
  case 25858:
    spellname = "Reindeer";
    break;
  case 25859:
    spellname = "Reindeer";
    break;
  case 25860:
    spellname = "Reindeer Transformation";
    break;
  case 25861:
    spellname = "Call Scepter DND";
    break;
  case 25863:
    spellname = "Summon Black Qiraji Battle Tank";
    break;
  case 25864:
    spellname = "Will Drain Festive Mug";
    break;
  case 25865:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25866:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25867:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25868:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25869:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25870:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25871:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25872:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25873:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25874:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25875:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25876:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25877:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25878:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25879:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25880:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25881:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25882:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25883:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25884:
    spellname = "Summon Glob of Viscidus";
    break;
  case 25886:
    spellname = "Food";
    break;
  case 25887:
    spellname = "Brain Food";
    break;
  case 25888:
    spellname = "Food";
    break;
  case 25889:
    spellname = "Brain Food";
    break;
  case 25890:
    spellname = "Greater Blessing of Light";
    break;
  case 25891:
    spellname = "Earthstrike";
    break;
  case 25892:
    spellname = "Grace of Earth";
    break;
  case 25894:
    spellname = "Greater Blessing of Wisdom";
    break;
  case 25895:
    spellname = "Greater Blessing of Salvation";
    break;
  case 25896:
    spellname = "Rejoin Viscidus";
    break;
  case 25898:
    spellname = "Greater Blessing of Kings";
    break;
  case 25899:
    spellname = "Greater Blessing of Sanctuary";
    break;
  case 25901:
    spellname = "Weapon Damage";
    break;
  case 25902:
    spellname = "Holy Shock";
    break;
  case 25903:
    spellname = "Holy Shock";
    break;
  case 25906:
    spellname = "Spell Blasting";
    break;
  case 25907:
    spellname = "Spell Blasting";
    break;
  case 25908:
    spellname = "Tranquil Air Totem";
    break;
  case 25909:
    spellname = "Tranquil Air";
    break;
  case 25911:
    spellname = "Holy Shock";
    break;
  case 25912:
    spellname = "Holy Shock";
    break;
  case 25913:
    spellname = "Holy Shock";
    break;
  case 25914:
    spellname = "Holy Shock";
    break;
  case 25916:
    spellname = "Greater Blessing of Might";
    break;
  case 25918:
    spellname = "Greater Blessing of Wisdom";
    break;
  case 25937:
    spellname = "Viscidus Freeze";
    break;
  case 25938:
    spellname = "Viscidus Explode Trigger";
    break;
  case 25941:
    spellname = "Well Fed";
    break;
  case 25947:
    spellname = "Infatuation";
    break;
  case 25952:
    spellname = "Reindeer Dust Effect";
    break;
  case 25953:
    spellname = "Summon Blue Qiraji Battle Tank";
    break;
  case 25954:
    spellname = "Sagefish Delight";
    break;
  case 25956:
    spellname = "Improved Judgement";
    break;
  case 25957:
    spellname = "Improved Judgement";
    break;
  case 25975:
    spellname = "Increased Spell Penetration 10";
    break;
  case 25988:
    spellname = "Eye for an Eye";
    break;
  case 25989:
    spellname = "Toxin";
    break;
  case 25990:
    spellname = "Graccu's Mince Meat Fruitcake";
    break;
  case 25991:
    spellname = "Poison Bolt Volley";
    break;
  case 25992:
    spellname = "Brood of Nozdormu Factoin +1000";
    break;
  case 25993:
    spellname = "Poison Shock";
    break;
  case 25995:
    spellname = "Snowball Visual Test";
    break;
  case 25996:
    spellname = "Snowball Lasting Visual";
    break;
  case 25997:
    spellname = "Eye for an Eye";
    break;
  case 25999:
    spellname = "Boar Charge";
    break;
  case 26000:
    spellname = "Snowball Cloud";
    break;
  case 26001:
    spellname = "Reputation - Ahn'Qiraj Temple Boss";
    break;
  case 26003:
    spellname = "Viscidus Suicide Trigger";
    break;
  case 26004:
    spellname = "Mistletoe";
    break;
  case 26005:
    spellname = "Mistletoe Response";
    break;
  case 26006:
    spellname = "Shadow Bolt";
    break;
  case 26007:
    spellname = "Uppercut";
    break;
  case 26008:
    spellname = "Toast";
    break;
  case 26009:
    spellname = "Rotate 360";
    break;
  case 26010:
    spellname = "Summon Tranquil Mechanical Yeti";
    break;
  case 26011:
    spellname = "Tranquil Mechanical Yeti";
    break;
  case 26012:
    spellname = "Tranquil Mechanical Yeti";
    break;
  case 26013:
    spellname = "Deserter";
    break;
  case 26016:
    spellname = "Vindication";
    break;
  case 26017:
    spellname = "Vindication";
    break;
  case 26018:
    spellname = "Vindication";
    break;
  case 26019:
    spellname = "QAEnchant Boots +8% Speed";
    break;
  case 26020:
    spellname = "QAEnchant Gloves +5 Herbalism";
    break;
  case 26021:
    spellname = "Vindication";
    break;
  case 26022:
    spellname = "Pursuit of Justice";
    break;
  case 26023:
    spellname = "Pursuit of Justice";
    break;
  case 26025:
    spellname = "Impale";
    break;
  case 26027:
    spellname = "Knockback";
    break;
  case 26029:
    spellname = "Dark Glare";
    break;
  case 26030:
    spellname = "Windblossom Berries";
    break;
  case 26034:
    spellname = "Viscidus Slowed";
    break;
  case 26035:
    spellname = "Celebrate Good Times!";
    break;
  case 26036:
    spellname = "Viscidus Slowed More";
    break;
  case 26038:
    spellname = "Whirlwind";
    break;
  case 26041:
    spellname = "Frenzy";
    break;
  case 26042:
    spellname = "Psychic Scream";
    break;
  case 26043:
    spellname = "Battle Shout";
    break;
  case 26044:
    spellname = "Mind Flay";
    break;
  case 26045:
    spellname = "Summon Snowman";
    break;
  case 26046:
    spellname = "Mana Burn";
    break;
  case 26047:
    spellname = "Birth";
    break;
  case 26048:
    spellname = "Mind Blast";
    break;
  case 26049:
    spellname = "Mana Burn";
    break;
  case 26050:
    spellname = "Acid Spit";
    break;
  case 26051:
    spellname = "Frenzy";
    break;
  case 26052:
    spellname = "Poison Bolt";
    break;
  case 26053:
    spellname = "Noxious Poison";
    break;
  case 26054:
    spellname = "Summon Red Qiraji Battle Tank";
    break;
  case 26055:
    spellname = "Summon Yellow Qiraji Battle Tank";
    break;
  case 26056:
    spellname = "Summon Green Qiraji Battle Tank";
    break;
  case 26058:
    spellname = "Summon Ouro Mounds";
    break;
  case 26059:
    spellname = "Explode";
    break;
  case 26060:
    spellname = "Summon Ouro Scarabs";
    break;
  case 26061:
    spellname = "Summon Ouro";
    break;
  case 26062:
    spellname = "Birth Cast";
    break;
  case 26063:
    spellname = "Ouro Submerge Visual";
    break;
  case 26064:
    spellname = "Shell Shield";
    break;
  case 26065:
    spellname = "Shell Shield";
    break;
  case 26066:
    spellname = "Defender of the Timbermaw";
    break;
  case 26067:
    spellname = "Summon Mechanical Greench";
    break;
  case 26068:
    spellname = "Berserk";
    break;
  case 26069:
    spellname = "Silence";
    break;
  case 26070:
    spellname = "Fear";
    break;
  case 26071:
    spellname = "Entangling Roots";
    break;
  case 26072:
    spellname = "Dust Cloud";
    break;
  case 26073:
    spellname = "Fire Nova";
    break;
  case 26074:
    spellname = "Holiday Cheer";
    break;
  case 26077:
    spellname = "Itch";
    break;
  case 26078:
    spellname = "Vekniss Catalyst";
    break;
  case 26079:
    spellname = "Cause Insanity";
    break;
  case 26081:
    spellname = "Stinger Charge";
    break;
  case 26082:
    spellname = "Stinger Charge";
    break;
  case 26083:
    spellname = "Whirlwind";
    break;
  case 26084:
    spellname = "Whirlwind";
    break;
  case 26085:
    spellname = "Soul Pouch";
    break;
  case 26086:
    spellname = "Felcloth Bag";
    break;
  case 26087:
    spellname = "Core Felcloth Bag";
    break;
  case 26090:
    spellname = "Thunderstomp";
    break;
  case 26093:
    spellname = "Quake";
    break;
  case 26094:
    spellname = "Thunderstomp";
    break;
  case 26095:
    spellname = "Felcloth Bag";
    break;
  case 26097:
    spellname = "Healing Wave";
    break;
  case 26098:
    spellname = "Lightning Bolt";
    break;
  case 26099:
    spellname = "Battle Shout";
    break;
  case 26100:
    spellname = "Ground Rupture";
    break;
  case 26102:
    spellname = "Sand Blast";
    break;
  case 26103:
    spellname = "Sweep";
    break;
  case 26106:
    spellname = "Genesis Rebirth Bonus";
    break;
  case 26107:
    spellname = "Symbols of Unending Life Finisher Bonus";
    break;
  case 26108:
    spellname = "Glimpse of Madness";
    break;
  case 26109:
    spellname = "Conqueror Shout Bonus";
    break;
  case 26110:
    spellname = "Conqueror Thunder Clap Bonus";
    break;
  case 26111:
    spellname = "Battlegear of Unyielding Strength Intercept Bonus";
    break;
  case 26112:
    spellname = "Deathdealer Evasion Bonus";
    break;
  case 26113:
    spellname = "Deathdealer Eviscerate Bonus";
    break;
  case 26114:
    spellname = "Emblems of Veiled Shadows Slice and Dice Bonus";
    break;
  case 26115:
    spellname = "Bruiser Sleeping";
    break;
  case 26116:
    spellname = "Doomcaller Immolate Bonus";
    break;
  case 26117:
    spellname = "Doomcaller Reduced Shadow Bolt Cost";
    break;
  case 26118:
    spellname = "Implements of Unspoken Names Pet Bonus";
    break;
  case 26119:
    spellname = "Stormcaller Spelldamage Bonus";
    break;
  case 26121:
    spellname = "Stormcaller's Wrath";
    break;
  case 26122:
    spellname = "Stormcaller Chain Heal Bonus";
    break;
  case 26123:
    spellname = "Gift of the Gathering Storm Chain Lightning Bonus";
    break;
  case 26125:
    spellname = "Horde Reputation";
    break;
  case 26126:
    spellname = "Alliance Reputation";
    break;
  case 26127:
    spellname = "Enigma Blizzard Bonus";
    break;
  case 26128:
    spellname = "Enigma Resist Bonus";
    break;
  case 26129:
    spellname = "Enigma's Answer";
    break;
  case 26130:
    spellname = "Avenger Judgment Bonus";
    break;
  case 26131:
    spellname = "Trappings of Vaulted Secrets Mana Shield Bonus";
    break;
  case 26132:
    spellname = "Enigma's Solitude";
    break;
  case 26134:
    spellname = "Eye Beam";
    break;
  case 26135:
    spellname = "Battlegear of Eternal Justice";
    break;
  case 26136:
    spellname = "Rotate -360";
    break;
  case 26137:
    spellname = "Rotate Trigger";
    break;
  case 26139:
    spellname = "Ground Rupture";
    break;
  case 26141:
    spellname = "Hamstring";
    break;
  case 26142:
    spellname = "Increase Spell Dam 53";
    break;
  case 26143:
    spellname = "Mind Flay";
    break;
  case 26153:
    spellname = "Attack Power - Feral (+0140)";
    break;
  case 26154:
    spellname = "Increase Healing 90";
    break;
  case 26155:
    spellname = "Increase Spell Dam 59";
    break;
  case 26157:
    spellname = "PX-238 Winter Wondervolt";
    break;
  case 26158:
    spellname = "Increase Spell Dam 60";
    break;
  case 26166:
    spellname = "Obsidian Insight";
    break;
  case 26167:
    spellname = "Colossal Smash";
    break;
  case 26168:
    spellname = "Chitinous Spikes";
    break;
  case 26169:
    spellname = "Oracle Healing Bonus";
    break;
  case 26170:
    spellname = "Oracular Heal";
    break;
  case 26171:
    spellname = "Increased Renew Duration";
    break;
  case 26172:
    spellname = "Infinite Wisdom Shadow Word: Pain Bonus";
    break;
  case 26173:
    spellname = "Striker's Arcane Shot Bonus";
    break;
  case 26174:
    spellname = "Striker's Rapid Fire Bonus";
    break;
  case 26175:
    spellname = "Increased Spell Penetration 38";
    break;
  case 26176:
    spellname = "Unseen Path Pet Bonus";
    break;
  case 26177:
    spellname = "Charge";
    break;
  case 26178:
    spellname = "Charge";
    break;
  case 26179:
    spellname = "Charge";
    break;
  case 26180:
    spellname = "Wyvern Sting";
    break;
  case 26181:
    spellname = "Strike";
    break;
  case 26184:
    spellname = "Charge";
    break;
  case 26185:
    spellname = "Charge";
    break;
  case 26186:
    spellname = "Charge";
    break;
  case 26187:
    spellname = "Thunderstomp";
    break;
  case 26188:
    spellname = "Thunderstomp";
    break;
  case 26189:
    spellname = "Thunderstomp";
    break;
  case 26190:
    spellname = "Thunderstomp";
    break;
  case 26192:
    spellname = "Arcane Explosion";
    break;
  case 26193:
    spellname = "Consume";
    break;
  case 26194:
    spellname = "Earth Shock";
    break;
  case 26195:
    spellname = "Whisperings of C'Thun";
    break;
  case 26196:
    spellname = "Consume";
    break;
  case 26197:
    spellname = "Whisperings of C'Thun";
    break;
  case 26198:
    spellname = "Whisperings of C'Thun";
    break;
  case 26201:
    spellname = "Charge";
    break;
  case 26202:
    spellname = "Charge";
    break;
  case 26203:
    spellname = "Spell Penetration 150 Fire Resist";
    break;
  case 26204:
    spellname = "Spell Penetration 150 Frost Resist";
    break;
  case 26206:
    spellname = "Create Mistletoe";
    break;
  case 26207:
    spellname = "Create Fresh Holly";
    break;
  case 26208:
    spellname = "Resist Silence";
    break;
  case 26211:
    spellname = "Hamstring";
    break;
  case 26218:
    spellname = "Mistletoe";
    break;
  case 26221:
    spellname = "Exit Stomach";
    break;
  case 26225:
    spellname = "Increase Healing 106";
    break;
  case 26226:
    spellname = "Widow Bite";
    break;
  case 26227:
    spellname = "Increase Spell Dam 68";
    break;
  case 26228:
    spellname = "Increase Healing 121";
    break;
  case 26232:
    spellname = "Transform C'Thun -> Phase 2";
    break;
  case 26233:
    spellname = "Wyvern Sting";
    break;
  case 26234:
    spellname = "Submerge Visual";
    break;
  case 26235:
    spellname = "Cthun Vulnerable";
    break;
  case 26258:
    spellname = "Whisperings of C'Thun";
    break;
  case 26259:
    spellname = "Whisperings of C'Thun";
    break;
  case 26260:
    spellname = "Food";
    break;
  case 26261:
    spellname = "Drink";
    break;
  case 26262:
    spellname = "Birth";
    break;
  case 26263:
    spellname = "Dim Sum";
    break;
  case 26265:
    spellname = "Create Elune Stone";
    break;
  case 26271:
    spellname = "Rocky Ground Impact";
    break;
  case 26272:
    spellname = "PX-238 Winter Wondervolt";
    break;
  case 26273:
    spellname = "PX-238 Winter Wondervolt";
    break;
  case 26274:
    spellname = "PX-238 Winter Wondervolt";
    break;
  case 26275:
    spellname = "PX-238 Winter Wondervolt TRAP";
    break;
  case 26276:
    spellname = "Greater Firepower";
    break;
  case 26277:
    spellname = "Elixir of Greater Firepower";
    break;
  case 26279:
    spellname = "Stormshroud Gloves";
    break;
  case 26281:
    spellname = "Taunt";
    break;
  case 26282:
    spellname = "Shoot Tauren Rifleman";
    break;
  case 26283:
    spellname = "Increased Spell Penetration 20";
    break;
  case 26284:
    spellname = "Summon Ouro Trigger";
    break;
  case 26286:
    spellname = "Small Red Rocket";
    break;
  case 26287:
    spellname = "Summon Rocky Base";
    break;
  case 26290:
    spellname = "Bow Specialization";
    break;
  case 26291:
    spellname = "Small Blue Rocket";
    break;
  case 26292:
    spellname = "Small Green Rocket";
    break;
  case 26293:
    spellname = "Small Purple Rocket";
    break;
  case 26294:
    spellname = "Small White Rocket";
    break;
  case 26295:
    spellname = "Small Yellow Rocket";
    break;
  case 26296:
    spellname = "Berserking";
    break;
  case 26297:
    spellname = "Berserking";
    break;
  case 26298:
    spellname = "Create Firework Rocket Launcher";
    break;
  case 26299:
    spellname = "Create Cluster Rocket Launcher";
    break;
  case 26304:
    spellname = "Blue Firework Cluster";
    break;
  case 26325:
    spellname = "Green Firework Cluster";
    break;
  case 26326:
    spellname = "Purple Firework Cluster";
    break;
  case 26327:
    spellname = "Red Firework Cluster";
    break;
  case 26328:
    spellname = "White Firework Cluster";
    break;
  case 26329:
    spellname = "Yellow Firework Cluster";
    break;
  case 26331:
    spellname = "Vengeance";
    break;
  case 26332:
    spellname = "Summon Mouth Tentacle";
    break;
  case 26333:
    spellname = "Large Blue Rocket";
    break;
  case 26334:
    spellname = "Large Green Rocket";
    break;
  case 26335:
    spellname = "Large Purple Rocket";
    break;
  case 26336:
    spellname = "Large Red Rocket";
    break;
  case 26337:
    spellname = "Large White Rocket";
    break;
  case 26338:
    spellname = "Large Yellow Rocket";
    break;
  case 26339:
    spellname = "Saurfang's Rage";
    break;
  case 26344:
    spellname = "Rocket";
    break;
  case 26345:
    spellname = "Rocket";
    break;
  case 26346:
    spellname = "Rocket";
    break;
  case 26347:
    spellname = "Rocket";
    break;
  case 26348:
    spellname = "Rocket";
    break;
  case 26349:
    spellname = "Rocket";
    break;
  case 26350:
    spellname = "Cleave";
    break;
  case 26351:
    spellname = "Rocket";
    break;
  case 26352:
    spellname = "Rocket";
    break;
  case 26353:
    spellname = "Rocket";
    break;
  case 26354:
    spellname = "Rocket";
    break;
  case 26355:
    spellname = "Rocket";
    break;
  case 26356:
    spellname = "Rocket";
    break;
  case 26363:
    spellname = "Lightning Shield";
    break;
  case 26364:
    spellname = "Lightning Shield";
    break;
  case 26365:
    spellname = "Lightning Shield";
    break;
  case 26366:
    spellname = "Lightning Shield";
    break;
  case 26367:
    spellname = "Lightning Shield";
    break;
  case 26368:
    spellname = "ClearAllo";
    break;
  case 26369:
    spellname = "Lightning Shield";
    break;
  case 26370:
    spellname = "Lightning Shield";
    break;
  case 26371:
    spellname = "Lightning Shield";
    break;
  case 26372:
    spellname = "Lightning Shield";
    break;
  case 26373:
    spellname = "Lunar Invitation";
    break;
  case 26374:
    spellname = "Elune's Candle";
    break;
  case 26375:
    spellname = "Create Lunar Festival Invitation";
    break;
  case 26376:
    spellname = "Combo PROC Test";
    break;
  case 26377:
    spellname = "My Little PROC";
    break;
  case 26379:
    spellname = "Piercing Shriek";
    break;
  case 26381:
    spellname = "Burrow";
    break;
  case 26388:
    spellname = "Glowy (NoColor)";
    break;
  case 26389:
    spellname = "Moonglow Alcohol";
    break;
  case 26390:
    spellname = "Glowy (NoColor)";
    break;
  case 26391:
    spellname = "Tentacle Call";
    break;
  case 26392:
    spellname = "Omen's Moonlight";
    break;
  case 26393:
    spellname = "Elune's Blessing";
    break;
  case 26394:
    spellname = "Elune's Blessing (quest credit)";
    break;
  case 26395:
    spellname = "Increase Spell Dam 72";
    break;
  case 26400:
    spellname = "Arcane Shroud";
    break;
  case 26401:
    spellname = "Food";
    break;
  case 26402:
    spellname = "Drink";
    break;
  case 26403:
    spellname = "Festival Dress";
    break;
  case 26405:
    spellname = "Increase Fire Dam 57";
    break;
  case 26406:
    spellname = "Holiday - Lunar Teleport Cap: Stormwind";
    break;
  case 26407:
    spellname = "Festive Red Pant Suit";
    break;
  case 26408:
    spellname = "Holiday - Lunar Teleport Cap: Ironforge";
    break;
  case 26409:
    spellname = "Holiday - Lunar Teleport Cap: Darnassus";
    break;
  case 26410:
    spellname = "Holiday - Lunar Teleport Cap: Undercity";
    break;
  case 26412:
    spellname = "Holiday - Lunar Teleport Cap: Thunderbluff";
    break;
  case 26414:
    spellname = "Holiday - Lunar Teleport Cap: Orgrimmar";
    break;
  case 26415:
    spellname = "Shock";
    break;
  case 26416:
    spellname = "Small Blue Rocket";
    break;
  case 26417:
    spellname = "Small Green Rocket";
    break;
  case 26418:
    spellname = "Small Red Rocket";
    break;
  case 26419:
    spellname = "Acid Spray";
    break;
  case 26420:
    spellname = "Large Blue Rocket";
    break;
  case 26421:
    spellname = "Large Green Rocket";
    break;
  case 26422:
    spellname = "Large Red Rocket";
    break;
  case 26423:
    spellname = "Blue Rocket Cluster";
    break;
  case 26424:
    spellname = "Green Rocket Cluster";
    break;
  case 26425:
    spellname = "Red Rocket Cluster";
    break;
  case 26426:
    spellname = "Large Blue Rocket Cluster";
    break;
  case 26427:
    spellname = "Large Green Rocket Cluster";
    break;
  case 26428:
    spellname = "Large Red Rocket Cluster";
    break;
  case 26442:
    spellname = "Firework Launcher";
    break;
  case 26443:
    spellname = "Firework Cluster Launcher";
    break;
  case 26446:
    spellname = "Summon Player";
    break;
  case 26448:
    spellname = "Holiday - Teleport: Moonglade";
    break;
  case 26450:
    spellname = "Holiday - Lunar Teleport: Darnassus";
    break;
  case 26451:
    spellname = "Holiday - Teleport: Moonglade (self)";
    break;
  case 26452:
    spellname = "Holiday - Lunar Teleport: Ironforge";
    break;
  case 26453:
    spellname = "Holiday - Lunar Teleport: Orgrimmar";
    break;
  case 26454:
    spellname = "Holiday - Lunar Teleport: Stormwind";
    break;
  case 26455:
    spellname = "Holiday - Lunar Teleport: Thunderbluff";
    break;
  case 26456:
    spellname = "Holiday - Lunar Teleport: Undercity";
    break;
  case 26458:
    spellname = "Shock Blast";
    break;
  case 26459:
    spellname = "Increase Spell Dam 80";
    break;
  case 26460:
    spellname = "Increase Spell Dam 76";
    break;
  case 26461:
    spellname = "Increase Healing 143";
    break;
  case 26462:
    spellname = "Festival Fortune!";
    break;
  case 26463:
    spellname = "Mercurial Shield";
    break;
  case 26464:
    spellname = "Mercurial Shield";
    break;
  case 26465:
    spellname = "Mercurial Shield";
    break;
  case 26467:
    spellname = "Persistent Shield";
    break;
  case 26468:
    spellname = "Summon Snowman";
    break;
  case 26469:
    spellname = "Summon Snowman";
    break;
  case 26470:
    spellname = "Persistent Shield";
    break;
  case 26471:
    spellname = "Lunar Festival Port Error";
    break;
  case 26472:
    spellname = "Food";
    break;
  case 26473:
    spellname = "Drink";
    break;
  case 26474:
    spellname = "Food";
    break;
  case 26475:
    spellname = "Drink";
    break;
  case 26476:
    spellname = "Digestive Acid";
    break;
  case 26478:
    spellname = "Ground Rupture";
    break;
  case 26480:
    spellname = "Badge of the Swarmguard";
    break;
  case 26481:
    spellname = "Insight of the Qiraji";
    break;
  case 26488:
    spellname = "Large Blue Firework Cluster";
    break;
  case 26489:
    spellname = "Entering Battleground";
    break;
  case 26490:
    spellname = "Large Green Firework Cluster";
    break;
  case 26516:
    spellname = "Large Purple Firework Cluster";
    break;
  case 26517:
    spellname = "Large Red Firework Cluster";
    break;
  case 26518:
    spellname = "Large White Firework Cluster";
    break;
  case 26519:
    spellname = "Large Yellow Firework Cluster";
    break;
  case 26521:
    spellname = "Lucky Lunar Rocket";
    break;
  case 26522:
    spellname = "Lunar Fortune";
    break;
  case 26527:
    spellname = "Enrage";
    break;
  case 26528:
    spellname = "Summon Reindeer";
    break;
  case 26529:
    spellname = "Summon Reindeer";
    break;
  case 26530:
    spellname = "Summon Reindeer";
    break;
  case 26532:
    spellname = "Summon Helper";
    break;
  case 26533:
    spellname = "Summon Helper";
    break;
  case 26534:
    spellname = "Summon Helper";
    break;
  case 26536:
    spellname = "Summon Helper";
    break;
  case 26537:
    spellname = "Summon Helper";
    break;
  case 26540:
    spellname = "Starfall";
    break;
  case 26541:
    spellname = "Summon Helper";
    break;
  case 26546:
    spellname = "Shadow Storm";
    break;
  case 26547:
    spellname = "Green Glowing Owl";
    break;
  case 26548:
    spellname = "Impale";
    break;
  case 26550:
    spellname = "Lightning Cloud";
    break;
  case 26551:
    spellname = "Jade Owl";
    break;
  case 26552:
    spellname = "Nullify";
    break;
  case 26554:
    spellname = "Thunderclap";
    break;
  case 26555:
    spellname = "Shadow Storm";
    break;
  case 26556:
    spellname = "Plague";
    break;
  case 26557:
    spellname = "Plague Effect";
    break;
  case 26558:
    spellname = "Meteor";
    break;
  case 26561:
    spellname = "Berserker Charge";
    break;
  case 26562:
    spellname = "Aquamarine Pendant of the Warrior";
    break;
  case 26563:
    spellname = "Jade Owl Summoned";
    break;
  case 26565:
    spellname = "Heal Brethren";
    break;
  case 26566:
    spellname = "Translocate";
    break;
  case 26571:
    spellname = "Golden Hare";
    break;
  case 26572:
    spellname = "Translocate";
    break;
  case 26573:
    spellname = "Consecration";
    break;
  case 26575:
    spellname = "Toxin";
    break;
  case 26576:
    spellname = "Black Pearl Panther";
    break;
  case 26578:
    spellname = "Stealth 3";
    break;
  case 26580:
    spellname = "Fear";
    break;
  case 26581:
    spellname = "Truesilver Crab";
    break;
  case 26584:
    spellname = "Summon Toxic Slime";
    break;
  case 26586:
    spellname = "Birth";
    break;
  case 26587:
    spellname = "Opening Scarab Coffer";
    break;
  case 26588:
    spellname = "Opening Greater Scarab Coffer";
    break;
  case 26590:
    spellname = "Summon Poison Cloud";
    break;
  case 26592:
    spellname = "Bestial Wrath";
    break;
  case 26593:
    spellname = "Truesilver Boar";
    break;
  case 26596:
    spellname = "Weapon Damage";
    break;
  case 26597:
    spellname = "Weapon Damage";
    break;
  case 26598:
    spellname = "Weapon Damage";
    break;
  case 26599:
    spellname = "Ruby Serpent";
    break;
  case 26600:
    spellname = "Emerald Owl";
    break;
  case 26601:
    spellname = "Poison Bolt";
    break;
  case 26605:
    spellname = "Bloodcrown";
    break;
  case 26606:
    spellname = "Bloodcrown";
    break;
  case 26607:
    spellname = "Blizzard";
    break;
  case 26608:
    spellname = "Despawn Globs";
    break;
  case 26609:
    spellname = "Black Diamond Crab";
    break;
  case 26610:
    spellname = "Poison";
    break;
  case 26612:
    spellname = "Poison";
    break;
  case 26613:
    spellname = "Unbalancing Strike";
    break;
  case 26614:
    spellname = "Dark Iron Scorpid";
    break;
  case 26615:
    spellname = "Berserk";
    break;
  case 26616:
    spellname = "Boulder";
    break;
  case 26618:
    spellname = "Despawn Worms";
    break;
  case 26622:
    spellname = "Elune's Candle";
    break;
  case 26623:
    spellname = "Elune's Candle";
    break;
  case 26624:
    spellname = "Elune's Candle";
    break;
  case 26625:
    spellname = "Elune's Candle";
    break;
  case 26635:
    spellname = "Berserking";
    break;
  case 26636:
    spellname = "Elune's Candle";
    break;
  case 26638:
    spellname = "Twin Teleport Visual";
    break;
  case 26639:
    spellname = "Drain Mana";
    break;
  case 26641:
    spellname = "Aura of Fear";
    break;
  case 26642:
    spellname = "Summon Ouro";
    break;
  case 26643:
    spellname = "Arcane Explosion";
    break;
  case 26646:
    spellname = "Buru Egg Trigger Effect";
    break;
  case 26647:
    spellname = "Increased Mana Regen";
    break;
  case 26649:
    spellname = "Elune's Candle";
    break;
  case 26654:
    spellname = "Sweeping Strikes";
    break;
  case 26655:
    spellname = "Summon Black Qiraji Battle Tank";
    break;
  case 26656:
    spellname = "Summon Black Qiraji Battle Tank";
    break;
  case 26659:
    spellname = "Sam's Test Aura";
    break;
  case 26660:
    spellname = "Duskwither's Fireball";
    break;
  case 26661:
    spellname = "Fear";
    break;
  case 26662:
    spellname = "Berserk";
    break;
  case 26663:
    spellname = "Valentine";
    break;
  case 26664:
    spellname = "The Power of Friendship";
    break;
  case 26665:
    spellname = "Receive Object of Affection";
    break;
  case 26666:
    spellname = "Dmg Shield2";
    break;
  case 26669:
    spellname = "Evasion";
    break;
  case 26677:
    spellname = "Cure Poison";
    break;
  case 26678:
    spellname = "Create Heart Candy";
    break;
  case 26679:
    spellname = "Deadly Throw";
    break;
  case 26680:
    spellname = "Adored";
    break;
  case 26681:
    spellname = "Cologne";
    break;
  case 26682:
    spellname = "Perfume";
    break;
  case 26683:
    spellname = "Get Gosssip";
    break;
  case 26686:
    spellname = "Whirlwind";
    break;
  case 26687:
    spellname = "Revall";
    break;
  case 26688:
    spellname = "Anesthetic Poison";
    break;
  case 26690:
    spellname = "Increase Healing 110";
    break;
  case 26692:
    spellname = "Increase Fire/Arcane Dam 55";
    break;
  case 26693:
    spellname = "Drain Life";
    break;
  case 26694:
    spellname = "Increase Fire Dam 59";
    break;
  case 26695:
    spellname = "Increase Fire Dam 60";
    break;
  case 26696:
    spellname = "Increase Fire Dam 61";
    break;
  case 26697:
    spellname = "Increase Fire Dam 63";
    break;
  case 26698:
    spellname = "Increase Fire Dam 64";
    break;
  case 26699:
    spellname = "Increase Fire Dam 66";
    break;
  case 26700:
    spellname = "Increase Fire Dam 67";
    break;
  case 26701:
    spellname = "Increase Fire Dam 69";
    break;
  case 26702:
    spellname = "Increase Fire Dam 70";
    break;
  case 26703:
    spellname = "Increase Fire Dam 72";
    break;
  case 26704:
    spellname = "Increase Arcane Dam 56";
    break;
  case 26705:
    spellname = "Increase Arcane Dam 57";
    break;
  case 26706:
    spellname = "Increase Arcane Dam 59";
    break;
  case 26707:
    spellname = "Increase Arcane Dam 60";
    break;
  case 26708:
    spellname = "Increase Arcane Dam 61";
    break;
  case 26709:
    spellname = "Increase Arcane Dam 63";
    break;
  case 26710:
    spellname = "Increase Arcane Dam 64";
    break;
  case 26711:
    spellname = "Increase Arcane Dam 66";
    break;
  case 26712:
    spellname = "Increase Arcane Dam 67";
    break;
  case 26713:
    spellname = "Increase Arcane Dam 69";
    break;
  case 26714:
    spellname = "Increase Arcane Dam 70";
    break;
  case 26715:
    spellname = "Increase Arcane Dam 72";
    break;
  case 26716:
    spellname = "Increase Frost Dam 56";
    break;
  case 26717:
    spellname = "Increase Frost Dam 57";
    break;
  case 26718:
    spellname = "Increase Frost Dam 59";
    break;
  case 26719:
    spellname = "Increase Frost Dam 60";
    break;
  case 26720:
    spellname = "Increase Frost Dam 61";
    break;
  case 26721:
    spellname = "Increase Frost Dam 63";
    break;
  case 26722:
    spellname = "Increase Frost Dam 64";
    break;
  case 26723:
    spellname = "Increase Frost Dam 66";
    break;
  case 26724:
    spellname = "Increase Frost Dam 67";
    break;
  case 26725:
    spellname = "Increase Frost Dam 69";
    break;
  case 26726:
    spellname = "Increase Frost Dam 70";
    break;
  case 26727:
    spellname = "Increase Frost Dam 72";
    break;
  case 26728:
    spellname = "Increase Shadow Dam 56";
    break;
  case 26729:
    spellname = "Increase Shadow Dam 57";
    break;
  case 26730:
    spellname = "Increase Shadow Dam 59";
    break;
  case 26731:
    spellname = "Increase Shadow Dam 60";
    break;
  case 26732:
    spellname = "Increase Shadow Dam 61";
    break;
  case 26733:
    spellname = "Increase Shadow Dam 63";
    break;
  case 26734:
    spellname = "Increase Shadow Dam 66";
    break;
  case 26735:
    spellname = "Increase Shadow Dam 67";
    break;
  case 26736:
    spellname = "Increase Shadow Dam 70";
    break;
  case 26737:
    spellname = "Increase Shadow Dam 72";
    break;
  case 26740:
    spellname = "Gnomish Mind Control Cap";
    break;
  case 26742:
    spellname = "Snaggle";
    break;
  case 26743:
    spellname = "QAEnchant Weapon +20 Spirit";
    break;
  case 26745:
    spellname = "Bolt of Netherweave";
    break;
  case 26746:
    spellname = "Netherweave Bag";
    break;
  case 26747:
    spellname = "Bolt of Imbued Netherweave";
    break;
  case 26748:
    spellname = "Wyvern Sting";
    break;
  case 26749:
    spellname = "Imbued Netherweave Bag";
    break;
  case 26750:
    spellname = "Bolt of Soulcloth";
    break;
  case 26751:
    spellname = "Primal Mooncloth";
    break;
  case 26752:
    spellname = "Spellfire Belt";
    break;
  case 26753:
    spellname = "Spellfire Gloves";
    break;
  case 26754:
    spellname = "Spellfire Robe";
    break;
  case 26755:
    spellname = "Spellfire Bag";
    break;
  case 26756:
    spellname = "Frozen Shadoweave Shoulders";
    break;
  case 26757:
    spellname = "Frozen Shadoweave Boots";
    break;
  case 26758:
    spellname = "Frozen Shadoweave Robe";
    break;
  case 26759:
    spellname = "Ebon Shadowbag";
    break;
  case 26760:
    spellname = "Primal Mooncloth Belt";
    break;
  case 26761:
    spellname = "Primal Mooncloth Shoulders";
    break;
  case 26762:
    spellname = "Primal Mooncloth Robe";
    break;
  case 26763:
    spellname = "Primal Mooncloth Bag";
    break;
  case 26764:
    spellname = "Netherweave Bracers";
    break;
  case 26765:
    spellname = "Netherweave Belt";
    break;
  case 26770:
    spellname = "Netherweave Gloves";
    break;
  case 26771:
    spellname = "Netherweave Pants";
    break;
  case 26772:
    spellname = "Netherweave Boots";
    break;
  case 26773:
    spellname = "Netherweave Robe";
    break;
  case 26774:
    spellname = "Netherweave Tunic";
    break;
  case 26775:
    spellname = "Imbued Netherweave Pants";
    break;
  case 26776:
    spellname = "Imbued Netherweave Boots";
    break;
  case 26777:
    spellname = "Imbued Netherweave Robe";
    break;
  case 26778:
    spellname = "Imbued Netherweave Tunic";
    break;
  case 26779:
    spellname = "Soulcloth Gloves";
    break;
  case 26780:
    spellname = "Soulcloth Shoulders";
    break;
  case 26781:
    spellname = "Soulcloth Vest";
    break;
  case 26782:
    spellname = "Arcanoweave Bracers";
    break;
  case 26783:
    spellname = "Arcanoweave Boots";
    break;
  case 26784:
    spellname = "Arcanoweave Robe";
    break;
  case 26785:
    spellname = "Anesthetic Poison";
    break;
  case 26786:
    spellname = "Anesthetic Poison";
    break;
  case 26789:
    spellname = "Shard of the Fallen Star";
    break;
  case 26790:
    spellname = "Tailoring";
    break;
  case 26791:
    spellname = "Master Tailor";
    break;
  case 26792:
    spellname = "QAEnchant Weapon +15 Agility";
    break;
  case 26793:
    spellname = "QAEnchant Weapon +22 Intellect";
    break;
  case 26796:
    spellname = "Spellfire Tailoring";
    break;
  case 26797:
    spellname = "Spellfire Tailoring";
    break;
  case 26798:
    spellname = "Mooncloth Tailoring";
    break;
  case 26799:
    spellname = "Mooncloth Tailoring";
    break;
  case 26800:
    spellname = "Shadoweave Tailoring";
    break;
  case 26801:
    spellname = "Shadoweave Tailoring";
    break;
  case 26802:
    spellname = "Detect Amore";
    break;
  case 26814:
    spellname = "Increase Healing 187";
    break;
  case 26839:
    spellname = "Garrote";
    break;
  case 26846:
    spellname = "Picnic Blanket";
    break;
  case 26861:
    spellname = "Sinister Strike";
    break;
  case 26862:
    spellname = "Sinister Strike";
    break;
  case 26863:
    spellname = "Backstab";
    break;
  case 26864:
    spellname = "Hemorrhage";
    break;
  case 26865:
    spellname = "Eviscerate";
    break;
  case 26866:
    spellname = "Expose Armor";
    break;
  case 26867:
    spellname = "Rupture";
    break;
  case 26868:
    spellname = "Opening";
    break;
  case 26869:
    spellname = "Amorous";
    break;
  case 26872:
    spellname = "Figurine - Jade Owl";
    break;
  case 26873:
    spellname = "Figurine - Golden Hare";
    break;
  case 26874:
    spellname = "Aquamarine Signet";
    break;
  case 26875:
    spellname = "Figurine - Black Pearl Panther";
    break;
  case 26876:
    spellname = "Aquamarine Pendant of the Warrior";
    break;
  case 26878:
    spellname = "Ruby Crown of Restoration";
    break;
  case 26879:
    spellname = "Remove Amorous";
    break;
  case 26880:
    spellname = "Thorium Setting";
    break;
  case 26881:
    spellname = "Figurine - Truesilver Crab";
    break;
  case 26882:
    spellname = "Figurine - Truesilver Boar";
    break;
  case 26883:
    spellname = "Ruby Pendant of Fire";
    break;
  case 26884:
    spellname = "Garrote";
    break;
  case 26885:
    spellname = "Truesilver Healing Ring";
    break;
  case 26887:
    spellname = "The Aquamarine Ward";
    break;
  case 26888:
    spellname = "Vanish";
    break;
  case 26889:
    spellname = "Vanish";
    break;
  case 26890:
    spellname = "Instant Poison VII";
    break;
  case 26891:
    spellname = "Instant Poison VII";
    break;
  case 26892:
    spellname = "Instant Poison VII";
    break;
  case 26896:
    spellname = "Gem Studded Band";
    break;
  case 26897:
    spellname = "Opal Necklace of Impact";
    break;
  case 26898:
    spellname = "Heartbroken";
    break;
  case 26899:
    spellname = "Give Friendship Bracelet";
    break;
  case 26900:
    spellname = "Figurine - Ruby Serpent";
    break;
  case 26901:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 26902:
    spellname = "Simple Opal Ring";
    break;
  case 26903:
    spellname = "Sapphire Signet";
    break;
  case 26904:
    spellname = "Cut Emerald";
    break;
  case 26905:
    spellname = "Cut Azerothian Diamond";
    break;
  case 26906:
    spellname = "Emerald Crown of Destruction";
    break;
  case 26907:
    spellname = "Onslaught Ring";
    break;
  case 26908:
    spellname = "Sapphire Pendant of Winter Night";
    break;
  case 26909:
    spellname = "Figurine - Emerald Owl";
    break;
  case 26910:
    spellname = "Ring of Bitter Shadows";
    break;
  case 26911:
    spellname = "Living Emerald Pendant";
    break;
  case 26912:
    spellname = "Figurine - Black Diamond Crab";
    break;
  case 26914:
    spellname = "Figurine - Dark Iron Scorpid";
    break;
  case 26915:
    spellname = "Necklace of the Diamond Tower";
    break;
  case 26916:
    spellname = "Band of Natural Fire";
    break;
  case 26918:
    spellname = "Arcanite Sword Pendant";
    break;
  case 26920:
    spellname = "Blood Crown";
    break;
  case 26921:
    spellname = "Cancel Heartbroken";
    break;
  case 26923:
    spellname = "Valentine";
    break;
  case 26924:
    spellname = "Valentine";
    break;
  case 26925:
    spellname = "Woven Copper Ring";
    break;
  case 26926:
    spellname = "Heavy Copper Ring";
    break;
  case 26927:
    spellname = "Thick Bronze Necklace";
    break;
  case 26928:
    spellname = "Ornate Tigerseye Necklace";
    break;
  case 26967:
    spellname = "Deadly Poison VI";
    break;
  case 26968:
    spellname = "Deadly Poison VI";
    break;
  case 26969:
    spellname = "Deadly Poison VI";
    break;
  case 26972:
    spellname = "Summon Panda Cub";
    break;
  case 26975:
    spellname = "Battlegear of Eternal Justice";
    break;
  case 26976:
    spellname = "Symbols of Unending Life";
    break;
  case 26977:
    spellname = "Curse of the Elemental Lord";
    break;
  case 26978:
    spellname = "Healing Touch";
    break;
  case 26979:
    spellname = "Healing Touch";
    break;
  case 26980:
    spellname = "Regrowth";
    break;
  case 26981:
    spellname = "Rejuvenation";
    break;
  case 26982:
    spellname = "Rejuvenation";
    break;
  case 26983:
    spellname = "Tranquility";
    break;
  case 26984:
    spellname = "Wrath";
    break;
  case 26985:
    spellname = "Wrath";
    break;
  case 26986:
    spellname = "Starfire";
    break;
  case 26987:
    spellname = "Moonfire";
    break;
  case 26988:
    spellname = "Moonfire";
    break;
  case 26989:
    spellname = "Entangling Roots";
    break;
  case 26990:
    spellname = "Mark of the Wild";
    break;
  case 26991:
    spellname = "Gift of the Wild";
    break;
  case 26992:
    spellname = "Thorns";
    break;
  case 26993:
    spellname = "Faerie Fire";
    break;
  case 26994:
    spellname = "Rebirth";
    break;
  case 26995:
    spellname = "Soothe Animal";
    break;
  case 26996:
    spellname = "Maul";
    break;
  case 26997:
    spellname = "Swipe";
    break;
  case 26998:
    spellname = "Demoralizing Roar";
    break;
  case 26999:
    spellname = "Frenzied Regeneration";
    break;
  case 27000:
    spellname = "Claw";
    break;
  case 27001:
    spellname = "Shred";
    break;
  case 27002:
    spellname = "Shred";
    break;
  case 27003:
    spellname = "Rake";
    break;
  case 27004:
    spellname = "Cower";
    break;
  case 27005:
    spellname = "Ravage";
    break;
  case 27006:
    spellname = "Pounce";
    break;
  case 27007:
    spellname = "Pounce Bleed";
    break;
  case 27008:
    spellname = "Rip";
    break;
  case 27009:
    spellname = "Nature's Grasp";
    break;
  case 27010:
    spellname = "Entangling Roots";
    break;
  case 27011:
    spellname = "Faerie Fire (Feral)";
    break;
  case 27012:
    spellname = "Hurricane";
    break;
  case 27013:
    spellname = "Insect Swarm";
    break;
  case 27014:
    spellname = "Raptor Strike";
    break;
  case 27015:
    spellname = "Disengage";
    break;
  case 27016:
    spellname = "Serpent Sting";
    break;
  case 27018:
    spellname = "Viper Sting";
    break;
  case 27019:
    spellname = "Arcane Shot";
    break;
  case 27020:
    spellname = "Distracting Shot";
    break;
  case 27021:
    spellname = "Multi-Shot";
    break;
  case 27022:
    spellname = "Volley";
    break;
  case 27023:
    spellname = "Immolation Trap";
    break;
  case 27024:
    spellname = "Immolation Trap Effect";
    break;
  case 27025:
    spellname = "Explosive Trap";
    break;
  case 27026:
    spellname = "Explosive Trap Effect";
    break;
  case 27028:
    spellname = "First Aid";
    break;
  case 27029:
    spellname = "Master First Aid";
    break;
  case 27030:
    spellname = "First Aid";
    break;
  case 27031:
    spellname = "First Aid";
    break;
  case 27032:
    spellname = "Netherweave Bandage";
    break;
  case 27033:
    spellname = "Heavy Netherweave Bandage";
    break;
  case 27035:
    spellname = "Sword Specialization (OLD)";
    break;
  case 27037:
    spellname = "Stealth +8";
    break;
  case 27038:
    spellname = "Increased Pet Health +3%";
    break;
  case 27039:
    spellname = "Increased Pet Health +3%";
    break;
  case 27042:
    spellname = "Increased Pet Crit +2%";
    break;
  case 27043:
    spellname = "Increased Pet Crit +2%";
    break;
  case 27044:
    spellname = "Aspect of the Hawk";
    break;
  case 27045:
    spellname = "Aspect of the Wild";
    break;
  case 27046:
    spellname = "Mend Pet";
    break;
  case 27047:
    spellname = "Growl";
    break;
  case 27048:
    spellname = "Cower";
    break;
  case 27049:
    spellname = "Claw";
    break;
  case 27050:
    spellname = "Bite";
    break;
  case 27051:
    spellname = "Screech";
    break;
  case 27052:
    spellname = "Arcane Resistance";
    break;
  case 27053:
    spellname = "Fire Resistance";
    break;
  case 27054:
    spellname = "Frost Resistance";
    break;
  case 27055:
    spellname = "Nature Resistance";
    break;
  case 27056:
    spellname = "Shadow Resistance";
    break;
  case 27057:
    spellname = "Test Black Diamond";
    break;
  case 27058:
    spellname = "Test Black Diamond AGAIN";
    break;
  case 27059:
    spellname = "Test Black Diamond Debug";
    break;
  case 27060:
    spellname = "Scorpid Poison";
    break;
  case 27061:
    spellname = "Natural Armor";
    break;
  case 27062:
    spellname = "Great Stamina";
    break;
  case 27063:
    spellname = "Thunderstomp";
    break;
  case 27065:
    spellname = "Aimed Shot";
    break;
  case 27066:
    spellname = "Trueshot Aura";
    break;
  case 27067:
    spellname = "Counterattack";
    break;
  case 27068:
    spellname = "Wyvern Sting";
    break;
  case 27069:
    spellname = "Wyvern Sting";
    break;
  case 27070:
    spellname = "Fireball";
    break;
  case 27071:
    spellname = "Frostbolt";
    break;
  case 27072:
    spellname = "Frostbolt";
    break;
  case 27073:
    spellname = "Scorch";
    break;
  case 27074:
    spellname = "Scorch";
    break;
  case 27075:
    spellname = "Arcane Missiles";
    break;
  case 27076:
    spellname = "Arcane Missiles";
    break;
  case 27078:
    spellname = "Fire Blast";
    break;
  case 27079:
    spellname = "Fire Blast";
    break;
  case 27080:
    spellname = "Arcane Explosion";
    break;
  case 27082:
    spellname = "Arcane Explosion";
    break;
  case 27085:
    spellname = "Blizzard";
    break;
  case 27086:
    spellname = "Flamestrike";
    break;
  case 27087:
    spellname = "Cone of Cold";
    break;
  case 27088:
    spellname = "Frost Nova";
    break;
  case 27089:
    spellname = "Drink";
    break;
  case 27090:
    spellname = "Conjure Water";
    break;
  case 27093:
    spellname = "QAEnchant Weapon +15 Strength";
    break;
  case 27094:
    spellname = "Food";
    break;
  case 27095:
    spellname = "Intuition";
    break;
  case 27096:
    spellname = "Intuition";
    break;
  case 27097:
    spellname = "Intuition";
    break;
  case 27099:
    spellname = "Intuition";
    break;
  case 27101:
    spellname = "Conjure Mana Emerald";
    break;
  case 27102:
    spellname = "QAEnchant Weapon Unholy";
    break;
  case 27103:
    spellname = "Replenish Mana";
    break;
  case 27104:
    spellname = "QAEnchant Weapon Lifestealing";
    break;
  case 27107:
    spellname = "QAEnchant Chest +4 Stats";
    break;
  case 27108:
    spellname = "QAEnchant Gloves +20 Frost Damage";
    break;
  case 27109:
    spellname = "QAEnchant Gloves +20 Fire Damage";
    break;
  case 27110:
    spellname = "QAEnchant Gloves +20 Shadow Damage";
    break;
  case 27111:
    spellname = "QAEnchant Gloves +30 Healing";
    break;
  case 27112:
    spellname = "QAEnchant Gloves +15 Agility";
    break;
  case 27113:
    spellname = "QAEnchant Gloves +2% Threat";
    break;
  case 27114:
    spellname = "QAEnchant Gloves +5 Skinning";
    break;
  case 27115:
    spellname = "QAEnchant Bracer +4 Mana\5";
    break;
  case 27116:
    spellname = "QAEnchant Bracer +24 Healing";
    break;
  case 27117:
    spellname = "QAEnchant Shield +2% Block Chance";
    break;
  case 27118:
    spellname = "QAEnchant Cloak +15 Fire Resistance";
    break;
  case 27119:
    spellname = "QAEnchant Cloak +15 Nature Resistance";
    break;
  case 27120:
    spellname = "QAEnchant Cloak +8 Stealth";
    break;
  case 27121:
    spellname = "QAEnchant Cloak -2% Threat";
    break;
  case 27122:
    spellname = "QAEnchant Cloak +1% Dodge";
    break;
  case 27124:
    spellname = "Ice Armor";
    break;
  case 27125:
    spellname = "Mage Armor";
    break;
  case 27126:
    spellname = "Arcane Intellect";
    break;
  case 27127:
    spellname = "Arcane Brilliance";
    break;
  case 27128:
    spellname = "Fire Ward";
    break;
  case 27130:
    spellname = "Amplify Magic";
    break;
  case 27131:
    spellname = "Mana Shield";
    break;
  case 27132:
    spellname = "Pyroblast";
    break;
  case 27133:
    spellname = "Blast Wave";
    break;
  case 27134:
    spellname = "Ice Barrier";
    break;
  case 27135:
    spellname = "Holy Light";
    break;
  case 27136:
    spellname = "Holy Light";
    break;
  case 27137:
    spellname = "Flash of Light";
    break;
  case 27138:
    spellname = "Exorcism";
    break;
  case 27139:
    spellname = "Holy Wrath";
    break;
  case 27140:
    spellname = "Blessing of Might";
    break;
  case 27141:
    spellname = "Greater Blessing of Might";
    break;
  case 27142:
    spellname = "Blessing of Wisdom";
    break;
  case 27143:
    spellname = "Greater Blessing of Wisdom";
    break;
  case 27144:
    spellname = "Blessing of Light";
    break;
  case 27145:
    spellname = "Greater Blessing of Light";
    break;
  case 27146:
    spellname = "Left Piece of Lord Valthalak's Amulet";
    break;
  case 27147:
    spellname = "Blessing of Sacrifice";
    break;
  case 27148:
    spellname = "Blessing of Sacrifice";
    break;
  case 27149:
    spellname = "Devotion Aura";
    break;
  case 27150:
    spellname = "Retribution Aura";
    break;
  case 27151:
    spellname = "Shadow Resistance Aura";
    break;
  case 27152:
    spellname = "Frost Resistance Aura";
    break;
  case 27153:
    spellname = "Fire Resistance Aura";
    break;
  case 27154:
    spellname = "Lay on Hands";
    break;
  case 27155:
    spellname = "Seal of Righteousness";
    break;
  case 27156:
    spellname = "Seal of Righteousness";
    break;
  case 27157:
    spellname = "Judgement of Righteousness";
    break;
  case 27158:
    spellname = "Seal of the Crusader";
    break;
  case 27159:
    spellname = "Judgement of the Crusader";
    break;
  case 27160:
    spellname = "Seal of Light";
    break;
  case 27161:
    spellname = "Seal of Light";
    break;
  case 27162:
    spellname = "Judgement of Light";
    break;
  case 27163:
    spellname = "Judgement of Light";
    break;
  case 27164:
    spellname = "Judgement of Wisdom";
    break;
  case 27165:
    spellname = "Judgement of Wisdom";
    break;
  case 27166:
    spellname = "Seal of Wisdom";
    break;
  case 27167:
    spellname = "Seal of Wisdom";
    break;
  case 27168:
    spellname = "Blessing of Sanctuary";
    break;
  case 27169:
    spellname = "Greater Blessing of Sanctuary";
    break;
  case 27170:
    spellname = "Seal of Command";
    break;
  case 27171:
    spellname = "Judgement of Command";
    break;
  case 27172:
    spellname = "Judgement of Command";
    break;
  case 27173:
    spellname = "Consecration";
    break;
  case 27174:
    spellname = "Holy Shock";
    break;
  case 27175:
    spellname = "Holy Shock";
    break;
  case 27176:
    spellname = "Holy Shock";
    break;
  case 27177:
    spellname = "Defile";
    break;
  case 27179:
    spellname = "Holy Shield";
    break;
  case 27180:
    spellname = "Hammer of Wrath";
    break;
  case 27181:
    spellname = "Nether Cloak";
    break;
  case 27182:
    spellname = "Nether Affliction";
    break;
  case 27183:
    spellname = "Defile";
    break;
  case 27184:
    spellname = "Summon Mor Grayhoof DND";
    break;
  case 27186:
    spellname = "Deadly Poison VII";
    break;
  case 27187:
    spellname = "Deadly Poison VII";
    break;
  case 27188:
    spellname = "Wound Poison";
    break;
  case 27189:
    spellname = "Wound Poison";
    break;
  case 27190:
    spellname = "Summon Isalien DND";
    break;
  case 27191:
    spellname = "Summon Jarien and Sothos DND";
    break;
  case 27192:
    spellname = "Defile";
    break;
  case 27193:
    spellname = "Defile";
    break;
  case 27194:
    spellname = "Defile";
    break;
  case 27195:
    spellname = "Defile";
    break;
  case 27196:
    spellname = "Defile";
    break;
  case 27197:
    spellname = "Defile";
    break;
  case 27198:
    spellname = "Defile";
    break;
  case 27199:
    spellname = "Defile";
    break;
  case 27200:
    spellname = "Defile";
    break;
  case 27201:
    spellname = "Summon Kormok DND";
    break;
  case 27202:
    spellname = "Summon Lord Valthalak DND";
    break;
  case 27203:
    spellname = "Summon Various DND";
    break;
  case 27204:
    spellname = "QADebug Instant Cast";
    break;
  case 27205:
    spellname = "Increased Pet Damage +3%";
    break;
  case 27206:
    spellname = "Increased Pet Damage +3%";
    break;
  case 27208:
    spellname = "Increased Pet Armor +10%";
    break;
  case 27209:
    spellname = "Shadow Bolt";
    break;
  case 27210:
    spellname = "Searing Pain";
    break;
  case 27211:
    spellname = "Soul Fire";
    break;
  case 27212:
    spellname = "Rain of Fire";
    break;
  case 27213:
    spellname = "Hellfire";
    break;
  case 27214:
    spellname = "Hellfire Effect";
    break;
  case 27215:
    spellname = "Immolate";
    break;
  case 27216:
    spellname = "Corruption";
    break;
  case 27217:
    spellname = "Drain Soul";
    break;
  case 27218:
    spellname = "Curse of Agony";
    break;
  case 27219:
    spellname = "Drain Life";
    break;
  case 27220:
    spellname = "Drain Life";
    break;
  case 27221:
    spellname = "Drain Mana";
    break;
  case 27222:
    spellname = "Life Tap";
    break;
  case 27223:
    spellname = "Death Coil";
    break;
  case 27224:
    spellname = "Curse of Weakness";
    break;
  case 27225:
    spellname = "Increased Pet Armor +10%";
    break;
  case 27226:
    spellname = "Curse of Recklessness";
    break;
  case 27228:
    spellname = "Curse of the Elements";
    break;
  case 27229:
    spellname = "Curse of Shadow";
    break;
  case 27230:
    spellname = "Create Healthstone";
    break;
  case 27235:
    spellname = "Master Healthstone";
    break;
  case 27236:
    spellname = "Master Healthstone";
    break;
  case 27237:
    spellname = "Master Healthstone";
    break;
  case 27238:
    spellname = "Create Soulstone";
    break;
  case 27239:
    spellname = "Soulstone Resurrection";
    break;
  case 27240:
    spellname = "Use Soulstone";
    break;
  case 27241:
    spellname = "Summon Gurky";
    break;
  case 27242:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27243:
    spellname = "Seed of Corruption";
    break;
  case 27244:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27245:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27246:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27247:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27248:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27249:
    spellname = "Summon Spectral Assassin";
    break;
  case 27250:
    spellname = "Create Firestone";
    break;
  case 27252:
    spellname = "Firestone Passive";
    break;
  case 27253:
    spellname = "Master Firestone Attack";
    break;
  case 27254:
    spellname = "dmg8";
    break;
  case 27255:
    spellname = "dmg9";
    break;
  case 27256:
    spellname = "Increase Fire Dam 30";
    break;
  case 27258:
    spellname = "dmg10";
    break;
  case 27259:
    spellname = "Health Funnel";
    break;
  case 27260:
    spellname = "Demon Armor";
    break;
  case 27261:
    spellname = "dmg11";
    break;
  case 27263:
    spellname = "Shadowburn";
    break;
  case 27264:
    spellname = "Siphon Life";
    break;
  case 27265:
    spellname = "Dark Pact";
    break;
  case 27266:
    spellname = "Conflagrate";
    break;
  case 27267:
    spellname = "Firebolt";
    break;
  case 27268:
    spellname = "Blood Pact";
    break;
  case 27269:
    spellname = "Fire Shield";
    break;
  case 27270:
    spellname = "Torment";
    break;
  case 27271:
    spellname = "Suffering";
    break;
  case 27272:
    spellname = "Consume Shadows";
    break;
  case 27273:
    spellname = "Sacrifice";
    break;
  case 27274:
    spellname = "Lash of Pain";
    break;
  case 27275:
    spellname = "Soothing Kiss";
    break;
  case 27276:
    spellname = "Devour Magic";
    break;
  case 27277:
    spellname = "Devour Magic";
    break;
  case 27278:
    spellname = "Devour Magic Effect";
    break;
  case 27279:
    spellname = "Devour Magic Effect";
    break;
  case 27280:
    spellname = "Tainted Blood";
    break;
  case 27281:
    spellname = "Tainted Blood Effect";
    break;
  case 27282:
    spellname = "Deadly Poison VII";
    break;
  case 27283:
    spellname = "Wound Poison V";
    break;
  case 27285:
    spellname = "Seed of Corruption";
    break;
  case 27286:
    spellname = "Shadow Wrath";
    break;
  case 27287:
    spellname = "Energy Siphon";
    break;
  case 27288:
    spellname = "Energy Siphon";
    break;
  case 27289:
    spellname = "Energy Siphon";
    break;
  case 27290:
    spellname = "Increase Reputation";
    break;
  case 27291:
    spellname = "Summon Magic Staff";
    break;
  case 27338:
    spellname = "Shadow Staff";
    break;
  case 27344:
    spellname = "Growl";
    break;
  case 27346:
    spellname = "Cower";
    break;
  case 27347:
    spellname = "Claw";
    break;
  case 27348:
    spellname = "Bite";
    break;
  case 27349:
    spellname = "Screech";
    break;
  case 27350:
    spellname = "Arcane Resistance";
    break;
  case 27351:
    spellname = "Fire Resistance";
    break;
  case 27352:
    spellname = "Frost Resistance";
    break;
  case 27353:
    spellname = "Shadow Resistance";
    break;
  case 27354:
    spellname = "Nature Resistance";
    break;
  case 27360:
    spellname = "Instill Lord Valthalak's Spirit DND";
    break;
  case 27361:
    spellname = "Scorpid Poison";
    break;
  case 27362:
    spellname = "Natural Armor";
    break;
  case 27364:
    spellname = "Great Stamina";
    break;
  case 27366:
    spellname = "Thunderstomp";
    break;
  case 27382:
    spellname = "Shadow Bolt Volley";
    break;
  case 27383:
    spellname = "Shadow Bolt Volley";
    break;
  case 27418:
    spellname = "Warrior's Resolve";
    break;
  case 27419:
    spellname = "Warrior's Resolve";
    break;
  case 27420:
    spellname = "Ectoplasmic Distiller";
    break;
  case 27433:
    spellname = "Ectoplasmic Distiller";
    break;
  case 27441:
    spellname = "Ambush";
    break;
  case 27448:
    spellname = "Feint";
    break;
  case 27484:
    spellname = "Firebolt";
    break;
  case 27485:
    spellname = "Blood Pact";
    break;
  case 27486:
    spellname = "Fire Shield";
    break;
  case 27487:
    spellname = "Firebolt";
    break;
  case 27488:
    spellname = "Blood Pact";
    break;
  case 27489:
    spellname = "Fire Shield";
    break;
  case 27490:
    spellname = "Torment";
    break;
  case 27491:
    spellname = "Consume Shadows";
    break;
  case 27492:
    spellname = "Sacrifice";
    break;
  case 27493:
    spellname = "Lash of Pain";
    break;
  case 27494:
    spellname = "Soothing Kiss";
    break;
  case 27495:
    spellname = "Devour Magic";
    break;
  case 27496:
    spellname = "Devour Magic";
    break;
  case 27497:
    spellname = "Tainted Blood";
    break;
  case 27498:
    spellname = "Crusader's Wrath";
    break;
  case 27499:
    spellname = "Crusader's Wrath";
    break;
  case 27500:
    spellname = "Suffering";
    break;
  case 27503:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27504:
    spellname = "Receive Quest Object";
    break;
  case 27505:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27506:
    spellname = "Receive Quest Object";
    break;
  case 27507:
    spellname = "Receive Quest Object";
    break;
  case 27509:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27510:
    spellname = "Receive Quest Object";
    break;
  case 27511:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27512:
    spellname = "Receive Reward AND Quest Object";
    break;
  case 27513:
    spellname = "Receive Quest Object";
    break;
  case 27514:
    spellname = "Mana Reduction 3%";
    break;
  case 27515:
    spellname = "Receive Quest Object";
    break;
  case 27516:
    spellname = "Increased Spell Penetration 6";
    break;
  case 27517:
    spellname = "Summon Thelrin DND";
    break;
  case 27518:
    spellname = "Spell Damage Reduction";
    break;
  case 27519:
    spellname = "Receive Quest Object";
    break;
  case 27520:
    spellname = "Receive Quest Object";
    break;
  case 27521:
    spellname = "Mana Restore";
    break;
  case 27522:
    spellname = "Mana Drain Trigger";
    break;
  case 27523:
    spellname = "Receive Quest Object";
    break;
  case 27524:
    spellname = "Receive Quest Object";
    break;
  case 27525:
    spellname = "Receive Quest Object";
    break;
  case 27526:
    spellname = "Mana Drain";
    break;
  case 27527:
    spellname = "Healing Touch";
    break;
  case 27529:
    spellname = "Receive Quest Object";
    break;
  case 27530:
    spellname = "Hurricane";
    break;
  case 27532:
    spellname = "Rejuvenation";
    break;
  case 27533:
    spellname = "Fire Resistance";
    break;
  case 27534:
    spellname = "Frost Resistance";
    break;
  case 27535:
    spellname = "Shadow Resistance";
    break;
  case 27536:
    spellname = "Holy Resistance";
    break;
  case 27538:
    spellname = "Nature Resistance";
    break;
  case 27539:
    spellname = "Obsidian Armor";
    break;
  case 27540:
    spellname = "Arcane Resistance";
    break;
  case 27541:
    spellname = " Valentine";
    break;
  case 27543:
    spellname = "Bear Form";
    break;
  case 27545:
    spellname = "Cat Form";
    break;
  case 27546:
    spellname = "Faerie Dragon Form";
    break;
  case 27547:
    spellname = "Valentine";
    break;
  case 27548:
    spellname = "Valentine";
    break;
  case 27549:
    spellname = "Valentine";
    break;
  case 27550:
    spellname = "Valentine";
    break;
  case 27551:
    spellname = "Demoralizing Roar";
    break;
  case 27552:
    spellname = "Cupid's Arrow";
    break;
  case 27553:
    spellname = "Maul";
    break;
  case 27554:
    spellname = "Swipe";
    break;
  case 27555:
    spellname = "Shred";
    break;
  case 27556:
    spellname = "Rake";
    break;
  case 27557:
    spellname = "Ferocious Bite";
    break;
  case 27559:
    spellname = "Silence";
    break;
  case 27561:
    spellname = "Silence Trigger";
    break;
  case 27564:
    spellname = "Reflection";
    break;
  case 27565:
    spellname = "Banish";
    break;
  case 27567:
    spellname = "Chain Lightning";
    break;
  case 27568:
    spellname = "Picnic Blanket Effect";
    break;
  case 27569:
    spellname = "Flower Shower";
    break;
  case 27570:
    spellname = "Summon Peddlefeet";
    break;
  case 27571:
    spellname = "Cascade of Roses";
    break;
  case 27572:
    spellname = "Smitten";
    break;
  case 27573:
    spellname = "Picnic Feast";
    break;
  case 27575:
    spellname = "Picnic Feast Channel";
    break;
  case 27576:
    spellname = "Mutilate";
    break;
  case 27577:
    spellname = "Intercept";
    break;
  case 27578:
    spellname = "Battle Shout";
    break;
  case 27579:
    spellname = "Demoralizing Shout";
    break;
  case 27580:
    spellname = "Mortal Strike";
    break;
  case 27581:
    spellname = "Disarm";
    break;
  case 27582:
    spellname = "Dirk's Rememberin' Poison";
    break;
  case 27583:
    spellname = "Dirk's Rememberin' Poison Effect DND";
    break;
  case 27584:
    spellname = "Hamstring";
    break;
  case 27585:
    spellname = "Heavy Obsidian Belt";
    break;
  case 27586:
    spellname = "Jagged Obsidian Shield";
    break;
  case 27587:
    spellname = "Thick Obsidian Breastplate";
    break;
  case 27588:
    spellname = "Light Obsidian Belt";
    break;
  case 27589:
    spellname = "Black Grasp of the Destroyer";
    break;
  case 27590:
    spellname = "Obsidian Mail Tunic";
    break;
  case 27599:
    spellname = "Shadows Consumed";
    break;
  case 27601:
    spellname = "Teleport: IF/UC";
    break;
  case 27602:
    spellname = "Summon Arcanite Dragonling";
    break;
  case 27603:
    spellname = "Goblin Dragon Gun";
    break;
  case 27604:
    spellname = "Goblin Dragon Gun";
    break;
  case 27605:
    spellname = "Shadow Word: Pain";
    break;
  case 27606:
    spellname = "Renew";
    break;
  case 27607:
    spellname = "Power Word: Shield";
    break;
  case 27608:
    spellname = "Flash Heal";
    break;
  case 27609:
    spellname = "Dispel Magic";
    break;
  case 27610:
    spellname = "Psychic Scream";
    break;
  case 27611:
    spellname = "Eviscerate";
    break;
  case 27613:
    spellname = "Kick";
    break;
  case 27614:
    spellname = "Dungeon Set 2.0 Ghosts";
    break;
  case 27615:
    spellname = "Kidney Shot";
    break;
  case 27616:
    spellname = "Extra-Dimensional Ghost Revealer";
    break;
  case 27617:
    spellname = "Vanish";
    break;
  case 27618:
    spellname = "Blizzard";
    break;
  case 27619:
    spellname = "Ice Block";
    break;
  case 27620:
    spellname = "Snap Kick";
    break;
  case 27621:
    spellname = "Windfury Totem";
    break;
  case 27623:
    spellname = "Fire Nova Totem";
    break;
  case 27624:
    spellname = "Lesser Healing Wave";
    break;
  case 27626:
    spellname = "Purge";
    break;
  case 27632:
    spellname = "Aimed Shot";
    break;
  case 27633:
    spellname = "Wing Clip";
    break;
  case 27634:
    spellname = "Concussive Shot";
    break;
  case 27635:
    spellname = "Lightning Shield";
    break;
  case 27636:
    spellname = "Starshards";
    break;
  case 27637:
    spellname = "Regrowth";
    break;
  case 27638:
    spellname = "Rake";
    break;
  case 27639:
    spellname = "Call Pet";
    break;
  case 27640:
    spellname = "Baron Rivendare's Soul Drain";
    break;
  case 27641:
    spellname = "Fear";
    break;
  case 27646:
    spellname = "Shadow Bolt Volley";
    break;
  case 27648:
    spellname = "Thunderfury";
    break;
  case 27650:
    spellname = "Vengeance";
    break;
  case 27651:
    spellname = "Picnic Blanket Ritual Effect";
    break;
  case 27652:
    spellname = "Elixir of Resistance";
    break;
  case 27653:
    spellname = "Elixir of Dodging";
    break;
  case 27655:
    spellname = "Flame Lash";
    break;
  case 27656:
    spellname = "Flame Lash";
    break;
  case 27657:
    spellname = "Check end";
    break;
  case 27658:
    spellname = "Enchanted Mageweave Pouch";
    break;
  case 27659:
    spellname = "Enchanted Runecloth Bag";
    break;
  case 27660:
    spellname = "Big Bag of Enchantment";
    break;
  case 27661:
    spellname = "Love Fool";
    break;
  case 27662:
    spellname = "Throw Cupid's Dart";
    break;
  case 27663:
    spellname = "Holiday - Valentine";
    break;
  case 27664:
    spellname = "Stormwind Gift of Friendship";
    break;
  case 27665:
    spellname = "Ironforge Gift of Friendship";
    break;
  case 27666:
    spellname = "Darnassus Gift of Friendship";
    break;
  case 27667:
    spellname = "Create Alliance Gift Collection";
    break;
  case 27668:
    spellname = "Create Horde Gift Collection";
    break;
  case 27669:
    spellname = "Orgrimmar Gift of Friendship";
    break;
  case 27670:
    spellname = "Thunder Bluff Gift of Friendship";
    break;
  case 27671:
    spellname = "Undercity Gift of Friendship";
    break;
  case 27672:
    spellname = "Initiate Secret Technique";
    break;
  case 27673:
    spellname = "Five Fat Finger Exploding Heart Technique";
    break;
  case 27675:
    spellname = "Chromatic Infusion";
    break;
  case 27676:
    spellname = "Exploding Heart";
    break;
  case 27677:
    spellname = "Recombobulate";
    break;
  case 27680:
    spellname = "Berserk";
    break;
  case 27681:
    spellname = "Prayer of Spirit";
    break;
  case 27683:
    spellname = "Prayer of Shadow Protection";
    break;
  case 27685:
    spellname = "Charge";
    break;
  case 27686:
    spellname = "Teleport to Razelikh (GROUP)";
    break;
  case 27687:
    spellname = "Summon Bone Minions";
    break;
  case 27688:
    spellname = "Bone Shield";
    break;
  case 27689:
    spellname = "Bloodlust";
    break;
  case 27695:
    spellname = "Summon Bone Mages";
    break;
  case 27696:
    spellname = "Summon Bone Mage";
    break;
  case 27697:
    spellname = "Summon Bone Mage";
    break;
  case 27698:
    spellname = "Summon Bone Mage";
    break;
  case 27699:
    spellname = "Summon Bone Mage";
    break;
  case 27700:
    spellname = "Create Stormwind Sack of Homemade Bread";
    break;
  case 27701:
    spellname = "Create Stormwind Bundle of Cards";
    break;
  case 27702:
    spellname = "Create Stormwind Pledges of Loyalty";
    break;
  case 27703:
    spellname = "Create Ironforge Parcel of Cards";
    break;
  case 27704:
    spellname = "Create Ironforge Pledges of Loyalty";
    break;
  case 27706:
    spellname = "Create Ironforge Case of Homebrew";
    break;
  case 27708:
    spellname = "Create Darnassus Box of Woodcrafts";
    break;
  case 27709:
    spellname = "Create Darnassus Stack of Cards";
    break;
  case 27710:
    spellname = "Create Darnassus Pledges of Loyalty";
    break;
  case 27711:
    spellname = "Create Orgrimmar Package of Cards";
    break;
  case 27712:
    spellname = "Create Orgrimmar Box of Fresh Pies";
    break;
  case 27713:
    spellname = "Create Orgrimmar Pledges of Loyalty";
    break;
  case 27714:
    spellname = "Create Thunder Bluff Basket of Flowers";
    break;
  case 27715:
    spellname = "Create Thunder Bluff Satchel of Cards";
    break;
  case 27716:
    spellname = "Create Thunder Bluff Pledges of Loyalty";
    break;
  case 27717:
    spellname = "Create Undercity Book of Romantic Poetry";
    break;
  case 27718:
    spellname = "Create Undercity Sheaf of Cards";
    break;
  case 27719:
    spellname = "Create Undercity Pledges of Loyalty";
    break;
  case 27720:
    spellname = "Buttermilk Delight";
    break;
  case 27721:
    spellname = "Very Berry Cream";
    break;
  case 27722:
    spellname = "Sweet Surprise";
    break;
  case 27723:
    spellname = "Dark Desire";
    break;
  case 27724:
    spellname = "Cenarion Herb Bag";
    break;
  case 27725:
    spellname = "Satchel of Cenarius";
    break;
  case 27733:
    spellname = "Ironweave Battlesuit";
    break;
  case 27737:
    spellname = "Moonfire";
    break;
  case 27738:
    spellname = "Right Piece of Lord Valthalak's Amulet";
    break;
  case 27739:
    spellname = "Top Piece of Lord Valthalak's Amulet";
    break;
  case 27740:
    spellname = "Reincarnation";
    break;
  case 27741:
    spellname = "Love is in the Air";
    break;
  case 27743:
    spellname = "Increased Gun";
    break;
  case 27744:
    spellname = "Increased Crossbow";
    break;
  case 27745:
    spellname = "Explosion";
    break;
  case 27746:
    spellname = "Nitrous Boost";
    break;
  case 27747:
    spellname = "Steam Tank Passive";
    break;
  case 27752:
    spellname = "Create Ectoplasmic Distiller";
    break;
  case 27753:
    spellname = "Freezing Trap";
    break;
  case 27754:
    spellname = "Create Extra-Dimensional Ghost Revealer";
    break;
  case 27755:
    spellname = "Create Banner of Provocation";
    break;
  case 27756:
    spellname = "Create Incomplete Banner of Provocation";
    break;
  case 27758:
    spellname = "War Stomp";
    break;
  case 27759:
    spellname = "Shield Generator";
    break;
  case 27760:
    spellname = "Polymorph";
    break;
  case 27762:
    spellname = "Libram";
    break;
  case 27763:
    spellname = "Totem";
    break;
  case 27764:
    spellname = "Fetish";
    break;
  case 27766:
    spellname = "Cannon";
    break;
  case 27771:
    spellname = "Damaged Tonk";
    break;
  case 27774:
    spellname = "The Furious Storm";
    break;
  case 27775:
    spellname = "The Furious Storm";
    break;
  case 27776:
    spellname = "Surging Mana";
    break;
  case 27777:
    spellname = "Surging Mana";
    break;
  case 27778:
    spellname = "Divine Protection";
    break;
  case 27779:
    spellname = "Divine Protection";
    break;
  case 27780:
    spellname = "Corrupted Fear";
    break;
  case 27781:
    spellname = "Nature's Bounty";
    break;
  case 27782:
    spellname = "Nature's Bounty";
    break;
  case 27783:
    spellname = "Nature's Bounty";
    break;
  case 27784:
    spellname = "Nature's Bounty";
    break;
  case 27785:
    spellname = "Hunter Armor Energize";
    break;
  case 27786:
    spellname = "Hunter Armor Energize";
    break;
  case 27787:
    spellname = "Rogue Armor Energize";
    break;
  case 27788:
    spellname = "Rogue Armor Energize";
    break;
  case 27789:
    spellname = "Holy Reach";
    break;
  case 27790:
    spellname = "Holy Reach";
    break;
  case 27792:
    spellname = "Spirit of Redemption";
    break;
  case 27793:
    spellname = "Disease Cloud";
    break;
  case 27794:
    spellname = "Cleave";
    break;
  case 27795:
    spellname = "Spirit of Redemption";
    break;
  case 27797:
    spellname = "Reduced Reincarnation Cooldown";
    break;
  case 27798:
    spellname = "Nature's Bounty";
    break;
  case 27799:
    spellname = "Holy Nova";
    break;
  case 27800:
    spellname = "Holy Nova";
    break;
  case 27801:
    spellname = "Holy Nova";
    break;
  case 27802:
    spellname = "Sam's Test Spell #2";
    break;
  case 27803:
    spellname = "Holy Nova";
    break;
  case 27804:
    spellname = "Holy Nova";
    break;
  case 27805:
    spellname = "Holy Nova";
    break;
  case 27806:
    spellname = "Venom Spit";
    break;
  case 27807:
    spellname = "Bile Vomit";
    break;
  case 27808:
    spellname = "Frost Blast";
    break;
  case 27810:
    spellname = "Shadow Fissure";
    break;
  case 27811:
    spellname = "Blessed Recovery";
    break;
  case 27812:
    spellname = "Void Blast";
    break;
  case 27813:
    spellname = "Blessed Recovery";
    break;
  case 27814:
    spellname = "Kick";
    break;
  case 27815:
    spellname = "Blessed Recovery";
    break;
  case 27816:
    spellname = "Blessed Recovery";
    break;
  case 27817:
    spellname = "Blessed Recovery";
    break;
  case 27818:
    spellname = "Blessed Recovery";
    break;
  case 27819:
    spellname = "Detonate Mana";
    break;
  case 27820:
    spellname = "Mana Detonation";
    break;
  case 27824:
    spellname = "Rimblat Grows Flower DND";
    break;
  case 27825:
    spellname = "Shadow Mark";
    break;
  case 27826:
    spellname = "Intercept";
    break;
  case 27827:
    spellname = "Spirit of Redemption";
    break;
  case 27828:
    spellname = "Focused Casting";
    break;
  case 27829:
    spellname = "Titanic Leggings";
    break;
  case 27830:
    spellname = "Persuader";
    break;
  case 27831:
    spellname = "Shadow Bolt Volley";
    break;
  case 27832:
    spellname = "Sageblade";
    break;
  case 27836:
    spellname = "Agility +25";
    break;
  case 27837:
    spellname = "Enchant 2H Weapon - Agility";
    break;
  case 27839:
    spellname = "Improved Vampiric Embrace";
    break;
  case 27840:
    spellname = "Improved Vampiric Embrace";
    break;
  case 27841:
    spellname = "Divine Spirit";
    break;
  case 27846:
    spellname = "Improved Healing Touch";
    break;
  case 27847:
    spellname = "Cleanse Cost Reduced";
    break;
  case 27848:
    spellname = "Seal Cost Reduced";
    break;
  case 27849:
    spellname = "[PH] Cystal Bazooka";
    break;
  case 27850:
    spellname = "Devotion Armor Increased";
    break;
  case 27851:
    spellname = "Claw and Rake Damage Bonus";
    break;
  case 27852:
    spellname = "[PH] Kill Summoner Buff";
    break;
  case 27853:
    spellname = "Increased Rejuvenation Healing";
    break;
  case 27855:
    spellname = "Increased Lesser Healing Wave";
    break;
  case 27859:
    spellname = "Increased Shock Damage";
    break;
  case 27860:
    spellname = "Engulfing Shadows";
    break;
  case 27861:
    spellname = "The Baron's Ultimatum";
    break;
  case 27862:
    spellname = "Bile Retcher Slam";
    break;
  case 27863:
    spellname = "The Baron's Ultimatum";
    break;
  case 27864:
    spellname = "The Baron's Ultimatum";
    break;
  case 27865:
    spellname = "The Baron's Ultimatum";
    break;
  case 27866:
    spellname = "Summon Necropolis critters";
    break;
  case 27867:
    spellname = "Freeze";
    break;
  case 27868:
    spellname = "Freeze";
    break;
  case 27869:
    spellname = "Dark Rune";
    break;
  case 27870:
    spellname = "Lightwell";
    break;
  case 27871:
    spellname = "Lightwell";
    break;
  case 27873:
    spellname = "Lightwell Renew";
    break;
  case 27874:
    spellname = "Lightwell Renew";
    break;
  case 27879:
    spellname = "Mount Speed+ DND";
    break;
  case 27880:
    spellname = "Stun";
    break;
  case 27881:
    spellname = "Mount Speed++ DND";
    break;
  case 27882:
    spellname = "Mount Speed+++ DND";
    break;
  case 27883:
    spellname = "[PH] Summon Minion (trap: ghost/ghoul))";
    break;
  case 27885:
    spellname = "Disturb Minion Trap";
    break;
  case 27886:
    spellname = "Disturb Minion Trap";
    break;
  case 27888:
    spellname = "Minion Spawner";
    break;
  case 27889:
    spellname = "Spawn Bile Sludge";
    break;
  case 27890:
    spellname = "Clone";
    break;
  case 27891:
    spellname = "Disease Buffet";
    break;
  case 27892:
    spellname = "To Anchor 1";
    break;
  case 27893:
    spellname = "To Anchor 2";
    break;
  case 27894:
    spellname = "Kill Summoner";
    break;
  case 27895:
    spellname = "Create Crystal Corpse";
    break;
  case 27897:
    spellname = "Enrage";
    break;
  case 27898:
    spellname = "Strength";
    break;
  case 27899:
    spellname = "Enchant Bracer - Brawn";
    break;
  case 27900:
    spellname = "Spell Warding";
    break;
  case 27901:
    spellname = "Spell Warding";
    break;
  case 27902:
    spellname = "Spell Warding";
    break;
  case 27903:
    spellname = "Spell Warding";
    break;
  case 27904:
    spellname = "Spell Warding";
    break;
  case 27905:
    spellname = "Enchant Bracer - Stats";
    break;
  case 27906:
    spellname = "Enchant Bracer - Major Defense";
    break;
  case 27907:
    spellname = "Disciplinary Rod";
    break;
  case 27908:
    spellname = "Deflection";
    break;
  case 27909:
    spellname = "Create Ralen's Badge";
    break;
  case 27910:
    spellname = "Create Meledor's Badge";
    break;
  case 27911:
    spellname = "Enchant Bracer - Superior Healing";
    break;
  case 27912:
    spellname = "Increased Mana Regen";
    break;
  case 27913:
    spellname = "Enchant Bracer - Restore Mana Prime";
    break;
  case 27914:
    spellname = "Enchant Bracer - Fortitude";
    break;
  case 27915:
    spellname = "Anchor to Skulls";
    break;
  case 27916:
    spellname = "Stamina";
    break;
  case 27917:
    spellname = "Enchant Bracer - Spellpower";
    break;
  case 27918:
    spellname = "Increase Spell Dam 15";
    break;
  case 27919:
    spellname = "Spit";
    break;
  case 27920:
    spellname = "Enchant Ring - Striking";
    break;
  case 27922:
    spellname = "[PH] Get Token";
    break;
  case 27923:
    spellname = "Increase Spell Dam 12";
    break;
  case 27924:
    spellname = "Enchant Ring - Spellpower";
    break;
  case 27925:
    spellname = "Increase Healing 20";
    break;
  case 27926:
    spellname = "Enchant Ring - Healing Power";
    break;
  case 27927:
    spellname = "Enchant Ring - Stats";
    break;
  case 27928:
    spellname = "To Anchor 1";
    break;
  case 27929:
    spellname = "To Anchor 2";
    break;
  case 27931:
    spellname = "Anchor to Skulls";
    break;
  case 27935:
    spellname = "To Anchor 1";
    break;
  case 27936:
    spellname = "To Anchor 2";
    break;
  case 27937:
    spellname = "Anchor to Skulls";
    break;
  case 27940:
    spellname = "Blocking";
    break;
  case 27941:
    spellname = "Block Value";
    break;
  case 27942:
    spellname = "Magic Resistance";
    break;
  case 27943:
    spellname = "Intellect";
    break;
  case 27944:
    spellname = "Enchant Shield - Tough Shield";
    break;
  case 27945:
    spellname = "Enchant Shield - Intellect";
    break;
  case 27946:
    spellname = "Enchant Shield - Shield Block";
    break;
  case 27947:
    spellname = "Enchant Shield - Resistance";
    break;
  case 27948:
    spellname = "Enchant Boots - Vitality";
    break;
  case 27949:
    spellname = "Increased Health/Mana Regen";
    break;
  case 27950:
    spellname = "Enchant Boots - Fortitude";
    break;
  case 27951:
    spellname = "Enchant Boots - Dexterity";
    break;
  case 27952:
    spellname = "Agility +12";
    break;
  case 27953:
    spellname = "Surefooted";
    break;
  case 27954:
    spellname = "Enchant Boots - Surefooted";
    break;
  case 27955:
    spellname = "Exceptional Health";
    break;
  case 27956:
    spellname = "Exceptional Mana";
    break;
  case 27957:
    spellname = "Enchant Chest - Exceptional Health";
    break;
  case 27958:
    spellname = "Enchant Chest - Exceptional Mana";
    break;
  case 27959:
    spellname = "Exceptional Stats";
    break;
  case 27960:
    spellname = "Enchant Chest - Exceptional Stats";
    break;
  case 27961:
    spellname = "Enchant Cloak - Major Armor";
    break;
  case 27962:
    spellname = "Enchant Cloak - Major Resistance";
    break;
  case 27963:
    spellname = "Resistance";
    break;
  case 27964:
    spellname = "Enchant Weapon - Major Spirit";
    break;
  case 27965:
    spellname = "Suicide";
    break;
  case 27966:
    spellname = "Spirit";
    break;
  case 27967:
    spellname = "Enchant Weapon - Major Striking";
    break;
  case 27968:
    spellname = "Enchant Weapon - Major Intellect";
    break;
  case 27969:
    spellname = "Intellect";
    break;
  case 27970:
    spellname = "Attack Power";
    break;
  case 27971:
    spellname = "Enchant 2H Weapon - Savagery";
    break;
  case 27972:
    spellname = "Enchant Weapon - Potency";
    break;
  case 27973:
    spellname = "Strength";
    break;
  case 27974:
    spellname = "Increase Spell Dam 40";
    break;
  case 27975:
    spellname = "Enchant Weapon - Major Spellpower";
    break;
  case 27976:
    spellname = "Agility +35";
    break;
  case 27977:
    spellname = "Enchant 2H Weapon - Major Agility";
    break;
  case 27978:
    spellname = "Shroud of Death";
    break;
  case 27979:
    spellname = "Increase Fire/Arcane Dam 50";
    break;
  case 27980:
    spellname = "Increase Shadow/Frost Dam 54";
    break;
  case 27981:
    spellname = "Enchant Weapon - Sunfire";
    break;
  case 27982:
    spellname = "Enchant Weapon - Soulfrost";
    break;
  case 27983:
    spellname = "Lightning Strike";
    break;
  case 27984:
    spellname = "Enchant Weapon - Mongoose";
    break;
  case 27985:
    spellname = "Floating";
    break;
  case 27986:
    spellname = "Levitate";
    break;
  case 27987:
    spellname = "Unholy Aura";
    break;
  case 27988:
    spellname = "Unholy Aura";
    break;
  case 27989:
    spellname = "Arcane Explosion";
    break;
  case 27990:
    spellname = "Fear";
    break;
  case 27991:
    spellname = "Sunder Armor";
    break;
  case 27992:
    spellname = "Mana Burn";
    break;
  case 27993:
    spellname = "Stomp";
    break;
  case 27994:
    spellname = "Drain Life";
    break;
  case 27995:
    spellname = "Unholy Frenzy";
    break;
  case 27996:
    spellname = "Spellsurge";
    break;
  case 27997:
    spellname = "Spellsurge Trigger";
    break;
  case 28002:
    spellname = "Ghost Visual";
    break;
  case 28003:
    spellname = "Enchant Weapon - Spellsurge";
    break;
  case 28004:
    spellname = "Enchant Weapon - Battlemaster";
    break;
  case 28005:
    spellname = "Battlemaster";
    break;
  case 28006:
    spellname = "Arcane Cloaking";
    break;
  case 28012:
    spellname = "Suicide";
    break;
  case 28013:
    spellname = "Superior Mana Oil";
    break;
  case 28014:
    spellname = "Increased Mana Regen";
    break;
  case 28015:
    spellname = "Increase Spell Dam 42";
    break;
  case 28016:
    spellname = "Superior Mana Oil";
    break;
  case 28017:
    spellname = "Superior Wizard Oil";
    break;
  case 28018:
    spellname = "[PH] Crystal Corpse Timer";
    break;
  case 28019:
    spellname = "Superior Wizard Oil";
    break;
  case 28020:
    spellname = "[PH] Crystal Corpse Despawn";
    break;
  case 28021:
    spellname = "Arcane Dust";
    break;
  case 28022:
    spellname = "Large Prismatic Shard";
    break;
  case 28023:
    spellname = "Create Healthstone";
    break;
  case 28024:
    spellname = "[PH] Summon Buttress";
    break;
  case 28025:
    spellname = "Teleport Left";
    break;
  case 28026:
    spellname = "Teleport Right";
    break;
  case 28027:
    spellname = "Prismatic Sphere";
    break;
  case 28028:
    spellname = "Void Sphere";
    break;
  case 28029:
    spellname = "Enchanting";
    break;
  case 28030:
    spellname = "Master Enchanting";
    break;
  case 28031:
    spellname = "Zap Crystal";
    break;
  case 28032:
    spellname = "Zap Crystal";
    break;
  case 28041:
    spellname = "Damage Crystal";
    break;
  case 28054:
    spellname = "Buttress Trap";
    break;
  case 28056:
    spellname = "Zap Crystal Corpse";
    break;
  case 28059:
    spellname = "Positive Charge";
    break;
  case 28062:
    spellname = "Positive Charge";
    break;
  case 28078:
    spellname = "Buttress Channel";
    break;
  case 28081:
    spellname = "Bonescythe Chest";
    break;
  case 28084:
    spellname = "Negative Charge";
    break;
  case 28085:
    spellname = "Negative Charge";
    break;
  case 28086:
    spellname = "[PH] Buttress Activator";
    break;
  case 28087:
    spellname = "Break Channel";
    break;
  case 28088:
    spellname = "Bonescythe Bracer";
    break;
  case 28089:
    spellname = "Polarity Shift";
    break;
  case 28092:
    spellname = "Summon Scourge Controller";
    break;
  case 28093:
    spellname = "Lightning Speed";
    break;
  case 28095:
    spellname = "Controller Timer";
    break;
  case 28096:
    spellname = "Stalagg Chain";
    break;
  case 28097:
    spellname = "Stalagg Tesla Passive";
    break;
  case 28099:
    spellname = "Shock";
    break;
  case 28100:
    spellname = "Create Primal Air";
    break;
  case 28101:
    spellname = "Create Primal Earth";
    break;
  case 28102:
    spellname = "Create Primal Fire";
    break;
  case 28103:
    spellname = "Create Primal Water";
    break;
  case 28104:
    spellname = "Create Primal Shadow";
    break;
  case 28105:
    spellname = "Create Primal Mana";
    break;
  case 28106:
    spellname = "Create Primal Life";
    break;
  case 28107:
    spellname = "Bonescythe Breastplate";
    break;
  case 28109:
    spellname = "Feugen Tesla Passive";
    break;
  case 28111:
    spellname = "Feugen Chain";
    break;
  case 28112:
    spellname = "Block Value 21";
    break;
  case 28113:
    spellname = "Block Value 30";
    break;
  case 28114:
    spellname = "Mark of Didier";
    break;
  case 28118:
    spellname = "PvP Armor Increased Critical 14";
    break;
  case 28125:
    spellname = "War Stomp";
    break;
  case 28126:
    spellname = "Spirit Particles (purple)";
    break;
  case 28127:
    spellname = "Flash";
    break;
  case 28131:
    spellname = "Enrage";
    break;
  case 28132:
    spellname = "Create Summoner Shield";
    break;
  case 28133:
    spellname = "Cure Disease";
    break;
  case 28134:
    spellname = "Power Surge";
    break;
  case 28135:
    spellname = "Static Field";
    break;
  case 28136:
    spellname = "Thadius Lightning Visual";
    break;
  case 28137:
    spellname = "Slime Stream";
    break;
  case 28141:
    spellname = "Increase Spell Dam 150";
    break;
  case 28142:
    spellname = "Power of the Guardian";
    break;
  case 28143:
    spellname = "Power of the Guardian";
    break;
  case 28144:
    spellname = "Power of the Guardian";
    break;
  case 28145:
    spellname = "Power of the Guardian";
    break;
  case 28146:
    spellname = "Mage Portal State";
    break;
  case 28147:
    spellname = "Portal Effect: Karazhan";
    break;
  case 28148:
    spellname = "Portal: Karazhan";
    break;
  case 28149:
    spellname = "Create Restorative Draught";
    break;
  case 28151:
    spellname = "Increase Healing 280";
    break;
  case 28152:
    spellname = "Increase Healing 300";
    break;
  case 28153:
    spellname = "Disease Cloud";
    break;
  case 28154:
    spellname = "Attack Power - Feral (+0420)";
    break;
  case 28155:
    spellname = "Atiesh Priest Damage/Healing";
    break;
  case 28156:
    spellname = "Disease Cloud";
    break;
  case 28157:
    spellname = "Slime Spray";
    break;
  case 28158:
    spellname = "Poison";
    break;
  case 28159:
    spellname = "Shock";
    break;
  case 28160:
    spellname = "Thadius Spawn";
    break;
  case 28161:
    spellname = "Savage Guard";
    break;
  case 28163:
    spellname = "Ice Guard";
    break;
  case 28165:
    spellname = "Shadow Guard";
    break;
  case 28167:
    spellname = "Chain Lightning";
    break;
  case 28168:
    spellname = "Arcing Smash";
    break;
  case 28169:
    spellname = "Mutating Injection";
    break;
  case 28170:
    spellname = "Master Spellstone";
    break;
  case 28172:
    spellname = "Create Spellstone";
    break;
  case 28176:
    spellname = "Fel Armor";
    break;
  case 28182:
    spellname = "Remove Baron's Ultimatum";
    break;
  case 28183:
    spellname = "[PH] Summon Minion parent (ghost/ghoul)";
    break;
  case 28184:
    spellname = "[PH] Summon Minion parent (ghost/skeleton)";
    break;
  case 28185:
    spellname = "[PH] Summon Minion parent (ghoul/skeleton)";
    break;
  case 28186:
    spellname = "[PH] Summon Minion (trap: ghost/skeleton))";
    break;
  case 28187:
    spellname = "[PH] Summon Minion (trap: ghoul/skeleton))";
    break;
  case 28189:
    spellname = "Fel Armor";
    break;
  case 28194:
    spellname = "Create Minion Trap: Ghoul/Skeleton";
    break;
  case 28195:
    spellname = "Create Minion Trap: Ghost/Ghoul";
    break;
  case 28196:
    spellname = "Create Minion Trap: Ghost/Skeleton";
    break;
  case 28197:
    spellname = "Camp Type: Ghost/Skeleton";
    break;
  case 28198:
    spellname = "Camp Type: Ghost/Ghoul";
    break;
  case 28199:
    spellname = "Camp Type: Ghoul/Skeleton";
    break;
  case 28200:
    spellname = "Ascendance";
    break;
  case 28201:
    spellname = "Choose Camp Type";
    break;
  case 28204:
    spellname = "Ascendance";
    break;
  case 28205:
    spellname = "Glacial Gloves";
    break;
  case 28206:
    spellname = "Mutagen Explosion";
    break;
  case 28207:
    spellname = "Glacial Vest";
    break;
  case 28208:
    spellname = "Glacial Cloak";
    break;
  case 28209:
    spellname = "Glacial Wrists";
    break;
  case 28210:
    spellname = "Gaea's Embrace";
    break;
  case 28219:
    spellname = "Polar Tunic";
    break;
  case 28220:
    spellname = "Polar Gloves";
    break;
  case 28221:
    spellname = "Polar Bracers";
    break;
  case 28222:
    spellname = "Icy Scale Breastplate";
    break;
  case 28223:
    spellname = "Icy Scale Gauntlets";
    break;
  case 28224:
    spellname = "Icy Scale Bracers";
    break;
  case 28225:
    spellname = "AE Charm";
    break;
  case 28226:
    spellname = "Summoning Aquantion";
    break;
  case 28234:
    spellname = "Minion Spawn-in";
    break;
  case 28239:
    spellname = "Zombie Chow Search";
    break;
  case 28240:
    spellname = "Poison Cloud";
    break;
  case 28241:
    spellname = "Poison";
    break;
  case 28242:
    spellname = "Icebane Breastplate";
    break;
  case 28243:
    spellname = "Icebane Gauntlets";
    break;
  case 28244:
    spellname = "Icebane Bracers";
    break;
  case 28247:
    spellname = "Place Infused Crystal";
    break;
  case 28250:
    spellname = "Kill Summoner";
    break;
  case 28251:
    spellname = "Icebane Breastplate";
    break;
  case 28252:
    spellname = "Icebane Bracers";
    break;
  case 28253:
    spellname = "Icebane Gauntlets";
    break;
  case 28254:
    spellname = "Polar Tunic";
    break;
  case 28255:
    spellname = "Polar Gloves";
    break;
  case 28256:
    spellname = "Polar Bracers";
    break;
  case 28257:
    spellname = "Icy Scale Breastplate";
    break;
  case 28258:
    spellname = "Icy Scale Gauntlets";
    break;
  case 28259:
    spellname = "Icy Scale Bracers";
    break;
  case 28260:
    spellname = "Glacial Vest";
    break;
  case 28261:
    spellname = "Glacial Gloves";
    break;
  case 28262:
    spellname = "Glacial Wrists";
    break;
  case 28263:
    spellname = "Glacial Cloak";
    break;
  case 28264:
    spellname = "Increase Spell Dam 46";
    break;
  case 28265:
    spellname = "Scourge Strike";
    break;
  case 28267:
    spellname = "Crunchy Spider Surprise";
    break;
  case 28269:
    spellname = "Runestone Ward";
    break;
  case 28271:
    spellname = "Polymorph";
    break;
  case 28272:
    spellname = "Polymorph";
    break;
  case 28273:
    spellname = "Bloodthistle";
    break;
  case 28274:
    spellname = "Bloodthistle Withdrawal";
    break;
  case 28275:
    spellname = "Lightwell";
    break;
  case 28276:
    spellname = "Lightwell Renew";
    break;
  case 28278:
    spellname = "Open Circle";
    break;
  case 28280:
    spellname = "Bombard Slime";
    break;
  case 28281:
    spellname = "Communique";
    break;
  case 28282:
    spellname = "Ashbringer";
    break;
  case 28285:
    spellname = "Polymorph: Pig";
    break;
  case 28287:
    spellname = "Create Handbook DND";
    break;
  case 28288:
    spellname = "Omarion's Secrets";
    break;
  case 28293:
    spellname = "Chain Lightning";
    break;
  case 28294:
    spellname = "Lightning Totem";
    break;
  case 28297:
    spellname = "Lightning Totem";
    break;
  case 28299:
    spellname = "Ball Lightning";
    break;
  case 28301:
    spellname = "Mana Burn";
    break;
  case 28303:
    spellname = "Increase Reputation";
    break;
  case 28305:
    spellname = "Mana Leech";
    break;
  case 28306:
    spellname = "Great Heal";
    break;
  case 28308:
    spellname = "Hateful Strike";
    break;
  case 28309:
    spellname = "Purple Beam";
    break;
  case 28310:
    spellname = "Mind Flay";
    break;
  case 28311:
    spellname = "Slime Bolt";
    break;
  case 28313:
    spellname = "Aura of Fear";
    break;
  case 28314:
    spellname = "Flameshocker's Touch";
    break;
  case 28315:
    spellname = "Aura of Fear";
    break;
  case 28318:
    spellname = "Slime Shot";
    break;
  case 28319:
    spellname = "Create Lesser Mark of the Dawn";
    break;
  case 28320:
    spellname = "Create Mark of the Dawn";
    break;
  case 28321:
    spellname = "Create Greater Mark of the Dawn";
    break;
  case 28322:
    spellname = "Embalming Cloud";
    break;
  case 28323:
    spellname = "Flameshocker's Revenge";
    break;
  case 28324:
    spellname = "Forming Frame of Atiesh";
    break;
  case 28325:
    spellname = "Block Value 32";
    break;
  case 28326:
    spellname = "Communique";
    break;
  case 28327:
    spellname = "Steam Tonk Controller";
    break;
  case 28329:
    spellname = "Flameshocker's Touch";
    break;
  case 28330:
    spellname = "Flameshocker - Immolate Visual";
    break;
  case 28332:
    spellname = "Frost Warding";
    break;
  case 28333:
    spellname = "Whirlwind Primer";
    break;
  case 28334:
    spellname = "Whirlwind";
    break;
  case 28335:
    spellname = "Whirlwind";
    break;
  case 28336:
    spellname = "Glory Shot";
    break;
  case 28337:
    spellname = "Magnetic Pull";
    break;
  case 28338:
    spellname = "Magnetic Pull";
    break;
  case 28339:
    spellname = "Magnetic Pull";
    break;
  case 28340:
    spellname = "Unholy Aura";
    break;
  case 28341:
    spellname = "Unholy Aura";
    break;
  case 28342:
    spellname = "Breath of Sargeras";
    break;
  case 28343:
    spellname = "Charge";
    break;
  case 28344:
    spellname = "Create Crystal";
    break;
  case 28346:
    spellname = "Communique Timer";
    break;
  case 28347:
    spellname = "Dimensional Siphon";
    break;
  case 28348:
    spellname = "Dimensional Siphon";
    break;
  case 28350:
    spellname = "Veil of Darkness";
    break;
  case 28351:
    spellname = "Communique";
    break;
  case 28352:
    spellname = "Breath of Sargeras";
    break;
  case 28353:
    spellname = "Raise Dead";
    break;
  case 28354:
    spellname = "Exorcise Atiesh";
    break;
  case 28355:
    spellname = "Reaper of Souls DND";
    break;
  case 28358:
    spellname = "Disease Cloud";
    break;
  case 28360:
    spellname = "Increase Spell Dam 49";
    break;
  case 28361:
    spellname = "Disease Cloud";
    break;
  case 28362:
    spellname = "Disease Cloud";
    break;
  case 28364:
    spellname = "Damage vs. Guards";
    break;
  case 28365:
    spellname = "Communique";
    break;
  case 28366:
    spellname = "Communique";
    break;
  case 28367:
    spellname = "Communique";
    break;
  case 28369:
    spellname = "Gas";
    break;
  case 28370:
    spellname = "Toxic Gas";
    break;
  case 28371:
    spellname = "Frenzy";
    break;
  case 28373:
    spellname = "Communique";
    break;
  case 28374:
    spellname = "Decimate";
    break;
  case 28375:
    spellname = "Decimate";
    break;
  case 28377:
    spellname = "Shadowguard";
    break;
  case 28378:
    spellname = "Shadowguard";
    break;
  case 28379:
    spellname = "Shadowguard";
    break;
  case 28380:
    spellname = "Shadowguard";
    break;
  case 28381:
    spellname = "Shadowguard";
    break;
  case 28382:
    spellname = "Shadowguard";
    break;
  case 28383:
    spellname = "Portal of Shadows";
    break;
  case 28385:
    spellname = "Shadowguard";
    break;
  case 28386:
    spellname = "Zap Necropolis";
    break;
  case 28389:
    spellname = "Summon Ghosts of Naxxramas";
    break;
  case 28391:
    spellname = "Blink";
    break;
  case 28392:
    spellname = "Despawn Portal of Shadow";
    break;
  case 28393:
    spellname = "Reputation - Booty Bay +500";
    break;
  case 28394:
    spellname = "Reputation - Ratchet +500";
    break;
  case 28395:
    spellname = "Communique Timer";
    break;
  case 28396:
    spellname = "Reputation - Everlook +500";
    break;
  case 28397:
    spellname = "Reputation - Gadgetzan +500";
    break;
  case 28401:
    spellname = "Blink";
    break;
  case 28402:
    spellname = "NEW Arcane Talent";
    break;
  case 28404:
    spellname = "Zombie Chow Search";
    break;
  case 28405:
    spellname = "Knockback";
    break;
  case 28406:
    spellname = "Polymorph Backfire";
    break;
  case 28407:
    spellname = "Shadow Bolt Volley";
    break;
  case 28408:
    spellname = "Chains of Kel'Thuzad";
    break;
  case 28410:
    spellname = "Chains of Kel'Thuzad";
    break;
  case 28412:
    spellname = "Death Coil";
    break;
  case 28413:
    spellname = "Aura of Agony";
    break;
  case 28414:
    spellname = "Call of the Ashbringer";
    break;
  case 28418:
    spellname = "General's Warcry";
    break;
  case 28419:
    spellname = "General's Warcry";
    break;
  case 28420:
    spellname = "General's Warcry";
    break;
  case 28424:
    spellname = "Summon Cracked Necrotic Crystal";
    break;
  case 28428:
    spellname = "Instant Poison";
    break;
  case 28429:
    spellname = "Instant Poison Proc";
    break;
  case 28431:
    spellname = "Poison Charge";
    break;
  case 28433:
    spellname = "Explode";
    break;
  case 28434:
    spellname = "Spider Web";
    break;
  case 28438:
    spellname = "Knockback";
    break;
  case 28439:
    spellname = "Create Eternal Quintessence";
    break;
  case 28440:
    spellname = "Veil of Shadow";
    break;
  case 28441:
    spellname = "AB Effect 000";
    break;
  case 28442:
    spellname = "AB Effect 001";
    break;
  case 28443:
    spellname = "Transform Ghost";
    break;
  case 28444:
    spellname = "Portal Effect: Deathknight Wing";
    break;
  case 28445:
    spellname = "Improved Concussive Shot";
    break;
  case 28447:
    spellname = "Shadow Burst";
    break;
  case 28448:
    spellname = "Shadow Bolt Volley";
    break;
  case 28449:
    spellname = "Camp Receives Communique";
    break;
  case 28450:
    spellname = "Arcane Explosion";
    break;
  case 28451:
    spellname = "Burn Mummified Troll Remains";
    break;
  case 28456:
    spellname = "Gouge";
    break;
  case 28457:
    spellname = "Dark Blast";
    break;
  case 28458:
    spellname = "Dark Blast";
    break;
  case 28459:
    spellname = "Wail of Souls";
    break;
  case 28460:
    spellname = "Wail of Souls";
    break;
  case 28461:
    spellname = "Ironvine Breastplate";
    break;
  case 28462:
    spellname = "Ironvine Gloves";
    break;
  case 28463:
    spellname = "Ironvine Belt";
    break;
  case 28467:
    spellname = "Mortal Wound";
    break;
  case 28468:
    spellname = "Enrage";
    break;
  case 28470:
    spellname = "Blood Tap";
    break;
  case 28471:
    spellname = "ClearAll";
    break;
  case 28472:
    spellname = "Bramblewood Helm";
    break;
  case 28473:
    spellname = "Bramblewood Boots";
    break;
  case 28474:
    spellname = "Bramblewood Belt";
    break;
  case 28478:
    spellname = "Frostbolt";
    break;
  case 28479:
    spellname = "Frostbolt";
    break;
  case 28480:
    spellname = "Sylvan Vest";
    break;
  case 28481:
    spellname = "Sylvan Crown";
    break;
  case 28482:
    spellname = "Sylvan Shoulders";
    break;
  case 28486:
    spellname = "Scourgebane Draught";
    break;
  case 28487:
    spellname = "Summon Terky";
    break;
  case 28488:
    spellname = "Scourgebane Infusion";
    break;
  case 28489:
    spellname = "Camouflage";
    break;
  case 28490:
    spellname = "Major Strength";
    break;
  case 28491:
    spellname = "Healing Power";
    break;
  case 28492:
    spellname = "Sneaking";
    break;
  case 28493:
    spellname = "Major Frost Power";
    break;
  case 28494:
    spellname = "Insane Strength Potion";
    break;
  case 28495:
    spellname = "Healing Potion";
    break;
  case 28496:
    spellname = "Greater Stealth Detection";
    break;
  case 28497:
    spellname = "Major Agility";
    break;
  case 28498:
    spellname = "Berserk";
    break;
  case 28499:
    spellname = "Restore Mana";
    break;
  case 28500:
    spellname = "Invisibility";
    break;
  case 28501:
    spellname = "Major Firepower";
    break;
  case 28502:
    spellname = "Major Armor";
    break;
  case 28503:
    spellname = "Major Shadow Power";
    break;
  case 28504:
    spellname = "Major Dreamless Sleep";
    break;
  case 28505:
    spellname = "Summon Poley";
    break;
  case 28506:
    spellname = "Potion of Heroes";
    break;
  case 28507:
    spellname = "Haste";
    break;
  case 28508:
    spellname = "Destruction";
    break;
  case 28509:
    spellname = "Greater Mana Regeneration";
    break;
  case 28511:
    spellname = "Fire Protection";
    break;
  case 28512:
    spellname = "Frost Protection";
    break;
  case 28513:
    spellname = "Nature Protection";
    break;
  case 28514:
    spellname = "Empowerment";
    break;
  case 28515:
    spellname = "Ironshield";
    break;
  case 28516:
    spellname = "Sunwell Torrent";
    break;
  case 28517:
    spellname = "Rejuvenation Potion";
    break;
  case 28518:
    spellname = "Flask of Fortification";
    break;
  case 28519:
    spellname = "Flask of Mighty Restoration";
    break;
  case 28520:
    spellname = "Flask of Relentless Assault";
    break;
  case 28521:
    spellname = "Flask of Blinding Light";
    break;
  case 28522:
    spellname = "Icebolt";
    break;
  case 28524:
    spellname = "Frost Breath";
    break;
  case 28526:
    spellname = "Icebolt";
    break;
  case 28527:
    spellname = "Fel Blossom";
    break;
  case 28528:
    spellname = "Troll Food Poisoning Visual";
    break;
  case 28530:
    spellname = "Increase Spell Dam 132";
    break;
  case 28531:
    spellname = "Frost Aura";
    break;
  case 28533:
    spellname = "Transform";
    break;
  case 28536:
    spellname = "Arcane Protection";
    break;
  case 28537:
    spellname = "Shadow Protection";
    break;
  case 28538:
    spellname = "Holy Protection";
    break;
  case 28539:
    spellname = "Multi-Shot Damage Increase";
    break;
  case 28540:
    spellname = "Flask of Pure Death";
    break;
  case 28541:
    spellname = "Death Coil Damage Increase";
    break;
  case 28542:
    spellname = "Life Drain";
    break;
  case 28543:
    spellname = "Elixir of Camouflage";
    break;
  case 28544:
    spellname = "Elixir of Major Strength";
    break;
  case 28545:
    spellname = "Elixir of Healing Power";
    break;
  case 28546:
    spellname = "Sneaking Potion";
    break;
  case 28547:
    spellname = "Chill";
    break;
  case 28548:
    spellname = "Shrouding";
    break;
  case 28549:
    spellname = "Elixir of Major Frost Power";
    break;
  case 28550:
    spellname = "Insane Strength Potion";
    break;
  case 28551:
    spellname = "Super Healing Potion";
    break;
  case 28552:
    spellname = "Elixir of the Searching Eye";
    break;
  case 28553:
    spellname = "Elixir of Major Agility";
    break;
  case 28554:
    spellname = "Shrouding Potion";
    break;
  case 28555:
    spellname = "Super Mana Potion";
    break;
  case 28556:
    spellname = "Elixir of Major Firepower";
    break;
  case 28557:
    spellname = "Elixir of Major Defense";
    break;
  case 28558:
    spellname = "Elixir of Major Shadow Power";
    break;
  case 28559:
    spellname = "Untrackable";
    break;
  case 28560:
    spellname = "Summon Blizzard";
    break;
  case 28562:
    spellname = "Major Dreamless Sleep Potion";
    break;
  case 28563:
    spellname = "Heroic Potion";
    break;
  case 28564:
    spellname = "Haste Potion";
    break;
  case 28565:
    spellname = "Destruction Potion";
    break;
  case 28566:
    spellname = "Transmute: Primal Air to Fire";
    break;
  case 28567:
    spellname = "Transmute: Primal Earth to Water";
    break;
  case 28568:
    spellname = "Transmute: Primal Fire to Earth";
    break;
  case 28569:
    spellname = "Transmute: Primal Water to Air";
    break;
  case 28570:
    spellname = "Elixir of Major Mageblood";
    break;
  case 28571:
    spellname = "Major Fire Protection Potion";
    break;
  case 28572:
    spellname = "Major Frost Protection Potion";
    break;
  case 28573:
    spellname = "Major Nature Protection Potion";
    break;
  case 28574:
    spellname = "Arcane Fortitude";
    break;
  case 28575:
    spellname = "Major Arcane Protection Potion";
    break;
  case 28576:
    spellname = "Major Shadow Protection Potion";
    break;
  case 28577:
    spellname = "Major Holy Protection Potion";
    break;
  case 28578:
    spellname = "Elixir of Empowerment";
    break;
  case 28579:
    spellname = "Ironshield Potion";
    break;
  case 28580:
    spellname = "Transmute: Primal Shadow to Water";
    break;
  case 28581:
    spellname = "Transmute: Primal Water to Shadow";
    break;
  case 28582:
    spellname = "Transmute: Primal Mana to Fire";
    break;
  case 28583:
    spellname = "Transmute: Primal Fire to Mana";
    break;
  case 28584:
    spellname = "Transmute: Primal Life to Earth";
    break;
  case 28585:
    spellname = "Transmute: Primal Earth to Life";
    break;
  case 28586:
    spellname = "Super Rejuvenation Potion";
    break;
  case 28587:
    spellname = "Flask of Fortification";
    break;
  case 28588:
    spellname = "Flask of Mighty Restoration";
    break;
  case 28589:
    spellname = "Flask of Relentless Assault";
    break;
  case 28590:
    spellname = "Flask of Blinding Light";
    break;
  case 28591:
    spellname = "Flask of Pure Death";
    break;
  case 28592:
    spellname = "Winter's Chill";
    break;
  case 28593:
    spellname = "Winter's Chill";
    break;
  case 28594:
    spellname = "Winter's Chill";
    break;
  case 28595:
    spellname = "Winter's Chill";
    break;
  case 28596:
    spellname = "Alchemy";
    break;
  case 28597:
    spellname = "Master Alchemist";
    break;
  case 28598:
    spellname = "Touch of Weakness";
    break;
  case 28599:
    spellname = "Shadow Bolt Volley";
    break;
  case 28600:
    spellname = "Super Rejuvenation Potion";
    break;
  case 28601:
    spellname = "Wyatt Test";
    break;
  case 28602:
    spellname = "Flask of Fortification";
    break;
  case 28603:
    spellname = "Flask of Mighty Restoration";
    break;
  case 28604:
    spellname = "Flask of Relentless Assault";
    break;
  case 28605:
    spellname = "Wyatt Test";
    break;
  case 28606:
    spellname = "Flask of Blinding Light";
    break;
  case 28607:
    spellname = "Flask of Pure Death";
    break;
  case 28608:
    spellname = "Test Curse of Agony";
    break;
  case 28609:
    spellname = "Frost Ward";
    break;
  case 28610:
    spellname = "Shadow Ward";
    break;
  case 28612:
    spellname = "Conjure Food";
    break;
  case 28614:
    spellname = "Pointy Spike";
    break;
  case 28615:
    spellname = "Spike Volley";
    break;
  case 28616:
    spellname = "Food";
    break;
  case 28622:
    spellname = "Web Wrap";
    break;
  case 28624:
    spellname = "Healing Draenei Survivor";
    break;
  case 28630:
    spellname = "Draenei Survivor Stunned";
    break;
  case 28664:
    spellname = "Transmute - Primal Shadow to Water";
    break;
  case 28665:
    spellname = "Transmute - Primal Water to Shadow";
    break;
  case 28666:
    spellname = "Transmute - Primal Mana to Fire";
    break;
  case 28667:
    spellname = "Transmute - Primal Fire to Mana";
    break;
  case 28668:
    spellname = "Transmute - Primal Life to Earth";
    break;
  case 28669:
    spellname = "Transmute - Primal Earth to Life";
    break;
  case 28672:
    spellname = "Transmutation Master";
    break;
  case 28673:
    spellname = "Web Wrap";
    break;
  case 28674:
    spellname = "Transmutation Master";
    break;
  case 28675:
    spellname = "Potion Master";
    break;
  case 28676:
    spellname = "Potion Master";
    break;
  case 28677:
    spellname = "Elixir Master";
    break;
  case 28678:
    spellname = "Elixir Master";
    break;
  case 28679:
    spellname = "Harvest Soul";
    break;
  case 28680:
    spellname = "Spell Penetration 13";
    break;
  case 28681:
    spellname = "Soul Revival";
    break;
  case 28682:
    spellname = "Combustion";
    break;
  case 28683:
    spellname = "Leap";
    break;
  case 28684:
    spellname = "Teleport Dawnstar - Up";
    break;
  case 28685:
    spellname = "Teleport Dawnstar - Down";
    break;
  case 28686:
    spellname = "Increase Healing 161";
    break;
  case 28687:
    spellname = "Increase Spell Dam 85";
    break;
  case 28688:
    spellname = "Mograine Cometh DND";
    break;
  case 28689:
    spellname = "Teleport Sanctum Moon - Down";
    break;
  case 28690:
    spellname = "Teleport Sanctum Moon - Up";
    break;
  case 28691:
    spellname = "Teleport Sanctum Sun - Down";
    break;
  case 28692:
    spellname = "Teleport Sanctum Sun - Up";
    break;
  case 28693:
    spellname = "Increase Spell Dam 95";
    break;
  case 28694:
    spellname = "Dreaming Glory";
    break;
  case 28695:
    spellname = "Herb Gathering";
    break;
  case 28696:
    spellname = "Master Herbalist";
    break;
  case 28697:
    spellname = "Forgiveness";
    break;
  case 28698:
    spellname = "Dreaming Glory";
    break;
  case 28699:
    spellname = "Summon Faint Necrotic Crystal";
    break;
  case 28700:
    spellname = "Disperse Neutralizing Agent";
    break;
  case 28701:
    spellname = "Haste";
    break;
  case 28702:
    spellname = "Netherbloom";
    break;
  case 28703:
    spellname = "Netherbloom Pollen";
    break;
  case 28704:
    spellname = "Netherbloom Pollen";
    break;
  case 28705:
    spellname = "Netherbloom Pollen";
    break;
  case 28706:
    spellname = "Netherbloom Pollen";
    break;
  case 28707:
    spellname = "Netherbloom Pollen";
    break;
  case 28708:
    spellname = "Netherbloom Pollen";
    break;
  case 28709:
    spellname = "Netherbloom Pollen";
    break;
  case 28710:
    spellname = "Netherbloom Pollen";
    break;
  case 28711:
    spellname = "Netherbloom Pollen";
    break;
  case 28712:
    spellname = "Netherbloom Pollen";
    break;
  case 28714:
    spellname = "Flame Cap";
    break;
  case 28715:
    spellname = "Flamecap Fire";
    break;
  case 28716:
    spellname = "Rejuvenation";
    break;
  case 28717:
    spellname = "Attack Power - Feral (+0305)";
    break;
  case 28718:
    spellname = "Mana Thistle";
    break;
  case 28719:
    spellname = "Healing Touch";
    break;
  case 28720:
    spellname = "Nightmare Vine";
    break;
  case 28721:
    spellname = "Nightmare Pollen";
    break;
  case 28722:
    spellname = "Rejuvenation";
    break;
  case 28723:
    spellname = "Rejuvenation";
    break;
  case 28724:
    spellname = "Rejuvenation";
    break;
  case 28725:
    spellname = "War Stomp";
    break;
  case 28726:
    spellname = "Nightmare Seed";
    break;
  case 28727:
    spellname = "Mind Exhaustion";
    break;
  case 28728:
    spellname = "Feign Death";
    break;
  case 28729:
    spellname = "Ribbon of Souls";
    break;
  case 28730:
    spellname = "Arcane Torrent";
    break;
  case 28731:
    spellname = "Ribbon of Souls";
    break;
  case 28732:
    spellname = "Widow's Embrace";
    break;
  case 28733:
    spellname = "Arcane Torrent";
    break;
  case 28734:
    spellname = "Mana Tap";
    break;
  case 28735:
    spellname = "Attack Power 100";
    break;
  case 28736:
    spellname = "Increase Healing 178";
    break;
  case 28737:
    spellname = "Amnesia";
    break;
  case 28738:
    spellname = "Summon Speedy";
    break;
  case 28739:
    spellname = "Summon Mr. Wiggles";
    break;
  case 28740:
    spellname = "Summon Whiskers";
    break;
  case 28741:
    spellname = "Poison Shock";
    break;
  case 28742:
    spellname = "Healing Touch";
    break;
  case 28743:
    spellname = "Dreamwalker";
    break;
  case 28744:
    spellname = "Regrowth";
    break;
  case 28745:
    spellname = "Quest - Prepare Field Duty Papers";
    break;
  case 28746:
    spellname = "Plagueheart";
    break;
  case 28747:
    spellname = "Enrage";
    break;
  case 28749:
    spellname = "Check Spectral Side";
    break;
  case 28750:
    spellname = "Blessing of the Claw";
    break;
  case 28751:
    spellname = "Multi-Shot";
    break;
  case 28752:
    spellname = "Adrenaline Rush";
    break;
  case 28753:
    spellname = "Adrenaline Rush";
    break;
  case 28754:
    spellname = "Fury of the Ashbringer";
    break;
  case 28755:
    spellname = "Rapid Fire";
    break;
  case 28756:
    spellname = "Stalker's Ally";
    break;
  case 28757:
    spellname = "Stalker's Ally";
    break;
  case 28758:
    spellname = "Stalker's Ally";
    break;
  case 28760:
    spellname = "Mana Infusion";
    break;
  case 28761:
    spellname = "Not There";
    break;
  case 28762:
    spellname = "Not There";
    break;
  case 28763:
    spellname = "Evocation";
    break;
  case 28764:
    spellname = "Adaptive Warding";
    break;
  case 28765:
    spellname = "Fire Resistance";
    break;
  case 28766:
    spellname = "Frost Resistance";
    break;
  case 28767:
    spellname = "Increase Spell Dam 51";
    break;
  case 28768:
    spellname = "Nature Resistance";
    break;
  case 28769:
    spellname = "Shadow Resistance";
    break;
  case 28770:
    spellname = "Arcane Resistance";
    break;
  case 28771:
    spellname = "Elemental Vulnerability";
    break;
  case 28772:
    spellname = "Elemental Vulnerability";
    break;
  case 28773:
    spellname = "Glyph of Deflection";
    break;
  case 28774:
    spellname = "Lay Hands";
    break;
  case 28775:
    spellname = "Judgement of Light";
    break;
  case 28776:
    spellname = "Necrotic Poison";
    break;
  case 28777:
    spellname = "Slayer's Crest";
    break;
  case 28778:
    spellname = "Loatheb's Reflection";
    break;
  case 28779:
    spellname = "Essence of Sapphiron";
    break;
  case 28780:
    spellname = "The Eye of the Dead";
    break;
  case 28783:
    spellname = "Impale";
    break;
  case 28784:
    spellname = "Summon Midsummer Bonfire Bunnies";
    break;
  case 28785:
    spellname = "Locust Swarm";
    break;
  case 28786:
    spellname = "Locust Swarm";
    break;
  case 28787:
    spellname = "Cleanse";
    break;
  case 28788:
    spellname = "Cleanse";
    break;
  case 28789:
    spellname = "Holy Power";
    break;
  case 28790:
    spellname = "Holy Power";
    break;
  case 28791:
    spellname = "Holy Power";
    break;
  case 28792:
    spellname = "Increase Spell Dam 126";
    break;
  case 28793:
    spellname = "Holy Power";
    break;
  case 28794:
    spellname = "Rain of Fire";
    break;
  case 28795:
    spellname = "Holy Power";
    break;
  case 28796:
    spellname = "Poison Bolt Volley";
    break;
  case 28798:
    spellname = "Enrage";
    break;
  case 28799:
    spellname = "Increased Spell Penetration 25";
    break;
  case 28800:
    spellname = "Word of Thawing";
    break;
  case 28801:
    spellname = "Slime";
    break;
  case 28802:
    spellname = "Epiphany";
    break;
  case 28803:
    spellname = "Bonfire Superbuff";
    break;
  case 28804:
    spellname = "Epiphany";
    break;
  case 28805:
    spellname = "Increase Healing 238";
    break;
  case 28806:
    spellname = "Toss Fuel on Bonfire";
    break;
  case 28807:
    spellname = "Renew";
    break;
  case 28808:
    spellname = "Reduced Threat";
    break;
  case 28809:
    spellname = "Greater Heal";
    break;
  case 28810:
    spellname = "Armor of Faith";
    break;
  case 28811:
    spellname = "Reduced Threat";
    break;
  case 28812:
    spellname = "Head Rush";
    break;
  case 28813:
    spellname = "Head Rush";
    break;
  case 28814:
    spellname = "Revealed Flaw";
    break;
  case 28815:
    spellname = "Revealed Flaw";
    break;
  case 28816:
    spellname = "Invigorate";
    break;
  case 28817:
    spellname = "Invigorate";
    break;
  case 28818:
    spellname = "Totemic Energy";
    break;
  case 28819:
    spellname = "Submerge Visual";
    break;
  case 28820:
    spellname = "Lightning Shield";
    break;
  case 28821:
    spellname = "Lightning Shield";
    break;
  case 28822:
    spellname = "Flare";
    break;
  case 28823:
    spellname = "Totemic Power";
    break;
  case 28824:
    spellname = "Totemic Power";
    break;
  case 28825:
    spellname = "Totemic Power";
    break;
  case 28826:
    spellname = "Totemic Power";
    break;
  case 28827:
    spellname = "Totemic Power";
    break;
  case 28828:
    spellname = "Nether Drake";
    break;
  case 28829:
    spellname = "Corruption";
    break;
  case 28830:
    spellname = "Life Tap";
    break;
  case 28831:
    spellname = "Vampirism";
    break;
  case 28832:
    spellname = "Mark of Korth'azz";
    break;
  case 28833:
    spellname = "Mark of Blaumeux";
    break;
  case 28834:
    spellname = "Mark of Mograine";
    break;
  case 28835:
    spellname = "Mark of Zeliek";
    break;
  case 28836:
    spellname = "Mark";
    break;
  case 28839:
    spellname = "Vampirism";
    break;
  case 28840:
    spellname = "Attack Power 98";
    break;
  case 28841:
    spellname = "Increase Spell Dam 113";
    break;
  case 28842:
    spellname = "Increased Hit Chance";
    break;
  case 28843:
    spellname = " Increased Spell Hit Chance";
    break;
  case 28844:
    spellname = "Revenge";
    break;
  case 28845:
    spellname = "Cheat Death";
    break;
  case 28846:
    spellname = "Cheat Death";
    break;
  case 28847:
    spellname = "Healing Touch Refund";
    break;
  case 28848:
    spellname = "Healing Touch";
    break;
  case 28849:
    spellname = "Lesser Healing Wave";
    break;
  case 28850:
    spellname = "Lesser Healing Wave";
    break;
  case 28851:
    spellname = "Increased Flash of Light Healing";
    break;
  case 28852:
    spellname = "Improved Seal of the Crusader";
    break;
  case 28853:
    spellname = "Increased Flash of Light Healing";
    break;
  case 28854:
    spellname = "Improved Moonfire";
    break;
  case 28855:
    spellname = "Increased Maul and Swipe Damage";
    break;
  case 28856:
    spellname = "Increased Lesser Healing Wave";
    break;
  case 28857:
    spellname = "Increased Lightning Damage";
    break;
  case 28858:
    spellname = "Entangling Roots";
    break;
  case 28859:
    spellname = "Cleansing Flames";
    break;
  case 28860:
    spellname = "Summon Midsummer Bonfire Fuel Counter";
    break;
  case 28861:
    spellname = "Holiday - Midsummer";
    break;
  case 28862:
    spellname = "The Eye of Diminution";
    break;
  case 28863:
    spellname = "Void Zone";
    break;
  case 28864:
    spellname = "Summon Corpse Scarabs (10)";
    break;
  case 28865:
    spellname = "Consumption";
    break;
  case 28866:
    spellname = "Kiss of the Spider";
    break;
  case 28869:
    spellname = "Spell Penetration 15";
    break;
  case 28870:
    spellname = "Undead Slayer 60";
    break;
  case 28871:
    spellname = "Summon Spirit of Summer";
    break;
  case 28872:
    spellname = "Summon Lobster DND";
    break;
  case 28873:
    spellname = "Lich Slap";
    break;
  case 28875:
    spellname = "Gemcutting";
    break;
  case 28876:
    spellname = "Increase Spell Dam Undead 26";
    break;
  case 28877:
    spellname = "Arcane Affinity";
    break;
  case 28878:
    spellname = "Inspiring Presence";
    break;
  case 28880:
    spellname = "Gift of the Naaru";
    break;
  case 28882:
    spellname = "Righteous Fire";
    break;
  case 28883:
    spellname = "Holy Wrath";
    break;
  case 28884:
    spellname = "Meteor";
    break;
  case 28887:
    spellname = "Wither Strike";
    break;
  case 28890:
    spellname = "Increase Spell Dam Undead 60";
    break;
  case 28891:
    spellname = "Consecrated Weapon";
    break;
  case 28892:
    spellname = "Nature Channeling";
    break;
  case 28893:
    spellname = "Undead Slayer 100";
    break;
  case 28894:
    spellname = "Jewelcrafting";
    break;
  case 28895:
    spellname = "Jewelcrafting";
    break;
  case 28896:
    spellname = "Expert Jewelcrafting";
    break;
  case 28897:
    spellname = "Jewelcrafting";
    break;
  case 28898:
    spellname = "Blessed Wizard Oil";
    break;
  case 28899:
    spellname = "Artisan Jewelcrafting";
    break;
  case 28900:
    spellname = "Chain Lightning";
    break;
  case 28901:
    spellname = "Master Jewelcrafting";
    break;
  case 28902:
    spellname = "Bloodlust";
    break;
  case 28903:
    spellname = "Teardrop Blood Garnet";
    break;
  case 28904:
    spellname = "Summon Ghostclaw Lynx";
    break;
  case 28905:
    spellname = "Bold Blood Garnet";
    break;
  case 28906:
    spellname = "Runed Blood Garnet";
    break;
  case 28907:
    spellname = "Delicate Blood Garnet";
    break;
  case 28910:
    spellname = "Inscribed Flame Spessarite";
    break;
  case 28912:
    spellname = "Luminous Flame Spessarite";
    break;
  case 28913:
    spellname = "Flesh Rot";
    break;
  case 28914:
    spellname = "Glinting Flame Spessarite";
    break;
  case 28915:
    spellname = "Potent Flame Spessarite";
    break;
  case 28916:
    spellname = "Radiant Deep Peridot";
    break;
  case 28917:
    spellname = "Jagged Deep Peridot";
    break;
  case 28918:
    spellname = "Enduring Deep Peridot";
    break;
  case 28924:
    spellname = "Dazzling Deep Peridot";
    break;
  case 28925:
    spellname = "Glowing Shadow Draenite";
    break;
  case 28927:
    spellname = "Royal Shadow Draenite";
    break;
  case 28928:
    spellname = "Summon Spirit of Mograine";
    break;
  case 28931:
    spellname = "Summon Spirit of Blaumeux";
    break;
  case 28932:
    spellname = "Summon Spirit of Korth'azz";
    break;
  case 28933:
    spellname = "Shifting Shadow Draenite";
    break;
  case 28934:
    spellname = "Summon Spirit of Zeliek";
    break;
  case 28936:
    spellname = "Sovereign Shadow Draenite";
    break;
  case 28938:
    spellname = "Brilliant Golden Draenite";
    break;
  case 28944:
    spellname = "Gleaming Golden Draenite";
    break;
  case 28947:
    spellname = "Thick Golden Draenite";
    break;
  case 28948:
    spellname = "Rigid Golden Draenite";
    break;
  case 28950:
    spellname = "Solid Azure Moonstone";
    break;
  case 28953:
    spellname = "Sparkling Azure Moonstone";
    break;
  case 28955:
    spellname = "Stormy Azure Moonstone";
    break;
  case 28957:
    spellname = "Lustrous Azure Moonstone";
    break;
  case 28969:
    spellname = "Acid Spit";
    break;
  case 28987:
    spellname = "Plague Slime (Black)";
    break;
  case 28988:
    spellname = "Plague Slime (Blue)";
    break;
  case 28989:
    spellname = "Plague Slime (Green)";
    break;
  case 28990:
    spellname = "Plague Slime (Red)";
    break;
  case 28991:
    spellname = "Web";
    break;
  case 28993:
    spellname = "Banshee Wail";
    break;
  case 28995:
    spellname = "Stoneskin";
    break;
  case 28996:
    spellname = "Elemental Warding";
    break;
  case 28997:
    spellname = "Elemental Warding";
    break;
  case 28998:
    spellname = "Elemental Warding";
    break;
  case 28999:
    spellname = "Storm Reach";
    break;
  case 29000:
    spellname = "Storm Reach";
    break;
  case 29001:
    spellname = "Transformed";
    break;
  case 29002:
    spellname = "Transformed";
    break;
  case 29003:
    spellname = "Transformed";
    break;
  case 29004:
    spellname = "Transform to Dancer";
    break;
  case 29005:
    spellname = "Storm Mastery";
    break;
  case 29006:
    spellname = "Bubbly Refreshment";
    break;
  case 29007:
    spellname = "Drink";
    break;
  case 29008:
    spellname = "Food";
    break;
  case 29029:
    spellname = "Fizzy Energy Drink";
    break;
  case 29038:
    spellname = "Fizzy Energy Drink";
    break;
  case 29039:
    spellname = "Fizzy Energy Drink";
    break;
  case 29040:
    spellname = "Fizzy Energy Drink";
    break;
  case 29041:
    spellname = "Tasty Summer Treat";
    break;
  case 29042:
    spellname = "Glowy (iCoke Promotion)";
    break;
  case 29044:
    spellname = "Hex";
    break;
  case 29045:
    spellname = "Bonus Dodge";
    break;
  case 29047:
    spellname = "Cloud of Disease";
    break;
  case 29049:
    spellname = "Deactivate Night Elf Moon Crystal";
    break;
  case 29051:
    spellname = "Mind Exhaustion";
    break;
  case 29054:
    spellname = "Devour Mana";
    break;
  case 29055:
    spellname = "Refreshing Red Apple";
    break;
  case 29058:
    spellname = "Drain Mana";
    break;
  case 29059:
    spellname = "Skeletal Steed";
    break;
  case 29060:
    spellname = "Taunt";
    break;
  case 29061:
    spellname = "Shield Wall";
    break;
  case 29062:
    spellname = "Eye of the Storm";
    break;
  case 29063:
    spellname = "Focused Casting";
    break;
  case 29064:
    spellname = "Eye of the Storm";
    break;
  case 29065:
    spellname = "Eye of the Storm";
    break;
  case 29066:
    spellname = "Summon Dreadbone Skeleton";
    break;
  case 29067:
    spellname = "Slave Drain";
    break;
  case 29068:
    spellname = "Increased Damage 2";
    break;
  case 29069:
    spellname = "Increased Critical Spell";
    break;
  case 29073:
    spellname = "Food";
    break;
  case 29074:
    spellname = "Master of Elements";
    break;
  case 29075:
    spellname = "Master of Elements";
    break;
  case 29076:
    spellname = "Master of Elements";
    break;
  case 29077:
    spellname = "Master of Elements";
    break;
  case 29079:
    spellname = "Elemental Weapons";
    break;
  case 29080:
    spellname = "Elemental Weapons";
    break;
  case 29082:
    spellname = "Weapon Mastery";
    break;
  case 29084:
    spellname = "Weapon Mastery";
    break;
  case 29086:
    spellname = "Weapon Mastery";
    break;
  case 29087:
    spellname = "Weapon Mastery";
    break;
  case 29088:
    spellname = "Weapon Mastery";
    break;
  case 29089:
    spellname = "Increased Armor 200 Devout";
    break;
  case 29090:
    spellname = "Increased Armor 200 Dreadmist";
    break;
  case 29091:
    spellname = "Increased Armor 200 Magister";
    break;
  case 29092:
    spellname = "Increased Armor 200 Valor";
    break;
  case 29093:
    spellname = "Increased Armor 200 Lightforge";
    break;
  case 29094:
    spellname = "Increased Armor 200 Beaststalker";
    break;
  case 29095:
    spellname = "Increased Armor 200 Elements";
    break;
  case 29096:
    spellname = "Increased Armor 200 Shadowcraft";
    break;
  case 29097:
    spellname = "Increased Armor 200 Wildheart";
    break;
  case 29098:
    spellname = "Bitter Withdrawal";
    break;
  case 29099:
    spellname = "Create Flame of Darnassus";
    break;
  case 29101:
    spellname = "Create Flame of Stormwind";
    break;
  case 29102:
    spellname = "Create Flame of Ironforge";
    break;
  case 29105:
    spellname = "Summon Corpse Scarabs (5)";
    break;
  case 29106:
    spellname = "Arcane Explosion";
    break;
  case 29107:
    spellname = "Disrupting Shout";
    break;
  case 29109:
    spellname = "Arcane Residue";
    break;
  case 29112:
    spellname = "Champion of the Dawn";
    break;
  case 29113:
    spellname = "Champion of the Dawn";
    break;
  case 29114:
    spellname = "Midsummer Bonfire Bunnies 2";
    break;
  case 29115:
    spellname = "Flames";
    break;
  case 29116:
    spellname = "Toast Smorcs";
    break;
  case 29117:
    spellname = "Feather Burst";
    break;
  case 29118:
    spellname = "Feather Burst";
    break;
  case 29119:
    spellname = "Feather Burst";
    break;
  case 29120:
    spellname = "Shoot Bow";
    break;
  case 29121:
    spellname = "Shoot Bow";
    break;
  case 29122:
    spellname = "Shoot Bow";
    break;
  case 29124:
    spellname = "Polymorph";
    break;
  case 29125:
    spellname = "Hopeless";
    break;
  case 29126:
    spellname = "Cleansing Flames";
    break;
  case 29127:
    spellname = "Maypole Buff";
    break;
  case 29128:
    spellname = "Translocate";
    break;
  case 29129:
    spellname = "Translocate";
    break;
  case 29130:
    spellname = "Create Flame of Orgrimmar";
    break;
  case 29131:
    spellname = "Bloodrage";
    break;
  case 29132:
    spellname = "Create Flame of Thunder Bluff";
    break;
  case 29133:
    spellname = "Create Flame of The Undercity";
    break;
  case 29134:
    spellname = "Maypole";
    break;
  case 29135:
    spellname = "Cleansing Flames";
    break;
  case 29136:
    spellname = "Cleansing Flames";
    break;
  case 29137:
    spellname = "Cleansing Flames";
    break;
  case 29138:
    spellname = "Cleansing Flames";
    break;
  case 29139:
    spellname = "Cleansing Flames";
    break;
  case 29140:
    spellname = "Vitality";
    break;
  case 29143:
    spellname = "Vitality";
    break;
  case 29144:
    spellname = "Vitality";
    break;
  case 29145:
    spellname = "Vitality";
    break;
  case 29146:
    spellname = "Vitality";
    break;
  case 29147:
    spellname = "Tunnel Bore Passive";
    break;
  case 29148:
    spellname = "Tunnel Bore";
    break;
  case 29150:
    spellname = "Electric Discharge";
    break;
  case 29151:
    spellname = "Electric Discharge";
    break;
  case 29152:
    spellname = "Bloodmyst Radiation";
    break;
  case 29155:
    spellname = "Drain Life";
    break;
  case 29157:
    spellname = "Teleport Eversong - North Sanctum - Faulty";
    break;
  case 29158:
    spellname = "Inhale";
    break;
  case 29159:
    spellname = "Increased Critical 28 Spells";
    break;
  case 29160:
    spellname = "Maypole";
    break;
  case 29162:
    spellname = "Stygian Grasp";
    break;
  case 29164:
    spellname = "Stygian Grasp";
    break;
  case 29166:
    spellname = "Innervate";
    break;
  case 29168:
    spellname = "Fear";
    break;
  case 29170:
    spellname = "Lesser Heal";
    break;
  case 29171:
    spellname = "Strong Current";
    break;
  case 29172:
    spellname = "Ribbon Pole Channel";
    break;
  case 29173:
    spellname = "Ribbon Pole Ritual Effect";
    break;
  case 29175:
    spellname = "Ribbon Dance";
    break;
  case 29176:
    spellname = "Keilnei Bow Shot";
    break;
  case 29177:
    spellname = "Elemental Devastation";
    break;
  case 29178:
    spellname = "Elemental Devastation";
    break;
  case 29179:
    spellname = "Elemental Devastation";
    break;
  case 29180:
    spellname = "Elemental Devastation";
    break;
  case 29181:
    spellname = "Teleport to Twin Emps Effect DND";
    break;
  case 29182:
    spellname = "Teleport to Twin Emperors";
    break;
  case 29183:
    spellname = "Polymorph Immunity";
    break;
  case 29184:
    spellname = "Corrupted Mind";
    break;
  case 29185:
    spellname = "Corrupted Mind";
    break;
  case 29187:
    spellname = "Healing Grace";
    break;
  case 29188:
    spellname = "Teleport to Final Chamber";
    break;
  case 29189:
    spellname = "Healing Grace";
    break;
  case 29190:
    spellname = "Teleport to Final Chamber Effect DND";
    break;
  case 29191:
    spellname = "Healing Grace";
    break;
  case 29192:
    spellname = "Improved Weapon Totems";
    break;
  case 29193:
    spellname = "Improved Weapon Totems";
    break;
  case 29194:
    spellname = "Corrupted Mind";
    break;
  case 29195:
    spellname = "Corrupted Mind";
    break;
  case 29196:
    spellname = "Corrupted Mind";
    break;
  case 29197:
    spellname = "Corrupted Mind";
    break;
  case 29198:
    spellname = "Corrupted Mind";
    break;
  case 29199:
    spellname = "Corrupted Mind";
    break;
  case 29200:
    spellname = "Purify Helboar Meat";
    break;
  case 29201:
    spellname = "Corrupted Mind";
    break;
  case 29202:
    spellname = "Healing Way";
    break;
  case 29203:
    spellname = "Healing Way";
    break;
  case 29204:
    spellname = "Inevitable Doom";
    break;
  case 29205:
    spellname = "Healing Way";
    break;
  case 29206:
    spellname = "Healing Way";
    break;
  case 29208:
    spellname = "Blink";
    break;
  case 29209:
    spellname = "Blink";
    break;
  case 29210:
    spellname = "Blink";
    break;
  case 29211:
    spellname = "Blink";
    break;
  case 29212:
    spellname = "Cripple";
    break;
  case 29213:
    spellname = "Curse of the Plaguebringer";
    break;
  case 29214:
    spellname = "Wrath of the Plaguebringer";
    break;
  case 29216:
    spellname = "Teleport";
    break;
  case 29217:
    spellname = "Summon Skeleton";
    break;
  case 29220:
    spellname = "Fiery Festival Brew";
    break;
  case 29221:
    spellname = "Fiery Festival Brew";
    break;
  case 29223:
    spellname = "Summon Skeleton";
    break;
  case 29224:
    spellname = "Summon Skeleton";
    break;
  case 29225:
    spellname = "Summon Skeleton";
    break;
  case 29226:
    spellname = "Summon Skeleton";
    break;
  case 29227:
    spellname = "Summon Skeleton";
    break;
  case 29228:
    spellname = "Flame Shock";
    break;
  case 29231:
    spellname = "Teleport Return";
    break;
  case 29232:
    spellname = "Fungal Bloom";
    break;
  case 29233:
    spellname = "Beast of the Unseen Path";
    break;
  case 29234:
    spellname = "Summon Spore";
    break;
  case 29235:
    spellname = "Fire Festival Fortitude";
    break;
  case 29236:
    spellname = "Shimmer Stout";
    break;
  case 29237:
    spellname = "Summon Skeletons";
    break;
  case 29238:
    spellname = "Summon Skeleton";
    break;
  case 29239:
    spellname = "Summon Skeleton";
    break;
  case 29240:
    spellname = "Summon Skeleton";
    break;
  case 29247:
    spellname = "Summon Skeleton";
    break;
  case 29248:
    spellname = "Summon Skeleton";
    break;
  case 29249:
    spellname = "Summon Skeleton";
    break;
  case 29251:
    spellname = "Enriched Lasher Root";
    break;
  case 29255:
    spellname = "Summon Skeleton";
    break;
  case 29256:
    spellname = "Summon Skeleton";
    break;
  case 29257:
    spellname = "Summon Skeleton";
    break;
  case 29258:
    spellname = "Summon Skeleton";
    break;
  case 29262:
    spellname = "Summon Skeleton";
    break;
  case 29266:
    spellname = "Permanent Feign Death";
    break;
  case 29267:
    spellname = "Summon Skeleton";
    break;
  case 29268:
    spellname = "Summon Skeleton";
    break;
  case 29269:
    spellname = "Summon Skeleton";
    break;
  case 29271:
    spellname = "Power Surge";
    break;
  case 29273:
    spellname = "Teleport";
    break;
  case 29274:
    spellname = "Nature's Swiftness";
    break;
  case 29275:
    spellname = "Unstable Power";
    break;
  case 29276:
    spellname = "Crystalized Mana Residue";
    break;
  case 29277:
    spellname = "Summon Purified Helboar Meat";
    break;
  case 29278:
    spellname = "Summon Toxic Helboar Meat";
    break;
  case 29279:
    spellname = "Item - Place Signaling Gem DND";
    break;
  case 29290:
    spellname = "Chilling Poison";
    break;
  case 29291:
    spellname = "Chilling Poison";
    break;
  case 29292:
    spellname = "Frost Mist";
    break;
  case 29293:
    spellname = "Poison Bolt Volley";
    break;
  case 29294:
    spellname = "Naxxramas Entry Flag Effect DND";
    break;
  case 29295:
    spellname = "Naxxramas Entry Teleport DND";
    break;
  case 29297:
    spellname = "Item - Cleansing Vial DND";
    break;
  case 29298:
    spellname = "Dark Shriek";
    break;
  case 29299:
    spellname = "Draining Touch";
    break;
  case 29300:
    spellname = "Sonic Blast";
    break;
  case 29302:
    spellname = "Energy Pulse";
    break;
  case 29303:
    spellname = "Wing Beat";
    break;
  case 29304:
    spellname = "Howl of the Broken Hills";
    break;
  case 29305:
    spellname = "Summon Cinder Elemental";
    break;
  case 29306:
    spellname = "Infected Wound";
    break;
  case 29307:
    spellname = "Infected Wound";
    break;
  case 29308:
    spellname = "Power Surge";
    break;
  case 29309:
    spellname = "Phase Shift";
    break;
  case 29310:
    spellname = "Mana Burn";
    break;
  case 29311:
    spellname = "Netherhound Blood";
    break;
  case 29312:
    spellname = "Condesned Mana Powder";
    break;
  case 29313:
    spellname = "CooldownAll";
    break;
  case 29314:
    spellname = "Quest - Healing Salve";
    break;
  case 29315:
    spellname = "Phase Shift";
    break;
  case 29316:
    spellname = "Summon Assistants";
    break;
  case 29317:
    spellname = "Shadow Bolt";
    break;
  case 29318:
    spellname = "Frost Breath";
    break;
  case 29319:
    spellname = "Quest - Healing Salve Dummy";
    break;
  case 29320:
    spellname = "Charge";
    break;
  case 29321:
    spellname = "Fear";
    break;
  case 29322:
    spellname = "Warlock Channeling";
    break;
  case 29323:
    spellname = "Absorb Vitality";
    break;
  case 29324:
    spellname = "Test Sapper Charge";
    break;
  case 29325:
    spellname = "Acid Volley";
    break;
  case 29326:
    spellname = "Absorb Vitality";
    break;
  case 29328:
    spellname = "Sapphiron's Wing Buffet";
    break;
  case 29332:
    spellname = "Fire-toasted Bun";
    break;
  case 29333:
    spellname = "Midsummer Sausage";
    break;
  case 29334:
    spellname = "Toasted Smorc";
    break;
  case 29335:
    spellname = "Elderberry Pie";
    break;
  case 29338:
    spellname = "Fire Festival Fury";
    break;
  case 29339:
    spellname = "Healing Touch";
    break;
  case 29340:
    spellname = "Whip Frenzy";
    break;
  case 29341:
    spellname = "Shadowburn";
    break;
  case 29343:
    spellname = "Unsummon Sanctified Crystal";
    break;
  case 29348:
    spellname = "Goldenmist Special Brew";
    break;
  case 29350:
    spellname = "Plague Cloud";
    break;
  case 29354:
    spellname = "Mining";
    break;
  case 29355:
    spellname = "Master Miner";
    break;
  case 29356:
    spellname = "Smelt Fel Iron";
    break;
  case 29357:
    spellname = "Sapphiron Dies";
    break;
  case 29358:
    spellname = "Smelt Adamantite";
    break;
  case 29359:
    spellname = "Smelt Eternium";
    break;
  case 29360:
    spellname = "Smelt Felsteel";
    break;
  case 29361:
    spellname = "Smelt Khorium";
    break;
  case 29362:
    spellname = "Draining Touch";
    break;
  case 29363:
    spellname = "Draining Touch";
    break;
  case 29364:
    spellname = "Encapsulate Voidwalker";
    break;
  case 29369:
    spellname = "Increase Healing 134";
    break;
  case 29371:
    spellname = "Eruption";
    break;
  case 29380:
    spellname = "Cleanse";
    break;
  case 29381:
    spellname = "Greater Blessing of Might";
    break;
  case 29382:
    spellname = "Divine Shield";
    break;
  case 29383:
    spellname = "Holy Light";
    break;
  case 29384:
    spellname = "Light Beacon";
    break;
  case 29385:
    spellname = "Seal of Command";
    break;
  case 29386:
    spellname = "Judgement of Command";
    break;
  case 29387:
    spellname = "Holiday Breath of Fire";
    break;
  case 29388:
    spellname = "Breath of Fire";
    break;
  case 29389:
    spellname = "Firebreathing";
    break;
  case 29390:
    spellname = "Shield Wall";
    break;
  case 29395:
    spellname = "Break Kaliri Egg";
    break;
  case 29402:
    spellname = "Holiday - Breath of Fire Aura (NPC)";
    break;
  case 29403:
    spellname = "Holiday Breath of Fire";
    break;
  case 29405:
    spellname = "Mana Burn";
    break;
  case 29406:
    spellname = "Shadowform";
    break;
  case 29407:
    spellname = "Mind Flay";
    break;
  case 29408:
    spellname = "Power Word: Shield";
    break;
  case 29413:
    spellname = "Haste";
    break;
  case 29414:
    spellname = "Haste";
    break;
  case 29415:
    spellname = "Haste";
    break;
  case 29416:
    spellname = "Haste";
    break;
  case 29417:
    spellname = "Haste";
    break;
  case 29418:
    spellname = "Haste";
    break;
  case 29419:
    spellname = "Flash Bomb";
    break;
  case 29420:
    spellname = "Wretched Tap";
    break;
  case 29421:
    spellname = "Holiday Breath of Fire";
    break;
  case 29422:
    spellname = "Kel'Thuzad Channel Effect";
    break;
  case 29423:
    spellname = "Kel'Thuzad Channel";
    break;
  case 29425:
    spellname = "Gouge";
    break;
  case 29426:
    spellname = "Heroic Strike";
    break;
  case 29427:
    spellname = "Holy Light";
    break;
  case 29428:
    spellname = "Eversong Battered Crate Trap Dummy";
    break;
  case 29432:
    spellname = "Fire Protection";
    break;
  case 29435:
    spellname = "Capture Female Kaliri Hatchling";
    break;
  case 29436:
    spellname = "Leeching Throw";
    break;
  case 29437:
    spellname = "Toss Fuel on Bonfire (Activate object effect)";
    break;
  case 29438:
    spellname = "Elemental Precision";
    break;
  case 29439:
    spellname = "Elemental Precision";
    break;
  case 29440:
    spellname = "Elemental Precision";
    break;
  case 29441:
    spellname = "Magic Absorption";
    break;
  case 29442:
    spellname = "Magic Absorption";
    break;
  case 29443:
    spellname = "Counterspell";
    break;
  case 29444:
    spellname = "Magic Absorption";
    break;
  case 29445:
    spellname = "Magic Absorption";
    break;
  case 29446:
    spellname = "Magic Absorption";
    break;
  case 29447:
    spellname = "Magic Absorption";
    break;
  case 29448:
    spellname = "Vanish";
    break;
  case 29451:
    spellname = "Saltheril's Haven Party Invitation";
    break;
  case 29452:
    spellname = "Sharpen Blade";
    break;
  case 29453:
    spellname = "Sharpen Blade";
    break;
  case 29454:
    spellname = "Felsteel Shield Spike";
    break;
  case 29455:
    spellname = "Felsteel Shield Spike";
    break;
  case 29456:
    spellname = "Fireball";
    break;
  case 29457:
    spellname = "Frostbolt";
    break;
  case 29458:
    spellname = "Blizzard";
    break;
  case 29459:
    spellname = "Pyroblast";
    break;
  case 29460:
    spellname = "Darkcrest Taskmaster Slain";
    break;
  case 29461:
    spellname = "Darkcrest Taskmaster Alive";
    break;
  case 29462:
    spellname = "Antimagic Pulse";
    break;
  case 29463:
    spellname = "Antimagic Pulse";
    break;
  case 29467:
    spellname = "Power of the Scourge";
    break;
  case 29468:
    spellname = "Power of the Scourge";
    break;
  case 29469:
    spellname = "Flametongue Attack";
    break;
  case 29470:
    spellname = "Flametongue Attack";
    break;
  case 29471:
    spellname = "Mana Drain";
    break;
  case 29472:
    spellname = "Wanton Hostess Transform";
    break;
  case 29473:
    spellname = "Parabolic Fireball";
    break;
  case 29474:
    spellname = "Resilience of the Scourge";
    break;
  case 29475:
    spellname = "Resilience of the Scourge";
    break;
  case 29476:
    spellname = "Astral Armor";
    break;
  case 29477:
    spellname = "Banshee Wail";
    break;
  case 29478:
    spellname = "Battlegear of Might";
    break;
  case 29479:
    spellname = "Unscathed (DND)";
    break;
  case 29480:
    spellname = "Fortitude of the Scourge";
    break;
  case 29481:
    spellname = "Fortitude of the Scourge";
    break;
  case 29482:
    spellname = "Might of the Scourge";
    break;
  case 29483:
    spellname = "Might of the Scourge";
    break;
  case 29484:
    spellname = "Web Spray";
    break;
  case 29485:
    spellname = "Alluring Aura";
    break;
  case 29486:
    spellname = "Bewitching Aura";
    break;
  case 29487:
    spellname = "Shadow Bolt";
    break;
  case 29488:
    spellname = "Night Mistress Transform";
    break;
  case 29489:
    spellname = "Concubine Transform";
    break;
  case 29490:
    spellname = "Seduction";
    break;
  case 29491:
    spellname = "Impending Betrayal";
    break;
  case 29492:
    spellname = "Searing Pain";
    break;
  case 29494:
    spellname = "Temptation";
    break;
  case 29495:
    spellname = "Temptation";
    break;
  case 29496:
    spellname = "Jealousy";
    break;
  case 29497:
    spellname = "Jealousy";
    break;
  case 29500:
    spellname = "Cancel Mouth Spawns";
    break;
  case 29501:
    spellname = "Frost Arrow";
    break;
  case 29502:
    spellname = "Frost Arrow";
    break;
  case 29503:
    spellname = "Lesser Warding Shield";
    break;
  case 29504:
    spellname = "Lesser Warding";
    break;
  case 29505:
    spellname = "Banshee Shriek";
    break;
  case 29506:
    spellname = "The Burrower's Shell";
    break;
  case 29507:
    spellname = "Lesser Ward of Shielding";
    break;
  case 29511:
    spellname = "Repentance";
    break;
  case 29512:
    spellname = "Holy Ground";
    break;
  case 29513:
    spellname = "Goblin Dragon Gun";
    break;
  case 29514:
    spellname = "Holy Nova";
    break;
  case 29515:
    spellname = "TEST Scorch";
    break;
  case 29516:
    spellname = "Dance Trance";
    break;
  case 29517:
    spellname = "Apothecary's Poison";
    break;
  case 29519:
    spellname = "Silithyst";
    break;
  case 29520:
    spellname = "Echoes of Lordaeron";
    break;
  case 29521:
    spellname = "Dance Vibe";
    break;
  case 29522:
    spellname = "Holy Fire";
    break;
  case 29524:
    spellname = "Attack Power 94";
    break;
  case 29525:
    spellname = "Netherstep";
    break;
  case 29528:
    spellname = "Inoculate Nestlewood Owlkin";
    break;
  case 29531:
    spellname = "Ribbon Pole Channel";
    break;
  case 29533:
    spellname = "Sillithus Flag Drop (DND)";
    break;
  case 29534:
    spellname = "Traces of Silithyst";
    break;
  case 29535:
    spellname = "Quest - Apprentice Mirveda - Test Soil";
    break;
  case 29537:
    spellname = "Summon Phantom Hound";
    break;
  case 29538:
    spellname = "Cyclone";
    break;
  case 29539:
    spellname = "Curse of Exhaustion";
    break;
  case 29540:
    spellname = "Curse of Past Burdens";
    break;
  case 29541:
    spellname = "Summon Phantom Hound Visual";
    break;
  case 29542:
    spellname = "Fill Azure Phial";
    break;
  case 29543:
    spellname = "Shadow Rejuvenation";
    break;
  case 29544:
    spellname = "Frightening Shout";
    break;
  case 29545:
    spellname = "Fel Iron Plate Gloves";
    break;
  case 29546:
    spellname = "Oath of Fealty";
    break;
  case 29547:
    spellname = "Fel Iron Plate Belt";
    break;
  case 29548:
    spellname = "Fel Iron Plate Boots";
    break;
  case 29549:
    spellname = "Fel Iron Plate Pants";
    break;
  case 29550:
    spellname = "Fel Iron Breastplate";
    break;
  case 29551:
    spellname = "Fel Iron Chain Coif";
    break;
  case 29552:
    spellname = "Fel Iron Chain Gloves";
    break;
  case 29553:
    spellname = "Fel Iron Chain Bracers";
    break;
  case 29555:
    spellname = "Left Hook";
    break;
  case 29556:
    spellname = "Fel Iron Chain Tunic";
    break;
  case 29557:
    spellname = "Fel Iron Hatchet";
    break;
  case 29558:
    spellname = "Fel Iron Hammer";
    break;
  case 29559:
    spellname = "Defensive Tactics";
    break;
  case 29560:
    spellname = "Kick";
    break;
  case 29561:
    spellname = "Cleave";
    break;
  case 29562:
    spellname = "Holy Light";
    break;
  case 29563:
    spellname = "Holy Fire";
    break;
  case 29564:
    spellname = "Greater Heal";
    break;
  case 29565:
    spellname = "Fel Iron Greatsword";
    break;
  case 29566:
    spellname = "Adamantite Maul";
    break;
  case 29567:
    spellname = "Heroic Strike";
    break;
  case 29568:
    spellname = "Adamantite Cleaver";
    break;
  case 29569:
    spellname = "Adamantite Dagger";
    break;
  case 29570:
    spellname = "Mind Flay";
    break;
  case 29571:
    spellname = "Adamantite Rapier";
    break;
  case 29572:
    spellname = "Mortal Strike";
    break;
  case 29573:
    spellname = "Whirlwind";
    break;
  case 29574:
    spellname = "Rend";
    break;
  case 29575:
    spellname = "Shoot";
    break;
  case 29576:
    spellname = "Multi-Shot";
    break;
  case 29577:
    spellname = "Hoof Strike";
    break;
  case 29578:
    spellname = "Rend";
    break;
  case 29579:
    spellname = "Throw Dynamite";
    break;
  case 29580:
    spellname = "Heal";
    break;
  case 29581:
    spellname = "Punch";
    break;
  case 29582:
    spellname = "Throw";
    break;
  case 29583:
    spellname = "Impale";
    break;
  case 29584:
    spellname = "Demoralizing Shout";
    break;
  case 29585:
    spellname = "Uppercut";
    break;
  case 29586:
    spellname = "Kick";
    break;
  case 29587:
    spellname = "Shadow Rejuvenation";
    break;
  case 29588:
    spellname = "Defensive Tactics";
    break;
  case 29589:
    spellname = "Defensive Tactics";
    break;
  case 29590:
    spellname = "Precision";
    break;
  case 29591:
    spellname = "Precision";
    break;
  case 29592:
    spellname = "Precision";
    break;
  case 29593:
    spellname = "Improved Defensive Stance";
    break;
  case 29594:
    spellname = "Improved Defensive Stance";
    break;
  case 29595:
    spellname = "Improved Defensive Stance";
    break;
  case 29598:
    spellname = "Shield Mastery";
    break;
  case 29599:
    spellname = "Shield Mastery";
    break;
  case 29600:
    spellname = "Shield Mastery";
    break;
  case 29601:
    spellname = "Enlightenment";
    break;
  case 29602:
    spellname = "Jom Gabbar";
    break;
  case 29603:
    spellname = "Adamantite Plate Bracers";
    break;
  case 29604:
    spellname = "Jom Gabbar";
    break;
  case 29605:
    spellname = "Adamantite Plate Gloves";
    break;
  case 29606:
    spellname = "Adamantite Breastplate";
    break;
  case 29607:
    spellname = "Debug Frost Spell";
    break;
  case 29608:
    spellname = "Enchanted Adamantite Belt";
    break;
  case 29609:
    spellname = "Ill Gift";
    break;
  case 29610:
    spellname = "Enchanted Adamantite Breastplate";
    break;
  case 29611:
    spellname = "Enchanted Adamantite Boots";
    break;
  case 29612:
    spellname = "Incite Rage";
    break;
  case 29613:
    spellname = "Enchanted Adamantite Leggings";
    break;
  case 29614:
    spellname = "Flamebane Bracers";
    break;
  case 29615:
    spellname = "Flamebane Helm";
    break;
  case 29616:
    spellname = "Flamebane Gloves";
    break;
  case 29617:
    spellname = "Flamebane Breastplate";
    break;
  case 29618:
    spellname = "Burning Brand";
    break;
  case 29619:
    spellname = "Felsteel Gloves";
    break;
  case 29620:
    spellname = "Felsteel Leggings";
    break;
  case 29621:
    spellname = "Felsteel Helm";
    break;
  case 29622:
    spellname = "Gauntlets of the Iron Tower";
    break;
  case 29623:
    spellname = "Endless Rage";
    break;
  case 29624:
    spellname = "Searing Arrow";
    break;
  case 29625:
    spellname = "Flaming Cannonball";
    break;
  case 29626:
    spellname = "Shadow Bolt";
    break;
  case 29627:
    spellname = "Nether Step";
    break;
  case 29628:
    spellname = "Khorium Belt";
    break;
  case 29629:
    spellname = "Khorium Pants";
    break;
  case 29630:
    spellname = "Khorium Boots";
    break;
  case 29632:
    spellname = "Shadow Shot";
    break;
  case 29633:
    spellname = "Fire Blast";
    break;
  case 29634:
    spellname = "Quill Shot";
    break;
  case 29635:
    spellname = "Flaming Shell";
    break;
  case 29636:
    spellname = "Venom Shot";
    break;
  case 29637:
    spellname = "Keeper's Sting";
    break;
  case 29638:
    spellname = "Searing Arrow";
    break;
  case 29639:
    spellname = "Flaming Cannonball";
    break;
  case 29640:
    spellname = "Shadow Bolt";
    break;
  case 29641:
    spellname = "Shadow Shot";
    break;
  case 29642:
    spellname = "Ragesteel Gloves";
    break;
  case 29643:
    spellname = "Ragesteel Helm";
    break;
  case 29644:
    spellname = "Fire Blast";
    break;
  case 29645:
    spellname = "Ragesteel Breastplate";
    break;
  case 29646:
    spellname = "Quill Shot";
    break;
  case 29647:
    spellname = "Flaming Shell";
    break;
  case 29648:
    spellname = "Swiftsteel Gloves";
    break;
  case 29649:
    spellname = "Earthpeace Breastplate";
    break;
  case 29650:
    spellname = "Exhausted";
    break;
  case 29651:
    spellname = "Dual Wield";
    break;
  case 29652:
    spellname = "Fire Heated Hammer";
    break;
  case 29653:
    spellname = "Venom Shot";
    break;
  case 29654:
    spellname = "Fel Sharpening Stone";
    break;
  case 29655:
    spellname = "Keeper's Sting";
    break;
  case 29656:
    spellname = "Adamantite Sharpening Stone";
    break;
  case 29657:
    spellname = "Felsteel Shield Spike";
    break;
  case 29658:
    spellname = "Felfury Gauntlets";
    break;
  case 29659:
    spellname = "Positive Charge";
    break;
  case 29660:
    spellname = "Negative Charge";
    break;
  case 29661:
    spellname = "Magnetic Pull";
    break;
  case 29662:
    spellname = "Steelgrip Gauntlets";
    break;
  case 29663:
    spellname = "Storm Helm";
    break;
  case 29664:
    spellname = "Helm of the Stalwart Defender";
    break;
  case 29665:
    spellname = "Cleave";
    break;
  case 29666:
    spellname = "Frost Shock";
    break;
  case 29667:
    spellname = "Hamstring";
    break;
  case 29668:
    spellname = "Oathkeeper's Helm";
    break;
  case 29669:
    spellname = "Black Felsteel Bracers";
    break;
  case 29670:
    spellname = "Ice Tomb";
    break;
  case 29671:
    spellname = "Bracers of the Green Fortress";
    break;
  case 29672:
    spellname = "Blessed Bracers";
    break;
  case 29673:
    spellname = "Sandbag";
    break;
  case 29674:
    spellname = "Lesser Shielding";
    break;
  case 29675:
    spellname = "Roast";
    break;
  case 29676:
    spellname = "Rolling Pin";
    break;
  case 29677:
    spellname = "Mallet Toss";
    break;
  case 29679:
    spellname = "Bad Poetry";
    break;
  case 29680:
    spellname = "Curtain Call";
    break;
  case 29683:
    spellname = "Spotlight";
    break;
  case 29684:
    spellname = "Shield Slam";
    break;
  case 29685:
    spellname = "Terrifying Roar";
    break;
  case 29686:
    spellname = "Smelt Hardened Adamantite";
    break;
  case 29688:
    spellname = "Transmute: Primal Might";
    break;
  case 29690:
    spellname = "Drunken Skull Crack";
    break;
  case 29691:
    spellname = "Enrage";
    break;
  case 29692:
    spellname = "Felsteel Longblade";
    break;
  case 29693:
    spellname = "Khorium Champion";
    break;
  case 29694:
    spellname = "Fel Edged Battleaxe";
    break;
  case 29695:
    spellname = "Felsteel Reaper";
    break;
  case 29696:
    spellname = "Runic Hammer";
    break;
  case 29697:
    spellname = "Fel Hardened Maul";
    break;
  case 29698:
    spellname = "Eternium Runed Blade";
    break;
  case 29699:
    spellname = "Dirge";
    break;
  case 29700:
    spellname = "Hand of Eternity";
    break;
  case 29701:
    spellname = "Greater Shielding";
    break;
  case 29702:
    spellname = "Greater Ward of Shielding";
    break;
  case 29703:
    spellname = "Dazed";
    break;
  case 29704:
    spellname = "Shield Bash";
    break;
  case 29705:
    spellname = "Test Ribbon Pole Channel";
    break;
  case 29707:
    spellname = "Heroic Strike";
    break;
  case 29708:
    spellname = "Summon Ribbon Pole Critter";
    break;
  case 29711:
    spellname = "Knockdown";
    break;
  case 29712:
    spellname = "Shadow Shock";
    break;
  case 29714:
    spellname = "Summon Attumen";
    break;
  case 29715:
    spellname = "Test RPole Periodic";
    break;
  case 29716:
    spellname = "Ethereal Curse";
    break;
  case 29717:
    spellname = "Cone of Cold";
    break;
  case 29718:
    spellname = "Elemental Armor";
    break;
  case 29719:
    spellname = "Greater Shielding";
    break;
  case 29720:
    spellname = "Greater Ward of Shielding";
    break;
  case 29721:
    spellname = "Improved Whirlwind";
    break;
  case 29722:
    spellname = "Incinerate";
    break;
  case 29723:
    spellname = "Improved Disciplines";
    break;
  case 29724:
    spellname = "Improved Disciplines";
    break;
  case 29725:
    spellname = "Improved Disciplines";
    break;
  case 29726:
    spellname = "Test Ribbon Pole Channel";
    break;
  case 29727:
    spellname = "Test Ribbon Pole Channel";
    break;
  case 29728:
    spellname = "Lesser Ward of Shielding";
    break;
  case 29729:
    spellname = "Greater Ward of Shielding";
    break;
  case 29731:
    spellname = "Call Ancestral Spirit Wolf";
    break;
  case 29759:
    spellname = "Improved Berserker Stance";
    break;
  case 29760:
    spellname = "Improved Berserker Stance";
    break;
  case 29761:
    spellname = "Improved Berserker Stance";
    break;
  case 29762:
    spellname = "Improved Berserker Stance";
    break;
  case 29763:
    spellname = "Improved Berserker Stance";
    break;
  case 29764:
    spellname = "Avruu's Orb";
    break;
  case 29765:
    spellname = "Crystal Strike";
    break;
  case 29766:
    spellname = "Overload";
    break;
  case 29768:
    spellname = "Overload";
    break;
  case 29769:
    spellname = "Mount";
    break;
  case 29770:
    spellname = "Mount";
    break;
  case 29773:
    spellname = "Plant Tree Seedling";
    break;
  case 29776:
    spellname = "Improved Whirlwind";
    break;
  case 29787:
    spellname = "Focused Rage";
    break;
  case 29788:
    spellname = "Return Fire";
    break;
  case 29790:
    spellname = "Focused Rage";
    break;
  case 29792:
    spellname = "Focused Rage";
    break;
  case 29793:
    spellname = "Return Fire";
    break;
  case 29794:
    spellname = "Return Fire";
    break;
  case 29799:
    spellname = "Summon Attumen (Mounted)";
    break;
  case 29801:
    spellname = "Rampage";
    break;
  case 29802:
    spellname = "Spawn Smoke";
    break;
  case 29815:
    spellname = "Return Fire";
    break;
  case 29820:
    spellname = "wr";
    break;
  case 29830:
    spellname = "Use Mirren's Drinking Hat";
    break;
  case 29831:
    spellname = "Light Bonfire (DND)";
    break;
  case 29832:
    spellname = "Shadow Cleave";
    break;
  case 29833:
    spellname = "Intangible Presence";
    break;
  case 29834:
    spellname = "Second Wind";
    break;
  case 29836:
    spellname = "Blood Frenzy";
    break;
  case 29837:
    spellname = "Fist of Stone";
    break;
  case 29838:
    spellname = "Second Wind";
    break;
  case 29840:
    spellname = "Fist of Stone";
    break;
  case 29841:
    spellname = "Second Wind";
    break;
  case 29842:
    spellname = "Second Wind";
    break;
  case 29844:
    spellname = "Blacksmithing";
    break;
  case 29845:
    spellname = "Master Blacksmith";
    break;
  case 29846:
    spellname = "Fire Festival Fury";
    break;
  case 29847:
    spellname = "Charge";
    break;
  case 29848:
    spellname = "Polymorph";
    break;
  case 29849:
    spellname = "Frost Nova";
    break;
  case 29850:
    spellname = "Uppercut";
    break;
  case 29851:
    spellname = "Whirlwind";
    break;
  case 29852:
    spellname = "Whirlwind";
    break;
  case 29858:
    spellname = "Soulshatter";
    break;
  case 29859:
    spellname = "Blood Frenzy";
    break;
  case 29864:
    spellname = "Sear";
    break;
  case 29865:
    spellname = "Poison Aura";
    break;
  case 29866:
    spellname = "Cast Fishing Net";
    break;
  case 29870:
    spellname = "Detonate";
    break;
  case 29872:
    spellname = "Disarming Fury";
    break;
  case 29876:
    spellname = "Detonate";
    break;
  case 29879:
    spellname = "Frost Blast";
    break;
  case 29880:
    spellname = "Mana Shield";
    break;
  case 29881:
    spellname = "Drain Mana";
    break;
  case 29882:
    spellname = "Loose Mana";
    break;
  case 29883:
    spellname = "Blink";
    break;
  case 29884:
    spellname = "Blink";
    break;
  case 29885:
    spellname = "Arcane Volley";
    break;
  case 29886:
    spellname = "Create Soulwell";
    break;
  case 29888:
    spellname = "Improved Intercept";
    break;
  case 29889:
    spellname = "Improved Intercept";
    break;
  case 29893:
    spellname = "Ritual of Souls";
    break;
  case 29896:
    spellname = "Hyakiss' Web";
    break;
  case 29897:
    spellname = "Guardian of Icecrown Passive";
    break;
  case 29900:
    spellname = "Unstable Magic";
    break;
  case 29901:
    spellname = "Acidic Fang";
    break;
  case 29903:
    spellname = "Dive";
    break;
  case 29904:
    spellname = "Sonic Burst";
    break;
  case 29905:
    spellname = "Wing Buffet";
    break;
  case 29906:
    spellname = "Ravage";
    break;
  case 29907:
    spellname = "Astral Bite";
    break;
  case 29908:
    spellname = "Astral Bite";
    break;
  case 29909:
    spellname = "Elven Manacles";
    break;
  case 29910:
    spellname = "Clear All Shackles";
    break;
  case 29911:
    spellname = "Power Distortion";
    break;
  case 29915:
    spellname = "Flesh Rot";
    break;
  case 29916:
    spellname = "Feed Captured Animal";
    break;
  case 29917:
    spellname = "Feed Captured Animal";
    break;
  case 29918:
    spellname = "Captured Animal Feeding Visual";
    break;
  case 29919:
    spellname = "Warp Breach";
    break;
  case 29920:
    spellname = "Phasing Invisibility";
    break;
  case 29921:
    spellname = "Phasing Invisibility";
    break;
  case 29922:
    spellname = "Fireball Volley";
    break;
  case 29923:
    spellname = "Frostbolt Volley";
    break;
  case 29924:
    spellname = "Shadow Bolt Volley";
    break;
  case 29925:
    spellname = "Fireball";
    break;
  case 29926:
    spellname = "Frostbolt";
    break;
  case 29927:
    spellname = "Shadow Bolt";
    break;
  case 29928:
    spellname = "Immolate";
    break;
  case 29930:
    spellname = "Curse of Agony";
    break;
  case 29932:
    spellname = "Language Draenei";
    break;
  case 29933:
    spellname = "Blood Curse";
    break;
  case 29935:
    spellname = "Gaping Maw";
    break;
  case 29936:
    spellname = "Elemental Focus";
    break;
  case 29937:
    spellname = "Summon Worm Target";
    break;
  case 29938:
    spellname = "Guided by the Spirits";
    break;
  case 29939:
    spellname = "Infectious Poison";
    break;
  case 29940:
    spellname = "Wolfshead Helm Energy";
    break;
  case 29941:
    spellname = "Wolfshead Helm Rage";
    break;
  case 29942:
    spellname = "Infected Blood";
    break;
  case 29943:
    spellname = "Silence";
    break;
  case 29945:
    spellname = "Bleed Spice";
    break;
  case 29946:
    spellname = "Flame Wreath";
    break;
  case 29947:
    spellname = "Flame Wreath";
    break;
  case 29948:
    spellname = "Immolation";
    break;
  case 29949:
    spellname = "Explosion";
    break;
  case 29951:
    spellname = "Blizzard";
    break;
  case 29952:
    spellname = "Circular Blizzard";
    break;
  case 29953:
    spellname = "Fireball";
    break;
  case 29954:
    spellname = "Frostbolt";
    break;
  case 29955:
    spellname = "Arcane Missiles";
    break;
  case 29956:
    spellname = "Arcane Missiles";
    break;
  case 29957:
    spellname = "Frostbolt Volley";
    break;
  case 29958:
    spellname = "Fireball Volley";
    break;
  case 29959:
    spellname = "Arcane Missile Volley";
    break;
  case 29960:
    spellname = "Arcane Missile Volley";
    break;
  case 29961:
    spellname = "Counterspell";
    break;
  case 29962:
    spellname = "Summon Water Elementals";
    break;
  case 29963:
    spellname = "Mass Polymorph";
    break;
  case 29964:
    spellname = "Dragon's Breath";
    break;
  case 29965:
    spellname = "Dragon's Breath";
    break;
  case 29966:
    spellname = "Blink";
    break;
  case 29967:
    spellname = "Blink";
    break;
  case 29968:
    spellname = "Blink";
    break;
  case 29969:
    spellname = "Summon Blizzard";
    break;
  case 29970:
    spellname = "Dispel Blizzard";
    break;
  case 29973:
    spellname = "Arcane Explosion";
    break;
  case 29975:
    spellname = "Conjure Water";
    break;
  case 29976:
    spellname = "Presence of Mind";
    break;
  case 29977:
    spellname = "Combustion";
    break;
  case 29978:
    spellname = "Pyroblast";
    break;
  case 29979:
    spellname = "Massive Magnetic Pull";
    break;
  case 29981:
    spellname = "Ancestral Spirit Wolf Buff Timer";
    break;
  case 29982:
    spellname = "Spatial Distortion";
    break;
  case 29983:
    spellname = "Spatial Distortion";
    break;
  case 29989:
    spellname = "Control Robot";
    break;
  case 29990:
    spellname = "Slow";
    break;
  case 29991:
    spellname = "Chains of Ice";
    break;
  case 29992:
    spellname = "Gather Water";
    break;
  case 29998:
    spellname = "Decrepit Fever";
    break;
  case 30000:
    spellname = "Alexander's Test Spell";
    break;
  case 30002:
    spellname = "Fear";
    break;
  case 30003:
    spellname = "Sheen of Zanza";
    break;
  case 30004:
    spellname = "Flame Wreath";
    break;
  case 30006:
    spellname = "Robotron Console Key";
    break;
  case 30007:
    spellname = "Spatial Distortion";
    break;
  case 30008:
    spellname = "Spatial Distortion";
    break;
  case 30009:
    spellname = "Summon Robot";
    break;
  case 30010:
    spellname = "Magnetic Pull";
    break;
  case 30012:
    spellname = "Move";
    break;
  case 30013:
    spellname = "Disarm";
    break;
  case 30014:
    spellname = "Cleave";
    break;
  case 30015:
    spellname = "Summon Naias";
    break;
  case 30016:
    spellname = "Devastate";
    break;
  case 30017:
    spellname = "Devastate";
    break;
  case 30019:
    spellname = "Control Piece";
    break;
  case 30020:
    spellname = "First Aid";
    break;
  case 30021:
    spellname = "Crystal Infused Bandage";
    break;
  case 30022:
    spellname = "Devastate";
    break;
  case 30024:
    spellname = "Drink";
    break;
  case 30025:
    spellname = "Mind Exhaustion Passive";
    break;
  case 30029:
    spellname = "Rampage";
    break;
  case 30030:
    spellname = "Rampage";
    break;
  case 30031:
    spellname = "Rampage";
    break;
  case 30032:
    spellname = "Rampage";
    break;
  case 30033:
    spellname = "Rampage";
    break;
  case 30035:
    spellname = "Mass Slow";
    break;
  case 30036:
    spellname = "Steal Magic";
    break;
  case 30037:
    spellname = "Steal Magic";
    break;
  case 30039:
    spellname = "Transference";
    break;
  case 30043:
    spellname = "Poison Spray";
    break;
  case 30049:
    spellname = "Improved Death Coil";
    break;
  case 30050:
    spellname = "Firebolt";
    break;
  case 30051:
    spellname = "Improved Death Coil";
    break;
  case 30052:
    spellname = "Improved Death Coil";
    break;
  case 30053:
    spellname = "Amplify Flames";
    break;
  case 30054:
    spellname = "Improved Howl of Terror";
    break;
  case 30055:
    spellname = "Shadow Bolt";
    break;
  case 30056:
    spellname = "Knockback";
    break;
  case 30057:
    spellname = "Improved Howl of Terror";
    break;
  case 30060:
    spellname = "Contagion";
    break;
  case 30061:
    spellname = "Contagion";
    break;
  case 30062:
    spellname = "Contagion";
    break;
  case 30063:
    spellname = "Contagion";
    break;
  case 30064:
    spellname = "Contagion";
    break;
  case 30065:
    spellname = "Broken Pact";
    break;
  case 30066:
    spellname = "Summon Imp";
    break;
  case 30069:
    spellname = "Blood Frenzy";
    break;
  case 30070:
    spellname = "Blood Frenzy";
    break;
  case 30074:
    spellname = "Toxic Gas";
    break;
  case 30075:
    spellname = "Gas";
    break;
  case 30077:
    spellname = "Carinda's Retribution";
    break;
  case 30079:
    spellname = "Retching Plague";
    break;
  case 30080:
    spellname = "Retching Plague";
    break;
  case 30081:
    spellname = "Retching Plague";
    break;
  case 30085:
    spellname = "Lasting Afflictions";
    break;
  case 30086:
    spellname = "Lasting Afflictions";
    break;
  case 30087:
    spellname = "Incurable Afflictions";
    break;
  case 30088:
    spellname = "Lesser Mark of the Dawn";
    break;
  case 30089:
    spellname = "Mark of the Dawn";
    break;
  case 30090:
    spellname = "Greater Mark of the Dawn";
    break;
  case 30091:
    spellname = "Flamestrike";
    break;
  case 30092:
    spellname = "Blast Wave";
    break;
  case 30093:
    spellname = "Blizzard";
    break;
  case 30094:
    spellname = "Frost Nova";
    break;
  case 30095:
    spellname = "Cone of Cold";
    break;
  case 30096:
    spellname = "Arcane Explosion";
    break;
  case 30098:
    spellname = "Defile Uther's Tomb";
    break;
  case 30099:
    spellname = "Tame Crazed Dragonhawk";
    break;
  case 30100:
    spellname = "Tame Crazed Dragonhawk";
    break;
  case 30101:
    spellname = "Frost Breath";
    break;
  case 30102:
    spellname = "Tame Elder Springpaw";
    break;
  case 30103:
    spellname = "Tame Elder Springpaw";
    break;
  case 30104:
    spellname = "Tame Mistbat";
    break;
  case 30105:
    spellname = "Tame Mistbat";
    break;
  case 30107:
    spellname = "Transference";
    break;
  case 30108:
    spellname = "Unstable Affliction";
    break;
  case 30109:
    spellname = "Slime Burst";
    break;
  case 30110:
    spellname = "Mutated Spores";
    break;
  case 30111:
    spellname = "Mutated Spores";
    break;
  case 30112:
    spellname = "Frenzied Dive";
    break;
  case 30113:
    spellname = "Putrid Bite";
    break;
  case 30115:
    spellname = "Sacrifice";
    break;
  case 30120:
    spellname = "Summon Demon Chains";
    break;
  case 30121:
    spellname = "Forceful Howl";
    break;
  case 30122:
    spellname = "Plague Cloud";
    break;
  case 30127:
    spellname = "Searing Cinders";
    break;
  case 30128:
    spellname = "Smoking Blast";
    break;
  case 30129:
    spellname = "Charred Earth";
    break;
  case 30130:
    spellname = "Distracting Ash";
    break;
  case 30131:
    spellname = "Cleave";
    break;
  case 30138:
    spellname = "Shadow Shock";
    break;
  case 30140:
    spellname = "Translocation";
    break;
  case 30141:
    spellname = "Translocate";
    break;
  case 30143:
    spellname = "Demonic Aegis";
    break;
  case 30144:
    spellname = "Demonic Aegis";
    break;
  case 30145:
    spellname = "Demonic Aegis";
    break;
  case 30146:
    spellname = "Summon Felguard";
    break;
  case 30147:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 30148:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 30149:
    spellname = "Tamed Pet Passive (DND)";
    break;
  case 30151:
    spellname = "Intercept";
    break;
  case 30152:
    spellname = "Summon White Tiger Cub";
    break;
  case 30153:
    spellname = "Intercept Stun";
    break;
  case 30154:
    spellname = "Intercept";
    break;
  case 30155:
    spellname = "Heal";
    break;
  case 30156:
    spellname = "Summon Hippogryph Hatchling";
    break;
  case 30160:
    spellname = "Elemental Devastation";
    break;
  case 30161:
    spellname = "Purple Firework";
    break;
  case 30164:
    spellname = "Permanent Lung Juice Cocktail";
    break;
  case 30165:
    spellname = "Elemental Devastation";
    break;
  case 30166:
    spellname = "Shadow Grasp";
    break;
  case 30167:
    spellname = "Red Ogre Costume";
    break;
  case 30168:
    spellname = "Shadow Cage";
    break;
  case 30170:
    spellname = "Summon Bone Skeletons";
    break;
  case 30171:
    spellname = "Fiendish Portal";
    break;
  case 30173:
    spellname = "Permanent Ground Scorpok Assay";
    break;
  case 30174:
    spellname = "Riding Turtle";
    break;
  case 30175:
    spellname = "Permanent Cerebral Cortex Compound";
    break;
  case 30177:
    spellname = "Permanent Gizzard Gum";
    break;
  case 30178:
    spellname = "Permanent R.O.I.D.S.";
    break;
  case 30179:
    spellname = "Fiendish Portal";
    break;
  case 30180:
    spellname = "Firebolt";
    break;
  case 30183:
    spellname = "QAEnchant Weapon - Fiery Weapon";
    break;
  case 30184:
    spellname = "Summon Fiendish Imp";
    break;
  case 30187:
    spellname = "QAEnchant Gloves +5 Fishing";
    break;
  case 30190:
    spellname = "QAEnchant Gloves - Riding Skill";
    break;
  case 30194:
    spellname = "Intercept";
    break;
  case 30195:
    spellname = "Intercept Stun";
    break;
  case 30197:
    spellname = "Intercept Stun";
    break;
  case 30198:
    spellname = "Intercept";
    break;
  case 30199:
    spellname = "Intercept";
    break;
  case 30200:
    spellname = "Intercept";
    break;
  case 30201:
    spellname = "Logic Timer";
    break;
  case 30202:
    spellname = "Land";
    break;
  case 30205:
    spellname = "Shadow Cage";
    break;
  case 30206:
    spellname = "Demon Chains Passive";
    break;
  case 30207:
    spellname = "Shadow Grasp";
    break;
  case 30208:
    spellname = "Summon Voidwalker";
    break;
  case 30209:
    spellname = "Target Charred Earth";
    break;
  case 30210:
    spellname = "Smoldering Breath";
    break;
  case 30211:
    spellname = "Teleport Self";
    break;
  case 30212:
    spellname = "Burn Wickerman Effigy";
    break;
  case 30213:
    spellname = "Cleave";
    break;
  case 30214:
    spellname = "Cleave";
    break;
  case 30216:
    spellname = "Fel Iron Bomb";
    break;
  case 30217:
    spellname = "Adamantite Grenade";
    break;
  case 30218:
    spellname = "Fireball";
    break;
  case 30219:
    spellname = "Cleave";
    break;
  case 30220:
    spellname = "Reset Nightbane";
    break;
  case 30221:
    spellname = "Shoot";
    break;
  case 30222:
    spellname = "Cleave";
    break;
  case 30223:
    spellname = "Cleave";
    break;
  case 30224:
    spellname = "Cleave";
    break;
  case 30225:
    spellname = "Silence";
    break;
  case 30226:
    spellname = "Pure Water Sample";
    break;
  case 30227:
    spellname = "Bleed Spice";
    break;
  case 30229:
    spellname = "QAEnchant 2H Weapon +25 Agility";
    break;
  case 30230:
    spellname = "Retrieve Fel Ember";
    break;
  case 30231:
    spellname = "Banish";
    break;
  case 30232:
    spellname = "Energy Return";
    break;
  case 30234:
    spellname = "Astral Flare Passive";
    break;
  case 30235:
    spellname = "Arcing Sear";
    break;
  case 30237:
    spellname = "Astral Flare Visual";
    break;
  case 30238:
    spellname = "Lordaeron's Blessing";
    break;
  case 30242:
    spellname = "Demonic Tactics";
    break;
  case 30244:
    spellname = "Eruption";
    break;
  case 30245:
    spellname = "Demonic Tactics";
    break;
  case 30246:
    spellname = "Demonic Tactics";
    break;
  case 30247:
    spellname = "Demonic Tactics";
    break;
  case 30248:
    spellname = "Demonic Tactics";
    break;
  case 30249:
    spellname = "Hyper Vision";
    break;
  case 30250:
    spellname = "Adamantite Scope";
    break;
  case 30251:
    spellname = "Destructive Soul";
    break;
  case 30252:
    spellname = "Khorium Scope";
    break;
  case 30253:
    spellname = "Chess: Move to Square";
    break;
  case 30254:
    spellname = "Evocation";
    break;
  case 30255:
    spellname = "Stabilized Eternium Scope";
    break;
  case 30256:
    spellname = "Destructive Soul";
    break;
  case 30257:
    spellname = "Ranged Crit Bonus +28";
    break;
  case 30258:
    spellname = "Stabilized Eternium Scope";
    break;
  case 30260:
    spellname = "Stabilitzed Eternium Scope";
    break;
  case 30261:
    spellname = "Summon Fighting Robot";
    break;
  case 30262:
    spellname = "White Smoke Flare";
    break;
  case 30263:
    spellname = "Red Smoke Flare";
    break;
  case 30264:
    spellname = "Green Smoke Flare";
    break;
  case 30265:
    spellname = "Blue Smoke Flare";
    break;
  case 30266:
    spellname = "Arcane Explosion";
    break;
  case 30267:
    spellname = "Shadow Bolt Volley";
    break;
  case 30269:
    spellname = "Force Nightbane Flight";
    break;
  case 30270:
    spellname = "Chess: Face Square";
    break;
  case 30271:
    spellname = "Disable Square";
    break;
  case 30273:
    spellname = "Execute Prisoner";
    break;
  case 30280:
    spellname = "Distracting Ash";
    break;
  case 30281:
    spellname = "Remove Curse";
    break;
  case 30282:
    spellname = "Fireball Barrage";
    break;
  case 30283:
    spellname = "Shadowfury";
    break;
  case 30284:
    spellname = "Change Facing";
    break;
  case 30285:
    spellname = "Eagle Claw";
    break;
  case 30286:
    spellname = "Raise Bunnies";
    break;
  case 30288:
    spellname = "Shadow and Flame";
    break;
  case 30289:
    spellname = "Shadow and Flame";
    break;
  case 30290:
    spellname = "Shadow and Flame";
    break;
  case 30291:
    spellname = "Shadow and Flame";
    break;
  case 30292:
    spellname = "Shadow and Flame";
    break;
  case 30293:
    spellname = "Soul Leech";
    break;
  case 30294:
    spellname = "Soul Leech";
    break;
  case 30295:
    spellname = "Soul Leech";
    break;
  case 30296:
    spellname = "Soul Leech";
    break;
  case 30297:
    spellname = "Heightened Senses";
    break;
  case 30298:
    spellname = "Tree Disguise";
    break;
  case 30299:
    spellname = "Nether Protection";
    break;
  case 30300:
    spellname = "Nether Protection";
    break;
  case 30301:
    spellname = "Nether Protection";
    break;
  case 30302:
    spellname = "Nether Protection";
    break;
  case 30303:
    spellname = "Elemental Blasting Powder";
    break;
  case 30304:
    spellname = "Fel Iron Casing";
    break;
  case 30305:
    spellname = "Handful of Fel Iron Bolts";
    break;
  case 30306:
    spellname = "Adamantite Frame";
    break;
  case 30307:
    spellname = "Hardened Adamantite Tube";
    break;
  case 30308:
    spellname = "Khorium Power Core";
    break;
  case 30309:
    spellname = "Felsteel Stabilizer";
    break;
  case 30310:
    spellname = "Fel Iron Bomb";
    break;
  case 30311:
    spellname = "Adamantite Grenade";
    break;
  case 30312:
    spellname = "Fel Iron Musket";
    break;
  case 30313:
    spellname = "Adamantite Rifle";
    break;
  case 30314:
    spellname = "Felsteel Boomstick";
    break;
  case 30315:
    spellname = "Ornate Khorium Rifle";
    break;
  case 30316:
    spellname = "Cogspinner Goggles";
    break;
  case 30317:
    spellname = "Power Amplification Goggles";
    break;
  case 30318:
    spellname = "Ultra-Spectropic Detection Goggles";
    break;
  case 30319:
    spellname = "Demonic Resilience";
    break;
  case 30320:
    spellname = "Demonic Resilience";
    break;
  case 30321:
    spellname = "Demonic Resilience";
    break;
  case 30324:
    spellname = "Heroic Strike";
    break;
  case 30325:
    spellname = "Hyper-Vision Goggles";
    break;
  case 30326:
    spellname = "Mana Feed";
    break;
  case 30327:
    spellname = "Mana Feed";
    break;
  case 30328:
    spellname = "Mana Feed";
    break;
  case 30329:
    spellname = "Adamantite Scope";
    break;
  case 30330:
    spellname = "Mortal Strike";
    break;
  case 30331:
    spellname = "Permanent Sheen of Zanza";
    break;
  case 30332:
    spellname = "Khorium Scope";
    break;
  case 30334:
    spellname = "Stabilized Eternium Scope";
    break;
  case 30335:
    spellname = "Bloodthirst";
    break;
  case 30336:
    spellname = "Permanent Spirit of Zanza";
    break;
  case 30337:
    spellname = "Crashin' Thrashin' Robot";
    break;
  case 30338:
    spellname = "Permanent Swiftness of Zanza";
    break;
  case 30339:
    spellname = "Bloodthirst";
    break;
  case 30340:
    spellname = "Bloodthirst";
    break;
  case 30341:
    spellname = "White Smoke Flare";
    break;
  case 30342:
    spellname = "Red Smoke Flare";
    break;
  case 30343:
    spellname = "Blue Smoke Flare";
    break;
  case 30344:
    spellname = "Green Smoke Flare";
    break;
  case 30346:
    spellname = "Fel Iron Shells";
    break;
  case 30347:
    spellname = "Adamantite Shell Machine";
    break;
  case 30348:
    spellname = "Fel Iron Toolbox";
    break;
  case 30349:
    spellname = "Khorium Toolbox";
    break;
  case 30350:
    spellname = "Engineering";
    break;
  case 30351:
    spellname = "Master Engineer";
    break;
  case 30353:
    spellname = "Summon Tree Disguise Kit";
    break;
  case 30354:
    spellname = "Shadow Bolt Volley";
    break;
  case 30356:
    spellname = "Shield Slam";
    break;
  case 30357:
    spellname = "Revenge";
    break;
  case 30358:
    spellname = "Searing Pain";
    break;
  case 30383:
    spellname = "Hateful Bolt";
    break;
  case 30395:
    spellname = "Arcane Wrath";
    break;
  case 30397:
    spellname = "Nether Portal - Serenity Passive";
    break;
  case 30398:
    spellname = "Nether Portal - Dominance Passive";
    break;
  case 30400:
    spellname = "Nether Beam - Perseverence";
    break;
  case 30401:
    spellname = "Nether Beam - Serenity";
    break;
  case 30402:
    spellname = "Nether Beam - Dominance";
    break;
  case 30403:
    spellname = "Arcane Infusion";
    break;
  case 30404:
    spellname = "Unstable Affliction";
    break;
  case 30405:
    spellname = "Unstable Affliction";
    break;
  case 30406:
    spellname = "Opening Bristlelimb Cage";
    break;
  case 30407:
    spellname = "Astral Deconstruction";
    break;
  case 30408:
    spellname = "Pouring Purest Water";
    break;
  case 30410:
    spellname = "Shadow Grasp";
    break;
  case 30412:
    spellname = "Drain Life";
    break;
  case 30413:
    spellname = "Shadowfury";
    break;
  case 30414:
    spellname = "Shadowfury";
    break;
  case 30416:
    spellname = "Quest - Wood Cleanse Effect";
    break;
  case 30417:
    spellname = "Chess NPC Action: Move Near Unit (DND)";
    break;
  case 30418:
    spellname = "Chess NPC: Get Adjacent Empty Square (DND)";
    break;
  case 30419:
    spellname = "Reading Furbolg Language Primer";
    break;
  case 30421:
    spellname = "Nether Portal - Perseverence";
    break;
  case 30422:
    spellname = "Nether Portal - Serenity";
    break;
  case 30423:
    spellname = "Nether Portal - Dominance";
    break;
  case 30424:
    spellname = "Ghost Walk";
    break;
  case 30425:
    spellname = "Portal Attunement";
    break;
  case 30427:
    spellname = "Extract Gas";
    break;
  case 30428:
    spellname = "Stillpine Ancestor Despawn DND";
    break;
  case 30430:
    spellname = "Embrace of the Serpent";
    break;
  case 30431:
    spellname = "Tikti Transform DND";
    break;
  case 30433:
    spellname = "Chess: Test Face";
    break;
  case 30434:
    spellname = "Elemental Seaforium Charge";
    break;
  case 30435:
    spellname = "Enlarge Critter";
    break;
  case 30446:
    spellname = "Yor Transform Furbolg DND";
    break;
  case 30447:
    spellname = "Shadow of the Forest";
    break;
  case 30448:
    spellname = "Shadow of the Forest";
    break;
  case 30449:
    spellname = "Spellsteal";
    break;
  case 30451:
    spellname = "Arcane Blast";
    break;
  case 30452:
    spellname = "Rocket Boots Engaged";
    break;
  case 30455:
    spellname = "Ice Lance";
    break;
  case 30456:
    spellname = "Nigh-Invulnerability";
    break;
  case 30457:
    spellname = "Complete Vulnerability";
    break;
  case 30458:
    spellname = "Nigh Invulnerability";
    break;
  case 30459:
    spellname = "Searing Pain";
    break;
  case 30460:
    spellname = "Kick";
    break;
  case 30461:
    spellname = "The Bigger One";
    break;
  case 30462:
    spellname = "Execute Sedai";
    break;
  case 30463:
    spellname = "Nether Beam - Dominance";
    break;
  case 30464:
    spellname = "Nether Beam - Serenity";
    break;
  case 30465:
    spellname = "Nether Beam - Perseverence";
    break;
  case 30466:
    spellname = "Nether Portal - Perseverence";
    break;
  case 30467:
    spellname = "Nether Portal - Serenity";
    break;
  case 30468:
    spellname = "Nether Portal - Dominance";
    break;
  case 30469:
    spellname = "Nether Beam";
    break;
  case 30470:
    spellname = "Slice and Dice";
    break;
  case 30471:
    spellname = "Uppercut";
    break;
  case 30472:
    spellname = "Aura of Discipline";
    break;
  case 30473:
    spellname = "Coo Transform Furbolg DND";
    break;
  case 30474:
    spellname = "Bloodthirst";
    break;
  case 30475:
    spellname = "Bloodthirst";
    break;
  case 30476:
    spellname = "Bloodthirst";
    break;
  case 30477:
    spellname = "Shoot Bow";
    break;
  case 30478:
    spellname = "Hemorrhage";
    break;
  case 30479:
    spellname = "Resist Shadow";
    break;
  case 30481:
    spellname = "Incendiary Shot";
    break;
  case 30482:
    spellname = "Molten Armor";
    break;
  case 30485:
    spellname = "Enrage";
    break;
  case 30486:
    spellname = "Super Sapper Charge";
    break;
  case 30487:
    spellname = "Nether Portal - Perseverence";
    break;
  case 30489:
    spellname = "Seer's Vision";
    break;
  case 30490:
    spellname = "Nether Portal - Serenity";
    break;
  case 30491:
    spellname = "Nether Portal - Domination";
    break;
  case 30493:
    spellname = "Shoot Bow";
    break;
  case 30494:
    spellname = "Sticky Ooze";
    break;
  case 30495:
    spellname = "Shadow Cleave";
    break;
  case 30496:
    spellname = "Lesser Shadow Fissure";
    break;
  case 30497:
    spellname = "Consumption";
    break;
  case 30498:
    spellname = "Consumption";
    break;
  case 30499:
    spellname = "Revelations";
    break;
  case 30500:
    spellname = "Death Coil";
    break;
  case 30501:
    spellname = "Poultryized!";
    break;
  case 30502:
    spellname = "Dark Spin";
    break;
  case 30503:
    spellname = "Increased Defense";
    break;
  case 30504:
    spellname = "Poultryized!";
    break;
  case 30505:
    spellname = "Shadow Bolt";
    break;
  case 30506:
    spellname = "Poultryized!";
    break;
  case 30507:
    spellname = "Poultryizer";
    break;
  case 30508:
    spellname = "Dark Spin";
    break;
  case 30510:
    spellname = "Shadow Bolt Volley";
    break;
  case 30511:
    spellname = "Burning Abyssal";
    break;
  case 30512:
    spellname = "Fire Blast";
    break;
  case 30513:
    spellname = "Fire Shield";
    break;
  case 30514:
    spellname = "Fire Shield";
    break;
  case 30515:
    spellname = "Foreman's Enchanted Helmet";
    break;
  case 30516:
    spellname = "Fire Blast";
    break;
  case 30519:
    spellname = "Foreman's Reinforced Helmet";
    break;
  case 30520:
    spellname = "Chess";
    break;
  case 30522:
    spellname = "Nether Burn";
    break;
  case 30523:
    spellname = "Nether Burn";
    break;
  case 30524:
    spellname = "Remote Mail Terminal";
    break;
  case 30526:
    spellname = "Flame Turret";
    break;
  case 30527:
    spellname = "Flame Cannon";
    break;
  case 30528:
    spellname = "Dark Mending";
    break;
  case 30529:
    spellname = "Recently In Game";
    break;
  case 30530:
    spellname = "Fear";
    break;
  case 30531:
    spellname = "Soul Transfer";
    break;
  case 30532:
    spellname = "In Game";
    break;
  case 30533:
    spellname = "Void Zone";
    break;
  case 30534:
    spellname = "Fireball";
    break;
  case 30536:
    spellname = "Revelations";
    break;
  case 30537:
    spellname = "Consumption";
    break;
  case 30538:
    spellname = "Consumption";
    break;
  case 30539:
    spellname = "Void Zone";
    break;
  case 30540:
    spellname = "Summon Visual";
    break;
  case 30541:
    spellname = "Blaze";
    break;
  case 30542:
    spellname = "Blaze";
    break;
  case 30543:
    spellname = "Chess Cooldown: Move";
    break;
  case 30544:
    spellname = "Request Netherspite Attunement";
    break;
  case 30545:
    spellname = "Soul Fire";
    break;
  case 30546:
    spellname = "Shadowburn";
    break;
  case 30547:
    spellname = "Elemental Seaforium Charge";
    break;
  case 30548:
    spellname = "Zapthrottle Mote Extractor";
    break;
  case 30549:
    spellname = "Critter Enlarger";
    break;
  case 30550:
    spellname = "Redemption of the Fallen";
    break;
  case 30551:
    spellname = "Healing Potion Injector";
    break;
  case 30552:
    spellname = "Mana Potion Injector";
    break;
  case 30553:
    spellname = "Redemption of the Fallen";
    break;
  case 30554:
    spellname = "Wrath of the Titans";
    break;
  case 30555:
    spellname = "Remote Mail Terminal";
    break;
  case 30556:
    spellname = "Rocket Boots Xtreme";
    break;
  case 30557:
    spellname = "Wrath of the Titans";
    break;
  case 30558:
    spellname = "The Bigger One";
    break;
  case 30559:
    spellname = "Legacy of the Mountain King";
    break;
  case 30560:
    spellname = "Super Sapper Charge";
    break;
  case 30561:
    spellname = "Goblin Tonk Controller";
    break;
  case 30562:
    spellname = "Legacy of the Mountain King";
    break;
  case 30563:
    spellname = "Goblin Rocket Launcher";
    break;
  case 30564:
    spellname = "Worgen's Spite";
    break;
  case 30565:
    spellname = "Foreman's Enchanted Helmet";
    break;
  case 30566:
    spellname = "Foreman's Reinforced Helmet";
    break;
  case 30567:
    spellname = "Torment of the Worgen";
    break;
  case 30568:
    spellname = "Gnomish Flame Turret";
    break;
  case 30569:
    spellname = "Gnomish Poultryizer";
    break;
  case 30570:
    spellname = "Nigh-Invulnerability Belt";
    break;
  case 30571:
    spellname = "Quake";
    break;
  case 30572:
    spellname = "Quake";
    break;
  case 30573:
    spellname = "Gnomish Tonk Controller";
    break;
  case 30574:
    spellname = "Gnomish Power Goggles";
    break;
  case 30575:
    spellname = "Gnomish Battle Goggles";
    break;
  case 30576:
    spellname = "Quake";
    break;
  case 30584:
    spellname = "Fear";
    break;
  case 30598:
    spellname = "Burning Maul";
    break;
  case 30599:
    spellname = "Burning Maul";
    break;
  case 30600:
    spellname = "Blast Wave";
    break;
  case 30602:
    spellname = "Create Monument Rubbing";
    break;
  case 30603:
    spellname = "Revelations";
    break;
  case 30604:
    spellname = "Prayer of Healing";
    break;
  case 30605:
    spellname = "Blast of Aman'Thul";
    break;
  case 30606:
    spellname = "Bolt of Eonar";
    break;
  case 30607:
    spellname = "Flame of Khaz'goroth";
    break;
  case 30608:
    spellname = "Spite of Sargeras";
    break;
  case 30609:
    spellname = "Chill of Norgannon";
    break;
  case 30610:
    spellname = "Wrath of the Titans Stacker";
    break;
  case 30611:
    spellname = "Mine Crystal Sample";
    break;
  case 30612:
    spellname = "Mine Crystal Sample";
    break;
  case 30613:
    spellname = "Blast Nova";
    break;
  case 30614:
    spellname = "Aimed Shot";
    break;
  case 30615:
    spellname = "Fear";
    break;
  case 30616:
    spellname = "Blast Nova";
    break;
  case 30617:
    spellname = "Mine Crystal Sample";
    break;
  case 30618:
    spellname = "Beatdown";
    break;
  case 30619:
    spellname = "Cleave";
    break;
  case 30621:
    spellname = "Kidney Shot";
    break;
  case 30624:
    spellname = "Fel Miasma";
    break;
  case 30625:
    spellname = "Arcane Surge";
    break;
  case 30628:
    spellname = "Arcane Invisibility";
    break;
  case 30631:
    spellname = "Debris";
    break;
  case 30632:
    spellname = "Debris";
    break;
  case 30633:
    spellname = "Thunderclap";
    break;
  case 30635:
    spellname = "Battle Shout";
    break;
  case 30636:
    spellname = "Furious Howl";
    break;
  case 30637:
    spellname = "Orbital Strike";
    break;
  case 30638:
    spellname = "Shadow Whip";
    break;
  case 30639:
    spellname = "Carnivorous Bite";
    break;
  case 30641:
    spellname = "Mortal Wound";
    break;
  case 30643:
    spellname = "Heal";
    break;
  case 30645:
    spellname = "Gas Cloud Tracking";
    break;
  case 30646:
    spellname = "Tame Barbed Crawler";
    break;
  case 30647:
    spellname = "Tame Barbed Crawler";
    break;
  case 30648:
    spellname = "Tame Greater Timberstrider";
    break;
  case 30651:
    spellname = "Detaunt Test";
    break;
  case 30652:
    spellname = "Tame Nightstalker";
    break;
  case 30653:
    spellname = "Tame Greater Timberstrider";
    break;
  case 30654:
    spellname = "Tame Nightstalker";
    break;
  case 30656:
    spellname = "Creature - Kill Nazzivus Summoners";
    break;
  case 30657:
    spellname = "Quake";
    break;
  case 30658:
    spellname = "Quake";
    break;
  case 30659:
    spellname = "Fel Infusion";
    break;
  case 30660:
    spellname = "Bleed Spice";
    break;
  case 30662:
    spellname = "Demonic Summon Channel";
    break;
  case 30664:
    spellname = "Unrelenting Storm";
    break;
  case 30665:
    spellname = "Unrelenting Storm";
    break;
  case 30666:
    spellname = "Unrelenting Storm";
    break;
  case 30667:
    spellname = "Unrelenting Storm";
    break;
  case 30668:
    spellname = "Unrelenting Storm";
    break;
  case 30669:
    spellname = "Elemental Shields";
    break;
  case 30670:
    spellname = "Elemental Shields";
    break;
  case 30671:
    spellname = "Elemental Shields";
    break;
  case 30672:
    spellname = "Elemental Precision";
    break;
  case 30673:
    spellname = "Elemental Precision";
    break;
  case 30674:
    spellname = "Elemental Precision";
    break;
  case 30675:
    spellname = "Lightning Overload";
    break;
  case 30676:
    spellname = "Bleed Spice";
    break;
  case 30677:
    spellname = "Bleed Spice";
    break;
  case 30678:
    spellname = "Lightning Overload";
    break;
  case 30679:
    spellname = "Lightning Overload";
    break;
  case 30680:
    spellname = "Lightning Overload";
    break;
  case 30681:
    spellname = "Lightning Overload";
    break;
  case 30682:
    spellname = "Echoes of Lordaeron";
    break;
  case 30683:
    spellname = "Echoes of Lordaeron";
    break;
  case 30684:
    spellname = "Bleed Spice";
    break;
  case 30685:
    spellname = "Bleed Spice";
    break;
  case 30686:
    spellname = "Shadow Bolt";
    break;
  case 30687:
    spellname = "Explode";
    break;
  case 30688:
    spellname = "Shield Slam";
    break;
  case 30689:
    spellname = "Vazruden's Mark";
    break;
  case 30690:
    spellname = "Vazruden's Mark";
    break;
  case 30691:
    spellname = "Fireball";
    break;
  case 30695:
    spellname = "Treacherous Aura";
    break;
  case 30697:
    spellname = "Treacherous Aura";
    break;
  case 30700:
    spellname = "Face Highest Threat";
    break;
  case 30701:
    spellname = "Elemental Absorption";
    break;
  case 30702:
    spellname = "Elemental Absorption";
    break;
  case 30703:
    spellname = "Elemental Absorption";
    break;
  case 30704:
    spellname = "Elemental Absorption";
    break;
  case 30705:
    spellname = "Elemental Absorption";
    break;
  case 30706:
    spellname = "Totem of Wrath";
    break;
  case 30707:
    spellname = "Summon Fiendish Hound";
    break;
  case 30708:
    spellname = "Totem of Wrath";
    break;
  case 30717:
    spellname = "Summon Vazruden";
    break;
  case 30731:
    spellname = "Torment of the Worgen";
    break;
  case 30732:
    spellname = "Worm Sweep";
    break;
  case 30735:
    spellname = "Shadow Sear";
    break;
  case 30736:
    spellname = "Enraging Bite";
    break;
  case 30739:
    spellname = "Blade Dance";
    break;
  case 30741:
    spellname = "Death Coil";
    break;
  case 30742:
    spellname = "Shadow Channeling";
    break;
  case 30743:
    spellname = "Face Random Fel Orc";
    break;
  case 30744:
    spellname = "Lesser Shadow Fissure";
    break;
  case 30745:
    spellname = "Target Fissures";
    break;
  case 30749:
    spellname = "Worm Spittle (Summon)";
    break;
  case 30751:
    spellname = "Blade Dance Charge";
    break;
  case 30752:
    spellname = "Terrifying Howl";
    break;
  case 30753:
    spellname = "Red Riding Hood";
    break;
  case 30754:
    spellname = "Cenarion Favor";
    break;
  case 30755:
    spellname = "Picnic Basket Smell";
    break;
  case 30756:
    spellname = "Little Red Riding Hood";
    break;
  case 30757:
    spellname = "Conflagration";
    break;
  case 30758:
    spellname = "aedm";
    break;
  case 30761:
    spellname = "Wide Swipe";
    break;
  case 30762:
    spellname = "Curse of the Tampered Tome";
    break;
  case 30763:
    spellname = "Curse of the Tampered Tome";
    break;
  case 30764:
    spellname = "Curse of the Tampered Tome";
    break;
  case 30765:
    spellname = "Curse of the Tampered Tome";
    break;
  case 30766:
    spellname = "Curse of the Tampered Tome";
    break;
  case 30767:
    spellname = "Open Cage";
    break;
  case 30768:
    spellname = "Little Red Riding Hood";
    break;
  case 30769:
    spellname = "Pick Red Riding Hood";
    break;
  case 30770:
    spellname = "Attack Power 40 - Valor";
    break;
  case 30771:
    spellname = "Attack Power 40 - Shadowcraft";
    break;
  case 30772:
    spellname = "Attack Power 40 - Beaststalker";
    break;
  case 30775:
    spellname = "Attack Power 40 - Lightforge";
    break;
  case 30777:
    spellname = "Increase Spell Dam 23 - Magister";
    break;
  case 30778:
    spellname = "Increase Spell Dam 23 - Dreadmist";
    break;
  case 30779:
    spellname = "Increase Spell Dam 23 - Devout";
    break;
  case 30780:
    spellname = "Increase Spell Dam 23 - Elements";
    break;
  case 30790:
    spellname = "Arcane Domination";
    break;
  case 30798:
    spellname = "Dual Wield";
    break;
  case 30799:
    spellname = "Regeneration";
    break;
  case 30800:
    spellname = "Regeneration";
    break;
  case 30801:
    spellname = "Regeneration";
    break;
  case 30802:
    spellname = "Unleashed Rage";
    break;
  case 30803:
    spellname = "Unleashed Rage";
    break;
  case 30804:
    spellname = "Unleashed Rage";
    break;
  case 30805:
    spellname = "Unleashed Rage";
    break;
  case 30806:
    spellname = "Unleashed Rage";
    break;
  case 30807:
    spellname = "Unleashed Rage";
    break;
  case 30808:
    spellname = "Unleashed Rage";
    break;
  case 30809:
    spellname = "Unleashed Rage";
    break;
  case 30810:
    spellname = "Unleashed Rage";
    break;
  case 30811:
    spellname = "Unleashed Rage";
    break;
  case 30812:
    spellname = "Mental Quickness";
    break;
  case 30813:
    spellname = "Mental Quickness";
    break;
  case 30814:
    spellname = "Mental Quickness";
    break;
  case 30815:
    spellname = "Backward Lunge";
    break;
  case 30816:
    spellname = "Dual Wield Specialization";
    break;
  case 30817:
    spellname = "Deadly Swathe";
    break;
  case 30818:
    spellname = "Dual Wield Specialization";
    break;
  case 30819:
    spellname = "Dual Wield Specialization";
    break;
  case 30822:
    spellname = "Poisoned Thrust";
    break;
  case 30823:
    spellname = "Shamanistic Rage";
    break;
  case 30824:
    spellname = "Shamanistic Rage";
    break;
  case 30829:
    spellname = "Summon Kessel's Elekk";
    break;
  case 30830:
    spellname = "Poisoned Thrust";
    break;
  case 30831:
    spellname = "Stealth";
    break;
  case 30832:
    spellname = "Kidney Shot";
    break;
  case 30833:
    spellname = "Battle Shout";
    break;
  case 30834:
    spellname = "Infernal Relay";
    break;
  case 30835:
    spellname = "Infernal Relay";
    break;
  case 30836:
    spellname = "Infernal Relay";
    break;
  case 30837:
    spellname = "Summon Kessel's Elekk";
    break;
  case 30838:
    spellname = "Polymorph";
    break;
  case 30839:
    spellname = "Debuff Uber Heal Over Time";
    break;
  case 30840:
    spellname = "Summon Kessel's Elekk Trigger";
    break;
  case 30841:
    spellname = "Daring";
    break;
  case 30842:
    spellname = "Summon Felhunter";
    break;
  case 30843:
    spellname = "Enfeeble";
    break;
  case 30844:
    spellname = "Proximity Bomb Explode";
    break;
  case 30845:
    spellname = "Tracker's Vitality";
    break;
  case 30846:
    spellname = "Throw Proximity Bomb";
    break;
  case 30847:
    spellname = "Tracker's Insight";
    break;
  case 30848:
    spellname = "Tracker's Ferocity";
    break;
  case 30849:
    spellname = "Spell Lock";
    break;
  case 30850:
    spellname = "Seduction";
    break;
  case 30851:
    spellname = "Summon Felhound Manastalker";
    break;
  case 30852:
    spellname = "Shadow Nova";
    break;
  case 30853:
    spellname = "Summon Seductress";
    break;
  case 30854:
    spellname = "Shadow Word: Pain";
    break;
  case 30856:
    spellname = "Stomp";
    break;
  case 30857:
    spellname = "Wield Axes";
    break;
  case 30858:
    spellname = "Demon Blood Shell";
    break;
  case 30859:
    spellname = "Hellfire";
    break;
  case 30860:
    spellname = "Hellfire Effect";
    break;
  case 30864:
    spellname = "Focused Mind";
    break;
  case 30865:
    spellname = "Focused Mind";
    break;
  case 30866:
    spellname = "Focused Mind";
    break;
  case 30867:
    spellname = "Nature's Blessing";
    break;
  case 30868:
    spellname = "Nature's Blessing";
    break;
  case 30869:
    spellname = "Nature's Blessing";
    break;
  case 30872:
    spellname = "Improved Chain Heal";
    break;
  case 30873:
    spellname = "Improved Chain Heal";
    break;
  case 30874:
    spellname = "Gift of the Water Spirit";
    break;
  case 30875:
    spellname = "Tag Murloc";
    break;
  case 30876:
    spellname = "Enrage Murloc";
    break;
  case 30877:
    spellname = "Tag Murloc";
    break;
  case 30878:
    spellname = "Eternal Affection";
    break;
  case 30879:
    spellname = "Permanent Area Damage 50k";
    break;
  case 30880:
    spellname = "Echoes of Lordaeron";
    break;
  case 30881:
    spellname = "Nature's Guardian";
    break;
  case 30882:
    spellname = "Tower Capture Test (DND)";
    break;
  case 30883:
    spellname = "Nature's Guardian";
    break;
  case 30884:
    spellname = "Nature's Guardian";
    break;
  case 30885:
    spellname = "Nature's Guardian";
    break;
  case 30886:
    spellname = "Nature's Guardian";
    break;
  case 30887:
    spellname = "Devotion";
    break;
  case 30888:
    spellname = "Star Beam";
    break;
  case 30889:
    spellname = "Powerful Attraction";
    break;
  case 30890:
    spellname = "Blinding Passion";
    break;
  case 30891:
    spellname = "Summon Axes";
    break;
  case 30892:
    spellname = "Sleight of Hand";
    break;
  case 30893:
    spellname = "Sleight of Hand";
    break;
  case 30894:
    spellname = "Heightened Senses";
    break;
  case 30895:
    break;
  case 30898:
  }