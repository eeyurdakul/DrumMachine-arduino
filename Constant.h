#pragma once

namespace Zebra {

  enum Color {
    BLACK   = 0x0000,
    BLUE    = 0x001F,
    RED     = 0xF800,
    GREEN   = 0x07E0,
    CYAN    = 0x07FF,
    MAGENTA = 0xF81F,
    YELLOW  = 0xFFE0,
    WHITE   = 0xFFFF,
    LGRAY   = 0x9CF3,
    MGRAY   = 0x8C51,
    DGRAY   = 0x31A6
  };

  // Keyboard.h

  const uint8_t kMenuSelectButtonPin = 24;
  const uint8_t kLayer0SelectButtonPin = 25;
  const uint8_t kLayer1SelectButtonPin = 26;
  const uint8_t kLayer2SelectButtonPin = 27;
  const uint8_t kLayer3SelectButtonPin = 28;

  const uint8_t kLayer0ChannelButtonPin = 0;
  const uint8_t kLayer1ChannelButtonPin = 0;
  const uint8_t kLayer2ChannelButtonPin = 0;
  const uint8_t kLayer3ChannelButtonPin = 0;

  const uint8_t kUpButtonPin = 29;
  const uint8_t kDownButtonPin = 30;
  const uint8_t kRightButtonPin = 31;
  const uint8_t kLeftButtonPin = 32;

  const uint8_t kInstAUpButtonPin = 42;
  const uint8_t kInstADownButtonPin = 43;
  const uint8_t kInstBUpButtonPin = 44;
  const uint8_t kInstBDownButtonPin = 45;

  const uint8_t kRecordButtonPin = 46;
  const uint8_t kPlayButtonPin = 47;
  const uint8_t kResetButtonPin = 48;

  const uint8_t kBeatAButtonPin = 49;
  const uint8_t kBeatBButtonPin = 50;
  const uint8_t kBeatClearButtonPin = 51;

  const uint8_t kRecordLedPin = 52;
  const uint8_t kPlayLedPin = 53;

  // View.h

  // play constants
  const uint16_t kPlayY = 56;
  const uint16_t kPlayColor0 = WHITE;
  const uint16_t kPlayColor1 = BLACK;
  // layer constants
  const uint16_t kSongStartX = 48;
  const uint16_t kSongEndX = 408;
  const uint16_t kSongX = 360;
  const uint16_t kStartY = 0;
  // menu constants
  const uint8_t kTempoBox = 0;
  const uint8_t kMetronomeBox = 1;
  const uint8_t kBarBox = 2;
  const uint8_t kMeasureBox = 3;
  const uint8_t kLoadBox = 4;
  const uint8_t kSaveBox = 5;
  const uint8_t kOutputBox = 6;
  const uint8_t kQuantizeBox = 7;
  const uint16_t kMenuBoxXPos[] = {0, 120, 240, 360, 0, 120, 240, 360};
  const uint8_t kMenuBoxYPos = 0;
  const uint8_t kMenuBoxWidth = 119;
  const uint8_t kMenuBoxHeight = 50;
  const uint16_t kMenuHeaderXPos[] = {7, 127, 247, 367, 7, 127, 247, 367};
  const uint8_t kMenuHeaderYPos = 7;
  const uint8_t kMenuDataDigit = {3, 2, 2, 2, 2, 2, 2, 2};
  const uint16_t kMenuDataXPos = {10, 130, 250, 370, 10, 130, 250, 370};
  const uint8_t kMenuDataYPos = 32;



  // info constants
  const uint8_t kInfoHeight = 50;
  const uint8_t kMinInfoDigit = 0;
  const uint8_t kMaxInfoDigit = 3;
  const uint8_t kInfoDigitOffset = 12;
  // info rhythm constants
  const uint16_t kTempoXPos = 10;
  const uint16_t kTempoYPos = 32;
  const uint8_t kTempoDigit = 3;
  const uint16_t kQuantizeXPos = 130;
  const uint16_t kQuantizeYPos = 32;
  const uint8_t kQuantizeDigit = 2;
  const uint16_t kBarXPos = 250;
  const uint16_t kBarYPos = 32;
  const uint8_t kBarDigit = 2;
  const uint16_t kMeasureXPos = 370;
  const uint16_t kMeasureYPos = 32;
  const uint8_t kMeasureDigit = 2;
  // info layer constants
  const uint16_t kFillNameXPos = 10;
  const uint16_t kFillNameYPos = 32;
  const uint8_t kFillNameLetterCount = 5;
  const uint16_t kInstAXPos = 250;
  const uint16_t kInstAYPos = 32;
  const uint8_t kInstADigit = 2;
  const uint16_t kInstBXPos = 370;
  const uint16_t kInstBYPos = 32;
  const uint8_t kInstBDigit = 2;

  // Rhythm.h

  const uint8_t kMinTempo = 60;
  const uint8_t kMaxTempo = 160;
  const uint8_t kMinBar = 1;
  const uint8_t kMaxBar = 8;
  const uint8_t kMinMeasure = 1;
  const uint8_t kMaxMeasure = 8;
  const uint8_t kMinLoad = 1;
  const uint8_t kMaxLoad = 32;
  const uint8_t kMinSave = 1;
  const uint8_t kMaxSave = 32;
  const uint8_t kMinRhythmQuantize = 0;
  const uint8_t kMaxRhythmQuantize = 6;
  const uint8_t kInitialTempo = 120;
  const bool kInitialMetronome = 1;   // 0 --> off, 1 --> on
  const uint8_t kInitialBar = 4;
  const uint8_t kInitialMeasure = 4;
  const uint8_t kInitialLoad = 1;
  const uint8_t kInitialSave = 1;
  const bool kInitialOutput = 0;      // 0 --> audio, 1 --> midi
  const uint8_t kInitialQuantize = 0;
  const uint8_t kLayerLibrarySize = 4;
  const uint16_t kMeasureTime = 64;
  const uint8_t kQuantizeLibrary[7] PROGMEM = {0, 1, 2, 4, 8, 16, 32};

  // Layer.h

  const uint8_t kMinLayerVolume = 0;
  const uint8_t kMaxLayerVolume = 10;
  const uint8_t kMinLayerInstMidi = 0;
  const uint8_t kMaxLayerInstMidi = 127;
  const uint8_t kMinLayerInstAudio = 0;
  const uint8_t kMaxLayerInstAudio = 127;
  const uint8_t kBeatLibrarySize = 32;

  // Fill.h

  const uint8_t kFillLibrarySize = 4;

  // Timeline.h

  const uint16_t kTimeframeLibrarySize = 2048;
  const uint16_t kMaxTime = 4095;
  const uint8_t kMaxVolume = 3;   // 0 -> passive, 1 -> 30, 2 -> 60, 3 -> 90

  // Button.h

  const uint8_t kDebounceDelay = 50;

  // Player.h

  const uint16_t kTimerPreScaler = 1024;
  const uint32_t kMicroSecondsinOneSecond = 1000000;
  const uint32_t kMicroSecondsinOneMinute = 60000000;

  // Midi.h

  const uint16_t kMidiBaudRate = 31250;
  const uint8_t kMidiInitialChannel = 9;
  const uint8_t kMidiVolume0 = 0;
  const uint8_t kMidiVolume1 = 40;
  const uint8_t kMidiVolume2 = 70;
  const uint8_t kMidiVolume3 = 100;
}
