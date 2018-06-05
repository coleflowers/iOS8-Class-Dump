/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNLockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	BOOL _userLockedScreenForCurrentManeuver;
	unsigned long long _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned long long _lastSeenAlert;
	BOOL _wasWithinManeuver;
	BOOL _guidanceAffectsDimming;

}

@property (nonatomic,readonly) int dimmingState;                            //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) BOOL guidanceAffectsDimming;                   //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenState;              //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;                  //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                          //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenAlert;              //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) BOOL wasWithinManeuver;                        //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
-(void)setGuidanceAffectsDimming:(BOOL)arg1 ;
-(int)dimmingState;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned long long)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned long long)arg4 ;
-(unsigned long long)lastSeenState;
-(int)lastSeenManeuver;
-(NSArray *)lastSeenInstructions;
-(BOOL)wasWithinManeuver;
-(unsigned long long)lastSeenAlert;
-(void)setWasWithinManeuver:(BOOL)arg1 ;
-(void)setLastSeenState:(unsigned long long)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(void)setLastSeenInstructions:(NSArray *)arg1 ;
-(void)setLastSeenAlert:(unsigned long long)arg1 ;
-(void)userDidLockScreen;
-(BOOL)guidanceAffectsDimming;
-(id)init;
@end
