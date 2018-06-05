/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EditAlarmViewControllerDelegate;
@class EditAlarmView, Alarm, NSString;

@interface EditAlarmViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<EditAlarmViewControllerDelegate> _delegate;
	EditAlarmView* _editAlarmView;
	BOOL _edited;
	BOOL _editingFinished;
	BOOL _newAlarm;
	Alarm* _alarm;
	long long _editingAlarmSetting;

}

@property (nonatomic,readonly) Alarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic) id<EditAlarmViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)desiredContentSize;
-(void)_doneButtonClicked:(id)arg1 ;
-(void)handleSuspend;
-(void)handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg1 ;
-(void)markAsEdited;
-(void)_snoozeControlChanged:(id)arg1 ;
-(void)startEditingSetting:(long long)arg1 ;
-(id)initWithAlarm:(id)arg1 ;
-(Alarm *)alarm;
-(void)dealloc;
-(void)setDelegate:(id<EditAlarmViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<EditAlarmViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

