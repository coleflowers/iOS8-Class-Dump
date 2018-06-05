/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction {

	SBAlert* _activatingAlert;
	SBAlert* _deactivatingAlert;
	BOOL _activation;

}
-(id)initActivationWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)initDeactivationWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)_initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 activatingAlert:(id)arg3 deactivatingAlert:(id)arg4 activation:(BOOL)arg5 ;
-(void)dealloc;
-(id)debugDescription;
-(void)_begin;
@end

