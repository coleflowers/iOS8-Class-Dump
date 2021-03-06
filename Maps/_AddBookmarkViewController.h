/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/BookmarkViewController.h>

@protocol AddBookmarkViewControllerDelegate;
@class UIBarButtonItem, AddBookmarkViewController;

@interface _AddBookmarkViewController : BookmarkViewController {

	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _saveButtonItem;
	id<AddBookmarkViewControllerDelegate> _delegate;
	AddBookmarkViewController* _parentBookmarkController;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                       //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButtonItem;                                         //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (assign,nonatomic,__weak) AddBookmarkViewController * parentBookmarkController;              //@synthesize parentBookmarkController=_parentBookmarkController - In the implementation block
@property (assign,nonatomic,__weak) id<AddBookmarkViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(UIBarButtonItem *)saveButtonItem;
-(void)_cancelAddBookmark:(id)arg1 ;
-(void)_saveAddBookmark:(id)arg1 ;
-(AddBookmarkViewController *)parentBookmarkController;
-(void)setParentBookmarkController:(AddBookmarkViewController *)arg1 ;
-(void)setSaveButtonItem:(UIBarButtonItem *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AddBookmarkViewControllerDelegate>)arg1 ;
-(id)init;
-(id<AddBookmarkViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)textDidChange:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end

