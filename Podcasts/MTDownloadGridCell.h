/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMGridViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MTDownloadGridCellDelegate, MTDownloadGridCellGridViewDelegate;
@class UIScrollView, UIView, UITapGestureRecognizer, UIButton, UIImageView, UILabel, MTItemOfferButton, NSString;

@interface MTDownloadGridCell : IMGridViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UIScrollView* _scrollView;
	UIView* _rightSeparator;
	UIView* _bottomSeparator;
	UIView* _deleteContainer;
	BOOL _showsDeleteButton;
	BOOL _ignoringScroll;
	BOOL _animatingScroll;
	BOOL _updatingAccessory;
	double _revealedWidth;
	UITapGestureRecognizer* _toggleTapGesture;
	UITapGestureRecognizer* _editingTapGesture;
	BOOL _placeholder;
	BOOL _pausable;
	BOOL _otherCellSwiping;
	UIButton* _deleteButton;
	id<MTDownloadGridCellDelegate> _delegate;
	UIImageView* _podcastImageView;
	UILabel* _statusLabel;
	MTItemOfferButton* _downloadButton;
	UILabel* _podcastTitleLabel;
	id<MTDownloadGridCellGridViewDelegate> _gridViewDelegate;
	MTDownloadGridCell* _swipeToDeleteCell;

}

@property (nonatomic,retain) UIButton * deleteButton;                                                     //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic,__weak) id<MTDownloadGridCellDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * podcastImageView;                                              //@synthesize podcastImageView=_podcastImageView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                       //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) MTItemOfferButton * downloadButton;                                          //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) UILabel * podcastTitleLabel;                                                 //@synthesize podcastTitleLabel=_podcastTitleLabel - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isPausable,nonatomic) BOOL pausable;                                             //@synthesize pausable=_pausable - In the implementation block
@property (assign,nonatomic,__weak) id<MTDownloadGridCellGridViewDelegate> gridViewDelegate;              //@synthesize gridViewDelegate=_gridViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) MTDownloadGridCell * swipeToDeleteCell;                               //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
@property (assign,nonatomic) BOOL otherCellSwiping;                                                       //@synthesize otherCellSwiping=_otherCellSwiping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tapped:(id)arg1 ;
-(UIImageView *)podcastImageView;
-(void)setGridViewDelegate:(id<MTDownloadGridCellGridViewDelegate>)arg1 ;
-(void)setOtherCellSwiping:(BOOL)arg1 ;
-(MTItemOfferButton *)downloadButton;
-(UILabel *)podcastTitleLabel;
-(void)updatePauseButton:(BOOL)arg1 ;
-(void)togglePauseState:(id)arg1 ;
-(void)setOpen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateAccessoryAnimated:(BOOL)arg1 ;
-(void)updateButtonFrame;
-(void)enterEditing;
-(void)leaveEditing;
-(CGRect)buttonFrame;
-(void)endScroll:(id)arg1 ;
-(void)changeEditing:(BOOL)arg1 ;
-(void)setPodcastImageView:(UIImageView *)arg1 ;
-(void)setDownloadButton:(MTItemOfferButton *)arg1 ;
-(void)setPodcastTitleLabel:(UILabel *)arg1 ;
-(id<MTDownloadGridCellGridViewDelegate>)gridViewDelegate;
-(BOOL)otherCellSwiping;
-(void)setPausable:(BOOL)arg1 ;
-(BOOL)isPausable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MTDownloadGridCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<MTDownloadGridCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setSwipeToDeleteCell:(MTDownloadGridCell *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(MTDownloadGridCell *)swipeToDeleteCell;
-(void)prepareForReuse;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)delete:(id)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(BOOL)isPlaceholder;
@end

