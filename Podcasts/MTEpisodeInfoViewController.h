/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Podcasts/IMExpandingLabelDelegate.h>
#import <Podcasts/MTEpisodeButtonViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol MTEpisodeInfoViewControllerDelegate;
@class UIView, UIImageView, MTCoreTextLabel, UILabel, UIScrollView, IMExpandingLabel, NSArray, NSDictionary, NSString, UIPopoverController, MTEpisodeButtonsView;

@interface MTEpisodeInfoViewController : UIViewController <IMExpandingLabelDelegate, MTEpisodeButtonViewDelegate, UIViewControllerRestoration> {

	UIView* _headerView;
	UIImageView* _blueDotImage;
	MTCoreTextLabel* _titleLabel;
	UILabel* _addedLabel;
	UILabel* _durationSizeLabel;
	UIView* _headerSeparator;
	UIImageView* _imageView;
	UIScrollView* _scrollView;
	IMExpandingLabel* _descriptionLabel;
	NSArray* _bottomButtons;
	BOOL _showMarked;
	BOOL _expandDescription;
	NSDictionary* _episodeMetadata;
	NSString* _feedTitle;
	id<MTEpisodeInfoViewControllerDelegate> _delegate;
	UIPopoverController* _presentingPopover;
	unsigned long long _sectionType;
	MTEpisodeButtonsView* _episodeButtons;

}

@property (nonatomic,copy) NSDictionary * episodeMetadata;                                         //@synthesize episodeMetadata=_episodeMetadata - In the implementation block
@property (nonatomic,copy) NSString * feedTitle;                                                   //@synthesize feedTitle=_feedTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MTEpisodeInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIPopoverController * presentingPopover;                       //@synthesize presentingPopover=_presentingPopover - In the implementation block
@property (assign,nonatomic) BOOL showMarked;                                                      //@synthesize showMarked=_showMarked - In the implementation block
@property (assign,nonatomic) BOOL expandDescription;                                               //@synthesize expandDescription=_expandDescription - In the implementation block
@property (assign,nonatomic) unsigned long long sectionType;                                       //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,retain) MTEpisodeButtonsView * episodeButtons;                                //@synthesize episodeButtons=_episodeButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfLinesForDescription;
+(id)addedDateFormatter;
+(id)newInfoLabel;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)didBeginDownload:(id)arg1 ;
-(void)didToggleWatchState:(BOOL)arg1 ;
-(void)playEpisodeUuid:(id)arg1 ;
-(void)setEpisodeButtons:(MTEpisodeButtonsView *)arg1 ;
-(MTEpisodeButtonsView *)episodeButtons;
-(UIPopoverController *)presentingPopover;
-(void)setPresentingPopover:(UIPopoverController *)arg1 ;
-(void)reloadEpisodeMetatdata;
-(void)setEpisodeMetadata:(NSDictionary *)arg1 ;
-(void)setShowMarked:(BOOL)arg1 ;
-(void)setFeedTitle:(NSString *)arg1 ;
-(void)setExpandDescription:(BOOL)arg1 ;
-(NSDictionary *)episodeMetadata;
-(void)expandingLabelShouldExpand:(id)arg1 ;
-(double)totalHeight;
-(NSString *)feedTitle;
-(BOOL)showMarked;
-(BOOL)expandDescription;
-(void)_updateFonts;
-(unsigned long long)sectionType;
-(void)setSectionType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTEpisodeInfoViewControllerDelegate>)arg1 ;
-(id<MTEpisodeInfoViewControllerDelegate>)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)update;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

