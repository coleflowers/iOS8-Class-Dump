/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@protocol BookmarkFavoriteViewCalloutDelegate;
@class SiteIconView, UIView, VibrantLabelView, WebBookmark, UIImage;

@interface BookmarkFavoriteView : UIButton {

	SiteIconView* _iconView;
	UIView* _iconTouchHighlightView;
	VibrantLabelView* _titleLabel;
	BOOL _grabbed;
	BOOL _usesVibrantEffect;
	id<BookmarkFavoriteViewCalloutDelegate> _calloutDelegate;
	WebBookmark* _bookmark;
	long long _iconSize;
	double _maximumLabelHangingIndent;
	double _spaceBetweenIconAndLabelBaseline;

}

@property (assign,nonatomic,__weak) id<BookmarkFavoriteViewCalloutDelegate> calloutDelegate;              //@synthesize calloutDelegate=_calloutDelegate - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                                                      //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,getter=isGrabbed,nonatomic) BOOL grabbed;                                               //@synthesize grabbed=_grabbed - In the implementation block
@property (nonatomic,readonly) UIImage * displayedBookmarkIcon; 
@property (assign,nonatomic) BOOL usesVibrantEffect;                                                      //@synthesize usesVibrantEffect=_usesVibrantEffect - In the implementation block
@property (assign,nonatomic) long long iconSize;                                                          //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double maximumLabelHangingIndent;                                            //@synthesize maximumLabelHangingIndent=_maximumLabelHangingIndent - In the implementation block
@property (assign,nonatomic) double spaceBetweenIconAndLabelBaseline;                                     //@synthesize spaceBetweenIconAndLabelBaseline=_spaceBetweenIconAndLabelBaseline - In the implementation block
+(CGSize)sizeForBookmarkFavoritesIconSize:(long long)arg1 ;
+(double)firstBaselineOffsetForIconSize:(long long)arg1 ;
+(double)lastBaselineOffsetForIconSize:(long long)arg1 ;
+(id)_adjustedLabelFontForPreferredContentSize;
+(void)_getTitleLabelHeight:(double*)arg1 firstBaselineOffset:(double*)arg2 lastBaselineOffset:(double*)arg3 forIconSize:(long long)arg4 ;
-(void)setBookmark:(id)arg1 icon:(id)arg2 ;
-(void)setUsesVibrantEffect:(BOOL)arg1 ;
-(BOOL)usesVibrantEffect;
-(CGPoint)iconCenter;
-(void)setGrabbed:(BOOL)arg1 ;
-(void)showCallout;
-(UIImage *)displayedBookmarkIcon;
-(void)setCalloutDelegate:(id<BookmarkFavoriteViewCalloutDelegate>)arg1 ;
-(void)setIconSize:(long long)arg1 ;
-(void)setSpaceBetweenIconAndLabelBaseline:(double)arg1 ;
-(void)setMaximumLabelHangingIndent:(double)arg1 ;
-(void)_highlight:(id)arg1 ;
-(void)_unhighlight:(id)arg1 ;
-(void)_deleteFavorite:(id)arg1 ;
-(void)_editFavorite:(id)arg1 ;
-(id<BookmarkFavoriteViewCalloutDelegate>)calloutDelegate;
-(BOOL)isGrabbed;
-(double)maximumLabelHangingIndent;
-(double)spaceBetweenIconAndLabelBaseline;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(WebBookmark *)bookmark;
-(long long)iconSize;
-(void)setBookmark:(WebBookmark *)arg1 ;
@end

