/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAlertToAppWorkspaceTransaction.h>

@class SBAlert, SBApplication;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {

	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	SBApplication* _toApplication;

}
-(void)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_shouldDisallowSuspension;
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 alert:(id)arg3 toApplication:(id)arg4 ;
-(void)_activateAlert;
-(void)_beginAnimation;
-(void)_alertDidDeactivate;
-(void)dealloc;
-(id)debugDescription;
@end
