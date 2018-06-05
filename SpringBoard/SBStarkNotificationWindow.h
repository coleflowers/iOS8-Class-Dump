/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>
#import <SpringBoard/SBStarkNotificationViewControllerDelegate.h>

@class SBStarkScreenFocusController, SBStarkNotificationViewController, NSString;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate> {

	SBStarkScreenFocusController* _focusController;
	BOOL _assertingFocus;
	id _borrowScreenToken;

}

@property (nonatomic,retain) SBStarkScreenFocusController * focusController;                      //@synthesize focusController=_focusController - In the implementation block
@property (nonatomic,retain) SBStarkNotificationViewController * rootViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)setFocusController:(SBStarkScreenFocusController *)arg1 ;
-(void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2 ;
-(void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2 ;
-(SBStarkScreenFocusController *)focusController;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRootViewController:(SBStarkNotificationViewController *)arg1 ;
@end

