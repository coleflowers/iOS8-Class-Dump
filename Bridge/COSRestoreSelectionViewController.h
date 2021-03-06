/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class COSRestoreHeaderView, NSMutableArray, UIView, NSString;

@interface COSRestoreSelectionViewController : UITableViewController <COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	COSRestoreHeaderView* _headerView;
	NSMutableArray* _restoreInstances;
	UIView* _navBlackoutView;

}

@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) COSRestoreHeaderView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * restoreInstances;                           //@synthesize restoreInstances=_restoreInstances - In the implementation block
@property (nonatomic,retain) UIView * navBlackoutView;                                    //@synthesize navBlackoutView=_navBlackoutView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)controllerAllowsNavigatingBackTo;
-(NSMutableArray *)restoreInstances;
-(void)setRestoreInstances:(NSMutableArray *)arg1 ;
-(UIView *)navBlackoutView;
-(void)setNavBlackoutView:(UIView *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(COSRestoreHeaderView *)headerView;
-(void)setHeaderView:(COSRestoreHeaderView *)arg1 ;
@end

