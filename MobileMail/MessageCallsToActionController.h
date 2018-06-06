/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileMail/ABUnknownPersonViewControllerDelegate.h>
#import <MobileMail/EKEventEditViewDelegate.h>
#import <MobileMail/EKEventViewDelegate.h>
#import <MobileMail/MFSuggestionHandlingDelegate.h>

@class NSMutableArray, NSArray, MessageCallToAction, NSString;

@interface MessageCallsToActionController : UITableViewController <ABUnknownPersonViewControllerDelegate, EKEventEditViewDelegate, EKEventViewDelegate, MFSuggestionHandlingDelegate> {

	NSMutableArray* _groupTitles;
	NSMutableArray* _groupedCallsToAction;
	CFDictionaryRef _eventsForCallsToAction;
	NSArray* _callsToAction;
	MessageCallToAction* _inProgressAction;

}

@property (nonatomic,copy) NSArray * callsToAction;                               //@synthesize callsToAction=_callsToAction - In the implementation block
@property (nonatomic,retain) MessageCallToAction * inProgressAction;              //@synthesize inProgressAction=_inProgressAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmedAction:(id)arg1 sender:(id)arg2 ;
-(void)ignoredAction:(id)arg1 sender:(id)arg2 ;
-(void)displayMultipleCallsToAction:(id)arg1 sender:(id)arg2 ;
-(NSArray *)callsToAction;
-(void)setCallsToAction:(NSArray *)arg1 ;
-(id)_titleForCategory:(long long)arg1 ;
-(void)recalculateCellGroups;
-(void)setInProgressAction:(MessageCallToAction *)arg1 ;
-(void)presentEventViewForAction:(id)arg1 ;
-(void)presentEventEditViewForAction:(id)arg1 ;
-(void)showActionSheetForCanceledEventAction:(id)arg1 ;
-(void)displayEventSuggestion:(id)arg1 ;
-(void)displayContactSuggestion:(id)arg1 ;
-(id)indexPathForAction:(id)arg1 containingGroup:(id*)arg2 ;
-(MessageCallToAction *)inProgressAction;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(long long)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end
