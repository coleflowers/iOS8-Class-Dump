/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>
#import <Videos/MCProfileConnectionObserver.h>

@class MPUNotificationObserver, NSString, VideosQueryDataSource;

@interface VideosShortVideosTableViewController : MPUTableViewController <MCProfileConnectionObserver> {

	MPUNotificationObserver* _deletionRestrictionObserver;
	MPUNotificationObserver* _enterBackgroundObserver;
	NSString* _storeAction;

}

@property (nonatomic,readonly) VideosQueryDataSource * queryDataSource; 
@property (nonatomic,readonly) BOOL canBrowseStore; 
@property (nonatomic,copy) NSString * storeAction;                                   //@synthesize storeAction=_storeAction - In the implementation block
@property (nonatomic,readonly) BOOL canEditItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesCellConfigurations;
-(void)showDetailViewForIndexPath:(id)arg1 ;
-(BOOL)canEditItems;
-(BOOL)canBrowseStore;
-(void)_storeButtonAction:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)storeAction;
-(void)setStoreAction:(NSString *)arg1 ;
-(void)_updateNavigationBar;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dataSourceDidInvalidate;
-(id)reuseIdentifierForCellAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)_toggleEditAction:(id)arg1 ;
@end

