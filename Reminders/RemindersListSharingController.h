/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, EKCalendar, RemindersListAddShareesController, EKSharee, NSArray, NSString;

@interface RemindersListSharingController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	EKCalendar* _calendar;
	BOOL _allowsEditing;
	RemindersListAddShareesController* _addShareesController;
	void* _addressBook;
	EKSharee* _selectedSharee;
	NSArray* _addedSharees;

}

@property (readonly) NSArray * addedSharees;                        //@synthesize addedSharees=_addedSharees - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringForShareeStatus:(int)arg1 ;
-(void*)copyPersonRecordForEmail:(id)arg1 ;
-(id)imageForPersonRecord:(void*)arg1 withFirstName:(id)arg2 lastName:(id)arg3 ;
-(void)stopSharing;
-(NSArray *)addedSharees;
-(void)add;
-(void)cancel;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(id)initWithCalendar:(id)arg1 ;
@end

