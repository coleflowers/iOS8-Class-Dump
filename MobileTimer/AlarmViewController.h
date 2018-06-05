/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/PagingLandscapeCollectionViewController.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/StateManagement.h>

@class Alarm, NSString;

@interface AlarmViewController : PagingLandscapeCollectionViewController <AlarmDelegate, AlarmActiveDelegate, EditAlarmViewControllerDelegate, StateManagement> {

	BOOL _viewVisible;
	Alarm* _alarmToEdit;
	BOOL _didScrollToCurrentTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeChangedForAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)pagingCollectionViewDidLoad;
-(void)saveScrollPoint;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)showEditViewForRow:(long long)arg1 ;
-(void)didEditAlarm:(id)arg1 ;
-(id)noItemsText;
-(float)itemsTableRowHeight;
-(id)addViewController;
-(void)saveState;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)defaultPNGName;
-(long long)numberOfItems;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
@end
