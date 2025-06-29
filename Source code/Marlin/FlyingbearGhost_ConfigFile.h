/**
**********************************************************************************************
*******************************                 **********************************************
*******************************    REFERENCE    **********************************************
*******************************                 **********************************************
**********************************************************************************************


!! ATTENTION !!


--> DEFAUTL_ENVS (Please change this parameter inside platformio.ini)

default_envs = mks_robin_nano_v1v2           - MKS Robin Nano 1.1 / MKS Robin Nano 1.2 / MKS Reborn V2.0          
default_envs = mks_robin_nano_v1_3_f4        - MKs Robin Nano 1.3 / MKS Robin Nano 1.3s


--> MOTHERBOARD (Please change this parameter inside Configuration.h)

BOARD_MKS_ROBIN_NANO             - MKS Robin Nano 1.1 / MKS Robin Nano 1.2 / MKS Reborn V2.0
BOARD_MKS_ROBIN_NANO_V1_3_F4     - MKs Robin Nano 1.3 / MKS Robin Nano 1.3s


-->Mainboard

NANO11_STOCK    -    MKS Robin Nano 1.1 (Reborn V2.0) - Driver 2x A4988 2x TMC2208    
NANO11_2208     -    MKS Robin Nano 1.1 (Reborn V2.0) - Driver 4x TMC2208
NANO12_STOCK    -    MKS Robin Nano 1.2 - Driver 2x A4988 2x TMC2208   
NANO12_2208     -    MKS Robin Nano 1.2 - Driver 4x TMC2208 
NANO13_STOCK    -    MKS Robin Nano 1.3 - Driver 2x A4988 2x TMC2208   
NANO13_2208     -    MKS Robin Nano 1.3 - Driver 4x TMC2208 
NANO13S_STOCK   -    MKS Robin Nano 1.3s - Driver 4x TMC2225



**********************************************************************************************
***********************************                 ******************************************
***********************************  EDITABLE MENU  ******************************************
***********************************                 ******************************************
**********************************************************************************************
*********   Here you will choose your card, your drivers and your personal settings   *******/

// Choose the name from boards.h that matches your setup

#ifndef USER_BUILD

 #define NANO11_2208                                         //<------- Define your Mainboard

 #define FILAMENT_RUNOUT_SENSOR                               //<------- Enable or disable filament runout sensor

 #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 82.47, 398.01, 410.75 }   //<------- Define your step/mm

 #define PIDTEMP                                               //<------- Define your PIDTEMP
  #define DEFAULT_Kp  12.01
  #define DEFAULT_Ki   0.72
  #define DEFAULT_Kd  50.20
  
 #define PIDTEMPBED                                           //<------- Define your PIDTEMPBED
  #define DEFAULT_bedKp 28.84
  #define DEFAULT_bedKi 5.08
  #define DEFAULT_bedKd 109.19


  #define FBGHOST_BLTOUCH                                   //<------- Define if you have Bltouch or not
    #if ENABLED (FBGHOST_BLTOUCH)
     #define NOZZLE_TO_PROBE_OFFSET { 44, 0, -1.08 }               //<------- Define your probe offset
    #endif
  
 //#define TFT_CLASSIC_UI
 //#define TFT_COLOR_UI                                      //<------- Define your printer UI
 #define TFT_LVGL_UI

#endif
















/**********************************************************************************************
***********************************                 *******************************************
***********************************   CONFIG ZONE   *******************************************
***********************************                 *******************************************
***********************************************************************************************
*****************   If you not are an expert, stay away from here   **************************/

#if ENABLED (NANO11_STOCK)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR false
  #define USER_Z_TYPE A4988

  #define USER_E0_DIR false
  #define USER_E0_TYPE A4988

  #define SERVO0_PIN                          PB2   // Enable BLTOUCH

#endif  

#if ENABLED (NANO11_2208)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2209_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2209_STANDALONE

  #define USER_Z_DIR true
  #define USER_Z_TYPE TMC2209_STANDALONE

  #define USER_E0_DIR true
  #define USER_E0_TYPE TMC2209_STANDALONE

  #define SERVO0_PIN                          PB2   // Enable BLTOUCH

#endif  

#if ENABLED (NANO12_STOCK)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR false
  #define USER_Z_TYPE A4988

  #define USER_E0_DIR false
  #define USER_E0_TYPE A4988

  #define SERVO0_PIN                          PA8   // Enable BLTOUCH

#endif  

#if ENABLED (NANO12_2208)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR true
  #define USER_Z_TYPE TMC2208_STANDALONE

  #define USER_E0_DIR true
  #define USER_E0_TYPE TMC2208_STANDALONE

  #define SERVO0_PIN                          PA8   // Enable BLTOUCH

#endif  

#if ENABLED (NANO13_STOCK)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR false
  #define USER_Z_TYPE A4988

  #define USER_E0_DIR false
  #define USER_E0_TYPE A4988

  #define SERVO0_PIN                          PA8   // Enable BLTOUCH
#endif  

#if ENABLED (NANO13_2208)
  #define USER_X_DIR false
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR false
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR true
  #define USER_Z_TYPE TMC2208_STANDALONE

  #define USER_E0_DIR true
  #define USER_E0_TYPE TMC2208_STANDALONE

  #define SERVO0_PIN                          PA8   // Enable BLTOUCH

#endif  

#if ENABLED (NANO13S_STOCK)
  #define USER_X_DIR true
  #define USER_X_TYPE TMC2208_STANDALONE

  #define USER_Y_DIR true
  #define USER_Y_TYPE TMC2208_STANDALONE

  #define USER_Z_DIR false
  #define USER_Z_TYPE TMC2208_STANDALONE

  #define USER_E0_DIR false
  #define USER_E0_TYPE TMC2208_STANDALONE

  #define SERVO0_PIN                          PA8   // Enable BLTOUCH

#endif  


#if ENABLED (FBGHOST_BLTOUCH)
  #define BLTOUCH
  #define USE_PROBE_FOR_Z_HOMING
  #define Z_MIN_PROBE_PIN PC4
  #define MULTIPLE_PROBING 2
  #define EXTRA_PROBING    1
  #define AUTO_BED_LEVELING_BILINEAR
  #define Z_SAFE_HOMING

#else
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
  #define PROBE_MANUALLY

#endif

#if ENABLED (FILAMENT_RUNOUT_SENSOR)
 #define FIL_RUNOUT_PIN           PA4
  #if COUNT_ENABLED(NANO11_STOCK, NANO11_2208, NANO12_STOCK, NANO12_2208)
    #define FIL_RUNOUT_STATE      LOW  
   #else
    #define FIL_RUNOUT_STATE      HIGH 
  #endif
#endif

#if ANY(TFT_COLOR_UI,TFT_CLASSIC_UI)
  #define DISPLAY_CHARSET_HD44780 JAPANESE
  #define ADVANCED_PAUSE_FEATURE

#else
  #define DISPLAY_CHARSET_HD44780 WESTERN

#endif

