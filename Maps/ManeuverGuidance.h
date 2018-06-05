/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSArray, MKJunction, NSString;

@interface ManeuverGuidance : NSObject {

	BOOL _willNotify;
	NSHashTable* _observers;
	int _maneuver;
	int _drivingSide;
	int _shieldType;
	double _distance;
	NSArray* _instructionsAlternatives;
	MKJunction* _junction;
	NSString* _shieldText;

}

@property (assign,nonatomic) double distance;                               //@synthesize distance=_distance - In the implementation block
@property (nonatomic,copy) NSArray * instructionsAlternatives;              //@synthesize instructionsAlternatives=_instructionsAlternatives - In the implementation block
@property (assign,nonatomic) int maneuver;                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,retain) MKJunction * junction;                         //@synthesize junction=_junction - In the implementation block
@property (assign,nonatomic) int drivingSide;                               //@synthesize drivingSide=_drivingSide - In the implementation block
@property (assign,nonatomic) int shieldType;                                //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,copy) NSString * shieldText;                           //@synthesize shieldText=_shieldText - In the implementation block
+(id)updatedGuidanceWithPreviousGuidance:(id)arg1 distance:(double)arg2 instructions:(id)arg3 alternatives:(id)arg4 maneuver:(int)arg5 junction:(id)arg6 drivingSide:(int)arg7 ;
+(id)updatedGuidanceWithPreviousGuidance:(id)arg1 distance:(double)arg2 instructions:(id)arg3 alternatives:(id)arg4 maneuver:(int)arg5 junction:(id)arg6 drivingSide:(int)arg7 shieldType:(int)arg8 shieldText:(id)arg9 ;
-(int)maneuver;
-(void)setManeuver:(int)arg1 ;
-(void)setJunction:(MKJunction *)arg1 ;
-(NSString *)shieldText;
-(void)setInstructionsAlternatives:(NSArray *)arg1 ;
-(NSArray *)instructionsAlternatives;
-(void)setInstructions:(id)arg1 alternatives:(id)arg2 ;
-(void)addGuidanceObserver:(id)arg1 ;
-(MKJunction *)junction;
-(void)setShieldText:(NSString *)arg1 ;
-(void)notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsChangeNotification;
-(BOOL)updateWithDistance:(double)arg1 instructions:(id)arg2 alternatives:(id)arg3 maneuver:(int)arg4 junction:(id)arg5 drivingSide:(int)arg6 ;
-(void)removeGuidanceObserver:(id)arg1 ;
-(id)instructionsStringFittingWidth:(double)arg1 attributes:(id)arg2 ;
-(id)init;
-(void)setDistance:(double)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(double)distance;
-(int)shieldType;
-(int)drivingSide;
-(void)setShieldType:(int)arg1 ;
@end
