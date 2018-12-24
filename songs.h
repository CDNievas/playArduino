#ifndef songs_h
#define songs_h

#include "notes.h"

// {NOTE, TEMPO}
const int mario_main[][2] = {
	{NOTE_E7,12}, {NOTE_E7,12}, {0,12}, {NOTE_E7,12},
	{0,12}, {NOTE_C7,12}, {NOTE_E7, 12},
	{NOTE_G7,12}, {0,12}, {0,12}, {0,12},
	{NOTE_G6,12}, {0,12}, {0,12}, {0,12},
	{NOTE_C7,12}, {0,12}, {0,12}, {NOTE_G6,12},
	{0,12}, {0,12}, {NOTE_E6,12}, {0,12},
	{0,12}, {NOTE_A6,12}, {0,12}, {NOTE_B6,12},
	{0,12}, {NOTE_AS6,12}, {NOTE_A6,12}, {0,12},
	{NOTE_G6,9}, {NOTE_E7,9}, {NOTE_G7,9},
	{NOTE_A7,12}, {0,12}, {NOTE_F7,12}, {NOTE_G7,12},
	{0,12}, {NOTE_E7,12}, {0,12}, {NOTE_C7,12},
	{NOTE_D7,12}, {NOTE_B6,12}, {0,12}, {0,12},
	{NOTE_C7,12}, {0,12}, {0,12}, {NOTE_G6,12},
	{0,12}, {0,12}, {NOTE_E6,12}, {0,12},
	{0,12}, {NOTE_A6,12}, {0,12}, {NOTE_B6,12},
	{0,12}, {NOTE_AS6,12}, {NOTE_A6,12}, {0,12},
	{NOTE_G6,9}, {NOTE_E7,9}, {NOTE_G7,9},
	{NOTE_A7,12}, {0,12}, {NOTE_F7,12}, {NOTE_G7,12},
	{0,12}, {NOTE_E7,12}, {0,12}, {NOTE_C7,12},
	{NOTE_D7,12}, {NOTE_B6,12}, {0,12}, {0,12}
};

const int mario_under[][2] = {

	{NOTE_C4,12}, {NOTE_C5,12}, {NOTE_A3,12}, {NOTE_A4,12},
	{NOTE_AS3,12}, {NOTE_AS4,12}, {0,6}, {0,3},
	{NOTE_C4,12}, {NOTE_C5,12}, {NOTE_A3,12}, {NOTE_A4,12},
	{NOTE_AS3,12}, {NOTE_AS4,12}, {0,6}, {0,3},
	{NOTE_F3,12}, {NOTE_F4,12}, {NOTE_D3,12}, {NOTE_D4,12},
	{NOTE_DS3,12}, {NOTE_DS4,12}, {0,6}, {0,3},
	{NOTE_F3,12}, {NOTE_F4,12}, {NOTE_D3,12}, {NOTE_D4,12},
	{NOTE_DS3,12}, {NOTE_DS4,12}, {0,6},
	{0,3}, {NOTE_DS4,18}, {NOTE_CS4,18}, {NOTE_D4,18},
	{NOTE_CS4,6}, {NOTE_DS4,6},
	{NOTE_DS4,6}, {NOTE_GS3,6},
	{NOTE_G3,6}, {NOTE_CS4,6},
	{NOTE_C4,18}, {NOTE_FS4,18}, {NOTE_F4,18}, {NOTE_E3,18}, {NOTE_AS4,18}, {NOTE_A4,18},
	{NOTE_GS4,10}, {NOTE_DS4,10}, {NOTE_B3,10},
	{NOTE_AS3,10}, {NOTE_A3,10}, {NOTE_GS3,10},
	{0,3}, {0,3}, {0,3}

};

const int christmas[][2] = {
	{NOTE_E5,8}, {NOTE_E5,8}, {NOTE_E5,4},
	{NOTE_E5,8}, {NOTE_E5,8}, {NOTE_E5,4},
	{NOTE_E5,8}, {NOTE_G5,8}, {NOTE_C5,8}, {NOTE_D5,8},
	{NOTE_E5,2},
	{NOTE_F5,8}, {NOTE_F5,8}, {NOTE_F5,8}, {NOTE_F5,8},
	{NOTE_F5,8}, {NOTE_E5,8}, {NOTE_E5,8}, {NOTE_E5,16}, {NOTE_E5,16},
	{NOTE_E5,8}, {NOTE_D5,8}, {NOTE_D5,8}, {NOTE_E5,8},
	{NOTE_D5,4}, {NOTE_G5,4}
};

const int wish[][2] = {
	{NOTE_B3,4}, 
	{NOTE_F4,4}, {NOTE_F4,8}, {NOTE_G4,8}, {NOTE_F4,8}, {NOTE_E4,8},
	{NOTE_D4,4}, {NOTE_D4,4}, {NOTE_D4,4},
	{NOTE_G4,4}, {NOTE_G4,8}, {NOTE_A4,8}, {NOTE_G4,8}, {NOTE_F4,8},
	{NOTE_E4,4}, {NOTE_E4,4}, {NOTE_E4,4},
	{NOTE_A4,4}, {NOTE_A4,8}, {NOTE_B4,8}, {NOTE_A4,8}, {NOTE_G4,8},
	{NOTE_F4,4}, {NOTE_D4,4}, {NOTE_B3,8}, {NOTE_B3,8},
	{NOTE_D4,4}, {NOTE_G4,4}, {NOTE_E4,4},
	{NOTE_F4,2}
};

