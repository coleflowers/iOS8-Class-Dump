/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTMasterDetailViewController.h>
#import <Podcasts/MTDetailViewControllerDelegate.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTEmptyContainerViewController.h>

@protocol MTPodcastsMasterDetailViewControllerDelegate;
@class UIScrollView, MTPodcastsSourceListController, MTPodcastDetailViewController, NSString;

@interface MTPodcastsMasterDetailViewController : MTMasterDetailViewController <MTDetailViewControllerDelegate, MTSourceListDelegate, MTEmptyContainerViewController> {

	BOOL _empty;
	id<MTPodcastsMasterDetailViewControllerDelegate> _editDelegate;
	UIScrollView* _emptyView;

}

@property (nonatomic,readonly) MTPodcastsSourceListController * masterViewController; 
@property (nonatomic,readonly) MTPodcastDetailViewController * detailViewController; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                         //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastsMasterDetailViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (nonatomic,retain) UIScrollView * emptyView;                                                          //@synthesize emptyView=_emptyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(void)sourceList:(id)arg1 didChangeEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)newMasterViewController;
-(id)newDetailViewController;
-(void)detailViewController:(id)arg1 didChangeEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)emptyContainerView;
-(UIScrollView *)emptyView;
-(void)setEmptyView:(UIScrollView *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(id<MTPodcastsMasterDetailViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id<MTPodcastsMasterDetailViewControllerDelegate>)arg1 ;
-(BOOL)isEmpty;
-(void)viewDidLoad;
@end

