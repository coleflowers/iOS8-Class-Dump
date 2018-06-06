/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileMail/MailboxUtilsClient.h>

@class MFMailboxUid, MailAccount, NSArray;

@interface MailboxListViewControllerBase : UITableViewController <MailboxUtilsClient> {

	MFMailboxUid* _selectedMailbox;
	id _mailboxSelectionTarget;
	MailAccount* _account;
	NSArray* _sortedMailboxes;
	unsigned _loadingMailboxes : 1;
	BOOL _preventNextScrollbarFlash;
	BOOL _promoteFavorites;
	BOOL _interactiveTransitionWasCancelled;

}

@property (nonatomic,retain) MailAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MFMailboxUid * selectedMailbox;              //@synthesize selectedMailbox=_selectedMailbox - In the implementation block
+(long long)tableViewStyle;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(void)setSelectedMailbox:(MFMailboxUid *)arg1 ;
-(void)setViewingContext:(id)arg1 ;
-(void)_loadMailboxes;
-(void)mailboxListingChanged:(id)arg1 ;
-(double)_defaultRowHeight;
-(void)viewWillReappear:(BOOL)arg1 ;
-(void)viewWillFirstAppear:(BOOL)arg1 ;
-(id)indexPathForSelection;
-(void)setSelectedMailbox:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedMailbox:(id)arg1 forceChange:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)didSelectMailbox:(id)arg1 changed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(void)_loadMailboxes:(BOOL)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(void)_loadExtraMailboxes;
-(void)_loadMailboxesForcibly:(id)arg1 ;
-(void)_loadMailboxesAfterMailboxListingChanged;
-(void)_popToMailboxListViewController;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)preventNextScrollbarFlash;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(MFMailboxUid *)selectedMailbox;
@end

