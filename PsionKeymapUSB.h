/*
 PsionKeymapUSB.h
 
 Maps the keys to ASCII symbols as shown here:
 https://www.arduino.cc/en/Reference/KeyboardModifiers
 Note that the "Fn" and "Menu" keys are
 mapped to AltGr and Alt respectively.
 This is to make some kind of Plug 'n Play
 possible.
 
 */

#define KEY_A          0x61
#define KEY_B          0x62
#define KEY_C          0x63
#define KEY_D          0x64
#define KEY_E          0x65
#define KEY_F          0x66
#define KEY_G          0x67
#define KEY_H          0x68
#define KEY_I          0x69
#define KEY_J          0x6A
#define KEY_K          0x6B
#define KEY_L          0x6C
#define KEY_M          0x6D
#define KEY_N          0x6E
#define KEY_O          0x6F
#define KEY_P          0x70
#define KEY_Q          0x71
#define KEY_R          0x72
#define KEY_S          0x73
#define KEY_T          0x74
#define KEY_U          0x75
#define KEY_V          0x76
#define KEY_W          0x77
#define KEY_X          0x78
#define KEY_Y          0x79
#define KEY_Z          0x7A

#define KEY_0          0x30
#define KEY_1          0x31
#define KEY_2          0x32
#define KEY_3          0x33
#define KEY_4          0x34
#define KEY_5          0x35
#define KEY_6          0x36
#define KEY_7          0x37
#define KEY_8          0x38
#define KEY_9          0x39

#define KEY_ENTER      0xB0
#define KEY_ESC        0xB1
#define KEY_BACKSPACE  0xB2
#define KEY_TAB        0xB3
#define KEY_SPACE      0x20
#define KEY_APOSTROPHE 0x27
#define KEY_COMMA      0x2C
#define KEY_PERIOD     0x2E
#define KEY_RIGHT      0xD7
#define KEY_LEFT       0xD8
#define KEY_DOWN       0xD9
#define KEY_UP         0xDA
#define KEY_CTRL       0x80   // Left CTRL
#define KEY_LSHIFT     0x81
#define KEY_MENU       0x82   // re-Mapped as Super/Left GUI
#define KEY_RSHIFT     0x85
#define KEY_FN         KEY_RIGHT_ALT   // Mapped as AltGr 
                    
#define KEY_LEFT_GUI   0x83
#define KEY_PGUP       0xD3
#define KEY_PGDOWN     0xD6
#define KEY_HOME       0xD2
#define KEY_END        0xD5
#define KEY_CAPS       0xC1
#define KEY_USCR       0x5F
#define KEY_PLUS       0xDF
#define KEY_MINUS      0xDE
#define KEY_MULT       0xDD
#define KEY_DIV        0xDC
#define KEY_EQU        0x3D
#define KEY_HASH       0x23
#define KEY_BKSL       0x5C
#define KEY_AT         0x40
#define KEY_LT         0x3C
#define KEY_GT         0x3E
#define KEY_SQO        0x5B
#define KEY_SQCL       0x5D
#define KEY_CUO        0x7B
#define KEY_CUCL       0x7D
#define KEY_COLON      0x3A
#define KEY_SEMICOL    0x3B
#define BRIGHT_UP      0x00
#define BRIGHT_DN      0x00



static int keyScancode [NROWS] [NCOLS] = {
  { 0        ,KEY_SPACE ,KEY_UP    ,KEY_COMMA ,KEY_LEFT      ,KEY_RIGHT      ,KEY_LSHIFT ,0          ,0        ,0      ,0        ,0       },
  { KEY_1    ,KEY_2     ,KEY_3     ,KEY_4     ,KEY_5         ,KEY_6          ,0          ,0          ,0        ,0      ,0        ,0       },
  { KEY_7    ,KEY_8     ,KEY_9     ,KEY_0     ,KEY_BACKSPACE ,KEY_APOSTROPHE ,0          ,0          ,0        ,0      ,0        ,0       },
  { KEY_Q    ,KEY_W     ,KEY_E     ,KEY_R     ,KEY_T         ,KEY_Y          ,0          ,0          ,0        ,0      ,0        ,KEY_ESC },
  { KEY_U    ,KEY_I     ,KEY_O     ,KEY_P     ,KEY_L         ,KEY_ENTER      ,0          ,0          ,0        ,0      ,KEY_MENU ,0       },
  { KEY_TAB  ,KEY_A     ,KEY_S     ,KEY_D     ,KEY_F         ,KEY_G          ,0          ,0          ,KEY_CTRL ,0      ,0        ,0       },
  { KEY_H    ,KEY_J     ,KEY_K     ,KEY_M     ,KEY_PERIOD    ,KEY_DOWN       ,0          ,0          ,0        ,KEY_FN ,0        ,0       },
  { KEY_Z    ,KEY_X     ,KEY_C     ,KEY_V     ,KEY_B         ,KEY_N          ,0          ,KEY_RSHIFT ,0        ,0      ,0        ,0       }
};

static int fnSpecialKeys [NROWS] [NCOLS] = {
  { 0        ,0         ,KEY_PGUP  ,0         ,KEY_HOME       ,KEY_END        ,0          ,0          ,0        ,0      ,0            ,0       },
  { KEY_USCR ,KEY_HASH  ,KEY_BKSL  ,KEY_AT    ,KEY_LT         ,KEY_GT         ,0          ,0          ,0        ,0      ,0            ,0       },
  { KEY_SQO  ,KEY_SQCL  ,KEY_CUO   ,KEY_CUCL  ,KEY_DELETE     ,KEY_COLON      ,0          ,0          ,0        ,0      ,0            ,0       },
  { 0        ,0         ,0         ,0         ,0              ,KEY_MULT       ,0          ,0          ,0        ,0      ,0            ,0       },
  { KEY_DIV  ,KEY_PLUS  ,KEY_MINUS ,KEY_EQU   ,KEY_SEMICOL    ,0              ,0          ,0          ,0        ,0      ,KEY_LEFT_GUI ,0       },
  { KEY_CAPS ,0         ,0         ,0         ,0              ,0              ,0          ,0          ,0        ,0      ,0            ,0       },
  { 0        ,0         ,0         ,BRIGHT_DN ,BRIGHT_UP      ,KEY_PGDOWN     ,0          ,0          ,0        ,0      ,0            ,0       },
  { 0        ,0         ,0         ,0         ,0              ,0              ,0          ,0          ,0        ,0      ,0            ,0       }
};
