/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, VideosArtworkContainer, UILabel, MPUNotificationObserver, UIButton, UIImageView, VideosBadge, UIView;

@interface VideosPosterCollectionViewCell : UICollectionViewCell {

	NSLayoutConstraint* _artworkContainmentHeightConstaint;
	NSLayoutConstraint* _subtitleBaselineConstraint;
	BOOL _editing;
	double _artworkAspectRatio;
	VideosArtworkContainer* _artworkViewContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _badgeCount;
	MPUNotificationObserver* _preferredContentSizeDidChangeObserver;
	UIButton* _editingButton;
	UIImageView* _cloudImageView;
	VideosBadge* _badgeView;
	UIView* _highlightView;

}

@property (assign,nonatomic) double artworkAspectRatio;                                                    //@synthesize artworkAspectRatio=_artworkAspectRatio - In the implementation block
@property (nonatomic,retain) VideosArtworkContainer * artworkViewContainer;                                //@synthesize artworkViewContainer=_artworkViewContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long badgeCount;                                                //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL showCloudIcon; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) MPUNotificationObserver * preferredContentSizeDidChangeObserver;              //@synthesize preferredContentSizeDidChangeObserver=_preferredContentSizeDidChangeObserver - In the implementation block
@property (nonatomic,retain) UIButton * editingButton;                                                     //@synthesize editingButton=_editingButton - In the implementation block
@property (nonatomic,retain) UIImageView * cloudImageView;                                                 //@synthesize cloudImageView=_cloudImageView - In the implementation block
@property (nonatomic,retain) VideosBadge * badgeView;                                                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                                       //@synthesize highlightView=_highlightView - In the implementation block
+(double)lineHeightForTitleLabel;
+(double)lineHeightForSubtitleLabel;
+(Class)titleLabelClass;
+(Class)subtitleLabelClass;
-(VideosArtworkContainer *)artworkViewContainer;
-(void)setShowCloudIcon:(BOOL)arg1 ;
-(void)setArtworkAspectRatio:(double)arg1 ;
-(MPUNotificationObserver *)preferredContentSizeDidChangeObserver;
-(void)setPreferredContentSizeDidChangeObserver:(MPUNotificationObserver *)arg1 ;
-(void)_editingButtonAction:(id)arg1 ;
-(BOOL)showCloudIcon;
-(double)artworkAspectRatio;
-(void)setArtworkViewContainer:(VideosArtworkContainer *)arg1 ;
-(UIButton *)editingButton;
-(void)setEditingButton:(UIButton *)arg1 ;
-(UIImageView *)cloudImageView;
-(void)setCloudImageView:(UIImageView *)arg1 ;
-(void)setBadgeView:(VideosBadge *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg1 ;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(VideosBadge *)badgeView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
-(id)artworkView;
@end
