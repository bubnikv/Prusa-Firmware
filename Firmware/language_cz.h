/**
 * English
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#define WELCOME_MSG                         CUSTOM_MENDEL_NAME " ok"
#define MSG_SD_INSERTED                     "Karta vlozena"
#define MSG_SD_REMOVED                      "Karta vyjmuta"
#define MSG_MAIN                            "Hlavni nabidka"
#define MSG_DISABLE_STEPPERS                "Vypnout motory"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_SET_HOME_OFFSETS                "Nastav pocatek home"
#define MSG_SET_ORIGIN                      "Nastav pocatek"
#define MSG_COOLDOWN                        "Zchladit"
#define MSG_SWITCH_PS_ON                    "Vypnout zdroj"
#define MSG_SWITCH_PS_OFF                   "Zapnout zdroj"
#define MSG_MOVE_AXIS                       "Posunout osu"
#define MSG_MOVE_X                          "Posunout X"
#define MSG_MOVE_Y                          "Posunout Y"
#define MSG_MOVE_Z                          "Posunout Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_SPEED                           "Rychlost"
#define MSG_NOZZLE                          "Tryska"
#define MSG_NOZZLE1                         "Tryska2"
#define MSG_NOZZLE2                         "Tryska3"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Rychlost vent."
#define MSG_FLOW                            "Prutok"
#define MSG_FLOW0                           "Prutok 0"
#define MSG_FLOW1                           "Prutok 1"
#define MSG_FLOW2                           "Prutok 2"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"
#define MSG_TEMPERATURE                     "Teplota"
#define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Ulozit pamet"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_REFRESH                         "\xF8" "Obnovit"
#define MSG_WATCH                           "Informace"
#define MSG_TUNE                            "Ladit"
#define MSG_PAUSE_PRINT                     "Pozastavit tisk"
#define MSG_RESUME_PRINT                    "Pokracovat"
#define MSG_STOP_PRINT                      "Zastavit tisk"
#define MSG_CARD_MENU                       "Tisk z SD"
#define MSG_NO_CARD                         "Zadna SD karta"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Obnoveni tisku"
#define MSG_PRINT_ABORTED                   "Tisk prerusen"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_FILAMENTCHANGE                  "Vymenit filament"
#define MSG_INIT_SDCARD                     "Inic. SD"
#define MSG_CNG_SDCARD                      "Vymenit SD"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Doladeni osy Z"
#define MSG_ADJUSTZ							"Auto doladit Z ?"
#define MSG_PICK_Z							"Vyberte vytisk"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SETTINGS                         "Nastaveni"
#define MSG_PREHEAT                         "Predehrev"
#define MSG_UNLOAD_FILAMENT                 "Vyjmout filament"
#define MSG_LOAD_FILAMENT                 "Zavest filament"

#define MSG_RECTRACT                        "Rectract"
#define MSG_ERROR                       "CHYBA:"
#define MSG_PREHEAT_NOZZLE              "Predehrejte trysku!"
#define MSG_SUPPORT                     "Podpora"
#define MSG_CORRECTLY			"Vymena ok?"
#define MSG_YES					"Ano"
#define MSG_NO					"Ne"
#define MSG_NOT_LOADED 			"Filament nezaveden"
#define MSG_NOT_COLOR 			"Barva neni cista"
#define MSG_LOADING_FILAMENT	        "Zavadeni filamentu"
#define MSG_PLEASE_WAIT			"Prosim cekejte"
#define MSG_LOADING_COLOR		"Cisteni barvy"
#define MSG_CHANGE_SUCCESS		"Zmena uspesna!"
#define MSG_PRESS				"A stisknete tlacitko"
#define MSG_INSERT_FILAMENT		"Vlozte filament"
#define MSG_CHANGING_FILAMENT	"Vymena filamentu!"

#define MSG_SILENT_MODE_ON					"Mod       [tichy]"
#define MSG_SILENT_MODE_OFF					"Mod  [vys. vykon]" 
#define MSG_REBOOT							"Restartujte tiskarnu"
#define MSG_TAKE_EFFECT						" pro projeveni zmen"	

#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_CONFIGURATION_VER               " Last Updated: "
#define MSG_FREE_MEMORY                     " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH           "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM                 "No Checksum with line number, Last Line: "
#define MSG_BEGIN_FILE_LIST                 "Begin file list"
#define MSG_END_FILE_LIST                   "End file list"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS              "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_HEATING                         "Zahrivani"
#define MSG_HEATING_COMPLETE                "Zahrivani OK."
#define MSG_BED_HEATING                     "Zahrivani bed"
#define MSG_BED_DONE                        "Bed OK."
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED                      "Printer halted. kill() called!"
#define MSG_ERR_STOPPED                     "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND                          "Resend: "
#define MSG_M119_REPORT                     "Reporting endstop status"
#define MSG_ENDSTOP_HIT                     "TRIGGERED"
#define MSG_ENDSTOP_OPEN                    "open"

#define MSG_SD_CANT_OPEN_SUBDIR             "Cannot open subdir"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "File opened: "
#define MSG_SD_FILE_SELECTED                "File selected"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE            "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR            "Cannot enter subdir: "

#define MSG_STEPPER_TOO_HIGH                "Steprate too high: "
#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP           " cold extrusion prevented"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Dostavovani Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"

#define MSG_LANGUAGE_NAME					"Cestina"
#define MSG_LANGUAGE_SELECT					"Vyber jazyka"
 #define MSG_PRUSA3D						"prusa3d.cz"
 #define MSG_PRUSA3D_FORUM					"forum.prusa3d.cz"
 #define MSG_PRUSA3D_HOWTO					"howto.prusa3d.cz"

#define MSG_HOMEYZ                          "Kalibrovat Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruji Z"
#define MSG_HOMEYZ_DONE		                "Kalibrace OK"

#define MSG_SELFTEST_ERROR					"Selftest error !"
#define MSG_SELFTEST_PLEASECHECK			"Zkontrolujte :"	
#define MSG_SELFTEST_NOTCONNECTED			"Nezapojeno    "
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Chyba zapojeni"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Endstop not hit"
#define MSG_SELFTEST_OK						"Self test OK"
#define MSG_SELFTEST_FAN					"Test ventilatoru";
#define MSG_SELFTEST_COOLING_FAN			"Predni tiskovy";
#define MSG_SELFTEST_EXTRUDER_FAN			"Levy na trysce";
#define MSG_SELFTEST_FAN_YES				"Toci se";
#define MSG_SELFTEST_FAN_NO					"Netoci se";

#define MSG_STATS_TOTALFILAMENT				"Filament celkem :"
#define MSG_STATS_TOTALPRINTTIME			"Celkovy cas :"
#define MSG_STATS_FILAMENTUSED				"Filament :  "
#define MSG_STATS_PRINTTIME					"Cas tisku :  "

#define MSG_SELFTEST_START					"Self test start  "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Kontrola endstops"
#define MSG_SELFTEST_CHECK_HOTEND			"Kontrola hotend  "  
#define MSG_SELFTEST_CHECK_X				"Kontrola X axis  "
#define MSG_SELFTEST_CHECK_Y				"Kontrola Y axis  "
#define MSG_SELFTEST_CHECK_Z				"Kontrola Z axis  "
#define MSG_SELFTEST_CHECK_BED				"Kontrola bed     "
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Vse OK           "
#define MSG_SELFTEST						"Selftest         "
#define MSG_SELFTEST_FAILED					"Selftest selhal  "

#define MSG_STATISTICS						"Statistika  "
#define MSG_USB_PRINTING					"Tisk z USB  "

#define MSG_SHOW_END_STOPS					"Stav konc. spin."
#define MSG_CALIBRATE_BED					"Kalibrace XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ kalibr."

#define MSG_MOVE_CARRIAGE_TO_THE_TOP		"Kalibrace XYZ. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z		"Kalibrace Z. Otacenim tlacitka posunte Z osu az k~hornimu dorazu. Potvrdte tlacitkem."

#define MSG_CONFIRM_NOZZLE_CLEAN			"Pro uspesnou kalibraci ocistete prosim tiskovou trysku. Potvrdte tlacitkem."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Dojely oba Z voziky k~hornimu dorazu?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1	"Hledam kalibracni bod podlozky"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2	" z 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Zlepsuji presnost kalibracniho bodu"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" z 9"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Merim referencni vysku kalibracniho bodu"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" z 9"

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"Kalibrace XYZ selhala. Kalibracni bod podlozky nenalezen."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"Kalibrace XYZ selhala. Nahlednete do manualu."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"Kalibrace XYZ v poradku. X/Y osy jsou kolme."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"Kalibrace XYZ v poradku. X/Y osy mirne zkosene."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"X/Y osy jsou silne zkosene. Zkoseni bude automaticky vyrovnano pri tisku."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"Kalibrace XYZ selhala. Levy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"Kalibrace XYZ selhala. Pravy predni bod moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"Kalibrace XYZ selhala. Predni kalibracni body moc vpredu. Srovnejte tiskarnu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"Kalibrace XYZ nepresna. Levy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"Kalibrace XYZ nepresna. Pravy predni bod moc vpredu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"Kalibrace XYZ nepresna. Predni kalibracni body moc vpredu."

#define MSG_BED_LEVELING_FAILED_POINT_LOW						"Kalibrace Z selhala. Sensor nesepnul. Znecistena tryska? Cekam na reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH						"Kalibrace Z selhala. Sensor sepnul prilis vysoko. Cekam na reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Kalibrace Z selhala. Sensor je odpojeny nebo preruseny kabel. Cekam na reset."

#define MSG_NEW_FIRMWARE_AVAILABLE								"Vysla nova verze firmware:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE							"Prosim aktualizujte."
#define MSG_FOLLOW_CALIBRATION_FLOW                        		"Tiskarna nebyla jeste zkalibrovana. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Postup kalibrace."
#define MSG_BABYSTEP_Z_NOT_SET                          		"Neni zkalibrovana vzdalenost trysky od tiskove podlozky. Postupujte prosim podle manualu, kapitola Zaciname, odstavec Nastaveni prvni vrstvy."

#define MSG_BED_CORRECTION_MENU									"Korekce podlozky"
#define MSG_BED_CORRECTION_LEFT									"Vlevo  [um]"
#define MSG_BED_CORRECTION_RIGHT								"Vpravo [um]"
#define MSG_BED_CORRECTION_FRONT								"Vpredu [um]"
#define MSG_BED_CORRECTION_REAR									"Vzadu  [um]"
#define MSG_BED_CORRECTION_RESET								"Reset"


#define MSG_MENU_CALIBRATION									"Kalibrace"
