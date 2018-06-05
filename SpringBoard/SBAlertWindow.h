/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:53 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class SBAlertWindowViewController, NSMapTable;

@interface SBAlertWindow : SBWindow {

	SBAlertWindowViewController* _rootViewController;
	NSMapTable* _alertToDisplayMap;

}
+(Class)safeCategoryTargetClass;
+(double)windowLevel;
+(BOOL)_isSecure;
-(BOOL)_presentedLockscreenUIIsWhitelisted:(id)arg1 uiIdentifierRef:(id*)arg2 ;
-(id)initWithScreen:(id)arg1 rootViewController:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(id)initWithScreen:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 debugName:(id)arg4 scene:(id)arg5 ;
-(void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2 ;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)arg1 ;
-(void)displayAlert:(id)arg1 ;
-(BOOL)deactivateAlert:(id)arg1 ;
-(BOOL)hasActiveAlertsOrDisplays;
-(int)stackedDisplayCount;
-(void)noteInterfaceOrientationChangingTo:(long long)arg1 animated:(BOOL)arg2 withActivatingAlert:(id)arg3 ;
-(void)dealloc;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 attached:(BOOL)arg3 ;
-(BOOL)isOpaque;
@end

