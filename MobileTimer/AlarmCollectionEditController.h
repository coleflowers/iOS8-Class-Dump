/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>

@protocol EditAlarmViewControllerDelegate;
@class EditAlarmViewController, NSString;

@interface AlarmCollectionEditController : UITableViewController <EditAlarmViewControllerDelegate> {

	EditAlarmViewController* _editController;
	id<EditAlarmViewControllerDelegate> _collectionDelegate;

}

@property (nonatomic,readonly) EditAlarmViewController * editController;                          //@synthesize editController=_editController - In the implementation block
@property (assign,nonatomic) id<EditAlarmViewControllerDelegate> collectionDelegate;              //@synthesize collectionDelegate=_collectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissAddViewController:(id)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(void)setCollectionDelegate:(id<EditAlarmViewControllerDelegate>)arg1 ;
-(EditAlarmViewController *)editController;
-(id<EditAlarmViewControllerDelegate>)collectionDelegate;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
@end

