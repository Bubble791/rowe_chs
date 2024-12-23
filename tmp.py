import os

text = """arm-none-eabi-ld  -T ld_script.txt -o build/rom.elf
arm-none-eabi-ld -Map rom.map -T ld_script.txt -o build/rom.elf
arm-none-eabi-ld: build/data/event_scripts.o: in function `OldaleTown_House1_EventScript_BattleMart':
(script_data+0x110d81): undefined reference to `VAR_SHOP_TYPE'
arm-none-eabi-ld: (script_data+0x110d83): undefined reference to `MART_TYPE_NORMAL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `OldaleTown_House1_EventScript_BattleMart_Stones':
(script_data+0x110da2): undefined reference to `VAR_SHOP_TYPE'
arm-none-eabi-ld: (script_data+0x110da4): undefined reference to `MART_TYPE_NORMAL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `MauvilleCity_GameCorner_EventScript_Mons':
(script_data+0x110dc3): undefined reference to `VAR_SHOP_TYPE'
arm-none-eabi-ld: (script_data+0x110dc5): undefined reference to `MART_TYPE_MONS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EightIsland_House1_EventScript_BattleMart_TMs':
(script_data+0x110e43): undefined reference to `VAR_SHOP_TYPE'
arm-none-eabi-ld: (script_data+0x110e45): undefined reference to `MART_TYPE_NORMAL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EightIsland_House1_EventScript_BattleMart_HeldItems':
(script_data+0x110e64): undefined reference to `VAR_SHOP_TYPE'
arm-none-eabi-ld: (script_data+0x110e66): undefined reference to `MART_TYPE_NORMAL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Route119_UxieCave_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_1':
(script_data+0x111763): undefined reference to `METATILE_RockTunnel_CaveTile'
arm-none-eabi-ld: (script_data+0x11176c): undefined reference to `METATILE_RockTunnel_CaveTile'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_WaterLabyrinth_EventScript_Alize':
(script_data+0x1119dd): undefined reference to `TRAINER_ALIZE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Daisy':
(script_data+0x1119f4): undefined reference to `TRAINER_DAISY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Celina':
(script_data+0x111a0b): undefined reference to `TRAINER_CELINA_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Rayna':
(script_data+0x111a22): undefined reference to `TRAINER_RAYNA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Jacki':
(script_data+0x111a39): undefined reference to `TRAINER_JACKI'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Gillian':
(script_data+0x111a50): undefined reference to `TRAINER_GILLIAN'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Destin':
(script_data+0x111a67): undefined reference to `TRAINER_DESTIN'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_Toby':
(script_data+0x111a7e): undefined reference to `TRAINER_TOBY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_MemorialPillar_EventScript_Milo':
(script_data+0x111a95): undefined reference to `TRAINER_MILO'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_MemorialPillar_EventScript_Chaz':
(script_data+0x111aac): undefined reference to `TRAINER_CHAZ'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_MemorialPillar_EventScript_Harold':
(script_data+0x111ac3): undefined reference to `TRAINER_HAROLD'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_OnWarp':
(script_data+0x1128ab): undefined reference to `VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_OnFrame':
(script_data+0x1128ba): undefined reference to `VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene':
(script_data+0x1128f7): undefined reference to `VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS'"""

table = []
for i in text.split("\n"):
    if "undefined reference to" in i:
        textdata = i.split("`")[1].replace("'","")
        if textdata not in table:
            table.append(textdata)

for index, i in enumerate(table):
    print(f"#define {i} {index}")