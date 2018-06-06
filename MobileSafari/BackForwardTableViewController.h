/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:07 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>

@protocol BackForwardTableViewControllerDelegate;
@class NSArray;

@interface BackForwardTableViewController : PopoverSizingTableViewController {

	BOOL _reversesListOrder;
	id<BackForwardTableViewControllerDelegate> _delegate;
	NSArray* _backForwardList;

}

@property (assign,nonatomic,__weak) id<BackForwardTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * backForwardList;                                                 //@synthesize backForwardList=_backForwardList - In the implementation block
@property (assign,nonatomic) BOOL reversesListOrder;                                                  //@synthesize reversesListOrder=_reversesListOrder - In the implementation block
-(void)setBackForwardList:(NSArray *)arg1 ;
-(BOOL)reversesListOrder;
-(void)setReversesListOrder:(BOOL)arg1 ;
-(void)setDelegate:(id<BackForwardTableViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<BackForwardTableViewControllerDelegate>)delegate;
-(void)loadView;
-(NSArray *)backForwardList;
-(long long)indexForIndexPath:(id)arg1 ;
@end
