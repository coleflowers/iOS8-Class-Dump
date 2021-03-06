/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBHomeButtonTimingSettings : _UISettings {

	double _tapDuration;
	double _delay;

}

@property (assign,nonatomic) double tapDuration;              //@synthesize tapDuration=_tapDuration - In the implementation block
@property (assign,nonatomic) double delay;                    //@synthesize delay=_delay - In the implementation block
+(id)createWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsControllerModule;
-(double)tapDuration;
-(void)setTapDuration:(double)arg1 ;
-(id)description;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(void)setDefaultValues;
-(id)displayName;
@end

