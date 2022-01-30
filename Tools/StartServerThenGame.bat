start /D "C:\Program Files (x86)\Steam\steamapps\common\DayZServer\" DayZDiag_x64.exe -server "-config=serverDZ.cfg" -mod=P:\WeaponBreakOnDie -dologs -adminlog -freezecheck -filePatching

TIMEOUT 5

start /D "C:\Program Files (x86)\Steam\steamapps\common\DayZ" DayZDiag_x64.exe -mod=P:\@WeaponBreakOnDie -filePatching "Aherys" -dologs -adminlog -freezecheck "-scriptDebug=true" -connect=127.0.0.1:2302
