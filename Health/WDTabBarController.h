/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <Health/MFMailComposeViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MFMailComposeViewController, WDExportManager, NSArray, NSString;

@interface WDTabBarController : UITabBarController <MFMailComposeViewControllerDelegate> {

	NSObject*<OS_dispatch_queue> _exportQueue;
	unsigned long long _backgroundTask;
	MFMailComposeViewController* _mailComposeVC;
	WDExportManager* _exportManager;
	NSArray* _controlsToDisable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithControllerManager:(id)arg1 ;
-(void)verifyExport;
-(void)setControlsToDisableDuringExport:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

