/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMViewControllerTransition.h>

@class UIImage, UIView, IMBookCover;

@interface IMBookCoverTransition : IMViewControllerTransition {

	UIImage* _coverImage;
	UIImage* _insideCoverImage;
	UIView* _bookShadow;
	UIView* _hiddingView;
	BOOL _showSpirals;
	int _centerBindingPolicy;
	UIView* _shade;
	UIImage* _contentImage;
	IMBookCover* _bookCover;
	double _parentScale;

}

@property (nonatomic,retain) UIImage * coverImage;                    //@synthesize coverImage=_coverImage - In the implementation block
@property (nonatomic,retain) UIImage * insideCoverImage;              //@synthesize insideCoverImage=_insideCoverImage - In the implementation block
@property (nonatomic,retain) UIImage * contentImage;                  //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,retain) UIView * hiddingView;                    //@synthesize hiddingView=_hiddingView - In the implementation block
@property (nonatomic,retain) UIView * bookShadow;                     //@synthesize bookShadow=_bookShadow - In the implementation block
@property (assign,nonatomic) BOOL showSpirals;                        //@synthesize showSpirals=_showSpirals - In the implementation block
@property (assign,nonatomic) int centerBindingPolicy;                 //@synthesize centerBindingPolicy=_centerBindingPolicy - In the implementation block
@property (nonatomic,retain) UIView * shade;                          //@synthesize shade=_shade - In the implementation block
@property (nonatomic,retain) IMBookCover * bookCover;                 //@synthesize bookCover=_bookCover - In the implementation block
@property (assign,nonatomic) double parentScale;                      //@synthesize parentScale=_parentScale - In the implementation block
-(void)setCoverImage:(UIImage *)arg1 ;
-(void)setInsideCoverImage:(UIImage *)arg1 ;
-(void)setContentImage:(UIImage *)arg1 ;
-(void)setHiddingView:(UIView *)arg1 ;
-(void)setBookShadow:(UIView *)arg1 ;
-(void)setShowSpirals:(BOOL)arg1 ;
-(void)setCenterBindingPolicy:(int)arg1 ;
-(void)prepareTransition;
-(void)setParentScale:(double)arg1 ;
-(void)loadShade;
-(UIView *)bookShadow;
-(void)loadBookCover;
-(UIView *)hiddingView;
-(void)removeContentView;
-(void)performShadeTransition;
-(id)animationWithClass:(Class)arg1 keyPath:(id)arg2 ;
-(IMBookCover *)bookCover;
-(double)parentScale;
-(void)cleanupTransition;
-(BOOL)showSpirals;
-(id)spirals;
-(UIImage *)contentImage;
-(id)bookCoverContentImage;
-(UIImage *)coverImage;
-(UIImage *)insideCoverImage;
-(void)setBookCover:(IMBookCover *)arg1 ;
-(void)setupBookCover;
-(CATransform3D)bookCoverTransform;
-(void)performTransition;
-(int)centerBindingPolicy;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)shade;
-(void)setShade:(UIView *)arg1 ;
-(void)transitionDidEnd;
@end

