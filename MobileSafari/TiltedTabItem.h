/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class UIImage, UIImageView, NSString, NSUUID, TiltedTabView, TabThumbnailView, GradientView, UIView, UIColor, UIButton;

@interface TiltedTabItem : NSObject {

	UIImage* _snapshot;
	UIImageView* _snapshotView;
	BOOL _closeButtonUsesOutlineStyle;
	BOOL _contentViewNeedsRemoval;
	BOOL _reordering;
	BOOL _closing;
	BOOL _finishedClosing;
	NSString* _title;
	NSUUID* _snapshotIdentifier;
	TiltedTabView* _tiltedTabView;
	TabThumbnailView* _contentView;
	double _topBackdropHeight;
	GradientView* _contentShadowView;
	UIView* _contentClipperView;
	UIView* _borrowedContentView;
	double _borrowedContentScale;
	UIImage* _blankSnapshot;
	UIImage* _snapshotWithInvalidBackdrop;
	long long _transition;
	unsigned long long _indexForLayout;
	unsigned long long _countForLayout;
	double _verticalScrollAdjustment;
	CGRect _closeButtonHitRect;

}

@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor; 
@property (nonatomic,copy) NSUUID * snapshotIdentifier;                                  //@synthesize snapshotIdentifier=_snapshotIdentifier - In the implementation block
@property (nonatomic,readonly) UIImage * cachedContentImage; 
@property (assign,nonatomic) TiltedTabView * tiltedTabView;                              //@synthesize tiltedTabView=_tiltedTabView - In the implementation block
@property (nonatomic,readonly) TabThumbnailView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double topBackdropHeight;                                   //@synthesize topBackdropHeight=_topBackdropHeight - In the implementation block
@property (nonatomic,readonly) GradientView * contentShadowView;                         //@synthesize contentShadowView=_contentShadowView - In the implementation block
@property (nonatomic,readonly) UIView * contentClipperView;                              //@synthesize contentClipperView=_contentClipperView - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton; 
@property (assign,nonatomic) CGRect closeButtonHitRect;                                  //@synthesize closeButtonHitRect=_closeButtonHitRect - In the implementation block
@property (assign,nonatomic) BOOL closeButtonUsesOutlineStyle;                           //@synthesize closeButtonUsesOutlineStyle=_closeButtonUsesOutlineStyle - In the implementation block
@property (nonatomic,retain) UIView * borrowedContentView;                               //@synthesize borrowedContentView=_borrowedContentView - In the implementation block
@property (assign,nonatomic) double borrowedContentScale;                                //@synthesize borrowedContentScale=_borrowedContentScale - In the implementation block
@property (nonatomic,retain) UIImage * snapshot;                                         //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) UIImage * blankSnapshot;                                    //@synthesize blankSnapshot=_blankSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * snapshotWithInvalidBackdrop;                      //@synthesize snapshotWithInvalidBackdrop=_snapshotWithInvalidBackdrop - In the implementation block
@property (assign,nonatomic) BOOL contentViewNeedsRemoval;                               //@synthesize contentViewNeedsRemoval=_contentViewNeedsRemoval - In the implementation block
@property (assign,getter=isReordering,nonatomic) BOOL reordering;                        //@synthesize reordering=_reordering - In the implementation block
@property (assign,getter=isClosing,nonatomic) BOOL closing;                              //@synthesize closing=_closing - In the implementation block
@property (assign,getter=isFinishedClosing,nonatomic) BOOL finishedClosing;              //@synthesize finishedClosing=_finishedClosing - In the implementation block
@property (assign,nonatomic) long long transition;                                       //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) unsigned long long indexForLayout;                          //@synthesize indexForLayout=_indexForLayout - In the implementation block
@property (assign,nonatomic) unsigned long long countForLayout;                          //@synthesize countForLayout=_countForLayout - In the implementation block
@property (assign,nonatomic) double verticalScrollAdjustment;                            //@synthesize verticalScrollAdjustment=_verticalScrollAdjustment - In the implementation block
+(id)_newContentShadowView;
+(id)titleFont;
-(TiltedTabView *)tiltedTabView;
-(NSUUID *)snapshotIdentifier;
-(void)setSnapshotIdentifier:(NSUUID *)arg1 ;
-(void)invalidateSnapshot;
-(UIImage *)cachedContentImage;
-(CGRect)contentClipperBounds;
-(void)_updateCloseButtonImage;
-(CGRect)clippedContentFrame;
-(id)_snapshotToShow;
-(void)setSnapshot:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSnapshotViewAnimated:(BOOL)arg1 ;
-(void)_updateBorrowedContentFrame;
-(void)_updateTitleLayout;
-(void)updateClipperView;
-(void)setBlankSnapshot:(UIImage *)arg1 ;
-(void)setBorrowedContentScale:(double)arg1 ;
-(void)setBorrowedContentView:(UIView *)arg1 ;
-(void)setCloseButtonUsesOutlineStyle:(BOOL)arg1 ;
-(void)setTiltedTabView:(TiltedTabView *)arg1 ;
-(double)topBackdropHeight;
-(void)setTopBackdropHeight:(double)arg1 ;
-(GradientView *)contentShadowView;
-(UIView *)contentClipperView;
-(CGRect)closeButtonHitRect;
-(void)setCloseButtonHitRect:(CGRect)arg1 ;
-(BOOL)closeButtonUsesOutlineStyle;
-(UIView *)borrowedContentView;
-(double)borrowedContentScale;
-(UIImage *)blankSnapshot;
-(UIImage *)snapshotWithInvalidBackdrop;
-(void)setSnapshotWithInvalidBackdrop:(UIImage *)arg1 ;
-(BOOL)contentViewNeedsRemoval;
-(void)setContentViewNeedsRemoval:(BOOL)arg1 ;
-(void)setReordering:(BOOL)arg1 ;
-(BOOL)isClosing;
-(void)setClosing:(BOOL)arg1 ;
-(BOOL)isFinishedClosing;
-(void)setFinishedClosing:(BOOL)arg1 ;
-(unsigned long long)indexForLayout;
-(void)setIndexForLayout:(unsigned long long)arg1 ;
-(unsigned long long)countForLayout;
-(void)setCountForLayout:(unsigned long long)arg1 ;
-(double)verticalScrollAdjustment;
-(void)setVerticalScrollAdjustment:(double)arg1 ;
-(BOOL)isReordering;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(TabThumbnailView *)contentView;
-(UIImage *)snapshot;
-(void)setTransition:(long long)arg1 ;
-(long long)transition;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setSnapshot:(UIImage *)arg1 ;
-(UIButton *)closeButton;
@end

