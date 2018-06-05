/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigator.h>

@interface MNDriveNavigator : MNNavigator {

	BOOL _exitedVehicle;
	int _vehicleExitConfidence;
	SCD_Struct_RA0 _vehicleExitCoordinate;

}
+(BOOL)matchedToEndOfLeg:(id)arg1 onRoute:(id)arg2 withRouteMatch:(id)arg3 andLocation:(id)arg4 ;
-(id)_newMapMatcher;
-(int)_checkForArrivalState:(id)arg1 ;
-(BOOL)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2 ;
-(void)_updateDetectedMotionAtLocation:(id)arg1 ;
-(Class)_guidanceManagerClass;
-(int)_transportType;
@end
