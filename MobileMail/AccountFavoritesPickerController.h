/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MailboxListViewControllerBase.h>
#import <MobileMail/MailboxUtilsClient.h>

@protocol AccountFavoritesPickerControllerDelegate;
@interface AccountFavoritesPickerController : MailboxListViewControllerBase <MailboxUtilsClient> {

	id<AccountFavoritesPickerControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<AccountFavoritesPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(long long)tableViewStyle;
-(void)setDelegate:(id<AccountFavoritesPickerControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<AccountFavoritesPickerControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
@end

