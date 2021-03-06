/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCellDelegate.h>
#import <MobileCal/InboxTableViewGroupController.h>

@protocol InboxTableViewGroupControllerDelegate;
@class CalendarModel, NSMutableArray, NSMutableDictionary, NSString;

@interface InboxNotificationsGroupController : NSObject <CalendarMessageCellDelegate, InboxTableViewGroupController> {

	CalendarModel* _model;
	NSMutableArray* _notificationReferences;
	NSMutableArray* _sharedCalendarInvitationsReplyPending;
	NSMutableDictionary* _pendingComments;
	BOOL _needsRefresh;
	BOOL _visible;
	id<InboxTableViewGroupControllerDelegate> _delegate;

}

@property (__weak) id<InboxTableViewGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL visible;                                                    //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshIfNeeded;
-(void)inboxWillDismiss;
-(void)messageCell:(id)arg1 committedComment:(id)arg2 ;
-(void)performAction:(long long)arg1 forCell:(id)arg2 ;
-(void)_savePendingComments;
-(id)filteredNotificationsFromArray:(id)arg1 ;
-(id)eventForRow:(long long)arg1 ;
-(void)_saveStatus:(int)arg1 forEventInvitationNotification:(id)arg2 ;
-(id)eventStoreForCell:(id)arg1 ;
-(id)initWithModel:(id)arg1 delegate:(id)arg2 ;
-(BOOL)hasRows;
-(void)rowSelected:(long long)arg1 ;
-(id)noContentStringForInboxTableView:(id)arg1 ;
-(id)_eventForIndexPath:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
-(BOOL)canSelectRow:(long long)arg1 ;
-(double)estimatedHeightForRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(id)titleForHeader;
-(void)dealloc;
-(void)setDelegate:(id<InboxTableViewGroupControllerDelegate>)arg1 ;
-(id<InboxTableViewGroupControllerDelegate>)delegate;
-(long long)numberOfRows;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)visible;
-(id)tableView;
-(void)_localeChanged:(id)arg1 ;
@end

