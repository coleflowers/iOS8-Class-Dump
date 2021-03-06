/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/PHVoicemailListViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobilePhone/PHVoicemailListViewControllerConcrete.h>

@class UIActionSheet, NSString, NSArray;

@interface PHVoicemailBlockedListViewController : PHVoicemailListViewController <UIActionSheetDelegate, PHVoicemailListViewControllerConcrete> {

	UIActionSheet* _deleteAllConfirmationActionSheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * cellDetailDestructiveActionText; 
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) BOOL popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
-(NSString *)cellDetailDestructiveActionText;
-(void)performCellDetailDestructiveActionForVoicemail:(id)arg1 ;
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1 ;
-(NSString *)navigationBarText;
-(BOOL)popOffIfEmpty;
-(NSString *)tableViewDestructiveActionText;
-(void)deleteAllTapped;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(NSString *)folderName;
-(id)initWithNavigationController:(id)arg1 ;
@end

