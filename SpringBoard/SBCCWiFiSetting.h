/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@interface SBCCWiFiSetting : SBCCSettingModule
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)_updateWifiNotification:(id)arg1 ;
-(void)_tearDown;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
@end

