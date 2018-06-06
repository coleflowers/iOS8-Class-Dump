/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTLibraryViewController.h>
#import <Podcasts/MTPodcastInfoViewControllerDelegate.h>
#import <Podcasts/MTDetailHeaderDelegate.h>
#import <Podcasts/MTDetailListControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol MTDetailViewControllerDelegate;
@class UIImage, UIBarButtonItem, MTButtonBar, UIView, NSString, MTDetailHeaderView, MTDetailListController, UIPopoverController;

@interface MTDetailViewController : MTLibraryViewController <MTPodcastInfoViewControllerDelegate, MTDetailHeaderDelegate, MTDetailListControllerDelegate, UIPopoverControllerDelegate> {

	UIImage* _image;
	UIBarButtonItem* _doneButtonItem;
	MTButtonBar* _buttonBar;
	UIView* _behindNavView;
	BOOL _headerHidden;
	BOOL _forcePhoneStyle;
	NSString* _podcastUuid;
	id<MTDetailViewControllerDelegate> _delegate;
	MTDetailHeaderView* _headerView;
	MTDetailListController* _detailListViewController;
	UIImage* _podcastImage;
	UIView* _headerSeparatorView;
	UIPopoverController* _detailsPopover;

}

@property (nonatomic,copy) NSString * podcastUuid;                                            //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (assign,nonatomic) BOOL headerHidden;                                               //@synthesize headerHidden=_headerHidden - In the implementation block
@property (assign,nonatomic) BOOL forcePhoneStyle;                                            //@synthesize forcePhoneStyle=_forcePhoneStyle - In the implementation block
@property (assign,nonatomic,__weak) id<MTDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MTDetailHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) MTDetailListController * detailListViewController;               //@synthesize detailListViewController=_detailListViewController - In the implementation block
@property (nonatomic,retain) UIImage * podcastImage;                                          //@synthesize podcastImage=_podcastImage - In the implementation block
@property (nonatomic,retain) UIView * headerSeparatorView;                                    //@synthesize headerSeparatorView=_headerSeparatorView - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailsPopover;                            //@synthesize detailsPopover=_detailsPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mt_contentScrollViewForSplitViewController;
-(BOOL)usePad;
-(UIImage *)podcastImage;
-(int)detailHeaderMode;
-(id)newListController;
-(BOOL)stealsHeaderBar;
-(void)setHeaderSeparatorView:(UIView *)arg1 ;
-(MTDetailListController *)detailListViewController;
-(UIView *)headerSeparatorView;
-(void)finishEditing:(id)arg1 ;
-(void)setHeaderHidden:(BOOL)arg1 ;
-(NSString *)podcastUuid;
-(BOOL)isPresentedInsideSplitViewController;
-(id)toolbarButtonsOnTop;
-(id)toolbarButtonsOnBottom;
-(BOOL)podcastInfoViewControllerShouldShowDoneButton:(id)arg1 ;
-(BOOL)podcastInfoViewControllerShouldShowToolbar:(id)arg1 ;
-(void)dismissPodcastInfoViewController:(id)arg1 ;
-(void)detailHeaderDisclosureButtonTapped:(id)arg1 ;
-(BOOL)detailHeaderHasDisclosureButton:(id)arg1 ;
-(void)showPodcastDescription:(id)arg1 fromMoreButton:(id)arg2 ;
-(void)detailListController:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)detailListController:(id)arg1 didChangeEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)detailListController:(id)arg1 didTransitionToState:(int)arg2 ;
-(BOOL)showBottomToolbarInsteadOfDetailHeader;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(BOOL)headerHidden;
-(BOOL)forcePhoneStyle;
-(void)setForcePhoneStyle:(BOOL)arg1 ;
-(void)setDetailListViewController:(MTDetailListController *)arg1 ;
-(void)setPodcastImage:(UIImage *)arg1 ;
-(UIPopoverController *)detailsPopover;
-(void)setDetailsPopover:(UIPopoverController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTDetailViewControllerDelegate>)arg1 ;
-(id<MTDetailViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)imageSize;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(MTDetailHeaderView *)headerView;
-(void)setHeaderView:(MTDetailHeaderView *)arg1 ;
-(void)updateHeaderView;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)doneButtonItem;
@end