const int santa[][2] = {
	{NOTE_G4,8},
	{NOTE_E4,8}, {NOTE_F4,8}, {NOTE_G4,4}, {NOTE_G4,4}, {NOTE_G4,4},
	{NOTE_A4,8}, {NOTE_B4,8}, {NOTE_C5,4}, {NOTE_C5,4}, {NOTE_C5,4},
	{NOTE_E4,8}, {NOTE_F4,8}, {NOTE_G4,4}, {NOTE_G4,4}, {NOTE_G4,4},
	{NOTE_A4,8}, {NOTE_G4,8}, {NOTE_F4,4}, {NOTE_F4,2},
	{NOTE_E4,4}, {NOTE_G4,4}, {NOTE_C4,4}, {NOTE_E4,4},
	{NOTE_D4,4}, {NOTE_F4,2}, {NOTE_B3,4},
	{NOTE_C4,1}
};

const int urss[][2] = {
	{NOTE_G4,8}, {NOTE_C5,4}, {NOTE_G4,6}, {NOTE_A4,16}, {NOTE_B4,4}, {NOTE_E4,8}, {NOTE_E4,8}, 
	{NOTE_A4,4}, {NOTE_G4,6}, {NOTE_F4,16}, {NOTE_G4,4}, {NOTE_C4,8}, {NOTE_C4,8}, 
	{NOTE_D4,4}, {NOTE_D4,8}, {NOTE_E4,8}, {NOTE_F4,4}, {NOTE_F4,8}, {NOTE_G4,8}, {NOTE_A4,4}, {NOTE_B4,8}, {NOTE_C5,8}, {NOTE_D5,2}, 
	{NOTE_E5,4}, {NOTE_D5,6}, {NOTE_C5,16}, {NOTE_D5,4}, {NOTE_B4,8}, {NOTE_G4,8}, 
	{NOTE_C5,4}, {NOTE_B4,6}, {NOTE_A4,16}, {NOTE_B4,4}, {NOTE_E4,8}, {NOTE_E4,8}, 
	{NOTE_A4,4}, {NOTE_G4,6}, {NOTE_F4,16}, {NOTE_G4,4}, {NOTE_C4,6}, {NOTE_C4,16}, 
	{NOTE_C5,4}, {NOTE_B4,6}, {NOTE_A4,16}, {NOTE_G4,8}, {NOTE_B4,8}, {NOTE_C5,8}, {NOTE_D5,8}, 
	{NOTE_E5,2}, {NOTE_D5,8}, {NOTE_C5,8}, {NOTE_B4,8}, {NOTE_C5,8}, {NOTE_D5,3}, {NOTE_G4,8}, {NOTE_G4,8}, {NOTE_B4,8}, {NOTE_C5,8}, {NOTE_D5,8},
	{NOTE_C5,2}, {NOTE_B4,8}, {NOTE_A4,8}, {NOTE_G4,8}, {NOTE_A4,8}, {NOTE_B4,3}, {NOTE_E4,8}, {NOTE_E4,8}, {NOTE_G4,8}, {NOTE_A4,8}, {NOTE_B4,8},
	{NOTE_C5,4}, {NOTE_A4,6}, {NOTE_B4,16}, {NOTE_C5,4}, {NOTE_A4,6}, {NOTE_B4,16}, {NOTE_C5,4}, {NOTE_A4,8}, {NOTE_C5,8}, {NOTE_F5,2},
	{NOTE_F5,2}, {NOTE_E5,8}, {NOTE_D5,8}, {NOTE_C5,8}, {NOTE_D5,8}, {NOTE_E5,3}, {NOTE_C5,8}, {NOTE_C5,2},
	{NOTE_D5,2}, {NOTE_C5,8}, {NOTE_B4,8}, {NOTE_A4,8}, {NOTE_B4,8}, {NOTE_C5,3}, {NOTE_A4,8}, {NOTE_A4,2},
	{NOTE_C5,4}, {NOTE_B4,6}, {NOTE_A4,16}, {NOTE_G4,4}, {NOTE_C4,4}, {NOTE_G4,2}, {NOTE_A4,4}, {NOTE_B4,4}, {NOTE_C5,1}
};

const int evangelion[][2] = {
	{NOTE_C4,4}, {NOTE_DS4,6}, {NOTE_F4,6}, {NOTE_DS4,6}, {NOTE_F4,8}, {NOTE_F4,8}, {NOTE_F4,8},
	{NOTE_AS4,8}, {NOTE_GS4,8}, {NOTE_G4,16}, {NOTE_F4,8}, {NOTE_G4,8}, {0,6},
	{NOTE_G4,6}, {NOTE_AS4,6}, {NOTE_C5,8}, {NOTE_F4,8}, {NOTE_DS4,8}, {NOTE_AS4,8}, {NOTE_AS4,8},
	{NOTE_G4,8}, {NOTE_AS4,8}, {NOTE_AS4,8}, {NOTE_C5,8}
};

// Fix
const int stillAlive[][2] = {

	{NOTE_G4,8}, {NOTE_FS4,8}, {NOTE_E4,8}, {NOTE_E4,8}, {NOTE_FS4,8}, {NOTE_D3,8}, {NOTE_FS3,8}, {NOTE_D3,8},
	{0,8}, {NOTE_D3,8}, {NOTE_FS3,8}, {NOTE_D3,8}, {0,8}, {NOTE_D3,8}, {NOTE_FS3,8}, {NOTE_A3,8}, {NOTE_G4,8},
	{NOTE_FS4,8}, {NOTE_E4,8}, {NOTE_E4,4}, {NOTE_FS4,8}, {NOTE_FS4,4}, {NOTE_D4,4}, {NOTE_E4,8}, {NOTE_A3,4},
	{NOTE_D3,8}, {NOTE_FS3,8}, {NOTE_D3,8}, {0,8}, {NOTE_D3,8}, {NOTE_FS3,8}, {NOTE_A3,8}, {NOTE_E4,4}

};

#endif
