/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMViewControllerTransition.h>

@class UIImage, IMZoomLayer, UIView;

@interface IMZoomTransition : IMViewControllerTransition {

	UIImage* _coverImage;
	double _insideViewBeginScaleFactor;
	UIImage* _contentImage;
	IMZoomLayer* _bookCover;
	UIView* _contentSnapshotView;

}

@property (nonatomic,retain) UIImage * coverImage;                           //@synthesize coverImage=_coverImage - In the implementation block
@property (assign,nonatomic) double insideViewBeginScaleFactor;              //@synthesize insideViewBeginScaleFactor=_insideViewBeginScaleFactor - In the implementation block
@property (nonatomic,retain) UIImage * contentImage;                         //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,retain) IMZoomLayer * bookCover;                        //@synthesize bookCover=_bookCover - In the implementation block
@property (nonatomic,retain) UIView * contentSnapshotView;                   //@synthesize contentSnapshotView=_contentSnapshotView - In the implementation block
-(void)setCoverImage:(UIImage *)arg1 ;
-(void)setContentImage:(UIImage *)arg1 ;
-(void)prepareTransition;
-(void)loadBookCover;
-(void)removeContentView;
-(id)animationWithClass:(Class)arg1 keyPath:(id)arg2 ;
-(IMZoomLayer *)bookCover;
-(void)cleanupTransition;
-(UIImage *)contentImage;
-(UIImage *)coverImage;
-(void)setBookCover:(IMZoomLayer *)arg1 ;
-(void)setupBookCover;
-(CATransform3D)bookCoverTransform;
-(void)performTransition;
-(void)setInsideViewBeginScaleFactor:(double)arg1 ;
-(void)setContentSnapshotView:(UIView *)arg1 ;
-(UIView *)contentSnapshotView;
-(double)insideViewBeginScaleFactor;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)snapshotView;
-(void)transitionDidEnd;
@end

