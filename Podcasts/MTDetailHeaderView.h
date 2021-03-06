/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/IMExpandingLabelDelegate.h>

@protocol MTDetailHeaderDelegate;
@class MTAllPropertyChangesQueryObserver, NSString, UIImageView, UILabel, MTButtonBar, IMExpandingLabel, UIView, UIButton;

@interface MTDetailHeaderView : UIView <IMExpandingLabelDelegate> {

	MTAllPropertyChangesQueryObserver* _queryObserver;
	NSString* _podcastUuid;
	NSString* _derivedPropertyCallbackToken;
	BOOL _forcePhoneStyle;
	BOOL _bottomToolbarStolen;
	BOOL _topToolbarStolen;
	BOOL _disabled;
	int _headerMode;
	double _rightMargin;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _providerLabel;
	UILabel* _episodesLabel;
	UILabel* _updatedLabel;
	id<MTDetailHeaderDelegate> _delegate;
	MTButtonBar* _topToolbar;
	MTButtonBar* _bottomToolbar;
	IMExpandingLabel* _descriptionLabel;
	UIView* _darkView;
	UIView* _topToolbarSeperator;
	UIView* _bottomToolbarSeperator;
	UIView* _headerSeperator;
	UIImageView* _chevronImage;
	UIButton* _disclosureButton;
	MTAllPropertyChangesQueryObserver* _episodeCountObserver;

}

@property (assign,nonatomic) double rightMargin;                                                    //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) BOOL forcePhoneStyle;                                                  //@synthesize forcePhoneStyle=_forcePhoneStyle - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * providerLabel;                                               //@synthesize providerLabel=_providerLabel - In the implementation block
@property (nonatomic,retain) UILabel * episodesLabel;                                               //@synthesize episodesLabel=_episodesLabel - In the implementation block
@property (nonatomic,retain) UILabel * updatedLabel;                                                //@synthesize updatedLabel=_updatedLabel - In the implementation block
@property (assign,nonatomic,__weak) id<MTDetailHeaderDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int headerMode;                                                        //@synthesize headerMode=_headerMode - In the implementation block
@property (assign,nonatomic) BOOL bottomToolbarStolen;                                              //@synthesize bottomToolbarStolen=_bottomToolbarStolen - In the implementation block
@property (assign,nonatomic) BOOL topToolbarStolen;                                                 //@synthesize topToolbarStolen=_topToolbarStolen - In the implementation block
@property (nonatomic,readonly) MTButtonBar * topToolbar;                                            //@synthesize topToolbar=_topToolbar - In the implementation block
@property (nonatomic,readonly) MTButtonBar * bottomToolbar;                                         //@synthesize bottomToolbar=_bottomToolbar - In the implementation block
@property (nonatomic,readonly) IMExpandingLabel * descriptionLabel;                                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * darkView;                                                     //@synthesize darkView=_darkView - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIView * topToolbarSeperator;                                          //@synthesize topToolbarSeperator=_topToolbarSeperator - In the implementation block
@property (nonatomic,retain) UIView * bottomToolbarSeperator;                                       //@synthesize bottomToolbarSeperator=_bottomToolbarSeperator - In the implementation block
@property (nonatomic,retain) UIView * headerSeperator;                                              //@synthesize headerSeperator=_headerSeperator - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImage;                                            //@synthesize chevronImage=_chevronImage - In the implementation block
@property (nonatomic,retain) UIButton * disclosureButton;                                           //@synthesize disclosureButton=_disclosureButton - In the implementation block
@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * episodeCountObserver;              //@synthesize episodeCountObserver=_episodeCountObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)usePad;
-(id)initWithImage:(id)arg1 podcastUuid:(id)arg2 frame:(CGRect)arg3 forcePhoneStyle:(BOOL)arg4 ;
-(void)setHeaderMode:(int)arg1 ;
-(UILabel *)updatedLabel;
-(BOOL)topToolbarStolen;
-(MTButtonBar *)topToolbar;
-(void)setTopToolbarStolen:(BOOL)arg1 ;
-(BOOL)forcePhoneStyle;
-(void)setForcePhoneStyle:(BOOL)arg1 ;
-(void)setMoreButtonFont:(id)arg1 ;
-(void)expandingLabelShouldExpand:(id)arg1 ;
-(id)creatSeperatorView;
-(UIView *)topToolbarSeperator;
-(void)showOrHideToolbar:(id)arg1 withSeperator:(id)arg2 ;
-(MTButtonBar *)bottomToolbar;
-(UIView *)bottomToolbarSeperator;
-(UILabel *)providerLabel;
-(UILabel *)episodesLabel;
-(UIView *)headerSeperator;
-(UIButton *)disclosureButton;
-(int)headerMode;
-(void)setProviderLabel:(UILabel *)arg1 ;
-(void)setUpdatedLabel:(UILabel *)arg1 ;
-(void)setEpisodesLabel:(UILabel *)arg1 ;
-(void)setChevronImage:(UIImageView *)arg1 ;
-(void)setDisclosureButton:(UIButton *)arg1 ;
-(void)disclosureButtonTapped;
-(id)stringForUpdatedLabel:(id)arg1 ;
-(id)stringForEpisodesLabel;
-(void)setEpisodeCountObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
-(MTAllPropertyChangesQueryObserver *)episodeCountObserver;
-(void)setDarkView:(UIView *)arg1 ;
-(BOOL)bottomToolbarStolen;
-(void)setBottomToolbarStolen:(BOOL)arg1 ;
-(UIView *)darkView;
-(void)setTopToolbarSeperator:(UIView *)arg1 ;
-(void)setBottomToolbarSeperator:(UIView *)arg1 ;
-(void)setHeaderSeperator:(UIView *)arg1 ;
-(void)_updateFonts;
-(void)_setupView;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTDetailHeaderDelegate>)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MTDetailHeaderDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(CGSize)imageSize;
-(void)setRightMargin:(double)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(double)rightMargin;
-(UIImageView *)chevronImage;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)updateToolbarButtons;
-(IMExpandingLabel *)descriptionLabel;
@end

