//
//  AKAutoWahAudioUnit.h
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#ifndef AKAutoWahAudioUnit_h
#define AKAutoWahAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

@interface AKAutoWahAudioUnit : AUAudioUnit
- (void)start;
- (void)stop;
- (BOOL)isPlaying;
@end

#endif /* AKAutoWahAudioUnit_h */